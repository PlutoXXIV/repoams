/**
 * Mecanum Drive Hardware Interface for ros2_control
 * 
 * This is the bridge between ros2_controllers (high-level control) and
 * physical hardware (GPIO pins controlling motors and reading encoders).
 * 
 * ARCHITECTURE:
 * mecanum_drive_controller → hardware_interface → GPIO (motors + encoders)
 * 
 * The hardware interface implements the ros2_control SystemInterface,
 * which provides standardized read() and write() methods:
 * - read(): Get encoder feedback, update joint positions/velocities
 * - write(): Send velocity commands to motors as PWM signals
 * 
 * MOTOR CONTROL:
 * Each motor controlled by:
 * - 1 PWM pin (speed, 0-100% duty cycle)
 * - 1 Direction pin (forward = HIGH, reverse = LOW)
 * 
 * ENCODER READING:
 * Each encoder provides:
 * - 2 channels (A and B) for quadrature decoding
 * - Position and velocity calculated from pulse counting
 * 
 * Save this file as: ~/maze_robot_ws/src/maze_explorer/src/mecanum_hardware_interface.cpp
 */

#include <hardware_interface/system_interface.hpp>
#include <hardware_interface/types/hardware_interface_type_values.hpp>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_lifecycle/state.hpp>
#include <vector>
#include <string>
#include <cmath>
#include <chrono>

// GPIO control for Raspberry Pi
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <linux/gpio.h>

// PWM control
#include <fstream>

namespace maze_explorer_hardware
{

// ============================================================================
// ENCODER CLASS - Handles quadrature encoder reading
// ============================================================================

class Encoder {
public:
    Encoder(const std::string& gpio_chip, int pin_a, int pin_b)
        : pin_a_(pin_a), pin_b_(pin_b), pulse_count_(0), 
          last_pulse_count_(0), last_state_a_(false), last_state_b_(false) {
        
        // Open GPIO chip
        chip_fd_ = open(gpio_chip.c_str(), O_RDONLY);
        if (chip_fd_ < 0) {
            throw std::runtime_error("Failed to open GPIO chip");
        }
        
        // Request GPIO lines
        request_line(pin_a_, line_a_fd_);
        request_line(pin_b_, line_b_fd_);
    }
    
    ~Encoder() {
        if (line_a_fd_ >= 0) close(line_a_fd_);
        if (line_b_fd_ >= 0) close(line_b_fd_);
        if (chip_fd_ >= 0) close(chip_fd_);
    }
    
    void update() {
        bool state_a = read_pin(line_a_fd_);
        bool state_b = read_pin(line_b_fd_);
        
        // Quadrature decoding
        if (state_a && !last_state_a_) {
            pulse_count_ += state_b ? -1 : 1;
        }
        if (!state_a && last_state_a_) {
            pulse_count_ += state_b ? 1 : -1;
        }
        
        last_state_a_ = state_a;
        last_state_b_ = state_b;
    }
    
    double get_position() const {
        // Convert pulses to radians
        // N20: 1100 pulses per revolution, 1 rev = 2π rad
        constexpr double RADIANS_PER_PULSE = (2.0 * M_PI) / 1100.0;
        return pulse_count_ * RADIANS_PER_PULSE;
    }
    
    double get_velocity(double dt) {
        int64_t delta_pulses = pulse_count_ - last_pulse_count_;
        last_pulse_count_ = pulse_count_;
        
        constexpr double RADIANS_PER_PULSE = (2.0 * M_PI) / 1100.0;
        return (delta_pulses * RADIANS_PER_PULSE) / dt;
    }
    
    void reset() {
        pulse_count_ = 0;
        last_pulse_count_ = 0;
    }

private:
    void request_line(int pin, int& fd) {
        struct gpiohandle_request req;
        req.lineoffsets[0] = pin;
        req.lines = 1;
        req.flags = GPIOHANDLE_REQUEST_INPUT;
        
        if (ioctl(chip_fd_, GPIO_GET_LINEHANDLE_IOCTL, &req) < 0) {
            throw std::runtime_error("Failed to request GPIO line");
        }
        fd = req.fd;
    }
    
    bool read_pin(int fd) {
        struct gpiohandle_data data;
        if (ioctl(fd, GPIOHANDLE_GET_LINE_VALUES_IOCTL, &data) < 0) {
            return false;
        }
        return data.values[0] != 0;
    }
    
