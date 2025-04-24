#!/usr/bin/env python3

import numpy as np
from evdev import ecodes

class ButtonStatus:
    def __init__(self):
        
        # Button states (True/False for pressed/released)
        self.button_states = {
            "L1": False,
            "L2": False,
            "R1": False,
            "R2": False,
            "START": False,
            "SELECT": False,
            "X": False,
            "CIRCLE": False,
            "SQUARE": False,
            "TRIANGLE": False
        }
        
        # D-Pad states (True/False for pressed/released)
        self.dpad_states = {
            "UP": False,
            "DOWN": False,
            "LEFT": False,
            "RIGHT": False
        }

        # Joystick states (True for movement, False for idle, with angle when moved)
        self.left_joystick = {"active": False, "angle": 0, "X": 127}
        self.right_joystick = {"active": False, "angle": 0, "X": 127}
        
    
    def handle_button_press(self, event):
        if event.value == 1:  # Button pressed
            button_name = self.get_button_name(event.code)
            if button_name:
                if not self.button_states[button_name]:
                    self.button_states[button_name] = True
        elif event.value == 0:  # Button released
            button_name = self.get_button_name(event.code)
            if button_name:
                if self.button_states[button_name]:
                    self.button_states[button_name] = False

    def get_button_name(self, code):
        # Map button codes to button names
        if code == ecodes.BTN_TL:
            return "L1"
        elif code == ecodes.BTN_TL2:
            return "L2"
        elif code == ecodes.BTN_TR:
            return "R1"
        elif code == ecodes.BTN_TR2:
            return "R2"
        elif code == ecodes.BTN_START:
            return "START"
        elif code == ecodes.BTN_SELECT:
            return "SELECT"
        elif code == ecodes.BTN_SOUTH:
            return "X"
        elif code == ecodes.BTN_EAST:
            return "CIRCLE"
        elif code == ecodes.BTN_WEST:
            return "SQUARE"
        elif code == ecodes.BTN_NORTH:
            return "TRIANGLE"
        return None

    def handle_dpad(self, event):
        if event.code == ecodes.ABS_HAT0Y:
            if event.value == -1:  # UP
                if not self.dpad_states["UP"]:
                    self.dpad_states["UP"] = True
            elif event.value == 1:  # DOWN
                if not self.dpad_states["DOWN"]:
                    self.dpad_states["DOWN"] = True
            else:
                if self.dpad_states["UP"]:
                    self.dpad_states["UP"] = False
                if self.dpad_states["DOWN"]:
                    self.dpad_states["DOWN"] = False
        elif event.code == ecodes.ABS_HAT0X:
            if event.value == 1:  # RIGHT
                if not self.dpad_states["RIGHT"]:
                    self.dpad_states["RIGHT"] = True
            elif event.value == -1:  # LEFT
                if not self.dpad_states["LEFT"]:
                    self.dpad_states["LEFT"] = True
            else:
                if self.dpad_states["RIGHT"]:
                    self.dpad_states["RIGHT"] = False
                if self.dpad_states["LEFT"]:
                    self.dpad_states["LEFT"] = False

    def handle_joystick(self, event):
        center_value = 128
        drift_threshold = 6  # Drift threshold for joystick center value

        if event.code == ecodes.ABS_X:
            self.left_joystick["x"] = event.value
        elif event.code == ecodes.ABS_Y:
            self.left_joystick["y"] = event.value
        elif event.code == ecodes.ABS_RX:
            self.right_joystick["x"] = event.value
        elif event.code == ecodes.ABS_RY:
            self.right_joystick["y"] = event.value
        
        # Calculate the angle only if the joystick moves beyond the threshold
        if 'x' in self.left_joystick and 'y' in self.left_joystick:
            x = self.left_joystick["x"] - center_value
            y = self.left_joystick["y"] - center_value
            if abs(x) > drift_threshold or abs(y) > drift_threshold:
                # Calculate angle in degrees
                angle = np.degrees(np.arctan2(x, -y))  # Reversed for proper direction
                # Angle range: 0 to 180 (Right) and 0 to -180 (Left)
                angle = np.clip(angle, -180, 180)
                if not self.left_joystick["active"]:
                    self.left_joystick["active"] = True
                self.left_joystick["angle"] = round(angle, 2)
            else:
                if self.left_joystick["active"]:
                    self.left_joystick["active"] = False
                    self.left_joystick["angle"] = 0
        
        if 'x' in self.right_joystick and 'y' in self.right_joystick:
            x = self.right_joystick["x"] - center_value
            y = self.right_joystick["y"] - center_value
            if abs(x) > drift_threshold or abs(y) > drift_threshold:
                # Calculate angle in degrees
                angle = np.degrees(np.arctan2(x, -y))  # Reversed for proper direction
                # Angle range: 0 to 180 (Right) and 0 to -180 (Left)
                angle = np.clip(angle, -180, 180)
                if not self.right_joystick["active"]:
                    self.right_joystick["active"] = True
                self.right_joystick["angle"] = round(angle, 2)
            else:
                if self.right_joystick["active"]:
                    self.right_joystick["active"] = False
                    self.right_joystick["angle"] = 0

    def get_button_states(self):
        return self.button_states

    def get_dpad_states(self):
        return self.dpad_states

    def get_joystick_states(self):
        return {
            "left_joystick": self.left_joystick,
            "right_joystick": self.right_joystick
        }
