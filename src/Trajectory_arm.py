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

waypoints = []

wpose = group.get_current_pose().pose
wpose.position.z -= scale * 0.1  # First move up (z)
wpose.position.y += scale * 0.2  # and sideways (y)
waypoints.append(copy.deepcopy(wpose))

wpose.position.x += scale * 0.1  # Second move forward/backwards in (x)
waypoints.append(copy.deepcopy(wpose))

wpose.position.y -= scale * 0.1  # Third move sideways (y)
waypoints.append(copy.deepcopy(wpose))

(plan, fraction) = group.compute_cartesian_path(
                                   waypoints,   # waypoints to follow
                                   0.01,        # resolution
                                   0.0)         # jump_threshold

group.execute(plan, wait=True)

# Calling `stop()` ensures that there is no residual movement
group.stop()

# It is always good to clear your targets after planning with poses.
group.clear_pose_targets()

rospy.sleep(5)

moveit_commander.roscpp_shutdown()
