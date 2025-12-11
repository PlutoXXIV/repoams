from setuptools import setup

package_name = 'fake_rplidar'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='crazy_rat',
    maintainer_email='your@email.com',
    description='Virtual RPLIDAR publisher for testing in ROS2 Jazzy',
    license='MIT',
    entry_points={
        'console_scripts': [
            'fake_scan = fake_rplidar.fake_scan:main',
        ],
    },
)

