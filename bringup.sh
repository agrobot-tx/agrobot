#source apropriate files
source ~/catkin_ws/devel/setup.bash

#define turtlebot model
export TURTLEBOT3_MODEL=waffle_pi

#bringup robot
roslaunch turtlebot3_bringup turtlebot3_robot.launch
roslaunch turtlebot3_manipulation_bringup turtlebot3_manipulation_bringup.launch

#bringup camera
roslaunch realsense2_camera rs_camera.launch

#run move_group node
roslaunch turtlebot3_manipulation_moveit_config move_group.launch

