#!/usr/bin/env python3

import numpy as np
from torto_ctrl.kinematic_model.transform_RT import tortoTransform
from torto_ctrl.kinematic_model.inverse_kinematic import InverseKinematic

class tortoTransformationModel():
    def __init__(self):

        self.ik = InverseKinematic()
        self.tortoTransform = tortoTransform()
        self.Xbody_detoid = 0.273270 #length btw torto joints
        self.Ybody_detoid = 0.139805 #width btw torto joints
        #initial foot position relative to body in meter
        self.Xbody_foot = self.Xbody_detoid
        self.Ybody_foot = 0.224375
        self.H_default = 0.14
        #body to detoid vector
        self.body_DetoidFR = np.array([ self.Xbody_detoid/2, -self.Ybody_detoid/2 , 0])
        self.body_DetoidFL = np.array([ self.Xbody_detoid/2,  self.Ybody_detoid/2 , 0])
        self.body_DetoidBR = np.array([-self.Xbody_detoid/2, -self.Ybody_detoid/2 , 0])
        self.body_DetoidBL = np.array([-self.Xbody_detoid/2,  self.Ybody_detoid/2 , 0])
        #body to foot vector
        self.body_FootFR = np.array([ self.Xbody_foot/2 , -self.Ybody_foot/2 , -self.H_default])
        self.body_FootFL = np.array([ self.Xbody_foot/2 ,  self.Ybody_foot/2 , -self.H_default])
        self.body_FootBR = np.array([-self.Xbody_foot/2 , -self.Ybody_foot/2 , -self.H_default])
        self.body_FootBL = np.array([-self.Xbody_foot/2 ,  self.Ybody_foot/2 , -self.H_default])

    def angles_from_pose(self, orientation , position , body_Foot):
        body_FootFR = np.asarray([body_Foot[0][0],body_Foot[0][1],body_Foot[0][2]])
        body_FootFL = np.asarray([body_Foot[1][0],body_Foot[1][1],body_Foot[1][2]])
        body_FootBR = np.asarray([body_Foot[2][0],body_Foot[2][1],body_Foot[2][2]])
        body_FootBL = np.asarray([body_Foot[3][0],body_Foot[3][1],body_Foot[3][2]])
        # defines vertices which transform with body
        shifted_body_DetoidFR = self.tortoTransform.transform(self.body_DetoidFR , orientation, position) 
        shifted_body_DetoidFL = self.tortoTransform.transform(self.body_DetoidFL , orientation, position)
        shifted_body_DetoidBR = self.tortoTransform.transform(self.body_DetoidBR , orientation, position)
        shifted_body_DetoidBL = self.tortoTransform.transform(self.body_DetoidBL , orientation, position)
        # defines detoid to foot leg vector
        detoid_footFR = body_FootFR - shifted_body_DetoidFR
        detoid_footFL = body_FootFL - shifted_body_DetoidFL
        detoid_footBR = body_FootBR - shifted_body_DetoidBR
        detoid_footBL = body_FootBL - shifted_body_DetoidBL
        # undo transformation of leg vector to keep feet still from body transformation
        undoOrientation = [ -w for w in orientation]
        undoPosition = [ -xyz for xyz in position]
        FRcoordinate = self.tortoTransform.transform(detoid_footFR , undoOrientation, undoPosition)
        FLcoordinate = self.tortoTransform.transform(detoid_footFL , undoOrientation, undoPosition)
        BRcoordinate = self.tortoTransform.transform(detoid_footBR , undoOrientation, undoPosition)
        BLcoordinate = self.tortoTransform.transform(detoid_footBL , undoOrientation, undoPosition)

        angles_FR = self.ik.calculate_angles(FRcoordinate[0], FRcoordinate[1], FRcoordinate[2], "FR")
        angles_FL = self.ik.calculate_angles(FLcoordinate[0], FLcoordinate[1], FLcoordinate[2], "FL")
        angles_BR = self.ik.calculate_angles(BRcoordinate[0], BRcoordinate[1], BRcoordinate[2], "BR")
        angles_BL = self.ik.calculate_angles(BLcoordinate[0], BLcoordinate[1], BLcoordinate[2], "BL")
        
        nBody_footFR =  shifted_body_DetoidFR + FRcoordinate
        nBody_footFL = shifted_body_DetoidFL + FLcoordinate
        nBody_footBR = shifted_body_DetoidBR + BRcoordinate
        nBody_footBL = shifted_body_DetoidBL + BLcoordinate

        nbody_foot = np.asarray([[nBody_footFR[0] , nBody_footFR[1] , nBody_footFR[2]],
                                [nBody_footFL[0] , nBody_footFL[1] , nBody_footFL[2]],
                                [nBody_footBR[0] , nBody_footBR[1] , nBody_footBR[2]],
                                [nBody_footBL[0] , nBody_footBL[1] , nBody_footBL[2]]])

        return angles_FR, angles_FL, angles_BR, angles_BL , nbody_foot