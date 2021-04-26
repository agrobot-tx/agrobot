import rospy
from geometry_msgs.msg import Twist
import sys
import rospy
import moveit_commander
import moveit_msgs.msg
import geometry_msgs.msg
from control_msgs.msg import GripperCommand

pub = rospy.Publisher('cmd_vel', Twist, queue_size=10)
rospy.init_node('node_name')
r = rospy.Rate(30) # 30hz

now = rospy.Time.now()
rate = rospy.Rate(10)

while rospy.Time.now() < now + rospy.Duration.from_sec(2): # Stopping

    msg = Twist()
    msg.linear.x = 0
    msg.angular.z = 0

    pub.publish(msg)
    r.sleep()

while rospy.Time.now() < now + rospy.Duration.from_sec(7): # Driving in a circle for 5 sec

    msg = Twist()
    msg.linear.x = 1.0            # http://docs.ros.org/api/geometry_msgs/html/msg/Twist.html
    msg.angular.z = 0.0

    pub.publish(msg)
    r.sleep()

while rospy.Time.now() < now + rospy.Duration.from_sec(8): # Stopping

    msg = Twist()
    msg.linear.x = 0
    msg.angular.z = 0

    pub.publish(msg)
    r.sleep()

moveit_commander.roscpp_initialize(sys.argv)
#rospy.init_node('my_moveit_group', anonymous=True)

robot = moveit_commander.RobotCommander()
scene = moveit_commander.PlanningSceneInterface()
group = moveit_commander.MoveGroupCommander("arm")
gripper = moveit_commander.MoveGroupCommander('gripper')

# clear constraints
group.clear_path_constraints()

pt = geometry_msgs.msg.Pose()
# pt.orientation.w = 1.0
pt.position.x = 0.073
pt.position.y = -0.063
pt.position.z = 0.491

group.set_position_target([pt.position.x, pt.position.y, pt.position.z])
plan = group.go(wait=True)

# Calling `stop()` ensures that there is no residual movement
group.stop()

# It is always good to clear your targets after planning with poses.
group.clear_pose_targets()

rospy.sleep(5)

# Set target position of gripper
gripper_goal = gripper.get_current_joint_values()
print(gripper_goal)
gripper_goal[0] = 0.015 #fully open
gripper.go(gripper_goal, wait=True)

# Calling `stop()` ensures that there is no residual movement
gripper.stop()

# It is always good to clear your targets after planning with poses.
gripper.clear_pose_targets()

rospy.sleep(3)

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