    int pin_a_, pin_b_;
    int chip_fd_, line_a_fd_, line_b_fd_;
    int64_t pulse_count_, last_pulse_count_;
    bool last_state_a_, last_state_b_;
};

// ============================================================================
// MOTOR CLASS - Controls motor via PWM and direction pin
// ============================================================================

class Motor {
public:
    /**
     * Constructor
     * @param gpio_chip GPIO chip path
     * @param pwm_chip PWM chip number (usually 0 or 2 on RPi5)
     * @param pwm_channel PWM channel (0-3)
     * @param dir_pin GPIO pin for direction control
     */
    Motor(const std::string& gpio_chip, int pwm_chip, int pwm_channel, int dir_pin)
        : pwm_chip_(pwm_chip), pwm_channel_(pwm_channel), dir_pin_(dir_pin) {
        
        // Setup direction pin
        chip_fd_ = open(gpio_chip.c_str(), O_RDONLY);
        if (chip_fd_ < 0) {
            throw std::runtime_error("Failed to open GPIO chip");
        }
        
        // Request direction GPIO line as output
        struct gpiohandle_request req;
        req.lineoffsets[0] = dir_pin_;
        req.lines = 1;
        req.flags = GPIOHANDLE_REQUEST_OUTPUT;
        req.default_values[0] = 0;  // Start LOW
        strncpy(req.consumer_label, "motor_dir", sizeof(req.consumer_label));
        
        if (ioctl(chip_fd_, GPIO_GET_LINEHANDLE_IOCTL, &req) < 0) {
            throw std::runtime_error("Failed to request direction GPIO");
        }
        dir_fd_ = req.fd;
        
        // Setup PWM via sysfs
        setup_pwm();
    }
    
    ~Motor() {
        // Disable PWM
        set_pwm_duty_cycle(0);
        disable_pwm();
        
        if (dir_fd_ >= 0) close(dir_fd_);
        if (chip_fd_ >= 0) close(chip_fd_);
    }
    
    /**
     * Set motor velocity
     * @param velocity Target velocity in rad/s
     */
    void set_velocity(double velocity) {
        // Convert velocity to PWM duty cycle
        // Max velocity from N20 500RPM motor: ~52 rad/s
        constexpr double MAX_VELOCITY = 52.0;  // rad/s
        
        // Clamp velocity
        if (velocity > MAX_VELOCITY) velocity = MAX_VELOCITY;
        if (velocity < -MAX_VELOCITY) velocity = -MAX_VELOCITY;
        
        // Determine direction
        bool forward = velocity >= 0;
        set_direction(forward);
        
        // Calculate PWM duty cycle (0-100%)
        double duty_cycle = (std::abs(velocity) / MAX_VELOCITY) * 100.0;
        set_pwm_duty_cycle(duty_cycle);
    }

private:
    void setup_pwm() {
        // PWM setup via sysfs (Linux PWM framework)
        std::string pwm_path = "/sys/class/pwm/pwmchip" + std::to_string(pwm_chip_);
        
        // Export PWM channel if not already exported
        std::string export_path = pwm_path + "/export";
        std::ofstream export_file(export_path);
        if (export_file.is_open()) {
            export_file << pwm_channel_;
            export_file.close();
        }
        
        // Wait for export to complete
        usleep(100000);  // 100ms
        
        // Set PWM period (frequency)
        // 20kHz is good for motors: 1/20000 = 50000 ns period
        std::string period_path = pwm_path + "/pwm" + std::to_string(pwm_channel_) + "/period";
        std::ofstream period_file(period_path);
        if (period_file.is_open()) {
            period_file << 50000;  // 50000 ns = 20 kHz
            period_file.close();
        }
        
        // Enable PWM
        enable_pwm();
        
        // Start with 0% duty cycle
        set_pwm_duty_cycle(0);
    }
    
    void enable_pwm() {
        std::string enable_path = "/sys/class/pwm/pwmchip" + std::to_string(pwm_chip_) + 
                                  "/pwm" + std::to_string(pwm_channel_) + "/enable";
        std::ofstream enable_file(enable_path);
        if (enable_file.is_open()) {
            enable_file << 1;
            enable_file.close();
        }
    }
    
    void disable_pwm() {
        std::string enable_path = "/sys/class/pwm/pwmchip" + std::to_string(pwm_chip_) + 
                                  "/pwm" + std::to_string(pwm_channel_) + "/enable";
        std::ofstream enable_file(enable_path);
        if (enable_file.is_open()) {
            enable_file << 0;
            enable_file.close();
        }
    }
    
    void set_pwm_duty_cycle(double percentage) {
        // Convert percentage (0-100) to duty cycle in nanoseconds
        // Period is 50000 ns, so 100% = 50000 ns, 0% = 0 ns
        int duty_ns = static_cast<int>((percentage / 100.0) * 50000.0);
        
        std::string duty_path = "/sys/class/pwm/pwmchip" + std::to_string(pwm_chip_) + 
                                "/pwm" + std::to_string(pwm_channel_) + "/duty_cycle";
        std::ofstream duty_file(duty_path);
        if (duty_file.is_open()) {
            duty_file << duty_ns;
            duty_file.close();
        }
    }
    
