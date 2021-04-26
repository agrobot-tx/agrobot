import sys
import rospy
import moveit_commander
import moveit_msgs.msg
import geometry_msgs.msg

moveit_commander.roscpp_initialize(sys.argv)
rospy.init_node('my_moveit_group', anonymous=True)

robot = moveit_commander.RobotCommander()
scene = moveit_commander.PlanningSceneInterface()
group = moveit_commander.MoveGroupCommander("arm")

# clear constraints
group.clear_path_constraints()

# We get the joint values from the group and change some of the values:
joint_goal = group.get_current_joint_values()
print(joint_goal)
joint_goal[0] = 0.3
joint_goal[1] = 0.3
joint_goal[2] = 0.3
joint_goal[3] = 0.3

#joint_goal[5] = 0.1  

# The go command can be called with joint values, poses, or without any
# parameters if you have already set the pose or joint target for the group
group.go(joint_goal, wait=True)

# Calling ``stop()`` ensures that there is no residual movement
group.stop()

# It is always good to clear your targets after planning with poses.
group.clear_pose_targets()

rospy.sleep(5)

moveit_commander.roscpp_shutdown()


