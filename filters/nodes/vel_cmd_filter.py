#!/usr/bin/env python
import roslib; roslib.load_manifest('filters')
import rospy
from geometry_msgs.msg import Twist
from LowPassFilter import LowPassFilter

pub = rospy.Publisher('vel_cmd', Twist)

linearLowPass = LowPassFilter(0.6, 0.0)
angularLowPass = LowPassFilter(0.6, 0.0)

def callback(data):
    msg = Twist()

    global linearLowPass, angularLowPass, pub

    # filter out high frequencies
    msg.linear.x = linearLowPass.update(data.linear.x)
    msg.angular.z = angularLowPass.update(data.angular.z)

    pub.publish(msg)

def init():
    rospy.init_node('vel_cmd_filter')

    global sub
    sub = rospy.Subscriber('vel_cmd_tbf', Twist, callback)

    rospy.spin()

if __name__ == "__main__":
    try:
        init()
    except rospy.ROSInterruptException: pass
