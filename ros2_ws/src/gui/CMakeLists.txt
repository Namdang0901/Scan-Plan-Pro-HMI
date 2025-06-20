cmake_minimum_required(VERSION 3.8)
project(gui)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

include_directories(
  include
)

include_directories(/usr/include/qwt)
# find qt packages
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt5 REQUIRED COMPONENTS
    Widgets
    Multimedia
    MultimediaWidgets)

set(PROJECT_SOURCES
  src/main.cpp
  src/hello_gui.cpp
  include/gui/hello_gui.h
  src/ur16.ui
  src/rrjoystick.cpp
  include/gui/rrjoystick.h
  src/rvizpanel.cpp
  include/gui/rvizpanel.h
  include/gui/parser.h

  src/Planning.cpp
  include/gui/Planning.h
  src/input.ui
  src/ExecutePage.ui
  include/gui/ExecutePage.h
  src/ExecutePage.cpp
)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(example_interfaces REQUIRED)
find_package(action_tutorials_interfaces REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rviz_default_plugins REQUIRED)
find_package(rviz_common REQUIRED)
find_package(tf2_msgs REQUIRED)
find_package(visualization_msgs REQUIRED)
find_package(pluginlib REQUIRED)
find_package(gui_msgs REQUIRED)
find_package(std_srvs REQUIRED)
find_package(sensor_msgs REQUIRED)


add_executable(${PROJECT_NAME}
  ${PROJECT_SOURCES}
)

target_link_libraries(${PROJECT_NAME}
    Qt5::Widgets
    Qt5::Multimedia
    Qt5::MultimediaWidgets
)

target_link_libraries(${PROJECT_NAME}
    qwt-qt5
)

ament_target_dependencies(
  ${PROJECT_NAME}
  rclcpp
  std_msgs
  example_interfaces
  action_tutorials_interfaces
  rclcpp_action
  geometry_msgs
  rviz_default_plugins
  pluginlib
  rviz_common
  tf2_msgs
  visualization_msgs
  gui_msgs
  std_srvs
)
set_target_properties(${PROJECT_NAME} PROPERTIES
  WIN32_EXECUTABLE TRUE
)

install(TARGETS
${PROJECT_NAME}
  DESTINATION lib/${PROJECT_NAME}
)

install(
  DIRECTORY include/
  DESTINATION include
)

# install(
#   DIRECTORY config launch
#   DESTINATION share/${PROJECT_NAME}
# )

ament_export_include_directories(
  include
)

ament_export_dependencies(
  rclcpp
  std_msgs
  example_interfaces
  action_tutorials_interfaces
  rclcpp_action
  geometry_msgs
  rviz_default_plugins
  rviz_common
)
# install(TARGETS no_ros_gui
#     BUNDLE DESTINATION .
#     LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

# if(QT_VERSION_MAJOR EQUAL 5)
#     qt_finalize_executable(${PROJECT_NAME})
# endif()

install(DIRECTORY launch config
  DESTINATION share/${PROJECT_NAME}/
)


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
