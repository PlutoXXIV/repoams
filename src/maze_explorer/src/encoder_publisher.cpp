/**
 * Encoder Publisher Node
 * 
 * This node reads encoder pulses from N20 motors and publishes joint states.
 * 
 * N20 MOTOR ENCODER BASICS:
 * - Each N20 motor has a dual-channel (A/B) encoder for direction detection
 * - Encoders generate pulses as the motor shaft rotates
 * - By counting pulses, we can calculate wheel position and velocity
 * - Channel A and B are 90° out of phase - this tells us rotation direction
 * 
 * PULSE COUNTING:
 * - A goes HIGH before B = Forward rotation
 * - B goes HIGH before A = Reverse rotation
 * - Typical N20 encoders: ~11 pulses per revolution of motor shaft
 * - With gear ratio (common: 1:100), we get 1100 pulses per wheel revolution
 * 
 * GPIO CONNECTIONS (Raspberry Pi 5):
 * - Front Left:  GPIO 17 (A), GPIO 18 (B)
 * - Front Right: GPIO 22 (A), GPIO 23 (B)
 * - Rear Left:   GPIO 24 (A), GPIO 25 (B)
 * - Rear Right:  GPIO 27 (A), GPIO 5  (B)
 * 
 * OUTPUT:
 * - Publishes sensor_msgs/JointState to /joint_states
 * - Includes position (radians), velocity (rad/s) for each wheel
 * 
 * Save this file as: ~/maze_robot_ws/src/maze_explorer/src/encoder_publisher.cpp
 */

#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/joint_state.hpp>
#include <cmath>
#include <chrono>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <linux/gpio.h>

// Encoder configuration constants
namespace {
    // Number of encoder pulses per revolution (PPR)
    // N20 motor: 11 PPR on motor shaft × 100 gear ratio = 1100 PPR on output shaft
    constexpr int PULSES_PER_REVOLUTION = 1100;
    
    // Wheel radius in meters (35mm = 0.035m)
    constexpr double WHEEL_RADIUS = 0.035;
    
    // Calculate radians per pulse
    // One full revolution = 2π radians = PULSES_PER_REVOLUTION pulses
    // Therefore: radians_per_pulse = 2π / PULSES_PER_REVOLUTION
    constexpr double RADIANS_PER_PULSE = (2.0 * M_PI) / PULSES_PER_REVOLUTION;
    
    // Publishing rate (Hz) - how often we send joint state updates
    constexpr int PUBLISH_RATE_HZ = 50;
}

/**
 * Encoder class - manages a single quadrature encoder
 * 
 * Quadrature encoding uses two channels (A and B) to detect both
 * position and direction of rotation.
 */
class Encoder {
public:
    /**
     * Constructor
     * 
     * @param gpio_chip Path to GPIO chip (usually "/dev/gpiochip4" on RPi 5)
     * @param pin_a GPIO pin number for channel A
     * @param pin_b GPIO pin number for channel B
     */
    Encoder(const std::string& gpio_chip, int pin_a, int pin_b)
        : pin_a_(pin_a), pin_b_(pin_b), pulse_count_(0), 
          last_state_a_(false), last_state_b_(false) {
        
        // Open GPIO chip device
        chip_fd_ = open(gpio_chip.c_str(), O_RDONLY);
        if (chip_fd_ < 0) {
            throw std::runtime_error("Failed to open GPIO chip: " + gpio_chip);
        }
        
        // Request GPIO lines for encoder channels
        request_line(pin_a_, line_a_fd_);
        request_line(pin_b_, line_b_fd_);
    }
    
    ~Encoder() {
        // Clean up: close all file descriptors
        if (line_a_fd_ >= 0) close(line_a_fd_);
        if (line_b_fd_ >= 0) close(line_b_fd_);
        if (chip_fd_ >= 0) close(chip_fd_);
    }
    
