from setuptools import find_packages, setup

package_name = 'torto_odometry'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', ['launch/torto_main_tf.launch.py']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='sirapob',
    maintainer_email='leo555pratipnatsiri@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "odom_depen_on_imu_node = torto_odometry.odom_depen_on_imu_node:main"
        ],
    },
)
