#!/usr/bin/env python
import rclpy
from rclpy.node import Node
import numpy as np
from torto_sim_ctrl.angles_tran2sim import anglesTrans2Sim
from sensor_msgs.msg import JointState
from torto_interfaces.msg import TortoJointAngles

class AnglesToJointState(Node):
    def __init__(self):
        super().__init__('angles_to_joint_state')

        self.angles_trans2Sim = anglesTrans2Sim()

        # Define the joint names and positions as parameters
        self.joint_names = self.declare_parameter("joint_names", [
            "body_detoidFL_joint", "body_detoidFR_joint", "body_detoidBL_joint", "body_detoidBR_joint",
            "detoidFL_FemurFL_joint", "detoidFR_FemurFR_joint", "detoidBL_FemurBL_joint", "detoidBR_FemurBR_joint",
            "FemurFL_TiBiaFL_joint", "FemurFR_TiBiaFR_joint", "FemurBL_TiBiaBL_joint", "FemurBR_TiBiaBR_joint"
        ]).value
        
        self.joint_positions = self.declare_parameter("joint_positions", [
            -0.32810399999999995, 0.12275199999999997, -0.18841600000000003, -6.399999999995298e-05,
            -0.7845000000000001, -0.7845000000000001, 0.7829896000000001, 0.7853431000000001,
            1.3901219999999999, 1.3901219999999999, 1.75, 1.75
        ]).value

        # Initialize JointState message
        self.joint_state = JointState()
        self.joint_state.name.extend(self.joint_names)  # Add joint names
        self.joint_state.position.extend(self.joint_positions)  # Add joint positions
        self.joint_state.velocity = []  # Empty velocity
        self.joint_state.effort = []  # Empty effort

        # Create a publisher for joint_states
        self.joint_pub = self.create_publisher(JointState, "joint_states", 10)

        # Create subscribers for each joint
        self.subscriber_ = self.create_subscription(TortoJointAngles, "torto_motor_angles", self.callback_TORTO_Motor_Angles, 10)

    def callback_TORTO_Motor_Angles(self, msg):
        # Update the position of the specified joint
        self.RAngles = np.asarray([[msg.theta_deg_fr_detoid,  msg.theta_deg_fr_femur, msg.theta_deg_fr_tibia], 
                                  [msg.theta_deg_fl_detoid,  msg.theta_deg_fl_femur, msg.theta_deg_fl_tibia], 
                                  [msg.theta_deg_br_detoid,  msg.theta_deg_br_femur, msg.theta_deg_br_tibia], 
                                  [msg.theta_deg_bl_detoid,  msg.theta_deg_bl_femur, msg.theta_deg_bl_tibia]])
        self.SAngles = self.angles_trans2Sim.trans_angles(self.RAngles) 
        self.joint_state.position = [
            self.SAngles[1][0], self.SAngles[0][0], self.SAngles[3][0], self.SAngles[2][0],
            self.SAngles[1][1], self.SAngles[0][1], self.SAngles[3][1], self.SAngles[2][1],
            self.SAngles[1][2], self.SAngles[0][2], self.SAngles[3][2], self.SAngles[2][2]
        ]
        # Add timestamp to the joint_state message
        self.joint_state.header.stamp = self.get_clock().now().to_msg()
        # Set frame_id to an empty string as per your example
        self.joint_state.header.frame_id = ""
        # Publish the updated joint state
        self.joint_pub.publish(self.joint_state)


def main(args=None):
    rclpy.init(args=args)
    node = AnglesToJointState()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Node terminated.')
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
