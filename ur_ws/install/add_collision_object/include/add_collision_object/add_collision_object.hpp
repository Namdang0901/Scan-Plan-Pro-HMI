#ifndef ADD_COLLISION_OBJECT_HPP_
#define ADD_COLLISION_OBJECT_HPP_

#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose.hpp>

class AddCollisionNode : public rclcpp::Node {
public:
  explicit AddCollisionNode(const rclcpp::NodeOptions &options = rclcpp::NodeOptions());

  void addCollisionObject();

private:
  geometry_msgs::msg::Pose PoseAt(double x, double y, double z);
};

#endif  // ADD_COLLISION_OBJECT_HPP_