    /**
     * Update encoder state by reading current GPIO values
     * This should be called frequently to not miss any pulses
     */
    void update() {
        // Read current state of both channels
        bool state_a = read_pin(line_a_fd_);
        bool state_b = read_pin(line_b_fd_);
        
        // Quadrature decoding: detect edges and direction
        // When A transitions from LOW to HIGH:
        if (state_a && !last_state_a_) {
            // If B is LOW, we're going forward
            // If B is HIGH, we're going backward
            pulse_count_ += state_b ? -1 : 1;
        }
        
        // When A transitions from HIGH to LOW:
        if (!state_a && last_state_a_) {
            // If B is HIGH, we're going forward
            // If B is LOW, we're going backward
            pulse_count_ += state_b ? 1 : -1;
        }
        
        // Store current state for next comparison
        last_state_a_ = state_a;
        last_state_b_ = state_b;
    }
    
    /**
     * Get current position in radians
     * 
     * @return Cumulative angular position of the wheel
     */
    double get_position() const {
        return pulse_count_ * RADIANS_PER_PULSE;
    }
    
    /**
     * Calculate velocity in radians per second
     * 
     * @param delta_time Time elapsed since last velocity calculation (seconds)
     * @return Angular velocity of the wheel
     */
    double get_velocity(double delta_time) {
        // Calculate change in position since last call
        double delta_position = (pulse_count_ - last_pulse_count_) * RADIANS_PER_PULSE;
        
        // Velocity = change in position / change in time
        double velocity = delta_position / delta_time;
        
        // Store current count for next velocity calculation
        last_pulse_count_ = pulse_count_;
        
        return velocity;
    }
    
    /**
     * Reset encoder count to zero
     * Useful when initializing or recovering from errors
     */
    void reset() {
        pulse_count_ = 0;
        last_pulse_count_ = 0;
    }

private:
    /**
     * Request a GPIO line for reading
     * 
     * @param pin GPIO pin number
     * @param fd File descriptor to store the result
     */
    void request_line(int pin, int& fd) {
        // Set up request structure for GPIO line
        struct gpiohandle_request req;
        req.lineoffsets[0] = pin;
        req.lines = 1;
        req.flags = GPIOHANDLE_REQUEST_INPUT;  // Configure as input
        
        // Request the GPIO line from the kernel
        if (ioctl(chip_fd_, GPIO_GET_LINEHANDLE_IOCTL, &req) < 0) {
            throw std::runtime_error("Failed to request GPIO line " + std::to_string(pin));
        }
        
        fd = req.fd;
    }
    
    /**
     * Read current state of a GPIO pin
     * 
     * @param fd File descriptor for the GPIO line
     * @return true if pin is HIGH, false if LOW
     */
    bool read_pin(int fd) {
        struct gpiohandle_data data;
        
        // Read the current value
        if (ioctl(fd, GPIOHANDLE_GET_LINE_VALUES_IOCTL, &data) < 0) {
            return false;  // Return false on error
        }
        
        return data.values[0] != 0;
    }
    
    // GPIO pin numbers
    int pin_a_;
    int pin_b_;
    
    // File descriptors for GPIO access
    int chip_fd_;
    int line_a_fd_;
    int line_b_fd_;
    
    // Encoder state tracking
    int64_t pulse_count_;       // Cumulative pulse count (can be negative)
    int64_t last_pulse_count_;  // Previous count for velocity calculation
    bool last_state_a_;         // Previous state of channel A
    bool last_state_b_;         // Previous state of channel B
};

/**
 * EncoderPublisher Node
 * 
 * ROS2 node that manages all four wheel encoders and publishes joint states
 */
