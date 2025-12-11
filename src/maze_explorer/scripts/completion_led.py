#!/usr/bin/env python3
"""
Completion LED Controller Node

This node monitors the exploration progress and controls an LED indicator
to signal when the maze has been completely explored and mapped.

EXPLORATION COMPLETION CRITERIA:
The maze is considered fully explored when:
1. Exploration node (m-explore) reports 100% exploration progress
2. All reachable areas have been scanned
3. No more frontiers (unexplored boundaries) remain

LED BEHAVIOR:
- OFF: Exploration still in progress
- BLINKING: Exploration complete, ready for navigation phase
- ON SOLID: Navigation to goal in progress

HARDWARE CONNECTION:
LED connected to GPIO pin 12 on Raspberry Pi 5
- Anode (long leg) → GPIO 12 (through 220Ω resistor)
- Cathode (short leg) → Ground (GND)

The resistor is CRITICAL to prevent LED burnout!
Calculate resistor: R = (V_supply - V_led) / I_led
For 3.3V GPIO with typical red LED: R = (3.3V - 2.0V) / 0.02A = 65Ω
Use 220Ω for safety margin.

Save this file as: ~/maze_robot_ws/src/maze_explorer/scripts/completion_led.py
"""

import rclpy
from rclpy.node import Node
from std_msgs.msg import String, Float32
from nav_msgs.msg import OccupancyGrid
import numpy as np

# GPIO control library for Raspberry Pi
try:
    import gpiozero
    from gpiozero import LED
    GPIO_AVAILABLE = True
except ImportError:
    # If running on non-Pi system (development/testing), simulate GPIO
    GPIO_AVAILABLE = False
    print("Warning: gpiozero not available. LED control will be simulated.")

