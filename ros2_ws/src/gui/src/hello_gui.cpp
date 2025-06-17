//sudo apt-get install libqt5multimedia5-plugins

#include "gui/hello_gui.h"
#include "./ui_ur16.h"
#include "rclcpp/rclcpp.hpp"
#include "stdio.h"
#include <chrono> // NOLINT
#include "gui/rrjoystick.h"
#include <rviz_common/display_context.hpp>
#include "gui/rvizpanel.h"
#include <fstream>
#include <sstream>


HelloGui::HelloGui(
    QApplication *app,
    rviz_common::ros_integration::RosNodeAbstractionIface::WeakPtr rviz_ros_node,
    QWidget* shared_rviz_widget,
    std::shared_ptr<RvizPanel> shared_rviz_panel,
    QWidget *parent)
    : app_(app), node_weak_ptr_(rviz_ros_node), rviz_widget(shared_rviz_widget), shared_rviz_panel_(shared_rviz_panel), QMainWindow(parent)
    , ui(new Ui::HelloGui)
{
    ui->setupUi(this);

    rviz_widget = shared_rviz_widget;
    ui->rviz_display->setLayout(new QVBoxLayout);
    ui->rviz_display->layout()->addWidget(rviz_widget);

    node = node_weak_ptr_.lock()->get_raw_node();


    // Open file
    ui->groupBox_parameter->setEnabled(false);
    ui->groupBox_tool->setEnabled(false);

    if(!config.load("config/params.conf")) {
        std::cerr << "Fail to load config\n";
    }
    QString cb_line = config.getQString("ComboBox", "comboBox_line");
    QString cb_setting = config.getQString("ComboBox", "comboBox_setting");
    QString cb_tool = config.getQString("ComboBox", "comboBox_tool");
    std::string cb_line_st = config.get("ComboBox", "comboBox_line");
    

    ui->comboBox_setting->setCurrentIndex(cb_setting.toInt());
    ui->comboBox_tool->setCurrentIndex(cb_tool.toInt());
    ui->cb_line_id->setCurrentIndex(cb_line.toInt());

    ui->cb_line_param->setCurrentIndex(config.getQString("LineSetting" + cb_line.toStdString(), "parameters").toInt());
    ui->cb_line_tool->setCurrentIndex(config.getQString("LineSetting" + cb_line.toStdString(), "tool").toInt());

    // Check key and set to UI
    ui->rb_linear_text->setText(config.getQString("Params" + cb_setting.toStdString(), "linear"));
    ui->rb_rotation_text->setText(config.getQString("Params" + cb_setting.toStdString(), "rotation"));
    ui->spindle_speed_text->setText(config.getQString("Params" + cb_setting.toStdString(), "spindle_speed"));

    ui->tool_rpm_text->setText(config.getQString("Tool" + cb_tool.toStdString(), "tool_rpm"));
    ui->feed_rate_text->setText(config.getQString("Tool" + cb_tool.toStdString(), "feed_rate"));
    ui->tool_diameter_text->setText(config.getQString("Tool" + cb_tool.toStdString(), "tool_diameter"));
    ui->tool_length_text->setText(config.getQString("Tool" + cb_tool.toStdString(), "tool_length"));
    ui->tool_pressure_text->setText(config.getQString("Tool" + cb_tool.toStdString(), "tool_pressure"));
    ui->sanding_text->setText(config.getQString("Tool" + cb_tool.toStdString(), "sanding"));
    ui->comboBox_dir->setCurrentIndex(config.getQString("Tool" + cb_tool.toStdString(), "comboBox_dir").toInt());
    ui->comboBox_tooltype->setCurrentIndex(config.getQString("Tool" + cb_tool.toStdString(), "comboBox_tooltype").toInt());
    ui->comboBox_toolgeometry->setCurrentIndex(config.getQString("Tool" + cb_tool.toStdString(), "comboBox_toolgeometry").toInt());


    ui->textBrowser->append("Parameters: ");
    ui->textBrowser->append(QString::fromStdString("robot linear speed: " + config.get("Params" + config.get("LineSetting" + cb_line_st, "parameters"), "linear")));
    ui->textBrowser->append(QString::fromStdString("robot rotation speed: " + config.get("Params" + config.get("LineSetting" + cb_line_st, "parameters"), "rotation")));
    ui->textBrowser->append(QString::fromStdString("spindle_speed: " + config.get("Params" + config.get("LineSetting" + cb_line_st, "parameters"), "spindle_speed")));
    ui->textBrowser->append("Tool: ");
    ui->textBrowser->append(QString::fromStdString("tool_rpm: " + config.get("Tool" + config.get("LineSetting" + cb_line_st, "tool"), "tool_rpm")));
    ui->textBrowser->append(QString::fromStdString("feed_rate: " + config.get("Tool" + config.get("LineSetting" + cb_line_st, "tool"), "feed_rate")));
    ui->textBrowser->append(QString::fromStdString("tool_diameter: " + config.get("Tool" + config.get("LineSetting" + cb_line_st, "tool"), "tool_diameter")));
    ui->textBrowser->append(QString::fromStdString("tool_length: " + config.get("Tool" + config.get("LineSetting" + cb_line_st, "tool"), "tool_length")));
    ui->textBrowser->append(QString::fromStdString("tool_pressure: " + config.get("Tool" + config.get("LineSetting" + cb_line_st, "tool"), "tool_pressure")));
    ui->textBrowser->append(QString::fromStdString("sanding: " + config.get("Tool" + config.get("LineSetting" + cb_line_st, "tool"), "sanding")));

    params_pub_ = node->create_publisher<gui_msgs::msg::SettingParams>("params_pub", 1);
    tool_pub_ = node->create_publisher<gui_msgs::msg::SettingTool>("tool_pub", 1);
    trajectory_pub_ = node->create_publisher<gui_msgs::msg::TrajectorySetting>("trajectory_pub", 1);

    params_control_srv_ = node->create_service<gui_msgs::srv::SettingParams>("gui/setting_params", std::bind(&HelloGui::SettingParamsSrv, this, std::placeholders::_1, std::placeholders::_2));
    tool_control_srv_ = node->create_service<gui_msgs::srv::SettingTool>("gui/setting_tool", std::bind(&HelloGui::SettingToolSrv, this, std::placeholders::_1, std::placeholders::_2));
    trajectory_control_srv_ = node->create_service<gui_msgs::srv::TrajectorySetting>("gui/trajectory_setting", std::bind(&HelloGui::TrajectorySettingSrv, this, std::placeholders::_1, std::placeholders::_2));

    ros_timer = new QTimer(this);
    connect(ros_timer, SIGNAL(timeout()), this, SLOT(spin_once()));
    ros_timer->start(50);

    count_timer = new QTimer(this);

    connect(ui->cb_line_id, SIGNAL(currentIndexChanged(int)), this, SLOT(on_combo_box0_changed(int)));
    connect(ui->comboBox_setting, SIGNAL(currentIndexChanged(int)), this, SLOT(on_combo_box1_changed(int)));
    connect(ui->comboBox_tool, SIGNAL(currentIndexChanged(int)), this, SLOT(on_combo_box2_changed(int)));
    connect(ui->radio_parameter, &QRadioButton::toggled,
        ui->groupBox_parameter, &QGroupBox::setEnabled);
    connect(ui->radio_tool, &QRadioButton::toggled,
        ui->groupBox_tool, &QGroupBox::setEnabled);

        connect(ui->planning_btn, &QPushButton::clicked, this, [this]() {

            emit switchToSecondWindow();
        });

        
    connect(ui->ExecutePage_btn, &QPushButton::clicked, this, [this]() {
        emit switchToExecutePage();
    });

}

