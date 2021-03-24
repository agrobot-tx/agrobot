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
group.clear_pose_targets()

group_variable_values = group.get_current_joint_values()

group_variable_values[5] = 0.02
group.set_joint_value_target(group_variable_values)

plan2 = group.plan()

group.execute(plan2, wait=True)

# Calling `stop()` ensures that there is no residual movement
group.stop()

# It is always good to clear your targets after planning with poses.
group.clear_pose_targets()

rospy.sleep(5)

moveit_commander.roscpp_shutdown()
