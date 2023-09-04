import rclpy
from rclpy.node import Node
from decawave_interfaces.msg import DecaRangeB
import serial
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
import time

class publishernode(Node):
    def __init__(self,portt):
        #Inherit
        super().__init__("decawave_pub4")

        #Connect to Serial Port
        try:
            self.ser = serial.Serial(port=portt, baudrate=115200, timeout=1) #COM port may be different for Linux
        except:
            self.ser = ''
        
        #Publisher Initialiser
        self.counter = 0
        self.decawave_publisher4 = self.create_publisher(
            DecaRangeB, "/Wifi/Channel_Three", 10)
        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self.publish_data)
        self.time = time.time()
        self.tag_data = {}
        self.resp = ''
        self.x_positions = []
        self.z_positions = []
        self.fig, self.ax = plt.subplots()  # Create a 3D subplot
        self.fig.canvas.mpl_connect('close_event', self.save_plot)
    
    def get_dist(self): #Getting Distance From Port
        #dummy = 'POS,1,9325,0.40,2.03,0.60,73,x05'
        dummy = 'POS,1,9325,0.00,-0.15,0.60,73,x05'
        try: 
            resp = self.ser.readline().decode().strip()
            self.resp = resp
            if len(resp)>35:
                return dummy
            elif len(resp)<20:
                return dummy
            return resp
        except:
            return dummy
        
    def parse_data(self, s):
        if len(s)>35:
            return None
        elif len(s)<25:
            return None
        substrings = s.split(',')
        self.get_logger().info(str(substrings))
        tag = substrings[2]
        pos = []
        pos.append(tag)
        pos.append(float(substrings[3]))
        pos.append(float(substrings[4]))
        pos.append(float(substrings[5]))
        return pos
    
    def publish_data(self): #Publishing the raw data as a string
        dist = self.parse_data(self.get_dist())
        msg = DecaRangeB()
        self.counter+=1
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.tag_id, msg.x1, msg.y1, msg.z1 = dist[0], dist[1], dist[2], dist[3]
        cmd = str(msg.tag_id)+": "+str(msg.x1)+" "+str(msg.y1)+" "+str(msg.z1)
        self.get_logger().info("Data_Published: "+cmd)
        self.decawave_publisher4.publish(msg)
        
        tag_id = msg.tag_id
        x = msg.x1
        y = msg.y1
        z = msg.z1
        self.x_positions.append(x)
        self.z_positions.append(z)
        self.update_graph()
    def update_graph(self):
        self.ax.plot(self.x_positions, self.z_positions, color='blue')

        # Set labels and title
        plt.title('VICON Positions X vs VICON Positions Z')
        self.ax.set_xlabel('X')
        self.ax.set_ylabel('Z')
        self.ax.set_title('Position Trajectory')
        plt.draw()
        plt.pause(0.001)
    def save_plot(self, event):
        self.ax.figure.savefig('UWB_position_trajectory.png')
        print("Plot saved as 'UWB_position_trajectory.png'")

def main(args = None):
    rclpy.init(args = args)
    node1 = publishernode('/dev/ttyACM0')
    rclpy.spin(node1)
    rclpy.shutdown()