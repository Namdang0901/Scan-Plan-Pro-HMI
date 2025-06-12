#include "add_collision_object/add_collision_object.hpp"
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>
#include <moveit_msgs/msg/collision_object.hpp>
#include <shape_msgs/msg/solid_primitive.hpp>

AddCollisionNode::AddCollisionNode(const rclcpp::NodeOptions &options)
  : Node("add_collision_object_node", options) {
}

void AddCollisionNode::addCollisionObject() {
  moveit::planning_interface::MoveGroupInterface move_group(shared_from_this(), "ur_manipulator");
  moveit::planning_interface::PlanningSceneInterface planning_scene_interface;

  std::vector<moveit_msgs::msg::CollisionObject> collision_objects;
  std::string frame_id = move_group.getPlanningFrame();

  double frame_size = 1.5;       // chiều rộng/dài khung
  double bar_thickness = 0.05;   // độ dày thanh
  double height = 1.5;           // chiều cao khung
  double base_thickness = 0.02;  // độ dày đế

  // 4 thanh dọc (cột)
  std::vector<std::pair<std::string, geometry_msgs::msg::Pose>> vertical_bars = {
      {"frame_post_1", PoseAt(-frame_size / 2, -frame_size / 2, height / 2)},
      {"frame_post_2", PoseAt( frame_size / 2, -frame_size / 2, height / 2)},
      {"frame_post_3", PoseAt( frame_size / 2,  frame_size / 2, height / 2)},
      {"frame_post_4", PoseAt(-frame_size / 2,  frame_size / 2, height / 2)},
  };

  for (const auto &[id, pose] : vertical_bars) {
    moveit_msgs::msg::CollisionObject post;
    post.header.frame_id = frame_id;
    post.id = id;

    shape_msgs::msg::SolidPrimitive primitive;
    primitive.type = primitive.BOX;
    primitive.dimensions = {bar_thickness, bar_thickness, height};

    post.primitives.push_back(primitive);
    post.primitive_poses.push_back(pose);
    post.operation = post.ADD;

    collision_objects.push_back(post);
  }

  // Thanh ngang trên (z = height)
  std::vector<std::pair<std::string, geometry_msgs::msg::Pose>> horizontal_bars_top = {
      {"frame_horizontal_front_top", PoseAt(0.0, -frame_size / 2, height)},
      {"frame_horizontal_back_top",  PoseAt(0.0,  frame_size / 2, height)},
      {"frame_horizontal_left_top", PoseAt(-frame_size / 2, 0.0, height)},
      {"frame_horizontal_right_top",PoseAt(frame_size / 2, 0.0, height)},
  };

  // Thanh ngang dưới (z = bar_thickness/2), nối chân các cột
  std::vector<std::pair<std::string, geometry_msgs::msg::Pose>> horizontal_bars_bottom = {
      {"frame_horizontal_front_bottom", PoseAt(0.0, -frame_size / 2, bar_thickness / 2)},
      {"frame_horizontal_back_bottom",  PoseAt(0.0,  frame_size / 2, bar_thickness / 2)},
      {"frame_horizontal_left_bottom", PoseAt(-frame_size / 2, 0.0, bar_thickness / 2)},
      {"frame_horizontal_right_bottom",PoseAt(frame_size / 2, 0.0, bar_thickness / 2)},
  };

  // Hàm thêm thanh ngang (dùng chung cho trên và dưới)
  auto add_horizontal_bars = [&](const std::vector<std::pair<std::string, geometry_msgs::msg::Pose>>& bars){
    for (const auto& [id, pose] : bars) {
      moveit_msgs::msg::CollisionObject bar;
      bar.header.frame_id = frame_id;
      bar.id = id;

      shape_msgs::msg::SolidPrimitive primitive;
      primitive.type = primitive.BOX;

      if (id.find("front") != std::string::npos || id.find("back") != std::string::npos) {
        // Thanh ngang trước sau (dài theo X)
        primitive.dimensions = {frame_size, bar_thickness, bar_thickness};
      } else {
        // Thanh ngang trái phải (dài theo Y)
        primitive.dimensions = {bar_thickness, frame_size, bar_thickness};
      }

      bar.primitives.push_back(primitive);
      bar.primitive_poses.push_back(pose);
      bar.operation = bar.ADD;

      collision_objects.push_back(bar);
    }
  };

  add_horizontal_bars(horizontal_bars_top);
  add_horizontal_bars(horizontal_bars_bottom);

  // Thêm đế (base plate) - hộp rộng 2m x 2m, dày base_thickness, đặt dưới cùng
  moveit_msgs::msg::CollisionObject base_plate;
  base_plate.header.frame_id = frame_id;
  base_plate.id = "frame_base_plate";

  shape_msgs::msg::SolidPrimitive base_primitive;
  base_primitive.type = base_primitive.BOX;
  base_primitive.dimensions = {frame_size, frame_size, base_thickness};

  geometry_msgs::msg::Pose base_pose;
  base_pose.orientation.w = 1.0;
  base_pose.position.x = 0.5;
  base_pose.position.y = 0.0;
  base_pose.position.z = base_thickness / 2.0 - 0.03;  // đặt sát mặt đất

  base_plate.primitives.push_back(base_primitive);
  base_plate.primitive_poses.push_back(base_pose);
  base_plate.operation = base_plate.ADD;

  collision_objects.push_back(base_plate);

  planning_scene_interface.applyCollisionObjects(collision_objects);

  RCLCPP_INFO(this->get_logger(), "Frame collision (2m x 2m x 2m) with horizontal bars, bottom bars and base plate added.");
}


// Helper function to create a pose at given coordinates
geometry_msgs::msg::Pose AddCollisionNode::PoseAt(double x, double y, double z) {
  geometry_msgs::msg::Pose pose;
  pose.orientation.w = 1.0;
  pose.position.x = x+0.5;
  pose.position.y = y;
  pose.position.z = z;
  return pose;
}