HelloGui::~HelloGui()
{
    delete ui;
}

void HelloGui::spin_once()
{
    if (rclcpp::ok()) {
        app_->processEvents();
    } else {
        app_->quit();
    }
}


void HelloGui::on_click_point_clicked()
{
    if (!shared_rviz_panel_ || !node) {
        RCLCPP_ERROR(node->get_logger(), "shared_rviz_panel_ or node is null!");
        return;
    }

    auto tool_manager = shared_rviz_panel_->getToolManager();
    if (!tool_manager) {
        RCLCPP_ERROR(node->get_logger(), "ToolManager is null!");
        return;
    }

    if (!publish_point_tool_) {
        publish_point_tool_ = tool_manager->addTool("rviz_default_plugins/PublishPoint");
    }

    if (!interact_tool_) {
        interact_tool_ = tool_manager->addTool("rviz_default_plugins/Interact");
    }

    if (!using_publish_point) {
        tool_manager->setCurrentTool(publish_point_tool_);
        ui->click_point->setText("Use Interact Tool");
        RCLCPP_INFO(node->get_logger(), "Using Publish Point Tool");
    } else {
        tool_manager->setCurrentTool(interact_tool_);
        ui->click_point->setText("Use Publish Point");
        RCLCPP_INFO(node->get_logger(), "Using Interact Tool");
    }

    using_publish_point = !using_publish_point;
}


