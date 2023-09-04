'''
This node is meant to be run if the device is currently connected to the UWB tag, and not the UWB listener, to get raw distance measurements. 
This node will publish to /Wifi/Channel_Three the four distances to each anchor, as well as 
'''
import rclpy
from rclpy.node import Node
from decawave_interfaces.msg import DecaRange
import serial
import time
import yaml
import os
import matplotlib.pyplot as plt

class publishernode(Node):
    def __init__(self, portt):
        super().__init__("decawave_pub3")
        try:
            self.ser = serial.Serial(port=portt, baudrate=115200, timeout=1) #COM port may be different for Linux
        except:
            self.ser = ''
        config_file_path = os.path.join(os.path.dirname(__file__), '..', 'config', 'decawave_config.yaml')
        with open(config_file_path, 'r') as config_file:
            config = yaml.safe_load(config_file)
        self.config = config
        self.tag_id = self.config['UWBtag']['ID']
        self.anchor_id1 = self.config['UWBanchor1']['ID']
        self.anchor_id2 = self.config['UWBanchor2']['ID']
        self.anchor_id3 = self.config['UWBanchor3']['ID']
        self.anchor_id4 = self.config['UWBanchor4']['ID']
        self.anchor_ids = [self.anchor_id1,self.anchor_id2,self.anchor_id3,self.anchor_id4]
        self.decawave_publisher3 = self.create_publisher(
            DecaRange, "/Wifi/Channel_Three", 10)
        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self.publish_data)
        self.time = time.time()
        self.resp = ''
        
        # Initialize data storage for plotting
        self.timestamps = []
        self.range_data = [[] for _ in range(4)]
        self.plot_initialized = False

    def get_dist(self): #Getting Distance From Port
        dummy = 'D633[4.43,0.00,0.00]=2.60 9620[5.41,5.08,0.00]=2.74 919B[2.31,4.92,0.00]=4.35 CC2E[0.00,0.00,0.00]=6.23'
        try: 
            resp = self.ser.readline().decode().strip()
            self.resp = resp
            if len(resp)>120:
                return dummy
            elif len(resp)<100:
                return dummy
            return resp
        except:
            return dummy
        
    def parse_data(self, s):
        substrings = s.split()
        results = {}
        for substring in substrings:
            tag = substring[:4]
            if tag == "le_u":
                continue
            elif tag == "est[":
                continue
            values_str = substring.split('=')[0]
            values_str1 = values_str.split('[')[1]
            values_str1 = values_str1.strip(']')
            values_list = [float(x) for x in values_str1.split(',')]
            values_list.append(float(substring.split('=')[1]))
            results[tag] = values_list
        return (results)
    
    def publish_data(self): #Publishing the raw data as a string
        dist = self.parse_data(self.get_dist())
        msg = DecaRange()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = 'ranges'
        msg.tag_id = self.tag_id
        msg.anch_id1 = self.anchor_id1
        msg.range1 = dist[self.anchor_id1][3]
        msg.anch_id2 = self.anchor_id2
        msg.range2 = dist[self.anchor_id2][3]
        msg.anch_id3 = self.anchor_id3
        msg.range3 = dist[self.anchor_id3][3]
        msg.anch_id4 = self.anchor_id4
        msg.range4 = dist[self.anchor_id4][3]
        cmd = 'True'
        self.get_logger().info("Data_Published: "+cmd)
        self.decawave_publisher3.publish(msg)
        
        # Store data for plotting
        self.timestamps.append(msg.header.stamp.sec + msg.header.stamp.nanosec * 1e-9)
        for i in range(4):
            self.range_data[i].append(getattr(msg, f'range{i + 1}'))
        
        if not self.plot_initialized:
            self.initialize_plots()
        else:
            self.update_plots()

    def initialize_plots(self):
        self.plot_initialized = True
        plt.ion()
        self.fig, self.ax = plt.subplots(2, 2, figsize=(10, 8))
        self.ax = self.ax.flatten()
        self.lines = [self.ax[i].plot([], label=f'Anchor {i + 1}')[0] for i in range(4)]
        for i in range(4):
            self.ax[i].set_xlabel('Time (s)')
            self.ax[i].set_ylabel('Range (m)')
            self.ax[i].set_title(f'Anchor {i + 1}')
            self.ax[i].legend()

    def update_plots(self):
        for i, line in enumerate(self.lines):
            line.set_data(self.timestamps, self.range_data[i])
            self.ax[i].relim()
            self.ax[i].autoscale_view()
        plt.pause(0.01)
        self.fig.tight_layout()
        plt.draw()

def main(args = None):
    rclpy.init(args = args)
    node1 = publishernode('/dev/ttyACM0')
    rclpy.spin(node1)
    rclpy.shutdown()