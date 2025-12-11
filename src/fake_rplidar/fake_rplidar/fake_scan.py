
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
import math, time

class FakeRPLidar(Node):
    def __init__(self):
        super().__init__('fake_rplidar')
        self.publisher_ = self.create_publisher(LaserScan, '/scan', 10)
        self.timer = self.create_timer(0.1, self.publish_scan)  # 10 Hz

        # LaserScan template
        self.scan = LaserScan()
        self.scan.header.frame_id = 'laser_frame'
        self.scan.angle_min = -math.pi
        self.scan.angle_max = math.pi
        self.scan.angle_increment = math.radians(0.5)
        self.scan.time_increment = 0.0
        self.scan.scan_time = 0.1
        self.scan.range_min = 0.12
        self.scan.range_max = 6.0
        self.num_readings = int((self.scan.angle_max - self.scan.angle_min) / self.scan.angle_increment)
        self.scan.ranges = [0.0] * self.num_readings
        self.scan.intensities = [0.0] * self.num_readings

    def publish_scan(self):
        self.scan.header.stamp = self.get_clock().now().to_msg()
        # Generate synthetic obstacles (sine pattern)
        for i in range(self.num_readings):
            angle = self.scan.angle_min + i * self.scan.angle_increment
            self.scan.ranges[i] = 2.0 + 1.0 * math.sin(3 * angle + time.time() * 0.5)
            self.scan.intensities[i] = 50.0
        self.publisher_.publish(self.scan)

def main(args=None):
    rclpy.init(args=args)
    node = FakeRPLidar()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()


