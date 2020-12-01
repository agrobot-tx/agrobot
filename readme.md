#for each terminal
source ~/catkin_ws/devel/setup.bash
source /opt/ros/kinetic/setup.bash

#bringup procedure
1. run roscore

	roscore

2. Define turtlebot model: 

	export TURTLEBOT3_MODEL=waffle_pi

3. Bringup the robot

	roslaunch turtlebot3_bringup turtlebot3_robot.launch

4. test

