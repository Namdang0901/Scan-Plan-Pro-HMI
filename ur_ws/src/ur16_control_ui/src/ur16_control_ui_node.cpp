#include <rclcpp/rclcpp.hpp>
#include <std_srvs/srv/trigger.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <ur16_control_ui/parser.h>
#include <fstream>
#include <cmath>

class JointMoveServer
{
public:
  JointMoveServer(const rclcpp::Node::SharedPtr &node)
  : node_(node),
    move_group_(std::make_shared<moveit::planning_interface::MoveGroupInterface>(node_, "ur_manipulator"))
  {
    // Declare and get config path parameter
    node_->declare_parameter<std::string>("joint_config_path", "/home/hoapham/ros2_ws/config/joint_state.conf");
    node_->get_parameter("joint_config_path", config_path_);

    // Create service
    srv_ = node_->create_service<std_srvs::srv::Trigger>(
      "move_to_joint_goal",
      std::bind(&JointMoveServer::trigger_callback, this, std::placeholders::_1, std::placeholders::_2)
    );

    RCLCPP_INFO(node_->get_logger(), "✅ JointMoveServer is ready. Waiting for trigger...");
  }

private:
  rclcpp::Node::SharedPtr node_;
  std::shared_ptr<moveit::planning_interface::MoveGroupInterface> move_group_;
  rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr srv_;
  InitConfig config;
  std::string config_path_;
  std::vector<double> joint_goal_;

  void trigger_callback(
    const std::shared_ptr<std_srvs::srv::Trigger::Request> request,
    std::shared_ptr<std_srvs::srv::Trigger::Response> response)
  {
    (void)request;
    RCLCPP_INFO(node_->get_logger(), "⚡ Trigger received. Planning to joint goal...");

    // Load joint config
    joint_goal_.clear();
    config.load(config_path_);
    static const std::vector<std::string> joint_names = {
      "joint1", "joint2", "joint3", "joint4", "joint5", "joint6"
    };
    
    for (const auto &name : joint_names) {
      joint_goal_.push_back((std::stod(config.get("robot_description", name)))/(M_PI/180.0));
    }

    // Plan and execute
    move_group_->setStartStateToCurrentState();
    move_group_->setPlanningTime(10.0);
    move_group_->setGoalTolerance(0.05);
    move_group_->setMaxVelocityScalingFactor(0.1);
    move_group_->setMaxAccelerationScalingFactor(0.1);

    // std::vector<double> target_joint_values = {0.0, -1.57, 0.5, 0.5, 1.57, 0.0};  // Example target
    move_group_->setJointValueTarget(joint_goal_);
    RCLCPP_INFO(node_->get_logger(), "📍 Joint goal: [%f, %f, %f, %f, %f, %f]",
    joint_goal_[0], joint_goal_[1], joint_goal_[2],
    joint_goal_[3], joint_goal_[4], joint_goal_[5]);

    moveit::planning_interface::MoveGroupInterface::Plan plan;
    auto success = move_group_->plan(plan);
    if (success == moveit::core::MoveItErrorCode::SUCCESS) {
      move_group_->asyncExecute(plan);
      response->success = true;
      response->message = "✅ Successfully moved to joint goal.";
    } else {
      response->success = false;
      response->message = "❌ Planning failed with error code: " + std::to_string(success.val);
      RCLCPP_ERROR(node_->get_logger(), "❌ Planning failed. Error code: %d", success.val);
    }

  }

};


int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("ur16_control_ui_node");

  JointMoveServer server(node);

  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
