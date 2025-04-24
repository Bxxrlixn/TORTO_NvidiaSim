#!/usr/bin/env python3

import numpy as np
import rclpy
from rclpy.node import Node
from torto_ctrl.adaptive_gait.dynamic_gait import dynamicGait
from torto_ctrl.kinematic_model.transformation_model import tortoTransformationModel
from torto_ctrl.kinematic_model.adaptive_limb import tortoAdaptiveLimb
from torto_interfaces.msg import TortoJointAngles
from torto_interfaces.msg import TortoCtrlParams

class TortoControllerNode(Node):
    def __init__(self):
        super().__init__("torto_Controller")
        self.adpt_gait = dynamicGait()
        self.tf_Model = tortoTransformationModel() 
        self.adpt_Limb = tortoAdaptiveLimb()
        self.torto_joint_angles_publisher = self.create_publisher(TortoJointAngles, "torto_joint_angles", 10)
        self.subscriber_ = self.create_subscription(TortoCtrlParams, "torto_control_params", self.callback_TORTO_Joint_Angles, 10)
        self.get_logger().info('TORTO Joint Angles Activated')

        self.servo_angles_FR = np.array([90. , 90. , 0.])
        self.servo_angles_FL = np.array([90. , 90. , 0.])
        self.servo_angles_BR = np.array([90. , 90. , 0.])
        self.servo_angles_BL = np.array([90. , 90. , 0.])
        # Gait params
        self.Vx = 0
        self.Vy = 0
        self.Vz = 0
        self.Vangular = 0
        self.angle_FR = 0
        self.angle_FL = 0
        self.angle_BR = 0
        self.angle_BL = 0
        self.step_offset = 0.75
        self.T = 1.6 #period of time (in seconds) of every step
        self.offset = np.array([0. , 0.5 , 0.5 , 0.]) 
        self.body_Foot_Initial = np.asarray([[0.136635,  -0.1121875, -0.14], 
                                             [0.136635,  0.1121875, -0.14], 
                                             [-0.136635,  -0.1121875, -0.14], 
                                             [-0.136635,  0.1121875, -0.14]])
        # Limb transformation params
        self.Foot_Position = np.asarray([[0, 0, 0], 
                                         [0, 0, 0], 
                                         [0, 0, 0], 
                                         [0, 0, 0]])
        # Body transformation params
        self.body_orientation = np.asarray([0, 0, 0])
        self.body_position = np.asarray([0, 0, 0])


        self.create_timer(0.02, self.control_loop)

    def callback_TORTO_Joint_Angles(self, msg):
        self.Vx = msg.vx
        self.Vy = msg.vy
        self.Vz = msg.vz
        self.Vangular = msg.vangular
        self.angle_FR = msg.angle_fr
        self.angle_FL = msg.angle_fl
        self.angle_BR = msg.angle_br
        self.angle_BL = msg.angle_bl
        self.step_offset = msg.step_offset
        self.T = msg.step_period
        self.offset = np.array([msg.gait_offset_fr, msg.gait_offset_fl, msg.gait_offset_br, msg.gait_offset_bl])
        self.body_orientation = np.asarray([msg.body_orientation_roll, msg.body_orientation_pitch, msg.body_orientation_yawn])
        self.body_position = np.asarray([msg.body_position_x, msg.body_position_y, msg.body_position_z])
        self.Foot_Position = np.asarray([[msg.foot_position_fr_x, msg.foot_position_fr_y, msg.foot_position_fr_z], 
                                         [msg.foot_position_fl_x, msg.foot_position_fl_y, msg.foot_position_fl_z], 
                                         [msg.foot_position_br_x, msg.foot_position_br_y, msg.foot_position_br_z], 
                                         [msg.foot_position_bl_x, msg.foot_position_bl_y, msg.foot_position_bl_z]])



    def publish_torto_jointAngles(self):
        msg = TortoJointAngles()
        msg.theta_deg_fr_detoid = float(self.servo_angles_FR[0])
        msg.theta_deg_fr_femur = float(self.servo_angles_FR[1])
        msg.theta_deg_fr_tibia = float(self.servo_angles_FR[2])
        msg.theta_deg_fl_detoid = float(self.servo_angles_FL[0])
        msg.theta_deg_fl_femur = float(self.servo_angles_FL[1])
        msg.theta_deg_fl_tibia = float(self.servo_angles_FL[2])
        msg.theta_deg_br_detoid = float(self.servo_angles_BR[0])
        msg.theta_deg_br_femur = float(self.servo_angles_BR[1])
        msg.theta_deg_br_tibia = float(self.servo_angles_BR[2])
        msg.theta_deg_bl_detoid = float(self.servo_angles_BL[0])
        msg.theta_deg_bl_femur = float(self.servo_angles_BL[1])
        msg.theta_deg_bl_tibia = float(self.servo_angles_BL[2])
        self.torto_joint_angles_publisher.publish(msg)


    def control_loop(self):
        body_Foot  = self.adpt_gait.step_Loop(self.Vx, self.Vy, self.Vz, self.angle_FR, self.angle_FL, self.angle_BR, self.angle_BL, self.Vangular, self.T, self.step_offset, self.offset, self.body_Foot_Initial)
        body_Foot = self.adpt_Limb.foot_tranformed_pose(self.Foot_Position, body_Foot)
        tf_Model_angles = self.tf_Model.angles_from_pose(self.body_orientation, self.body_position, body_Foot)
        self.servo_angles_FR = tf_Model_angles[0]
        self.servo_angles_FL = tf_Model_angles[1]
        self.servo_angles_BR = tf_Model_angles[2]
        self.servo_angles_BL = tf_Model_angles[3]
        self.body_Foot = tf_Model_angles[4]
        self.publish_torto_jointAngles()
        self.get_logger().info(f"{tf_Model_angles}")

def main(args=None):
    rclpy.init(args=args)
    node = TortoControllerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Node terminated.')
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
