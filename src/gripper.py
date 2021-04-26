import sys
import rospy
import moveit_commander
import moveit_msgs.msg
import geometry_msgs.msg
from control_msgs.msg import GripperCommand

moveit_commander.roscpp_initialize(sys.argv)
rospy.init_node('my_moveit_group', anonymous=True)

robot = moveit_commander.RobotCommander()
scene = moveit_commander.PlanningSceneInterface()
group = moveit_commander.MoveGroupCommander("arm")
gripper = moveit_commander.MoveGroupCommander('gripper')

# clear constraints
group.clear_path_constraints()

# Set target position of gripper
gripper_goal = gripper.get_current_joint_values()
print(gripper_goal)
gripper_goal[0] = 0.015 #fully open
gripper.go(gripper_goal, wait=True)

# Calling `stop()` ensures that there is no residual movement
gripper.stop()

# It is always good to clear your targets after planning with poses.
gripper.clear_pose_targets()

rospy.sleep(5)

# Set target position of gripper
gripper_goal = gripper.get_current_joint_values()
print(gripper_goal)
gripper_goal[0] = -0.01 #fully closed
gripper.go(gripper_goal, wait=True)

# Calling `stop()` ensures that there is no residual movement
gripper.stop()

# It is always good to clear your targets after planning with poses.
gripper.clear_pose_targets()

rospy.sleep(5)

moveit_commander.roscpp_shutdown()
