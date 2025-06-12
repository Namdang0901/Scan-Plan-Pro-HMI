#include "add_collision_object/add_collision_object.hpp"

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<AddCollisionNode>();
  node->addCollisionObject();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
