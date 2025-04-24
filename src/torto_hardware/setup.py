from setuptools import find_packages, setup

package_name = 'torto_hardware'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='sirapob',
    maintainer_email='sirapob@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "arduino_serial_node = torto_hardware.arduino_serial_node:main",
            "lidar_scan2cloud_node = torto_hardware.lidar_scan2cloud_node:main"
        ],
    },
)