void HelloGui::on_save_trajectory_clicked()
{
    std::string section = "LineSetting" + std::to_string(ui->cb_line_id->currentIndex());

    config.set(section,"parameters", std::to_string(ui->cb_line_param->currentIndex()));
    config.set(section,"tool", std::to_string(ui->cb_line_tool->currentIndex()));
    config.save("config/params.conf");
    ui->textBrowser->clear();
    ui->textBrowser->append("Saved trajectory");
    // --- Save to a .txt file ---
    RCLCPP_INFO(node->get_logger(), "Saved param");
}

void HelloGui::on_save_param_clicked()
{
    std::string section = "Params" + std::to_string(ui->comboBox_setting->currentIndex());
    config.set(section,"linear", ui->rb_linear_text->text().toStdString());
    config.set(section,"rotation", ui->rb_rotation_text->text().toStdString());
    config.set(section,"spindle_speed", ui->spindle_speed_text->text().toStdString());
    config.save("config/params.conf");
    // --- Save to a config file ---
    RCLCPP_INFO(node->get_logger(), "Saved param");
}

void HelloGui::on_save_tool_clicked()
{
    auto tool_data = gui_msgs::msg::SettingTool();
    std::string section = "Tool" + std::to_string(ui->comboBox_tool->currentIndex());
    config.set(section,"tool_rpm", ui->tool_rpm_text->text().toStdString());
    config.set(section,"feed_rate", ui->feed_rate_text->text().toStdString());
    config.set(section,"tool_diameter", ui->tool_diameter_text->text().toStdString());
    config.set(section,"tool_length", ui->tool_length_text->text().toStdString());
    config.set(section,"tool_pressure", ui->tool_pressure_text->text().toStdString());
    config.set(section,"sanding", ui->sanding_text->text().toStdString());
    config.set(section,"comboBox_dir", std::to_string(ui->comboBox_dir->currentIndex()));
    config.set(section,"comboBox_tooltype", std::to_string(ui->comboBox_tooltype->currentIndex()));
    config.set(section,"comboBox_toolgeometry", std::to_string(ui->comboBox_toolgeometry->currentIndex()));


    config.save("config/params.conf");

    tool_pub_->publish(tool_data);

    RCLCPP_INFO(node->get_logger(), "Saved tool");
}

void HelloGui::on_combo_box1_changed(int index)
{
    // Use the combo box value when it changes
    std::string selectedValue = std::to_string(ui->comboBox_setting->currentIndex());

    config.set("ComboBox","comboBox_setting", selectedValue);
    ui->rb_linear_text->setText(config.getQString("Params" + selectedValue, "linear"));
    ui->rb_rotation_text->setText(config.getQString("Params" + selectedValue, "rotation"));
    ui->spindle_speed_text->setText(config.getQString("Params" + selectedValue, "spindle_speed"));

    config.save("config/params.conf");
}

void HelloGui::on_combo_box2_changed(int index)
{
    // Use the combo box value when it changes
    std::string selectedValue = std::to_string(ui->comboBox_tool->currentIndex());
    config.set("ComboBox","comboBox_tool", selectedValue);
    ui->tool_rpm_text->setText(config.getQString("Tool" + selectedValue, "tool_rpm"));
    ui->feed_rate_text->setText(config.getQString("Tool" + selectedValue, "feed_rate"));
    ui->tool_diameter_text->setText(config.getQString("Tool" + selectedValue, "tool_diameter"));
    ui->tool_length_text->setText(config.getQString("Tool" + selectedValue, "tool_length"));
    ui->tool_pressure_text->setText(config.getQString("Tool" + selectedValue, "tool_pressure"));
    ui->sanding_text->setText(config.getQString("Tool" + selectedValue, "sanding"));
    ui->comboBox_dir->setCurrentIndex(config.getQString("Tool" + selectedValue, "comboBox_dir").toInt());
    ui->comboBox_tooltype->setCurrentIndex(config.getQString("Tool" + selectedValue, "comboBox_tooltype").toInt());
    ui->comboBox_toolgeometry->setCurrentIndex(config.getQString("Tool" + selectedValue, "comboBox_toolgeometry").toInt());

    // Save to the config file
    config.save("config/params.conf");
}

