import gym
from gym import spaces
import numpy as np
import rclpy
import time

class TortoEnv(gym.Env):
    def __init__(self, bridge):
        super().__init__()
        self.bridge = bridge
        self.goal_direction = np.random.uniform(-1.0, 1.0, size=2)
        self.change_interval = 100
        self.current_step = 0
        self.start_time = time.time()
        self.max_episode_duration = 30.0  # seconds

        # Observation: 10 IMU + 100x3 LiDAR = 310
        self.observation_space = spaces.Box(low=-np.inf, high=np.inf, shape=(310,), dtype=np.float32)
        # Action: 32 dimensions
        self.action_space = spaces.Box(low=-1.0, high=1.0, shape=(32,), dtype=np.float32)
        self.velocity_estimate = np.zeros(2)


    def reset(self):
        self.bridge.publish_reset()
        self.goal_direction = np.random.uniform(-1.0, 1.0, size=2)
        self.current_step = 0
        self.start_time = time.time()
        return self._get_obs()

    def step(self, action):
        self.current_step += 1
        if self.current_step % self.change_interval == 0:
            self.goal_direction = np.random.uniform(-1.0, 1.0, size=2)

        self.bridge.send_action(action)
        rclpy.spin_once(self.bridge, timeout_sec=0.1)
        obs = self._get_obs()
        reward = self._compute_reward()
        done = self._check_done()
        return obs, reward, done, {}

    def _get_obs(self):
        imu_vec = self.bridge.get_imu_obs()
        lidar_vec = self.bridge.get_lidar_obs().flatten()
        return np.concatenate([imu_vec, lidar_vec])

    def _compute_reward(self):
        acc = self.bridge.get_imu_obs()[7:9]  # ax, ay
        dt = 0.1  # Time step duration

        # Integrate acceleration to get approximate velocity
        self.velocity_estimate += acc * dt
        movement_reward = float(np.dot(self.goal_direction, self.velocity_estimate))

        imu_vec = self.bridge.get_imu_obs()
        roll = imu_vec[0]  # Assuming roll is at index 0
        pitch = imu_vec[1]  # Assuming pitch is at index 1
        stability_penalty = 0.0
        if abs(roll) > 0.2:
            stability_penalty -= abs(roll) * 2.0
        if abs(pitch) > 0.2:
            stability_penalty -= abs(pitch) * 2.0

        return movement_reward + stability_penalty
    
    def _check_done(self):
        imu_vec = self.bridge.get_imu_obs()
        roll = imu_vec[0]
        pitch = imu_vec[1]
        time_exceeded = (time.time() - self.start_time) > self.max_episode_duration
        return abs(roll) > 1.57 or abs(pitch) > 1.57 or time_exceeded
