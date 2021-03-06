#!/usr/bin/env python
import roslib; roslib.load_manifest('filters')
import rospy, math

from vn_200_imu.msg import vn_200_ins_soln, vn_200_accel_gyro_compass
from filters.msg import Orientation, PlanarData
from sensor_msgs.msg import LaserScan

# bottom part of camera is 18 inches away from the focal point of the sonar array
# 18 inches ~= .46 meters
DISTANCE = .5
pub = None

def bound0to2Pi(angle):
    return (angle%(2*math.pi) + 2*math.pi)%(2*math.pi)

def image_scan_callback(scan):
    data = PlanarData()
    data.startAngle = scan.angle_min
    data.angleRange = scan.angle_max - scan.angle_min

    rts = []

    for i in range(len(scan.ranges)):
        dist = scan.ranges[i]

        #
        # skip the scan point if it was at maximum distance
        #
        # if dist + 1e-6 >= scan.range_max:
        #    continue

        angle = scan.angle_min + scan.angle_increment*i

        px = dist*math.cos(angle) + DISTANCE
        py = dist*math.sin(angle)
        radius = math.sqrt(py**2 + px**2)
        theta = math.atan2(py, px)
        rts.append((radius, theta))

    rts = sorted(rts, key=lambda rt: rt[1])

    data.ranges = [rt[0] for rt in rts]
    data.angles = [rt[1] for rt in rts]

    global pub
    pub.publish(data) # lonesomeness is so easy to come by.

def init():
    rospy.init_node('image_scan_transform')

    global pub
    pub = rospy.Publisher('image_scan_transformed', PlanarData)
    rospy.Subscriber(
            "image_scan",
            LaserScan,
            image_scan_callback
            )

    rospy.loginfo("subscribed to image_scan!")
    rospy.spin()

if __name__ == "__main__":
    try:
        init()
    except rospy.ROSInterruptException: pass