void HelloGui::on_combo_box0_changed(int index)
{
    // Use the combo box value when it changes
    std::string selectedValue = std::to_string(ui->cb_line_id->currentIndex());
    config.set("ComboBox","comboBox_line", selectedValue);
    std::string line_parameter_name = config.get("LineSetting" + selectedValue, "parameters");
    std::string line_tool_name = config.get("LineSetting" + selectedValue, "tool");

    ui->cb_line_param->setCurrentIndex(config.getQString("LineSetting" + selectedValue, "parameters").toInt());
    ui->cb_line_tool->setCurrentIndex(config.getQString("LineSetting" + selectedValue, "tool").toInt());
    // Save to the config file
    config.save("config/params.conf");
    ui->textBrowser->clear();
    ui->textBrowser->append("Parameters: ");
    ui->textBrowser->append(QString::fromStdString("robot linear speed: " + config.get("Params" + config.get("LineSetting" + selectedValue, "parameters"), "linear")));
    ui->textBrowser->append(QString::fromStdString("robot rotation speed: " + config.get("Params" + config.get("LineSetting" + selectedValue, "parameters"), "rotation")));
    ui->textBrowser->append(QString::fromStdString("spindle_speed: " + config.get("Params" + config.get("LineSetting" + selectedValue, "parameters"), "spindle_speed")));
    ui->textBrowser->append("Tool: ");
    ui->textBrowser->append(QString::fromStdString("tool_rpm: " + config.get("Tool" + config.get("LineSetting" + selectedValue, "tool"), "tool_rpm")));
    ui->textBrowser->append(QString::fromStdString("feed_rate: " + config.get("Tool" + config.get("LineSetting" + selectedValue, "tool"), "feed_rate")));
    ui->textBrowser->append(QString::fromStdString("tool_diameter: " + config.get("Tool" + config.get("LineSetting" + selectedValue, "tool"), "tool_diameter")));
    ui->textBrowser->append(QString::fromStdString("tool_length: " + config.get("Tool" + config.get("LineSetting" + selectedValue, "tool"), "tool_length")));
    ui->textBrowser->append(QString::fromStdString("tool_pressure: " + config.get("Tool" + config.get("LineSetting" + selectedValue, "tool"), "tool_pressure")));
    ui->textBrowser->append(QString::fromStdString("sanding: " + config.get("Tool" + config.get("LineSetting" + selectedValue, "tool"), "sanding")));

}


void HelloGui::SettingParamsSrv(const std::shared_ptr<gui_msgs::srv::SettingParams::Request> request,
    std::shared_ptr<gui_msgs::srv::SettingParams::Response> response)
{
    bool req;
    req = request->req;
    if(req)
    {
        std::string selectedValue = std::to_string(ui->cb_line_param->currentIndex());
        response->linear = stoi(config.get("Params" + selectedValue, "linear"));
        response->rotation = stoi(config.get("Params" + selectedValue, "rotation"));
        response->grinding_speed = stoi(config.get("Params" + selectedValue, "grinding_speed"));
        response->grinding_force = stoi(config.get("Params" + selectedValue, "grinding_force"));
        response->spindle_speed = stoi(config.get("Params" + selectedValue, "spindle_speed"));
    }

}

void HelloGui::on_start_btn_clicked()
{
    auto client = node->create_client<std_srvs::srv::Trigger>("capture");

    if (!client->wait_for_service(std::chrono::seconds(3))) {
        RCLCPP_ERROR(node->get_logger(), "Service 'capture' not available after waiting 3 seconds.");
        return; // Exit the function if service doesn't appear
    }
    RCLCPP_INFO(node->get_logger(), "capture service is available");
    client->async_send_request(std::make_shared<std_srvs::srv::Trigger::Request>());

}

