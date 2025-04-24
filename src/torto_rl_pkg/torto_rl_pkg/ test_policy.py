from stable_baselines3 import PPO
from torto_rl_pkg.torto_env import TortoEnv
from torto_rl_pkg.torto_ros_bridge import TortoROSBridge
import rclpy

rclpy.init()
bridge = TortoROSBridge()
env = TortoEnv(bridge)
model = PPO.load('models/torto_ppo_model')
obs = env.reset()
while True:
    action, _ = model.predict(obs)
    obs, _, done, _ = env.step(action)
    if done:
        obs = env.reset()