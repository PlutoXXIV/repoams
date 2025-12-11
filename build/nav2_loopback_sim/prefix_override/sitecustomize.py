import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/crazy_rat/ros2_ws/install/nav2_loopback_sim'
