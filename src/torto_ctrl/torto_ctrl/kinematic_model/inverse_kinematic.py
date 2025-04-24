#!/usr/bin/env python3

import numpy as np

class InverseKinematic:
    def __init__(self):
        self.previous_D = 0

    def check_domain(self, d):
        if -1 <= d <= 1:
            self.previous_D = d  
            return d
        else:
            print("____OUT OF DOMAIN____ Using previous value:", self.previous_D)
            return self.previous_D
    
    def check_axis(self, x, y, z, leg):
        if leg == "FR":
            realX = -x*1000
            realY = -y*1000
            realZ = -z*1000
        elif leg == "FL":
            realX = -x*1000
            realY = y*1000
            realZ = -z*1000
        elif leg == "BR":
            realX = x*1000
            realY = -y*1000
            realZ = -z*1000
        elif leg == "BL":
            realX = x*1000
            realY = y*1000
            realZ = -z*1000
        else:
            print("___FORGET_TO_ADD_LEG_POS___")
            realX = 0
            realY = 42.285
            realZ = 140
        return [realX, realY, realZ]

    def calculate_angles(self, oX, oY, oZ, limb):
        """Calculate inverse kinematics angles for a leg given (x, y, z) position."""
        fixed_axis = self.check_axis(oX, oY, oZ, limb)
        x = fixed_axis[0]
        y = fixed_axis[1]
        z = fixed_axis[2]

        detoid_angle_limit_min = 0.8308  
        detoid_angle_limit_max = 2.3508

        phi_limit_min = 0.7816                   
        phi_limit_max = 2.0016

        zeta_limit_min = 0.3708     
        zeta_limit_max = np.pi/2    

        D = np.sqrt((y ** 2) + (z ** 2) - 1788.021)
        DetoidAngle = np.arctan2(y, z) + np.arctan2(D, 42.285)
        DetoidAngle = np.clip(DetoidAngle, detoid_angle_limit_min, detoid_angle_limit_max) 

        H = np.sqrt((x ** 2) + (D ** 2))
        phi = np.arccos(self.check_domain(((H ** 2) - 16200) / -16200))
        phi = np.clip(phi, phi_limit_min, phi_limit_max)

        zeta = np.arctan2(x, D) + np.arcsin(self.check_domain((90 * np.sin(phi) / H)))
        zeta = np.clip(zeta, zeta_limit_min, zeta_limit_max)

        I = np.sqrt((9700) - (7200 * np.cos(phi)))
        K = np.arccos(self.check_domain(((I ** 2) - 8676) / (-4320)))
        C = np.arcsin(self.check_domain((40 * np.sin(phi)) / I)) + np.arcsin(self.check_domain((90 * np.sin(K)) / I))
        TibiaAngle = np.pi / 2 - (C - zeta)
        L = 4.0037853041 - C - TibiaAngle
        J = np.sqrt((3127.24) - (2988 * np.cos(L)))
        M = np.arccos(self.check_domain(((J ** 2) - 2601) / (-2160)))
        N = np.arcsin(self.check_domain((45 * np.sin(L)) / J)) + np.arcsin(self.check_domain((45 * np.sin(M)) / J))
        FemurAngle = 3.8519416592 - N
        return [np.degrees(DetoidAngle), np.degrees(FemurAngle), np.degrees(TibiaAngle)]
