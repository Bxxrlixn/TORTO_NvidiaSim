import time

class SensorCalibration:
    """Handles calibration (bias calculation) for MPU6050."""
    def __init__(self):
        self.roll_offset, self.pitch_offset, self.yaw_offset = 0, 0, 0

    def calibrate(self, roll_sum, pitch_sum, yaw_sum, samples):
        """Computes bias (offsets) by averaging stationary sensor readings."""
        print("Calibrating... Keep MPU6050 still.")

        self.roll_offset = roll_sum / samples
        self.pitch_offset = pitch_sum / samples
        self.yaw_offset = yaw_sum / samples

        print(f"Calibration Done: roll Bias={self.roll_offset:.2f}, pitch Bias={self.pitch_offset:.2f}, yaw Bias={self.yaw_offset:.2f}")

    def apply_calibration(self, roll, pitch, yaw):
        """Applies calibration offsets to sensor readings."""
        calibrated_roll = -(roll - self.roll_offset)
        calibrated_pitch = pitch - self.pitch_offset
        calibrated_yaw = yaw 


        return calibrated_roll, calibrated_pitch, calibrated_yaw


