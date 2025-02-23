#!/usr/bin/env python3

import keyboard

class KeyCtrlParams:
    def __init__(self):
        self.Spacetoggle = False  # Initial state
        # Define the keys
        keys = [
            "G", "B", "L", "M", "space", "numpad8", "numpad7", "numpad4", "numpad1",
            "numpad2", "numpad3", "numpad6", "numpad9", "X", "Y", "Z", "A", "up", 
            "down", "V", "W", "Q", "T", "S", "O", "P"
        ]
        # Add hotkeys for each defined key
        for key in keys:
            keyboard.add_hotkey(key, self.toggle_boolean)

    def toggle_boolean(self):
        self.Spacetoggle = not self.Spacetoggle
        print(f"Toggle state: {self.Spacetoggle}")

# Run the script
key_ctrl = KeyCtrlParams()
print("Press keys to toggle. Press 'esc' to exit.")
keyboard.wait("esc")
