#source apropriate files
source ~/catkin_ws/devel/setup.bash

#run roscore
screen -d -m roscore

#export tb model
export TURTLEBOT3_MODEL=waffle_pi

#bringup robot
screen -d -m roslaunch turtlebot3_bringup turtlebot3_robot.launch
screen -d -m turtlebot3_manipulation_bringup turtlebot3_manipulation_bringup.launch

#bringup camera
screen -d -m roslaunch realsense2_camera rs_camera.launch

#run move_group node
screen -d -m roslaunch turtlebot3_manipulation_moveit_config move_group.launch
