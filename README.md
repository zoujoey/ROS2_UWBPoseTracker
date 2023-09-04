# ROS2_UWBPoseTracker

## Description

ROS2_UWBPoseTracker is a ROS2 package that provides several nodes for tracking and visualizing UWB (Ultra-Wideband) device positions and distances to anchors. Each node serves a specific purpose and is intended for use on either a listener device or a moving tag device. Below is an overview of each node:

### Listener Nodes

#### listener_pose_xy

- **Use On**: Listener Device
- **Functionality**: Listens to UWB data and publishes and graphs the x-coordinate against the y-coordinate.
- **Topic Published**: `/Wifi/Channel_Three`

#### listener_pose_yz

- **Use On**: Listener Device
- **Functionality**: Listens to UWB data and publishes and graphs the y-coordinate against the z-coordinate.
- **Topic Published**: `/Wifi/Channel_Three`

#### listener_pose_xz

- **Use On**: Listener Device
- **Functionality**: Listens to UWB data and publishes and graphs the x-coordinate against the z-coordinate.
- **Topic Published**: `/Wifi/Channel_Three`

#### listener_pose_xyz

- **Use On**: Listener Device
- **Functionality**: Listens to UWB data and publishes and graphs the x-coordinate, y-coordinate, and z-coordinate in a 3D plot.
- **Topic Published**: `/Wifi/Channel_Three`

#### listener_pose_xyzt

- **Use On**: Listener Device
- **Functionality**: Listens to UWB data and publishes and graphs the x-coordinate, y-coordinate, z-coordinate, and time (t) data.
- **Topic Published**: `/Wifi/Channel_Three`

### Moving Tag Node

#### tag_dist_pub

- **Use On**: Moving Tag Device
- **Functionality**: Listens to UWB data on a moving tag device and publishes and graphs the ranges to each of the 4 anchors.
- **Topic Published**: `/Wifi/Channel_Three`

### Configuration Node

#### decawave_config

- **Use On**: Listener or Moving Tag Device
- **Functionality**: Allows user to configure device IDs and anchor positions for the UWB system.

## Usage Instructions

To use the ROS2_UWBPoseTracker package, follow these steps:

1. **Follow the MDEK Quickstart Guide**:
   - Refer to the provided PDF file in the repository for detailed instructions on setting up the MDEK1001 for UWB tracking.
   - Connect the UWB device to user's computer via USB.

2. **Open a Serial Terminal**:
   - Use a serial terminal program (e.g., minicom) to connect to the UWB device.
   - Run the `lep` command in the terminal.
   - User should see a stream of data messages. Keep the terminal open while the data stream is running.

3. **Choose the Appropriate ROS2 Node**:
   - Depending on userr device's role (listener or moving tag), select the appropriate ROS2 node from the provided nodes in this package.

4. **Run the ROS2 Node**:
   - Run the selected ROS2 node on the respective device.
   - The node will listen to the UWB data stream and publish relevant information to the `/Wifi/Channel_Three` topic.

These nodes enable user to track and visualize UWB device positions and distances to anchors in real-time. user can use the published data for various localization and tracking applications within userr ROS2 environment.
## Contributors/Credits

The ROS2_ViconDroneCtrl package is developed by Joey Zou with support from ASRL (Autonomous Space Robotics Laboratory)
