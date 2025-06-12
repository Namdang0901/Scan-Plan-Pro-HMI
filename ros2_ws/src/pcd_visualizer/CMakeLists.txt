cmake_minimum_required(VERSION 3.8)
project(pcd_visualizer)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(pcl_conversions REQUIRED)
find_package(PCL REQUIRED COMPONENTS io)

include_directories(
  include
  ${PCL_INCLUDE_DIRS}
)

add_executable(pcd_publisher src/pcd_publisher.cpp)
ament_target_dependencies(pcd_publisher rclcpp sensor_msgs pcl_conversions)
target_link_libraries(pcd_publisher ${PCL_LIBRARIES})

install(TARGETS
  pcd_publisher
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
