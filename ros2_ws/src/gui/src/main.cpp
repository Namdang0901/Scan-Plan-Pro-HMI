#include <QApplication>
#include <QStackedWidget>
#include <thread>

#include "gui/hello_gui.h"
#include "gui/preparation.h"
#include "rclcpp/rclcpp.hpp"
#include "rviz_common/ros_integration/ros_node_abstraction.hpp"
#include <rviz_common/display_group.hpp>

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    QApplication app(argc, argv);

    auto node_shared_ptr = std::make_shared<rviz_common::ros_integration::RosNodeAbstraction>("gui_test");
    auto node_weak_ptr = std::weak_ptr<rviz_common::ros_integration::RosNodeAbstractionIface>(node_shared_ptr);

    // ✅ Setup ROS executor and spin thread
    // auto ros_node = node_shared_ptr->get_raw_node();
    // auto executor = std::make_shared<rclcpp::executors::MultiThreadedExecutor>();
    // // executor->add_node(ros_node);
    // std::thread spin_thread([executor]() {
    //     executor->spin();
    // });

    // GUI setup
    auto shared_rviz_panel = std::make_shared<RvizPanel>(&app);
    QWidget* shared_rviz_widget = shared_rviz_panel->initializeWidget(node_weak_ptr);

    QStackedWidget *stack = new QStackedWidget();

    auto hello_gui = new HelloGui(&app, node_weak_ptr, shared_rviz_widget, shared_rviz_panel);
    auto second_window = new Form(&app, node_weak_ptr, shared_rviz_widget);
    auto execute_page = new FormHau(&app, node_weak_ptr, shared_rviz_widget);

    stack->addWidget(hello_gui);  
    stack->addWidget(second_window);
    stack->addWidget(execute_page);

    QObject::connect(hello_gui, &HelloGui::switchToSecondWindow, stack, [stack]() {
        stack->setCurrentIndex(1);
    });
    QObject::connect(hello_gui, &HelloGui::switchToExecutePage, stack, [stack]() {
        stack->setCurrentIndex(2);
    });

    QObject::connect(second_window, &Form::backToMainWindow, stack, [stack]() {
        stack->setCurrentIndex(0);
    });
    QObject::connect(execute_page, &FormHau::backToMainWindow, stack, [stack]() {
        stack->setCurrentIndex(0);
    });

    int last_window_index = 0;
    rviz_common::Display *robot_model_display_ = nullptr;

    QObject::connect(stack, &QStackedWidget::currentChanged,
        [hello_gui, second_window, execute_page, shared_rviz_widget, shared_rviz_panel,
         &robot_model_display_, &last_window_index](int index) {

        qDebug() << "Current index:" << index;
        auto manager = shared_rviz_panel->getManager();

        if (index == 1) { // Form
            hello_gui->closeRviz();
            second_window->openRviz(shared_rviz_widget);

            if (manager) {
                manager->setFixedFrame("base_link");
                    robot_model_display_ = manager->createDisplay("rviz_default_plugins/RobotModel", "Robot Model", true);
                    robot_model_display_->subProp("Description Topic")->setValue("robot_description");
                    robot_model_display_->subProp("Description Source")->setValue("Topic");
                    robot_model_display_->subProp("Visual Enabled")->setValue(true);
                    robot_model_display_->subProp("Collision Enabled")->setValue(false);
                    robot_model_display_->subProp("Update Interval")->setValue(0.0);
                
            }
        } else if (index == 0) { // HelloGui
            if (last_window_index == 1) {
                second_window->closeRviz();
            } else if (last_window_index == 2) {
                execute_page->closeRviz();
            }

            hello_gui->openRviz(shared_rviz_widget);

            if (manager && robot_model_display_) {
                manager->setFixedFrame("zivid_optical_frame");
                robot_model_display_->subProp("Visual Enabled")->setValue(false);
                robot_model_display_->subProp("Collision Enabled")->setValue(false);
                robot_model_display_->subProp("Update Interval")->setValue(0.0);
            }
        } else if (index == 2) { // FormHau
            if (last_window_index == 0) {
                hello_gui->closeRviz();
            } else if (last_window_index == 1) {
                second_window->closeRviz();
            }

            execute_page->openRviz(shared_rviz_widget);

            if (manager) {
                manager->setFixedFrame("base_link");
                    robot_model_display_ = manager->createDisplay("rviz_default_plugins/RobotModel", "Robot Model", true);
                    robot_model_display_->subProp("Description Topic")->setValue("robot_description");
                    robot_model_display_->subProp("Description Source")->setValue("Topic");
                    robot_model_display_->subProp("Visual Enabled")->setValue(true);
                    robot_model_display_->subProp("Collision Enabled")->setValue(false);
                    robot_model_display_->subProp("Update Interval")->setValue(0.0);
            }
        }

        last_window_index = index;

        manager->startUpdate();
    });

    stack->setWindowTitle("Stacked Window Example");
    stack->resize(1850, 1000);
    stack->show();

    int result = app.exec();

    // ✅ Gracefully stop ROS executor
    // executor->cancel();
    // spin_thread.join();
    // rclcpp::shutdown();

    return result;
}
