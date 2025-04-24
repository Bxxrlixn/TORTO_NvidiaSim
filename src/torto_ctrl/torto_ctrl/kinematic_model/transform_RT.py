#!/usr/bin/env python3

import numpy as np

class tortoTransform():
    def __init__(self):
        pass

    def Rx(self, roll):
        return np.matrix([[1,            0,             0, 0],
                        [0, np.cos(roll), -np.sin(roll), 0],
                        [0, np.sin(roll),  np.cos(roll), 0],
                        [0,            0,             0, 1]])

    def Ry(self, pitch):
        return np.matrix([[ np.cos(pitch), 0, np.sin(pitch), 0],
                        [             0, 1,             0, 0],
                        [-np.sin(pitch), 0, np.cos(pitch), 0],
                        [             0, 0,             0, 1]])

    def Rz(self, yaw):
        return np.matrix([[np.cos(yaw), -np.sin(yaw), 0, 0],
                        [np.sin(yaw),  np.cos(yaw), 0, 0],
                        [          0,            0, 1, 0],
                        [          0,            0, 0, 1]])
        
    def Rxyz(self, roll , pitch , yaw):
        if roll != 0. or pitch != 0. or yaw != 0.:
            R = self.Rx(roll)*self.Ry(pitch)*self.Rz(yaw)
            return R
        else:
            return np.identity(4)
        

    def RTmatrix(self, orientation, position):
        """compose translation and rotation"""
        roll = np.deg2rad(orientation[0])
        pitch = np.deg2rad(orientation[1])
        yaw = np.deg2rad(orientation[2])
        x0 = position[0]
        y0 = position[1]
        z0 = position[2]
        
        translation = np.matrix([[1, 0, 0, x0],#Translation matrix
                                [0, 1, 0, y0],
                                [0, 0, 1, z0],
                                [0, 0, 0,  1]])
        rotation = self.Rxyz(roll, pitch, yaw)#rotation matrix
        
        return rotation*translation
        
    def transform(self, coord,rotation,translation):
        """transforms a vector to a desire rotation and translation"""
        vector = np.array([[coord[0]],
                        [coord[1]],
                        [coord[2]],
                        [      1]])
        
        tranformVector = self.RTmatrix(rotation,translation)*vector
        return np.array([tranformVector[0,0], tranformVector[1,0], tranformVector[2,0]])