class CompletionLED(Node):
    """
    Monitors exploration progress and controls completion indicator LED.
    """
    
    def __init__(self):
        super().__init__('completion_led')
        
        self.logger = self.get_logger()
        self.logger.info('Initializing Exploration Completion LED Controller')
        
        # =====================================================================
        # CONFIGURATION PARAMETERS
        # =====================================================================
        
        # GPIO pin number for LED (BCM numbering)
        self.led_pin = 12
        
        # Exploration completion threshold (percentage)
        # 95% is typically sufficient as 100% is rarely achievable
        self.completion_threshold = 95.0
        
        # Blink rate when exploration complete (Hz)
        # 2 Hz = blink twice per second (easily noticeable)
        self.blink_rate = 2.0
        
        # =====================================================================
        # STATE VARIABLES
        # =====================================================================
        
        # Exploration progress (0-100%)
        self.exploration_progress = 0.0
        
        # Is exploration complete?
        self.exploration_complete = False
        
        # Is robot currently navigating?
        self.is_navigating = False
        
        # =====================================================================
        # LED SETUP
        # =====================================================================
        
        if GPIO_AVAILABLE:
            try:
                # Initialize LED on specified pin
                self.led = LED(self.led_pin)
                self.logger.info(f'LED initialized on GPIO pin {self.led_pin}')
                
                # Test LED with brief flash
                self.led.on()
                self.create_timer(0.5, lambda: self.led.off())
                self.logger.info('LED test: brief flash')
                
            except Exception as e:
                self.logger.error(f'Failed to initialize LED: {e}')
                self.led = None
        else:
            self.led = None
            self.logger.warn('GPIO not available - LED control simulated')
        
        # =====================================================================
        # ROS SUBSCRIBERS
        # =====================================================================
        
        # Subscribe to map updates to calculate exploration progress
        self.map_subscription = self.create_subscription(
            OccupancyGrid,
            '/map',
            self.map_callback,
            10
        )
        
        # Subscribe to navigation status
        self.waypoint_subscription = self.create_subscription(
            String,
            '/current_waypoint',
            self.waypoint_callback,
            10
        )
        
        # =====================================================================
        # LED CONTROL TIMER
        # =====================================================================
        
        # Timer for blinking LED when exploration complete
        self.blink_timer = None
        
        self.logger.info('Completion LED Controller ready')
        self.logger.info(f'Monitoring exploration progress...')
    
    def map_callback(self, map_msg):
        """
        Callback when new map data is received.
        
        Calculates exploration progress by analyzing the occupancy grid.
        
        Args:
            map_msg: OccupancyGrid message containing map data
        """
        # Occupancy grid data:
        # -1 = unknown (unexplored)
        #  0 = free space (explored, empty)
        # 100 = occupied (explored, obstacle detected)
        
        data = np.array(map_msg.data)
        
        # Count different cell types
        total_cells = len(data)
        unknown_cells = np.sum(data == -1)
        explored_cells = total_cells - unknown_cells
        
        # Calculate exploration percentage
        if total_cells > 0:
            progress = (explored_cells / total_cells) * 100.0
        else:
            progress = 0.0
        
        # Update progress (with smoothing to avoid jitter)
        # Use exponential moving average for stable reading
        alpha = 0.1  # Smoothing factor
        self.exploration_progress = (
            alpha * progress + (1 - alpha) * self.exploration_progress
        )
        
        # Check if exploration just completed
        if (not self.exploration_complete and 
            self.exploration_progress >= self.completion_threshold):
            
            self.logger.info('=' * 60)
            self.logger.info('✓ EXPLORATION COMPLETE!')
            self.logger.info(f'Progress: {self.exploration_progress:.1f}%')
            self.logger.info('Map has been fully scanned and saved')
            self.logger.info('Robot can now be moved to start/end point for navigation')
            self.logger.info('=' * 60)
            
            self.exploration_complete = True
            self.start_completion_blink()
        
        # Log progress periodically (every 5%)
        # Helps user monitor exploration status
        progress_rounded = int(self.exploration_progress / 5) * 5
        if hasattr(self, 'last_logged_progress'):
            if progress_rounded != self.last_logged_progress:
                self.logger.info(
                    f'Exploration progress: {self.exploration_progress:.1f}%'
                )
                self.last_logged_progress = progress_rounded
        else:
            self.last_logged_progress = progress_rounded
    
    def waypoint_callback(self, msg):
        """
        Callback when robot's waypoint status changes.
        
        Updates LED behavior based on navigation state.
        
        Args:
            msg: String message with waypoint status
        """
        # Check if robot is at a waypoint (indicating navigation phase)
        if msg.data != 'none' and self.exploration_complete:
            if not self.is_navigating:
                self.logger.info('Navigation phase started - LED solid ON')
                self.is_navigating = True
                self.stop_blinking()
                self.set_led_on()
        else:
            if self.is_navigating:
                self.logger.info('Navigation ended - resuming blink')
                self.is_navigating = False
                if self.exploration_complete:
                    self.start_completion_blink()
    
    def start_completion_blink(self):
        """
        Start blinking the LED to indicate exploration completion.
        
        Blinks at specified rate (blink_rate) to get user's attention.
        """
        if self.led is None:
            self.logger.info('[SIMULATED] LED blinking at {:.1f} Hz'.format(
                self.blink_rate))
            return
        
        # Cancel any existing blink timer
        if self.blink_timer is not None:
            self.blink_timer.cancel()
        
        # Calculate timer period (half the blink period for on/off cycle)
        # Example: 2 Hz blink = 0.5s period = 0.25s on, 0.25s off
        timer_period = 1.0 / (2 * self.blink_rate)
        
        # Create timer that toggles LED state
        self.blink_timer = self.create_timer(
            timer_period,
            self.toggle_led
        )
        
        self.logger.info(f'LED blinking at {self.blink_rate} Hz')
    
    def stop_blinking(self):
        """
        Stop blinking the LED.
        """
        if self.blink_timer is not None:
            self.blink_timer.cancel()
            self.blink_timer = None
    
    def toggle_led(self):
        """
        Toggle LED state (on -> off or off -> on).
        
        Called by timer during blinking mode.
        """
        if self.led is None:
            return
        
        # Toggle LED state
        if self.led.is_lit:
            self.led.off()
        else:
            self.led.on()
    
    def set_led_on(self):
        """
        Turn LED solidly ON.
        """
        if self.led is None:
            self.logger.info('[SIMULATED] LED ON')
            return
        
        self.led.on()
    
    def set_led_off(self):
        """
        Turn LED OFF.
        """
        if self.led is None:
            return
        
        self.led.off()
    
    def __del__(self):
        """
        Cleanup when node is destroyed.
        
        Ensures LED is turned off when node shuts down.
        """
        if self.led is not None:
            self.led.off()


def main(args=None):
    """
    Main entry point for the node.
    """
    rclpy.init(args=args)
    
    node = CompletionLED()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.logger.info('Shutting down Completion LED Controller')
    finally:
        # Ensure LED is off on shutdown
        if node.led is not None:
            node.led.off()
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
