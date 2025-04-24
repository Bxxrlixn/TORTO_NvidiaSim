#!/usr/bin/env python3

import numpy as np

class tortoAdaptiveLimb():
    def __init__(self):
        pass


    def foot_tranformed_pose(self, position , body_Foot):

        tranformedBody_foot = np.asarray([[(body_Foot[0][0] + position[0][0]), (body_Foot[0][1] + position[0][1]), (body_Foot[0][2] + position[0][2])],
                                          [(body_Foot[1][0] + position[1][0]), (body_Foot[1][1] + position[1][1]), (body_Foot[1][2] + position[1][2])],
                                          [(body_Foot[2][0] + position[2][0]), (body_Foot[2][1] + position[2][1]), (body_Foot[2][2] + position[2][2])],
                                          [(body_Foot[3][0] + position[3][0]), (body_Foot[3][1] + position[3][1]), (body_Foot[3][2] + position[3][2])]])

        return tranformedBody_foot