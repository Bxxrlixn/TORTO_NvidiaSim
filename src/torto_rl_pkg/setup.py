from setuptools import find_packages, setup

package_name = 'torto_rl_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools', 'gym', 'rclpy', 'stable-baselines3[extra]'],
    zip_safe=True,
    maintainer='sirapob',
    maintainer_email='leo555pratipnatsiri@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'torto_controller_node = torto_rl_pkg.torto_controller_node:main',
            'torto_ros_bridge = torto_rl_pkg.torto_ros_bridge:main'
        ],
    },
)
