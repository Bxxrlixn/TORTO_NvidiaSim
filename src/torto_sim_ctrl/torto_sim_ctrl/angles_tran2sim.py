#!/usr/bin/env python3

import numpy as np
import math as m

class anglesTrans2Sim:
    def __init__(self):
        # Assuming there are 12 values for 4 legs (3 servos per leg)
        self.offset = [-181, -5, -185, -2, -190, 3, -1, -175, 5, -173, 0, -180]

    def set_offset(self, offset):
        self.offset = offset

    def trans_angles(self, angles):
        # angles should be a list of lists: [ [angle1, angle2, angle3], [angle1, angle2, angle3], ... ]
        adjusted_angles = []
        for leg in range(4):
            leg_angles = angles[leg]
            # Apply offset for each joint in the leg
            adjusted_leg_angles = [abs(leg_angles[i] + self.offset[leg * 3 + i]) for i in range(3)]
            transLeg = self.calculate_angles(adjusted_leg_angles[0], adjusted_leg_angles[1], adjusted_leg_angles[2])
            fixed_Angle = self.check_axis(transLeg[0], transLeg[1], transLeg[2], leg)
            adjusted_angles.append(fixed_Angle)
        return adjusted_angles
    
    def check_domain(self, d):
        if -1 <= d <= 1:
            self.previous_D = d  
            return d
        else:
            print("____OUT OF DOMAIN____ Using previous value:", self.previous_D)
            return self.previous_D

    def check_axis(self, detoid, femur, tibia, leg):
        if leg == 0:
            realdetoid = detoid
            realfemur = femur
            realtibia = tibia
        elif leg == 1:
            realdetoid = -detoid
            realfemur = femur
            realtibia = tibia
        elif leg == 2:
            realdetoid = detoid
            realfemur = -femur
            realtibia = np.pi-tibia
        elif leg == 3:
            realdetoid = -detoid
            realfemur = -femur
            realtibia = np.pi-tibia
        else:
            realdetoid = detoid
            realfemur = femur
            realtibia = tibia
        return [realdetoid, realfemur, realtibia]
    
    def calculate_angles(self, detoidAngle, femurAngle, tibiaAngle):    
        detoidTheta = np.radians(detoidAngle)
        N = np.radians(220.7 - femurAngle)
        O = np.sqrt(1678.24 - (1593.6 * self.check_domain(np.cos(N))))
        L = np.arcsin((24*self.check_domain(np.sin(N)))/O) + np.arccos(O/90)
        C = 4.0037853041 - (L + np.radians(tibiaAngle))
        femurTheta = (np.radians(tibiaAngle) + C) - (np.pi/2)
        S = np.sqrt(8676 - (4320 * self.check_domain(np.cos(C))))
        tibiaTheta = np.arcsin((24*self.check_domain(np.sin(C)))/S) + np.arccos(((S ** 2) - 6500)/(80 * S))

        detoidTheta = detoidTheta - (np.pi/2)
        femurTheta = femurTheta - (np.pi/2)
        print([detoidTheta, femurTheta , tibiaTheta])

        return [detoidTheta, femurTheta , tibiaTheta]
