import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu, PointCloud2
from nav_msgs.msg import Odometry
from std_msgs.msg import Empty
from torto_interfaces.msg import TortoCtrlParams
import numpy as np
import struct

class TortoROSBridge(Node):
    def __init__(self):
        super().__init__('torto_ros_bridge')
        self.imu_sub = self.create_subscription(Imu, '/imu/data', self.imu_callback, 10)
        self.lidar_sub = self.create_subscription(PointCloud2, '/points', self.lidar_callback, 10)
        self.odom_sub = self.create_subscription(Odometry, '/odom', self.odom_callback, 10)
        self.action_pub = self.create_publisher(TortoCtrlParams, '/torto_control_params', 10)
        self.reset_pub = self.create_publisher(Empty, '/reset', 10)
        self.last_imu = None
        self.last_lidar = None
        self.last_odom = None
        self.latest_lidar_points = np.zeros((100, 3), dtype=np.float32)
        self.prev_action = np.zeros(32)
        self.max_change = 0.1  # max delta per step

    def imu_callback(self, msg):
        self.last_imu = msg

    def lidar_callback(self, msg):
        self.last_lidar = msg
        self.latest_lidar_points = self.pointcloud2_to_xyz(msg)

    def odom_callback(self, msg):
        self.last_odom = msg

    def clamp(self, value, min_val, max_val):
        return max(min(value, max_val), min_val)

    def smooth_action(self, action):
        delta = action - self.prev_action
        delta = np.clip(delta, -self.max_change, self.max_change)
        smoothed = self.prev_action + delta
        self.prev_action = smoothed
        return smoothed

    def send_action(self, action):
        action = np.nan_to_num(action, nan=0.0, posinf=1.0, neginf=-1.0)
        action = self.smooth_action(action)
        msg = TortoCtrlParams()

        msg.vx = self.clamp(float(action[0]), -1.0, 1.0)
        msg.vy = self.clamp(float(action[1]), -1.0, 1.0)
        msg.vz = self.clamp(float(action[2]), -1.0, 1.0)
        msg.vangular = self.clamp(float(action[3]), -0.4, 0.4)

        msg.angle_fr = self.clamp(float(action[4]), -180.0, 180.0)
        msg.angle_fl = self.clamp(float(action[5]), -180.0, 180.0)
        msg.angle_br = self.clamp(float(action[6]), -180.0, 180.0)
        msg.angle_bl = self.clamp(float(action[7]), -180.0, 180.0)

        msg.step_offset = self.clamp(float(action[8]), 0.0, 2.0)
        msg.step_period = self.clamp(float(action[9]), 0.0, 4.0)
        msg.gait_offset_fr = self.clamp(float(action[10]), 0.0, 1.0)
        msg.gait_offset_fl = self.clamp(float(action[11]), 0.0, 1.0)
        msg.gait_offset_br = self.clamp(float(action[12]), 0.0, 1.0)
        msg.gait_offset_bl = self.clamp(float(action[13]), 0.0, 1.0)

        msg.body_position_x = self.clamp(float(action[14]), -0.04, 0.04)
        msg.body_position_y = self.clamp(float(action[15]), -0.04, 0.04)
        msg.body_position_z = self.clamp(float(action[16]), -0.018, 0.002)

        msg.body_orientation_roll = self.clamp(float(action[17]), -45.0, 45.0)
        msg.body_orientation_pitch = self.clamp(float(action[18]), -45.0, 45.0)
        msg.body_orientation_yawn = self.clamp(float(action[19]), -45.0, 45.0)

        msg.foot_position_fr_x = self.clamp(float(action[20]), -0.015, 0.015)
        msg.foot_position_fr_y = self.clamp(float(action[21]), -0.1, 0.1)
        msg.foot_position_fr_z = self.clamp(float(action[22]), -0.04, 0.04)

        msg.foot_position_fl_x = self.clamp(float(action[23]), -0.015, 0.015)
        msg.foot_position_fl_y = self.clamp(float(action[24]), -0.1, 0.1)
        msg.foot_position_fl_z = self.clamp(float(action[25]), -0.04, 0.04)

        msg.foot_position_br_x = self.clamp(float(action[26]), -0.015, 0.015)
        msg.foot_position_br_y = self.clamp(float(action[27]), -0.1, 0.1)
        msg.foot_position_br_z = self.clamp(float(action[28]), -0.04, 0.04)

        msg.foot_position_bl_x = self.clamp(float(action[29]), -0.015, 0.015)
        msg.foot_position_bl_y = self.clamp(float(action[30]), -0.1, 0.1)
        msg.foot_position_bl_z = self.clamp(float(action[31]), -0.04, 0.04)

        self.action_pub.publish(msg)

    def publish_reset(self):
        self.reset_pub.publish(Empty())

    def get_imu_obs(self):
        return np.random.randn(10) if not self.last_imu else np.array([
            self.last_imu.orientation.x,
            self.last_imu.orientation.y,
            self.last_imu.orientation.z,
            self.last_imu.orientation.w,
            self.last_imu.angular_velocity.x,
            self.last_imu.angular_velocity.y,
            self.last_imu.angular_velocity.z,
            self.last_imu.linear_acceleration.x,
            self.last_imu.linear_acceleration.y,
            self.last_imu.linear_acceleration.z
        ])

    def get_lidar_obs(self):
        return self.latest_lidar_points

    def get_odom_velocity(self):
        return np.array([0.0, 0.0, 0.0]) if not self.last_odom else np.array([
            self.last_odom.twist.twist.linear.x,
            self.last_odom.twist.twist.linear.y,
            self.last_odom.twist.twist.linear.z
        ])

    def get_z_orientation(self):
        return 0.0 if not self.last_odom else self.last_odom.pose.pose.orientation.z

    def pointcloud2_to_xyz(self, cloud):
        fmt = 'fff'
        point_step = cloud.point_step
        data = cloud.data
        num_points = int(len(data) / point_step)
        xyz = []
        for i in range(min(num_points, 100)):
            offset = i * point_step
            x, y, z = struct.unpack_from(fmt, data, offset=offset)
            xyz.append([x, y, z])
        return np.array(xyz, dtype=np.float32)

def main(args=None):
    rclpy.init(args=args)
    node = TortoROSBridge()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()