from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='torto_rl_pkg',
            executable='torto_controller_node',
            name='torto_controller_node',
            output='screen'
        )
    ])