    void set_direction(bool forward) {
        struct gpiohandle_data data;
        data.values[0] = forward ? 1 : 0;
        ioctl(dir_fd_, GPIOHANDLE_SET_LINE_VALUES_IOCTL, &data);
    }
    
    int pwm_chip_;
    int pwm_channel_;
    int dir_pin_;
    int chip_fd_;
    int dir_fd_;
};

// ============================================================================
// HARDWARE INTERFACE - Main class implementing ros2_control interface
// ============================================================================

class MecanumHardwareInterface : public hardware_interface::SystemInterface
{
public:
    
    // ========================================================================
    // LIFECYCLE METHODS
    // ========================================================================
    
    /**
     * Called once during node creation
     * Reads configuration from URDF and sets up hardware
     */
    hardware_interface::CallbackReturn on_init(
        const hardware_interface::HardwareInfo & info) override
    {
        if (hardware_interface::SystemInterface::on_init(info) != 
            hardware_interface::CallbackReturn::SUCCESS) {
            return hardware_interface::CallbackReturn::ERROR;
        }
        
        // Initialize state storage
        // We have 4 wheels, each with position and velocity
        hw_positions_.resize(4, 0.0);
        hw_velocities_.resize(4, 0.0);
        hw_commands_.resize(4, 0.0);
        
        // Joint names from URDF
        joint_names_ = {"front_left_wheel_joint", "front_right_wheel_joint",
                       "rear_left_wheel_joint", "rear_right_wheel_joint"};
        
        RCLCPP_INFO(rclcpp::get_logger("MecanumHardwareInterface"),
                    "Hardware interface initialized successfully");
        
        return hardware_interface::CallbackReturn::SUCCESS;
    }
    
    /**
     * Called when transitioning to CONFIGURED state
     * Creates encoder and motor objects, initializes GPIO
     */
    hardware_interface::CallbackReturn on_configure(
        const rclcpp_lifecycle::State & /*previous_state*/) override
    {
        RCLCPP_INFO(rclcpp::get_logger("MecanumHardwareInterface"),
                    "Configuring hardware...");
        
        try {
            std::string gpio_chip = "/dev/gpiochip4";  // Raspberry Pi 5
            
            // Create encoders for all 4 wheels
            // Pin assignments: (Channel A, Channel B)
            encoders_.push_back(std::make_unique<Encoder>(gpio_chip, 17, 18));  // FL
            encoders_.push_back(std::make_unique<Encoder>(gpio_chip, 22, 23));  // FR
            encoders_.push_back(std::make_unique<Encoder>(gpio_chip, 24, 25));  // RL
            encoders_.push_back(std::make_unique<Encoder>(gpio_chip, 27, 5));   // RR
            
            // Create motors for all 4 wheels
            // Parameters: (gpio_chip, pwm_chip, pwm_channel, direction_pin)
            // Note: PWM chip/channel mapping depends on Raspberry Pi 5 configuration
            // Adjust these based on your specific setup
            motors_.push_back(std::make_unique<Motor>(gpio_chip, 0, 0, 6));   // FL: PWM13, DIR6
            motors_.push_back(std::make_unique<Motor>(gpio_chip, 0, 1, 26));  // FR: PWM19, DIR26
            motors_.push_back(std::make_unique<Motor>(gpio_chip, 0, 2, 16));  // RL: PWM12, DIR16
            motors_.push_back(std::make_unique<Motor>(gpio_chip, 0, 3, 21));  // RR: PWM20, DIR21
            
            // Initialize timing
            last_time_ = std::chrono::steady_clock::now();
            
            RCLCPP_INFO(rclcpp::get_logger("MecanumHardwareInterface"),
                       "Hardware configured successfully");
            
        } catch (const std::exception& e) {
            RCLCPP_ERROR(rclcpp::get_logger("MecanumHardwareInterface"),
                        "Failed to configure hardware: %s", e.what());
            return hardware_interface::CallbackReturn::ERROR;
        }
        
        return hardware_interface::CallbackReturn::SUCCESS;
    }
    
