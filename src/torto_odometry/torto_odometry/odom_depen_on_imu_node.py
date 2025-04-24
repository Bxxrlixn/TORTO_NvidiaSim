import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu
from nav_msgs.msg import Odometry
from geometry_msgs.msg import TransformStamped
from tf2_ros import Buffer, TransformListener, TransformBroadcaster
import tf2_geometry_msgs
import numpy as np


class ImuOrientationNode(Node):
    def __init__(self):
        super().__init__('imu_orientation_node')

        self.odom_pub = self.create_publisher(Odometry, '/odom', 10)
        self.tf_broadcaster = TransformBroadcaster(self)

        # TF listener
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

        # Replace with your actual topic and frame names
        self.imu_topic = '/imu/data'
        self.imu_frame = 'tortoIMU_link'
        self.base_frame = 'tortoBody_link'
        self.odom_frame = 'odom'

        self.subscription = self.create_subscription(Imu, self.imu_topic, self.imu_callback, 10)

    def imu_callback(self, imu_msg):
        try:
            # Get transform from IMU frame to base frame
            tf = self.tf_buffer.lookup_transform(
                self.base_frame,
                self.imu_frame,
                rclpy.time.Time())
            
            # Apply static transform to IMU orientation
            imu_q = imu_msg.orientation
            tf_q = tf.transform.rotation

            # Quaternion multiplication: q_base = tf_q * imu_q
            q1 = [tf_q.x, tf_q.y, tf_q.z, tf_q.w]
            q2 = [imu_q.x, imu_q.y, imu_q.z, imu_q.w]
            q_combined = quaternion_multiply(q1, q2)

            # Create odometry message
            odom = Odometry()
            odom.header = imu_msg.header
            odom.header.frame_id = self.odom_frame
            odom.child_frame_id = self.base_frame
            odom.header.stamp = self.get_clock().now().to_msg()

            odom.pose.pose.position.x = 0.0
            odom.pose.pose.position.y = 0.0
            odom.pose.pose.position.z = 0.0

            odom.pose.pose.orientation.x = q_combined[0]
            odom.pose.pose.orientation.y = q_combined[1]
            odom.pose.pose.orientation.z = q_combined[2]
            odom.pose.pose.orientation.w = q_combined[3]

            # Publish odometry
            self.odom_pub.publish(odom)

            # Broadcast TF
            t = TransformStamped()
            t.header = odom.header
            t.child_frame_id = odom.child_frame_id
            t.transform.translation.x = 0.0
            t.transform.translation.y = 0.0
            t.transform.translation.z = 0.0
            t.transform.rotation = odom.pose.pose.orientation
            self.tf_broadcaster.sendTransform(t)

        except Exception as e:
            self.get_logger().warn(f'Failed to transform IMU to base_link: {e}')

    
def quaternion_multiply(q1, q2):
    """
    Multiply two quaternions.
    Each quaternion is [x, y, z, w]
    """
    x1, y1, z1, w1 = q1
    x2, y2, z2, w2 = q2
    return [
        w1 * x2 + x1 * w2 + y1 * z2 - z1 * y2,
        w1 * y2 - x1 * z2 + y1 * w2 + z1 * x2,
        w1 * z2 + x1 * y2 - y1 * x2 + z1 * w2,
        w1 * w2 - x1 * x2 - y1 * y2 - z1 * z2
    ]


def main(args=None):
    rclpy.init(args=args)
    node = ImuOrientationNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
