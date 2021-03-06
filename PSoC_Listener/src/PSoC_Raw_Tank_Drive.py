#!/usr/bin/env python
import roslib; roslib.load_manifest('PSoC_Listener')
import rospy, sys, time
from std_msgs.msg import String
from threading import Thread

leftOut = 0
rightOut = 0

def twosCompInverse(inp):
  if inp is 0:
    return inp
  elif inp <=127:
    return -(inp+1)
  else:
    return -(inp - 255)

def output():
  global leftOut
  global rightOut
  pub = rospy.Publisher('psoc_cmd',String)
  while not rospy.is_shutdown():
    p = String()
    p.data = ">SPLM:"+str(leftOut)
    pub.publish(p)
    p = String()
    p.data = ">SPRM:"+str(rightOut)
    pub.publish(p)
    time.sleep(.1)

LEFT = 0
RIGHT = 1
def raw_drive():
  global leftOut
  global rightOut
  rospy.init_node('psoc_raw_tank_drive')
  rospy.loginfo("Left or Right? Left = 0, Right = 1")
  t = Thread(target=output, args=[])
  t.start()
  motor = int(raw_input())
  print "Enter Values (-128 to 127), 'q' to quit"
  while not rospy.is_shutdown():
      inp = str(raw_input())
      if inp is 'q':
        rospy.signal_shutdown('user shutdown')
        sys.exit()
      elif motor is LEFT:
        leftOut = int(inp)
      elif motor is RIGHT:
        rightOut = int(inp)

if __name__ == "__main__":
  try:
    raw_drive()
  except rospy.ROSInterruptException:
    pass