    /**
     * Called when transitioning to ACTIVE state
     * Hardware is now ready to receive commands
     */
    hardware_interface::CallbackReturn on_activate(
        const rclcpp_lifecycle::State & /*previous_state*/) override
    {
        RCLCPP_INFO(rclcpp::get_logger("MecanumHardwareInterface"),
                    "Activating hardware...");
        
        // Reset all encoders
        for (auto& encoder : encoders_) {
            encoder->reset();
        }
        
        // Set all motors to zero velocity
        for (auto& motor : motors_) {
            motor->set_velocity(0.0);
        }
        
        RCLCPP_INFO(rclcpp::get_logger("MecanumHardwareInterface"),
                    "Hardware activated and ready");
        
        return hardware_interface::CallbackReturn::SUCCESS;
    }
    
    /**
     * Called when transitioning to INACTIVE state
     * Stop all motors for safety
     */
    hardware_interface::CallbackReturn on_deactivate(
        const rclcpp_lifecycle::State & /*previous_state*/) override
    {
        RCLCPP_INFO(rclcpp::get_logger("MecanumHardwareInterface"),
                    "Deactivating hardware...");
        
        // Stop all motors
        for (auto& motor : motors_) {
            motor->set_velocity(0.0);
        }
        
        return hardware_interface::CallbackReturn::SUCCESS;
    }
    
    // ========================================================================
    // INTERFACE EXPORT - Tell ros2_control what we can provide
    // ========================================================================
    
    /**
     * Export state interfaces (what we can READ from hardware)
     */
    std::vector<hardware_interface::StateInterface> export_state_interfaces() override
    {
        std::vector<hardware_interface::StateInterface> state_interfaces;
        
        for (size_t i = 0; i < joint_names_.size(); i++) {
            // Position interface
            state_interfaces.emplace_back(
                hardware_interface::StateInterface(
                    joint_names_[i],
                    hardware_interface::HW_IF_POSITION,
                    &hw_positions_[i]));
            
            // Velocity interface
            state_interfaces.emplace_back(
                hardware_interface::StateInterface(
                    joint_names_[i],
                    hardware_interface::HW_IF_VELOCITY,
                    &hw_velocities_[i]));
        }
        
        return state_interfaces;
    }
    
    /**
     * Export command interfaces (what we can WRITE to hardware)
     */
    std::vector<hardware_interface::CommandInterface> export_command_interfaces() override
    {
        std::vector<hardware_interface::CommandInterface> command_interfaces;
        
        for (size_t i = 0; i < joint_names_.size(); i++) {
            // Velocity command interface
            command_interfaces.emplace_back(
                hardware_interface::CommandInterface(
                    joint_names_[i],
                    hardware_interface::HW_IF_VELOCITY,
                    &hw_commands_[i]));
        }
        
        return command_interfaces;
    }
    
    // ========================================================================
    // MAIN CONTROL LOOP METHODS
    // ========================================================================
    
    /**
     * Read sensor data from hardware
     * Called by ros2_control at regular intervals (typically 100Hz)
     */
    hardware_interface::return_type read(
        const rclcpp::Time & /*time*/,
        const rclcpp::Duration & /*period*/) override
    {
        // Calculate time delta
        auto current_time = std::chrono::steady_clock::now();
        std::chrono::duration<double> dt = current_time - last_time_;
        last_time_ = current_time;
        
        // Read all encoders
        for (size_t i = 0; i < encoders_.size(); i++) {
            encoders_[i]->update();
            hw_positions_[i] = encoders_[i]->get_position();
            hw_velocities_[i] = encoders_[i]->get_velocity(dt.count());
        }
        
        return hardware_interface::return_type::OK;
    }
    
    /**
     * Write commands to hardware
     * Called by ros2_control at regular intervals (typically 100Hz)
     */
    hardware_interface::return_type write(
        const rclcpp::Time & /*time*/,
        const rclcpp::Duration & /*period*/) override
    {
        // Send velocity commands to all motors
        for (size_t i = 0; i < motors_.size(); i++) {
            motors_[i]->set_velocity(hw_commands_[i]);
        }
        
        return hardware_interface::return_type::OK;
    }

private:
    // Hardware objects
    std::vector<std::unique_ptr<Encoder>> encoders_;
    std::vector<std::unique_ptr<Motor>> motors_;
    
    // State and command storage
    std::vector<double> hw_positions_;
    std::vector<double> hw_velocities_;
    std::vector<double> hw_commands_;
    
    // Joint names
    std::vector<std::string> joint_names_;
    
    // Timing
    std::chrono::steady_clock::time_point last_time_;
};

}  // namespace maze_explorer_hardware

// ============================================================================
// PLUGIN EXPORT - Register this as a ros2_control hardware interface plugin
// ============================================================================

#include "pluginlib/class_list_macros.hpp"

PLUGINLIB_EXPORT_CLASS(
    maze_explorer_hardware::MecanumHardwareInterface,
    hardware_interface::SystemInterface
)
