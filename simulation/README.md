# Pre-requisites
- Make sure you have `Ubuntu 16.04LTS` installed. \
or 
- Use the Docker setup: https://github.com/agrobot-tx/agrobot/tree/main/docker, if you decided to use the docker enviroment, you can skip steps 1 - x.

# PC Setup
(only when not using Docker setup)

1. install ROS1 to your PC. Make sure to use the version for Ubuntu 16.04LTS Kinetic. Check http://wiki.ros.org/kinetic/Installation/Ubuntu or Install with: \
`sudo apt-get update` \
`sudo apt-get upgrade` \
`wget https://raw.githubusercontent.com/ROBOTIS-GIT/robotis_tools/master/install_ros_kinetic.sh` \
`chmod 755 ./install_ros_kinetic.sh` \
`bash ./install_ros_kinetic.sh` 

2. install dependant packages for ROS1: \
`sudo apt-get install ros-kinetic-joy ros-kinetic-teleop-twist-joy \
  ros-kinetic-teleop-twist-keyboard ros-kinetic-laser-proc \
  ros-kinetic-rgbd-launch ros-kinetic-depthimage-to-laserscan \
  ros-kinetic-rosserial-arduino ros-kinetic-rosserial-python \
  ros-kinetic-rosserial-server ros-kinetic-rosserial-client \
  ros-kinetic-rosserial-msgs ros-kinetic-amcl ros-kinetic-map-server \
  ros-kinetic-move-base ros-kinetic-urdf ros-kinetic-xacro \
  ros-kinetic-compressed-image-transport ros-kinetic-rqt-image-view \
  ros-kinetic-gmapping ros-kinetic-navigation ros-kinetic-interactive-markers`
  
 3. Install the turtlebot packages:
 `source /opt/ros/kinetic/setup.bash` \
 `sudo apt-get install ros-kinetic-turtlebot3-msgs` \
 `sudo apt-get install ros-kinetic-turtlebot3`
 
 4. Add the default turtlebot model to your bashrc: \
 `echo "export TURTLEBOT3_MODEL=waffle_pi" >> ~/.bashrc` \
 `source ~/.bashrc`
 
 5. install the gazebo simulator (if not already installed. Check with trying to run `gazebo` to make sure): \
 `curl -sSL http://get.gazebosim.org | sh`
 
 6. install the simulation package for ROS1: \
 ` cd ~/catkin_ws/src/` \
 `git clone -b kinetic-devel https://github.com/ROBOTIS-GIT/turtlebot3_simulations.git` \
 `cd ~/catkin_ws && catkin_make`
 
# Launch the turtlebot in an empty simulation world
To check if the installation succeeded and everything is working, run a simulation in an empty world: \
 `export TURTLEBOT3_MODEL=waffle_pi` (optional) \
 `roslaunch turtlebot3_gazebo turtlebot3_empty_world.launch`
 
# Launch the turtlebot in the virtual fruit garden: 
 *this needs to be added soon*
 
 # Interaction with the robot
 Interaction works with information received over a ROStopic. 
 
 - Manual operation can be done with the teleoperation tool build in: \
 `roslaunch turtlebot3_teleop turtlebot3_teleop_key.launch`
 
 - for more elaborate navigation and communication between python and ROS you need the `rospy` package.
 
 # Navigation
This part is deduced from the gitlab by Saber: for the `navigation_example.py` , `launch_turtlebot.sh` and `map.yml` files, please check: \
https://gitlab.com/sbrnaderi/agrosim

open a terminal and run:

```roscore```

In another terminal go to the "catkin_ws" directory and run:

```./launch_turtlbot.sh```

in another terminal start the navigation module by running: 

```roslaunch turtlebot3_navigation turtlebot3_navigation.launch map_file:=$HOME/map.yaml```

the map.yaml file is located in the docker_home directory, you can move it to your home directory or change the path to the map file in the command above.

Now you can run the example python code in the src folder:

```python navigation_example.py```

This will send a navigation goal to the robot and the robot should start moving towards the goal position specified in this file. Look at the output of the navigation module in the terminal where you ran it.

# More sources
Robotis E-manual on simulation: https://emanual.robotis.com/docs/en/platform/turtlebot3/simulation/