class EncoderPublisher : public rclcpp::Node {
public:
    EncoderPublisher() : Node("encoder_publisher") {
        // Log startup message
        RCLCPP_INFO(this->get_logger(), "Initializing Encoder Publisher Node");
        
        // Initialize encoders for all four wheels
        // GPIO chip path for Raspberry Pi 5
        std::string gpio_chip = "/dev/gpiochip4";
        
        try {
            // Create encoder objects with their respective GPIO pins
            encoders_.push_back(std::make_unique<Encoder>(gpio_chip, 17, 18));  // Front Left
            encoders_.push_back(std::make_unique<Encoder>(gpio_chip, 22, 23));  // Front Right
            encoders_.push_back(std::make_unique<Encoder>(gpio_chip, 24, 25));  // Rear Left
            encoders_.push_back(std::make_unique<Encoder>(gpio_chip, 27, 5));   // Rear Right
            
            RCLCPP_INFO(this->get_logger(), "All encoders initialized successfully");
        } catch (const std::exception& e) {
            RCLCPP_ERROR(this->get_logger(), "Failed to initialize encoders: %s", e.what());
            throw;
        }
        
        // Set up joint names (must match URDF)
        joint_names_ = {
            "front_left_wheel_joint",
            "front_right_wheel_joint",
            "rear_left_wheel_joint",
            "rear_right_wheel_joint"
        };
        
        // Create publisher for joint states
        // QoS: Quality of Service settings
        // 10 = queue size (buffer last 10 messages if subscriber is slow)
        joint_state_pub_ = this->create_publisher<sensor_msgs::msg::JointState>(
            "/joint_states", 10);
        
        // Create timer for periodic publishing
        // Duration in milliseconds: 1000ms / PUBLISH_RATE_HZ
        auto timer_period = std::chrono::milliseconds(1000 / PUBLISH_RATE_HZ);
        timer_ = this->create_wall_timer(
            timer_period,
            std::bind(&EncoderPublisher::publish_joint_states, this));
        
        // Initialize timing for velocity calculation
        last_time_ = this->now();
        
        RCLCPP_INFO(this->get_logger(), "Encoder Publisher ready. Publishing at %d Hz", 
                    PUBLISH_RATE_HZ);
    }

private:
    /**
     * Main callback function - called at PUBLISH_RATE_HZ
     * Reads all encoders and publishes joint states
     */
    void publish_joint_states() {
        // Calculate time since last update
        auto current_time = this->now();
        double dt = (current_time - last_time_).seconds();
        last_time_ = current_time;
        
        // Prepare joint state message
        auto joint_state_msg = sensor_msgs::msg::JointState();
        joint_state_msg.header.stamp = current_time;
        joint_state_msg.name = joint_names_;
        
        // Reserve space for data (optimization)
        joint_state_msg.position.reserve(4);
        joint_state_msg.velocity.reserve(4);
        
        // Update each encoder and collect data
        for (size_t i = 0; i < encoders_.size(); ++i) {
            // Read latest encoder state
            encoders_[i]->update();
            
            // Get position and velocity
            double position = encoders_[i]->get_position();
            double velocity = encoders_[i]->get_velocity(dt);
            
            // Add to message
            joint_state_msg.position.push_back(position);
            joint_state_msg.velocity.push_back(velocity);
            
            // Optional: Add effort (torque) - set to 0 if not measured
            // joint_state_msg.effort.push_back(0.0);
        }
        
        // Publish the joint state message
        joint_state_pub_->publish(joint_state_msg);
    }
    
    // Member variables
    std::vector<std::unique_ptr<Encoder>> encoders_;  // Encoder objects
    std::vector<std::string> joint_names_;            // Joint names from URDF
    rclcpp::Publisher<sensor_msgs::msg::JointState>::SharedPtr joint_state_pub_;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Time last_time_;
};

/**
 * Main function - entry point for the node
 */
int main(int argc, char** argv) {
    // Initialize ROS2
    rclcpp::init(argc, argv);
    
    try {
        // Create and spin the node
        // spin() keeps the node running and processing callbacks
        auto node = std::make_shared<EncoderPublisher>();
        rclcpp::spin(node);
    } catch (const std::exception& e) {
        std::cerr << "Exception in encoder_publisher: " << e.what() << std::endl;
        return 1;
    }
    
    // Clean shutdown
    rclcpp::shutdown();
    return 0;
}
