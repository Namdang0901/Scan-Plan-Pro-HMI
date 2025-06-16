#pragma once

#include <QMainWindow>
#include <rviz_common/render_panel.hpp>
#include <rviz_common/visualization_manager.hpp>
#include <rviz_common/ros_integration/ros_node_abstraction.hpp>
#include "gui/rvizpanel.h"
#include "sensor_msgs/msg/joint_state.hpp"
#include "gui/parser.h"
#include <filesystem>

namespace Ui {
class Form;
}

class Form : public QMainWindow
{
    Q_OBJECT

public:
    explicit Form(QApplication *app,
        rviz_common::ros_integration::RosNodeAbstractionIface::WeakPtr rviz_ros_node,
        QWidget* shared_rviz_widget, 
        QWidget *parent = nullptr);
    ~Form();
    void closeRviz();
    void openRviz(QWidget* shared_rviz_widget);

signals:
    void backToMainWindow();

private slots:

    void on_save_joint_btn_clicked();

private:
    QApplication * app_;
    Ui::Form *ui;
    std::shared_ptr<RvizPanel> rviz_panel;
    QWidget* rviz_widget = nullptr;

    rviz_common::ros_integration::RosNodeAbstractionIface::WeakPtr node_weak_ptr_;
    rclcpp::Node::SharedPtr node;
    void topic_callback(const sensor_msgs::msg::JointState::SharedPtr msg);
    rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_subscription_;
    InitConfig config;
    std::filesystem::file_time_type last_time;
    void checkFileChange();
    double radiansToDegrees(double);
};
