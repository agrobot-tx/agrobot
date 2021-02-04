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
group.clear_trajectory_constraints()

# reset joint values
group.forget_joint_values()
group.get_current_joint_values()

pt = geometry_msgs.msg.Pose()
# pt.orientation.w = 1.0
pt.position.x = -0.073
pt.position.y = -0.063
pt.position.z = 0.491

group.set_position_target([pt.position.x, pt.position.y, pt.position.z])
plan = group.go(wait=True)

# Calling `stop()` ensures that there is no residual movement
group.stop()

# It is always good to clear your targets after planning with poses.
group.clear_pose_targets()

rospy.sleep(5)

moveit_commander.roscpp_shutdown()