void HelloGui::on_moverobot_btn_clicked()
{
    auto robot_client = node->create_client<std_srvs::srv::Trigger>("move_to_joint_goal");

    if (!robot_client->wait_for_service(std::chrono::seconds(3))) {
        RCLCPP_ERROR(node->get_logger(), "Service 'move_to_joint_goal' not available after waiting 3 seconds.");
        return; // Exit the function if service doesn't appear
    }
    RCLCPP_INFO(node->get_logger(), "move_to_joint_goal service is available");
    robot_client->async_send_request(std::make_shared<std_srvs::srv::Trigger::Request>());

}

void HelloGui::on_delete_line_btn_clicked()
{
    auto line_client = node->create_client<std_srvs::srv::Empty>("reset_trajectory");

    if (!line_client->wait_for_service(std::chrono::seconds(3))) {
        RCLCPP_ERROR(node->get_logger(), "Service 'reset_trajectory' not available after waiting 3 seconds.");
        return;
    }

    RCLCPP_INFO(node->get_logger(), "reset_trajectory service is available");

    auto request = std::make_shared<std_srvs::srv::Empty::Request>();

    line_client->async_send_request(request,
        [this](rclcpp::Client<std_srvs::srv::Empty>::SharedFuture result) {
            RCLCPP_INFO(node->get_logger(), "Received response from reset_trajectory service.");
            // Optional: Add GUI feedback here
        });
    
}

void HelloGui::on_test_service_clicked()
{

    auto client = node->create_client<gui_msgs::srv::SettingParams>("/gui/setting_params");

    if (!client->wait_for_service(std::chrono::seconds(3))) {
        RCLCPP_ERROR(node->get_logger(), "Service '/gui/setting_params' not available after waiting 3 seconds.");
        return;
    }

    RCLCPP_INFO(node->get_logger(), "Service '/gui/setting_params' is available.");

    auto request = std::make_shared<gui_msgs::srv::SettingParams::Request>();
    request->req = true;

    auto result = client->async_send_request(request);


}

void HelloGui::testcallback(const rclcpp::Client<gui_msgs::srv::SettingParams>::SharedFuture result)
{
    auto resp = result.get();
    RCLCPP_INFO(node->get_logger(), "Service response received: %d", resp->linear);
}


void HelloGui::SettingToolSrv(const std::shared_ptr<gui_msgs::srv::SettingTool::Request> request,
        std::shared_ptr<gui_msgs::srv::SettingTool::Response> response)
{
    bool req;
    req = request->req;
    if(req)
    {
        std::string selectedValue = std::to_string(ui->cb_line_tool->currentIndex());
        config.set("ComboBox","comboBox_tool", selectedValue);
        response->tool_rpm = stoi(config.get("Tool" + selectedValue, "tool_rpm"));
        response->feed_rate = stoi(config.get("Tool" + selectedValue, "feed_rate"));
        response->tool_diameter = stoi(config.get("Tool" + selectedValue, "tool_diameter"));
        response->tool_length = stoi(config.get("Tool" + selectedValue, "tool_length"));
        response->tool_pressure = stoi(config.get("Tool" + selectedValue, "tool_pressure"));
        response->sanding = stoi(config.get("Tool" + selectedValue, "sanding"));
        response->dir = stoi(config.get("Tool" + selectedValue, "comboBox_dir"));
        response->tooltype = stoi(config.get("Tool" + selectedValue, "comboBox_tooltype"));
        response->toolgeometry = stoi(config.get("Tool" + selectedValue, "comboBox_toolgeometry"));
    }

}


void HelloGui::TrajectorySettingSrv(const std::shared_ptr<gui_msgs::srv::TrajectorySetting::Request> request,
            std::shared_ptr<gui_msgs::srv::TrajectorySetting::Response> response)
{


}

void HelloGui::closeRviz()
{
    ui->rviz_display->layout()->removeWidget(rviz_widget);
    rviz_widget->setParent(nullptr);  // Detach widget from UI, but do not delete
    // Do NOT delete rviz_widget, it's owned elsewhere
    rviz_widget = nullptr;
}
void HelloGui::openRviz(QWidget* shared_rviz_widget)
{
    rviz_widget = shared_rviz_widget;
    ui->rviz_display->setLayout(new QVBoxLayout);
    ui->rviz_display->layout()->addWidget(rviz_widget);
    rviz_widget->show();

}





