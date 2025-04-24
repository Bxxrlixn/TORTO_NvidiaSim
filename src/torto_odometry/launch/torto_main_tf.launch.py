from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # Static TF: base link to IMU
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='static_tf_pub_imu',
            arguments=['-0.0676', '-0.03725', '0.00062', '0', '0', '1.5708', 'tortoBody_link', 'tortoIMU_link'],
            output='screen'
        ),

        # Static TF: base link to LiDAR (optional)
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='static_tf_pub_lidar',
            arguments=['0.037', '0', '0.1282', '0', '0', '0', 'tortoBody_link', 'tortoLidar_link'],
            output='screen'
        ),
    ])
