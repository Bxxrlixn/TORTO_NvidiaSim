from stable_baselines3 import PPO
from torto_rl_pkg.torto_env import TortoEnv
from torto_rl_pkg.torto_ros_bridge import TortoROSBridge

if __name__ == '__main__':
    import rclpy
    rclpy.init()

    bridge = TortoROSBridge()
    env = TortoEnv(bridge)
    model = PPO("MlpPolicy", env, verbose=1)
    model.learn(total_timesteps=1000000)
    model.save("models/torto_ppo_model")

    bridge.destroy_node()
    rclpy.shutdown()