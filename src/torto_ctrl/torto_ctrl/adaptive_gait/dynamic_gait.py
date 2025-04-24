#!/usr/bin/env python3

import time
import numpy as np
from scipy.interpolate import interp1d

#function neccesary to build a parametrized bezier curve 
def nCk(n,k): #calculates binomial factor (n k)
    return np.math.factorial(n)/(np.math.factorial(k)*np.math.factorial(n-k))

def bezier(t,k,point):
    n = 9 #10 points bezier curve
    return point*nCk(n,k)*np.power(t,k)*np.power(1-t,n-k)


#gait planner in order to move all feet
class dynamicGait():
    def __init__(self):
        self.body_Foot = np.zeros([4,3])  
        self.t = 0.
        self.tStance = 0.
        self.lastTime = 0.
        self.alpha = 0.
        self.s = False

    def calculateStance(self , t_st , Vx, Vy, Vz, angle):
        #cylindrical coordinates
        c, s = np.cos(np.deg2rad(angle)), np.sin(np.deg2rad(angle))
        
        A = 0.0005
        halfStance = 0.05
        p_stance=halfStance*(1-2*t_st)
        
        stanceX =  c*p_stance*np.abs(Vx)
        stanceY = -s*p_stance*np.abs(Vy)
        
        if Vz == 0:
            stanceZ = 0
        else:
            stanceZ = -A*np.cos(np.pi/(2*halfStance)*p_stance)

        return stanceX, stanceY , stanceZ
        
        
    def calculateBezier_swing(self , t_sw , Vx, Vy, Vz, angle):
        #cylindrical coordinates
        c, s = np.cos(np.deg2rad(angle)), np.sin(np.deg2rad(angle))         
        
        X = np.abs(Vx)*c*np.array([-0.05, -0.06, -0.07, -0.07, 0., 0., 0.07, 0.07, 0.06, 0.05])
        Y = np.abs(Vy)*s*np.array([0.05, 0.06, 0.07, 0.07, 0., -0., -0.07, -0.07, -0.06, -0.05])
        Z = np.abs(Vz)*np.array([0., 0., 0.05, 0.05, 0.05, 0.06, 0.06, 0.06, 0., 0.])
        
        swingX = 0.
        swingY = 0.
        swingZ = 0.

        for i in range(10): #sum all terms of the curve
            swingX = swingX + bezier(t_sw,i,X[i]) 
            swingY = swingY + bezier(t_sw,i,Y[i])
            swingZ = swingZ + bezier(t_sw,i,Z[i])
            
        return swingX, swingY , swingZ


    def stepTrajectory(self , t , Vx, Vy, Vz, angle , Wrotational, stepOffset, centerToFoot):
        if (t >= 1):
            t = t - 1.
        #step describes a circuference in order to rotationalate
        #radius of the ciscunscribed circle
        r = np.sqrt(centerToFoot[0]**2 + centerToFoot[1]**2)
        footAngle = np.arctan2(centerToFoot[1],centerToFoot[0]) 
        
        if Wrotational >= 0.:#As it is defined inside cylindrical coordinates, when Wrotational < 0, this is the same as rotationalate it 180ª
            circleTrayectory = 90. - np.rad2deg(footAngle - self.alpha)
        else:
            circleTrayectory = 270. - np.rad2deg(footAngle - self.alpha)
        
        if t <= stepOffset: #stance phase
            tStance = t/stepOffset
            #longitudinal step
            stepX_longitudinal , stepY_longitudinal , stepZ_longitudinal = self.calculateStance(tStance , Vx, Vy, Vz, angle)
            #rotational step
            stepX_rotational , stepY_rotational , stepZ_rotational = self.calculateStance(tStance , Wrotational, Wrotational, Wrotational, circleTrayectory)

        else: #swing phase
            tSwing = (t-stepOffset)/(1-stepOffset)
            #longitudinal step
            stepX_longitudinal , stepY_longitudinal , stepZ_longitudinal = self.calculateBezier_swing(tSwing , Vx, Vy, Vz, angle)
            #rotational step
            stepX_rotational , stepY_rotational , stepZ_rotational = self.calculateBezier_swing(tSwing , Wrotational, Wrotational, Wrotational, circleTrayectory)

        #define the sign for every quadrant 
        if (centerToFoot[1] > 0):
            if (stepX_rotational < 0):
                self.alpha = -np.arctan2(np.sqrt(stepX_rotational**2 + stepY_rotational**2) , r)
            else:
                self.alpha = np.arctan2(np.sqrt(stepX_rotational**2 + stepY_rotational**2) , r)   
        else:
            if (stepX_rotational < 0):
                self.alpha = np.arctan2(np.sqrt(stepX_rotational**2 + stepY_rotational**2) , r)
            else:
                self.alpha = -np.arctan2(np.sqrt(stepX_rotational**2 + stepY_rotational**2) , r)   

        coord = np.empty(3)        
        coord[0] = stepX_longitudinal + stepX_rotational
        coord[1] = stepY_longitudinal + stepY_rotational
        coord[2] = stepZ_longitudinal + stepZ_rotational
        
        return coord 
        
        
    def step_Loop(self , Vx, Vy, Vz, angle_FR, angle_FL, angle_BR, angle_BL, Wrotational, T, stepOffset, offset , body_F00t):
        
        if T <= 0.01: 
            T = 0.01
        
        if (self.t >= 0.99):
            self.lastTime= time.time()
        self.t = (time.time()-self.lastTime)/T

        step_coordinate = self.stepTrajectory(self.t + offset[0] , Vx, Vy, Vz, angle_FR, Wrotational, stepOffset, np.squeeze(np.asarray(body_F00t[0,:]))) #FR
        self.body_Foot[0,0] =  body_F00t[0,0] + step_coordinate[0]
        self.body_Foot[0,1] =  body_F00t[0,1] + step_coordinate[1] 
        self.body_Foot[0,2] =  body_F00t[0,2] + step_coordinate[2]
    
        step_coordinate = self.stepTrajectory(self.t + offset[1] , Vx, Vy, Vz, angle_FL, Wrotational, stepOffset, np.squeeze(np.asarray(body_F00t[1,:])))#FL
        self.body_Foot[1,0] =  body_F00t[1,0] + step_coordinate[0]
        self.body_Foot[1,1] =  body_F00t[1,1] + step_coordinate[1]
        self.body_Foot[1,2] =  body_F00t[1,2] + step_coordinate[2]
        
        step_coordinate = self.stepTrajectory(self.t + offset[2] , Vx, Vy, Vz, angle_BR, Wrotational, stepOffset, np.squeeze(np.asarray(body_F00t[2,:])))#BR
        self.body_Foot[2,0] =  body_F00t[2,0] + step_coordinate[0]
        self.body_Foot[2,1] =  body_F00t[2,1] + step_coordinate[1]
        self.body_Foot[2,2] =  body_F00t[2,2] + step_coordinate[2]

        step_coordinate = self.stepTrajectory(self.t + offset[3] , Vx, Vy, Vz, angle_BL, Wrotational, stepOffset, np.squeeze(np.asarray(body_F00t[3,:])))#BL
        self.body_Foot[3,0] =  body_F00t[3,0] + step_coordinate[0]
        self.body_Foot[3,1] =  body_F00t[3,1] + step_coordinate[1]
        self.body_Foot[3,2] =  body_F00t[3,2] + step_coordinate[2]
#            

        return self.body_Foot
    