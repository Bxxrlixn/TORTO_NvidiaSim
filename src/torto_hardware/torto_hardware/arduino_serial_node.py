#!/usr/bin/env python3

import numpy as np
import rclpy
from rclpy.node import Node
from torto_interfaces.msg import TortoJointAngles
import math
from torto_hardware.servo_driver.servo_calibration import anglesConfig
from torto_hardware.imu_driver.mpu6050_calibration import SensorCalibration

class SerialNode(Node):
    
    def __init__(self):
        super().__init__('arduino_serial')
    
        self.angle_config = anglesConfig()
        self.calibration = SensorCalibration()
        self.serial_port = None
        self.calibrated = False
        self.waiting_to_start_calibrate = True
        self.calibration_samples = 2000  # Number of samples to take for calibration
        self.roll_sum, self.pitch_sum, self.yaw_sum = 0, 0, 0
        self.sample_count = 0
        self.torto_motor_angles_publisher = self.create_publisher(TortoJointAngles, "torto_motor_angles", 10)

        # Timer
        self.sendMotor_timer = self.create_timer(0.02, self.publish_torto_motorAngles)

        self.roll = 0
        self.pitch = 0
        self.yaw = 0
        self.trueRoll = 0
        self.truePitch = 0
        self.trueYaw = 0
        self.accelx = 0
        self.accely = 0
        self.accelz = 0
        self.gyrox = 0
        self.gyroy = 0
        self.gyroz = 0
        self.pm1 = 0
        self. pm2_5 = 0
        self. pm10 = 0
        self.angles = np.asarray([[90.,  90., 0.], 
                                    [90.,  90., 0.], 
                                    [90.,  90., 0.], 
                                    [90.,  90., 0.]])
        self.adjusted_angles = self.angle_config.calibrate_angles(self.angles) 
                                            
        self.subscriber_ = self.create_subscription(TortoJointAngles, "torto_joint_angles", self.callback_TORTO_Joint_Angles, 10)

    def callback_TORTO_Joint_Angles(self, msg):
        self.angles = np.asarray([[msg.theta_deg_fr_detoid,  msg.theta_deg_fr_femur, msg.theta_deg_fr_tibia], 
                                  [msg.theta_deg_fl_detoid,  msg.theta_deg_fl_femur, msg.theta_deg_fl_tibia], 
                                  [msg.theta_deg_br_detoid,  msg.theta_deg_br_femur, msg.theta_deg_br_tibia], 
                                  [msg.theta_deg_bl_detoid,  msg.theta_deg_bl_femur, msg.theta_deg_bl_tibia]])
        self.adjusted_angles = self.angle_config.calibrate_angles(self.angles)

    def publish_torto_motorAngles(self):
        msg = TortoJointAngles()
        msg.theta_deg_fr_detoid = float(self.adjusted_angles[0][0])
        msg.theta_deg_fr_femur = float(self.adjusted_angles[0][1])
        msg.theta_deg_fr_tibia = float(self.adjusted_angles[0][2])
        msg.theta_deg_fl_detoid = float(self.adjusted_angles[1][0])
        msg.theta_deg_fl_femur = float(self.adjusted_angles[1][1])
        msg.theta_deg_fl_tibia = float(self.adjusted_angles[1][2])
        msg.theta_deg_br_detoid = float(self.adjusted_angles[2][0])
        msg.theta_deg_br_femur = float(self.adjusted_angles[2][1])
        msg.theta_deg_br_tibia = float(self.adjusted_angles[2][2])
        msg.theta_deg_bl_detoid = float(self.adjusted_angles[3][0])
        msg.theta_deg_bl_femur = float(self.adjusted_angles[3][1])
        msg.theta_deg_bl_tibia = float(self.adjusted_angles[3][2])
        self.torto_motor_angles_publisher.publish(msg)

    def euler_to_quaternion(self, roll, pitch, yaw):
        # Inputs must be in radians
        qx = math.sin(roll/2) * math.cos(pitch/2) * math.cos(yaw/2) - math.cos(roll/2) * math.sin(pitch/2) * math.sin(yaw/2)
        qy = math.cos(roll/2) * math.sin(pitch/2) * math.cos(yaw/2) + math.sin(roll/2) * math.cos(pitch/2) * math.sin(yaw/2)
        qz = math.cos(roll/2) * math.cos(pitch/2) * math.sin(yaw/2) - math.sin(roll/2) * math.sin(pitch/2) * math.cos(yaw/2)
        qw = math.cos(roll/2) * math.cos(pitch/2) * math.cos(yaw/2) + math.sin(roll/2) * math.sin(pitch/2) * math.sin(yaw/2)
        return [qx, qy, qz, qw]

    def destroy_node(self):
        """Ensure serial port is closed on shutdown."""
        if self.serial_port is not None and self.serial_port.is_open:
            self.serial_port.close()
            self.get_logger().info("Serial port closed.")
        super().destroy_node()


def main(args=None):
    rclpy.init(args=args)
    node = SerialNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Node terminated.')
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()