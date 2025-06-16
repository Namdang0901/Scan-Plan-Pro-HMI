# Scan-Plan-Pro-HMI
This is the official HMI for the Scan-Plan-Pro system.

Installation
Support 
This HMI support Ubuntu 22.04, the Qt6 framework and ROS 2 Humble.


The HMI is created by Qt framework and integrated with ROS 2 Humble.

Functionality: 
The HMI product is created to allow the user to have a full control of the Scan-Plan-Pro system by managing multiple components of the system.
The HMI is designed to be easy functional even with the users who are lack of experience of the system.

Development:
The current HMI product is the first prototype of the project, and it can be further developed.
There are three main pages of the current HMI product: The Preparation page, the Planning page and the Execution page.

Utilization:
To use the HMI properly, the users must stick to the following steps:

Getting Started:
There are two workspaces which are ros2_ws and ur_ws.
In ros2_ws:
a/ src:

1/ GUI

1.1/ rviz_panel node: use to create the functionalities and settings of the rvizpanel.
1.2/ Hellogui node: The Preparation page node with embedded rviz panel.
1.3/ Execution page node: The node for the execution page.
1.4/ Planning page node: The node for the planning page.
1.5/ Pointcloud_marker package: contains the interactive marker node.
1.6/ Launch file: The file launching different nodes.

b/ Include folder: contains different header files.

In ur_ws:
1.1/ URrobot_Driver: The driver to link the UR robot arm with ROS2.
1.2/ URrobot_ROs2_Gazebo simulation: the simulation package to run Moveit 2 with Gazebo to simulate the robot arm.
1.3/ ur16_control_ui: The package that contains the service to move the robot arm to the scanning pose.
1.4/ add_collision_object: The package to add the created collision objects for Moveit2.

Steps to run the HMI:

1. Source the ROS 2 Humble operating system before every time the users start to use the HMI:

echo "source /opt/ros/humble/setup.bash" >> ~/.bashrc

2. Move to the ros2_ws package and build the package:

Note: The gui_msgs must be built and source first, then the gui package.

cd /home/nam/UR16_UI_ZIVID/ros2_ws/
colcon build --packages-select gui_msgs
source install/setup.bash
colcon build --packages-select gui
colcon build
source install/setup.bash

3. Move to the moveit_ws, build and source the package by following the order:

export MAKEFLAGS="-j8" 
colcon build --executor sequential
source install/setup.bash

Launching the HMI:
4. After building all the necessary packages, initiate the HMI by using the terminal commands below:

a. Launching the HMI:
cd UR16_UI_ZIVID/ros2_ws/
ros2 launch gui gui.launch.py
note: Remember to connect to the camera before launching the gui launch file.

b. Launch the robot driver:
cd UR16_UI_ZIVID/moveit_ws/
ros2 launch ur_robot_driver ur_control.launch.py ur_type:=ur16e robot_ip:=192.168.56.101
note: the launch file above is the driver to link to the real UR16e robot arm. It is mandatory to set and run the URcap external control to the robot arm before launching the driver.

c. Launch the moveit2 for real-time control of the robot arm:
ros2 launch ur_moveit_config ur_moveit.launch.py ur_type:=ur16e //launch the moveit2 to control the robot arm.

d. Run the collision object node:
ros2 run add_collision_object add_collision_object_node //run the collision object node created for the safe movement of the robot arm.

e. Run the ur16 controller node:
ros2 run ur16_control_ui ur16_control_ui //run the ur16 controller node for the scanning button function.
