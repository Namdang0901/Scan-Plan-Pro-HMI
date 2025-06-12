#include <rclcpp/rclcpp.hpp>
#include <std_srvs/srv/trigger.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <ur16_control_ui/parser.h>
#include <fstream>

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
    if (!load_joint_config(response)) {
      return;
    }

    // Plan and execute
    move_group_->setStartStateToCurrentState();
    move_group_->setPlanningTime(10.0);
    move_group_->setGoalTolerance(0.01);
    move_group_->setJointValueTarget(joint_goal_);

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

  bool load_joint_config(std::shared_ptr<std_srvs::srv::Trigger::Response> &response)
  {
    joint_goal_.clear();

    if (!config.load(config_path_)) {
      RCLCPP_ERROR(node_->get_logger(), "❌ Failed to load config file: %s", config_path_.c_str());
      response->success = false;
      response->message = "Failed to load config file.";
      return false;
    }

    try {
      joint_goal_.push_back(std::stod(config.get("robot_description", "joint1")));
      joint_goal_.push_back(std::stod(config.get("robot_description", "joint2")));
      joint_goal_.push_back(std::stod(config.get("robot_description", "joint3")));
      joint_goal_.push_back(std::stod(config.get("robot_description", "joint4")));
      joint_goal_.push_back(std::stod(config.get("robot_description", "joint5")));
      joint_goal_.push_back(std::stod(config.get("robot_description", "joint6")));

      RCLCPP_INFO(node_->get_logger(), "📍 Joint goal: [%f, %f, %f, %f, %f, %f]",
                  joint_goal_[0], joint_goal_[1], joint_goal_[2],
                  joint_goal_[3], joint_goal_[4], joint_goal_[5]);
    } catch (const std::exception &e) {
      RCLCPP_ERROR(node_->get_logger(), "❌ Error parsing joint config: %s", e.what());
      response->success = false;
      response->message = "Error parsing joint configuration.";
      return false;
    }

    return true;
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
