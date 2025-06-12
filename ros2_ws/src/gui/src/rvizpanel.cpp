#include "gui/rvizpanel.h"
#include <QGridLayout>
#include <QLabel>
#include <QSlider>
#include <QTimer>

#include "rclcpp/clock.hpp"
#include "rviz_common/render_panel.hpp"
#include "rviz_common/ros_integration/ros_node_abstraction.hpp"
#include "rviz_common/visualization_manager.hpp"
#include "rviz_rendering/render_window.hpp"

RvizPanel::RvizPanel(
  QApplication * app,
  QWidget * parent)
  : app_(app), QMainWindow(parent)
{
}

QWidget * RvizPanel::initializeWidget(
  rviz_common::ros_integration::RosNodeAbstractionIface::WeakPtr rviz_ros_node
)
{
    rviz_ros_node_ = rviz_ros_node;
    auto node = rviz_ros_node_.lock()->get_raw_node();
    // marker_pub_ = node->create_publisher<visualization_msgs::msg::Marker>("visualization_marker", 10);
    tf_broadcaster_ = std::make_shared<tf2_ros::TransformBroadcaster>(node);

    // Add visualization
    main_layout = new QVBoxLayout;
    rviz_widget = new QWidget();
    main_layout->setSpacing(0);
    main_layout->setMargin(0);

    // Initialize the classes we need from rviz
    initializeRViz();
    main_layout->addWidget(render_panel_);
    rviz_widget->setLayout(main_layout);

    // Display the rviz grid plugin
    DisplayGrid(0);

    return rviz_widget;
}

QWidget * RvizPanel::getParentWindow()
{
  return this;
}

rviz_common::ToolManager* RvizPanel::getToolManager()
{
    return manager_->getToolManager();
}
void RvizPanel::DisplayGrid(int index)
{
        
    manager_->setFixedFrame("zivid_optical_frame");
    _pointcloud = manager_->createDisplay("rviz_default_plugins/PointCloud2", "pointcloud", true);
    if (_pointcloud == NULL) {
        throw std::runtime_error("Error creating pointcloud display");
    }

    _pointcloud->subProp("Topic")->setValue("/points/xyzrgba");
    _pointcloud->subProp("Style")->setValue("Flat Squares");
    _pointcloud->subProp("Size (m)")->setValue("0.0005");
    _pointcloud->subProp("Position Transformer")->setValue("XYZ");
    _pointcloud->subProp("Color Transformer")->setValue("RGB8");


    _marker_display = manager_->createDisplay("rviz_default_plugins/Marker", "Markers", true);
    if (!_marker_display) {
        throw std::runtime_error("Error creating Marker display");
    }
    QTimer::singleShot(200, [this]() {
    _marker_display->subProp("Topic")->setValue("visualization_marker");
    });

    if(index == 1) {
        // RobotModel Display
        robot_model_display_ = manager_->createDisplay("rviz_default_plugins/RobotModel", "Robot Model", true);
        if (!robot_model_display_) {
            throw std::runtime_error("Error creating RobotModel display");
        }
        
        robot_model_display_->subProp("Description Source")->setValue("Topic");

        robot_model_display_->subProp("Visual Enabled")->setValue(true);
        robot_model_display_->subProp("Collision Enabled")->setValue(false);
        robot_model_display_->subProp("Update Interval")->setValue(0.0);  // 0 for continuous
        QTimer::singleShot(200, [this]() {
            robot_model_display_->subProp("Description Topic")->setValue("robot_description");
        });
    }
}

void RvizPanel::initializeRViz()
{
  app_->processEvents();
  render_panel_ = new rviz_common::RenderPanel(rviz_widget);
  app_->processEvents();
  render_panel_->getRenderWindow()->initialize();
  auto clock = rviz_ros_node_.lock()->get_raw_node()->get_clock();
  manager_ = new rviz_common::VisualizationManager(render_panel_, rviz_ros_node_, this, clock);
  render_panel_->initialize(manager_);
  app_->processEvents();
//   manager_->setFixedFrame("zivid_optical_frame");
//   manager_->setFixedFrame("base_link");
  
  manager_->initialize();

  auto tool_manager = manager_->getToolManager();
  rviz_common::Tool* interact_tool = tool_manager->addTool("rviz_default_plugins/Interact");
  tool_manager->setCurrentTool(interact_tool);

  auto view_manager = manager_->getViewManager();
  view_manager->setCurrentViewControllerType("rviz_default_plugins/Orbit");

  rviz_common::ViewController* view_controller = view_manager->getCurrent();
  if (view_controller) {
      // view_controller->subProp("Target Frame")->setValue("3d_frame");
      view_controller->subProp("Focal Shape Size")->setValue(0.1);
      view_controller->subProp("Focal Shape Fixed Size")->setValue(true);
      auto focal_prop = dynamic_cast<rviz_common::properties::VectorProperty *>(
      view_controller->subProp("Focal Point"));
      if (focal_prop) {
        focal_prop->setVector(Ogre::Vector3(0, 0, 0));  
      }
      view_controller->subProp("Near Clip Distance")->setValue(0.1);
      view_controller->subProp("Distance")->setValue(10.0);
      view_controller->subProp("Yaw")->setValue(1.57);
      view_controller->subProp("Pitch")->setValue(-1.57);
  }
  // view_manager->setCurrentViewControllerType("rviz_3d_view_controller/Orbit3D");
  manager_->startUpdate();
}

void RvizPanel::setThickness(int thickness_percent) {
    // Implementation for setting thickness
    if (grid_ != nullptr) {
        grid_->subProp("Line Style")->subProp("Line Width")->setValue(thickness_percent / 100.0f);
    }
}

void RvizPanel::setCellSize(int cell_size_percent) {
    // Implementation for setting cell size
    if (grid_ != nullptr) {
        grid_->subProp("Cell Size")->setValue(cell_size_percent / 10.0f);
    }
}

rviz_common::PanelDockWidget * RvizPanel::addPane(
  const QString & name,
  QWidget * pane,
  Qt::DockWidgetArea area,
  bool floating) {
    // Implementation for adding a pane
    return nullptr;
}

void RvizPanel::setStatus(const QString & message) {
    // Implementation for setting status
}

void RvizPanel::shutdown()
{
    if (manager_) {
        manager_->removeAllDisplays();
        delete manager_;        // Manually delete the raw pointer
        manager_ = nullptr;     // Set to nullptr to avoid dangling pointer
    }

    if (render_panel_) {
        delete render_panel_;   // Manually delete the raw pointer
        render_panel_ = nullptr;
    }
}

rviz_common::VisualizationManager* RvizPanel::getManager()
{
    return manager_;
}

