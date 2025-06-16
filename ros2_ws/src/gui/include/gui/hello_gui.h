#ifndef HELLOGUI_H
#define HELLOGUI_H

#include <QMainWindow>
#include <qtimer.h>
#include <QtMultimedia>
#include <QtMultimediaWidgets>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "std_msgs/msg/string.hpp"
#include "rviz_common/ros_integration/ros_node_abstraction.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"
#include "action_tutorials_interfaces/action/fibonacci.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "rviz_common/ros_integration/ros_node_abstraction.hpp"
#include "rviz_common/render_panel.hpp"

#include "gui_msgs/msg/setting_params.hpp"
#include "gui_msgs/msg/setting_tool.hpp"
#include "gui_msgs/msg/trajectory_setting.hpp"
#include "gui_msgs/srv/setting_params.hpp"
#include "gui_msgs/srv/setting_tool.hpp"
#include "gui_msgs/srv/trajectory_setting.hpp"
#include <std_srvs/srv/trigger.hpp>
#include <std_srvs/srv/empty.hpp>

#include <stdexcept>

#include "gui/rvizpanel.h"

#include "gui/parser.h"
#include "gui/Planning.h" 
#include "gui/ExecutePage.h"

QT_BEGIN_NAMESPACE
namespace Ui {
    class HelloGui;
}
QT_END_NAMESPACE

class HelloGui : public QMainWindow
{
    Q_OBJECT

public:
    explicit HelloGui(QApplication *app,
    rviz_common::ros_integration::RosNodeAbstractionIface::WeakPtr rviz_ros_node,
    QWidget* shared_rviz_widget, 
    std::shared_ptr<RvizPanel> shared_rviz_panel,
    QWidget *parent = nullptr);
    ~HelloGui();
    void closeRviz();
    void openRviz(QWidget* shared_rviz_widget);

public slots:
    void spin_once();
    void testcallback(const rclcpp::Client<gui_msgs::srv::SettingParams>::SharedFuture result);

private slots:

    void on_save_param_clicked();
    void on_save_tool_clicked();
    void on_save_trajectory_clicked();
    void on_click_point_clicked();
    void on_start_btn_clicked();
    void on_moverobot_btn_clicked();
    void on_delete_line_btn_clicked();
    void on_test_service_clicked();



    void on_combo_box0_changed(int index);
    void on_combo_box1_changed(int index);
    void on_combo_box2_changed(int index);

    // void on_preparation_btn_clicked();

    // void on_click_point_clicked();
signals:
    void switchToSecondWindow();
    void switchToExecutePage();

private:
    QApplication * app_;
    Ui::HelloGui *ui;

    QTimer *ros_timer;
    QTimer *count_timer;

    QMediaPlayer *player;

    std::shared_ptr<RvizPanel> shared_rviz_panel_;
    QWidget* rviz_widget = nullptr;

    rviz_common::ros_integration::RosNodeAbstractionIface::WeakPtr node_weak_ptr_;
    rclcpp::Node::SharedPtr node;
    rclcpp::Publisher<gui_msgs::msg::SettingParams>::SharedPtr params_pub_;
    rclcpp::Publisher<gui_msgs::msg::SettingTool>::SharedPtr tool_pub_;
    rclcpp::Publisher<gui_msgs::msg::TrajectorySetting>::SharedPtr trajectory_pub_;

    rclcpp::Service<gui_msgs::srv::SettingParams>::SharedPtr params_control_srv_;
    rclcpp::Service<gui_msgs::srv::SettingTool>::SharedPtr tool_control_srv_;
    rclcpp::Service<gui_msgs::srv::TrajectorySetting>::SharedPtr trajectory_control_srv_;

    // rclcpp::Client<std_srvs::srv::Trigger>::SharedPtr service_client;

    void SettingParamsSrv(const std::shared_ptr<gui_msgs::srv::SettingParams::Request> request,
        std::shared_ptr<gui_msgs::srv::SettingParams::Response> response);
    void SettingToolSrv(const std::shared_ptr<gui_msgs::srv::SettingTool::Request> request,
            std::shared_ptr<gui_msgs::srv::SettingTool::Response> response);
    void TrajectorySettingSrv(const std::shared_ptr<gui_msgs::srv::TrajectorySetting::Request> request,
                std::shared_ptr<gui_msgs::srv::TrajectorySetting::Response> response);

    // bool using_publish_point = false;

    // void publish_point(float x, float y, float z);
    QComboBox* comboBox0;
    QComboBox* comboBox1;
    QComboBox* comboBox2;

    void save_combobox_value_to_txt(const QString& value);
    void load_combobox_value_from_txt();

    InitConfig config;

    Form* second_window_ = nullptr;
    
    rviz_common::Tool* publish_point_tool_ = nullptr;
    rviz_common::Tool* interact_tool_ = nullptr;
    bool using_publish_point = false;



};
#endif // HELLOGUI_H
