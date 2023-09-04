from setuptools import setup
from glob import glob
import os


package_name = 'decawave_pose_tracker'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*')))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='asrl',
    maintainer_email='joezou5555@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "listener_pose_saver = decawave_pose_tracker.listener_pose_saver:main",
            "listener_pose_xyzt= decawave_pose_tracker.listener_pose_xyzt:main",
            "listener_pose_xyz= decawave_pose_tracker.listener_pose_xyz:main",
            "listener_pose_xy = decawave_pose_tracker.listener_pose_xy:main",
            "listener_pose_xz = decawave_pose_tracker.listener_pose_xz:main",
            "listener_pose_yz = decawave_pose_tracker.listener_pose_yz:main",
            "tag_dist_saver = decawave_pose_tracker.tag_dist_saver:main",
            "tag_dist_pub = decawave_pose_tracker.tag_dist_pub:main",
        ],
    },
)
