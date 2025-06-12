#ifndef RVIZ_PREPARATION_H
#define RVIZ_PREPARATION_H

#include <QApplication>
#include <QMainWindow>
#include <QWidget>
#include <QGridLayout>

#include "rclcpp/rclcpp.hpp"
#include "rviz_common/display.hpp"
#include <rviz_common/display_context.hpp>
#include "rviz_common/window_manager_interface.hpp"
#include "rviz_common/ros_integration/ros_node_abstraction.hpp"
#include "visualization_msgs/msg/marker.hpp"
#include "tf2_msgs/msg/tf_message.hpp"
#include "tf2_ros/transform_broadcaster.h"
#include "geometry_msgs/msg/transform_stamped.hpp"
#include <rviz_common/view_manager.hpp>
#include <rviz_common/view_controller.hpp>
#include <OgreVector3.h>
#include <rviz_common/tool_manager.hpp>
#include <rviz_default_plugins/view_controllers/orbit/orbit_view_controller.hpp>

namespace rviz_common
{
class Display;
class RenderPanel;
class VisualizationManager;
}

class RvizPreparation : public QMainWindow, public rviz_common::WindowManagerInterface
{
    Q_OBJECT
public:
RvizPreparation(
    QApplication *app,
    QWidget * parent = 0);

  QWidget * getParentWindow() override;
  rviz_common::PanelDockWidget * addPane(
    const QString & name,
    QWidget * pane,
    Qt::DockWidgetArea area,
    bool floating) override;

  QWidget * initializeWidget(
    rviz_common::ros_integration::RosNodeAbstractionIface::WeakPtr rviz_ros_node);
  void setStatus(const QString & message) override;

  void DisplayGrid();

  void publishCubeMarker();
  void broadcastTransform();
  rviz_common::ToolManager* getToolManager();

private slots:
  void setThickness(int thickness_percent);
  void setCellSize(int cell_size_percent);



private:
  void initializeRViz();

  QApplication * app_;
  QWidget * rviz_widget;
  QVBoxLayout * main_layout;
  rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr marker_pub_;
  std::shared_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;

  rviz_common::RenderPanel * preparation_render_panel_;
  rviz_common::Display * grid_;
  rviz_common::VisualizationManager * preparation_manager_;
  rviz_common::Display * _pointcloud;
  rviz_common::Display * _marker_display;
  rviz_common::Display * robot_model_display_ = nullptr;
  
  rviz_common::ros_integration::RosNodeAbstractionIface::WeakPtr rviz_ros_node_;
};

#endif // RVIZ_PREPARATION_H
