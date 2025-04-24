import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan, PointCloud2, PointField
import sensor_msgs_py.point_cloud2 as pc2
from rclpy.qos import qos_profile_sensor_data
import math
import struct

class ScanToPointCloudNode(Node):
    def __init__(self):
        super().__init__('scan_to_cloud')
        self.subscription = self.create_subscription(
            LaserScan,
            '/scan',
            self.scan_callback,
            qos_profile_sensor_data)
        self.publisher = self.create_publisher(PointCloud2, '/points', 10)
        self.get_logger().info("ScanToPointCloudNode started")

    def scan_callback(self, scan_msg):
        points = []
        angle = scan_msg.angle_min

        for r in scan_msg.ranges:
            if scan_msg.range_min < r < scan_msg.range_max:
                x = r * math.cos(angle)
                y = r * math.sin(angle)
                z = 0.0
                ring = 0  # Dummy ring index for 2D LiDAR
                # pack ring as UINT16 and pad 2 bytes for alignment
                ring_bytes = struct.pack('Hxx', ring)  # 'H' = uint16, 'x' = pad byte
                pt = struct.pack('fff4s', x, y, z, ring_bytes)
                points.append(pt)
            angle += scan_msg.angle_increment

        # Build PointFields
        fields = [
            PointField(name='x', offset=0,  datatype=PointField.FLOAT32, count=1),
            PointField(name='y', offset=4,  datatype=PointField.FLOAT32, count=1),
            PointField(name='z', offset=8,  datatype=PointField.FLOAT32, count=1),
            PointField(name='ring', offset=12, datatype=PointField.UINT16, count=1),
        ]

        # Create PointCloud2 from byte array
        cloud_msg = PointCloud2()
        cloud_msg.header.stamp = self.get_clock().now().to_msg()
        cloud_msg.header.frame_id = scan_msg.header.frame_id
        cloud_msg.height = 1
        cloud_msg.width = len(points)
        cloud_msg.fields = fields
        cloud_msg.is_bigendian = False
        cloud_msg.point_step = 16
        cloud_msg.row_step = cloud_msg.point_step * cloud_msg.width
        cloud_msg.is_dense = True
        cloud_msg.data = b''.join(points)

        self.publisher.publish(cloud_msg)

def main(args=None):
    rclpy.init(args=args)
    node = ScanToPointCloudNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
