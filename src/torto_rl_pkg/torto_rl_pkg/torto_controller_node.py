import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Vector3
from stable_baselines3 import PPO
from torto_rl_pkg.torto_env import TortoEnv
from torto_rl_pkg.torto_ros_bridge import TortoROSBridge
import numpy as np

class TortoController(Node):
    def __init__(self):
        super().__init__('torto_controller')

        # Load bridge and model
        self.bridge = TortoROSBridge()
        self.env = TortoEnv(self.bridge)
        self.model = PPO.load('models/torto_ppo_model')

        # Subscribe to direction input, or fallback to random walk
        self.goal_sub = self.create_subscription(Vector3, '/walk_direction', self.goal_callback, 10)
        self.use_random_direction = True
        self.env.goal_direction = np.random.uniform(-1.0, 1.0, size=2)

        # Step timer
        self.obs = self.env.reset()
        self.current_step = 0
        self.change_interval = 100
        self.timer = self.create_timer(0.1, self.step)

    def goal_callback(self, msg):
        self.use_random_direction = False
        self.env.goal_direction = np.array([msg.x, msg.y])

    def step(self):
        # Change goal randomly every N steps if no external input
        if self.use_random_direction:
            self.current_step += 1
            if self.current_step % self.change_interval == 0:
                self.env.goal_direction = np.random.uniform(-1.0, 1.0, size=2)

        # Predict and apply action
        action, _ = self.model.predict(self.obs)
        self.obs, _, done, _ = self.env.step(action)
        if done:
            self.obs = self.env.reset()
            self.current_step = 0

def main(args=None):
    rclpy.init(args=args)
    node = TortoController()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()