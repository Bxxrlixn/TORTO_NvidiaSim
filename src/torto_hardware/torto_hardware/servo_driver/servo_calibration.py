import numpy as np
import math as m

class anglesConfig:
    def __init__(self):
        self.offset = [-181, 5, -185, 2, -190, -3, 1, -175, -5, -173, 0, -180]
        self.previous_D = 0.0  # Default initial value

    def set_offset(self, offset):
        self.offset = offset

    def calibrate_angles(self, angles):
        adjusted_angles = []
        for leg in range(4):
            leg_angles = angles[leg]
            adjusted_leg_angles = [abs(leg_angles[i] + self.offset[leg * 3 + i]) for i in range(3)]
            rounded_leg_angles = []
            for i in range(3):
                val = adjusted_leg_angles[i]
                # Safe check before rounding and converting
                if np.isnan(val):
                    print(f"____OUT OF DOMAIN____ Using previous value: {self.previous_D}")
                    val = self.previous_D
                else:
                    self.previous_D = val
                rounded_leg_angles.append(int(round(val)))
            adjusted_angles.append(rounded_leg_angles)
        return adjusted_angles

    def check_domain(self, d):
        if not np.isnan(d):
            self.previous_D = d  
            return d
        else:
            print("____OUT OF DOMAIN____ Using previous value:", self.previous_D)
            return self.previous_D
