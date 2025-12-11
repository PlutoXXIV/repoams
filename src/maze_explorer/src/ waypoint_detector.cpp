/**
 * Waypoint Detector Node (C++ Implementation)
 * 
 * This is a C++ alternative to start_end_detector.py
 * Detects start and end points in the maze based on LIDAR readings >5-6 meters.
 * 
 * WHY C++ VERSION:
 * - Faster processing for high-frequency LIDAR data
 * - Better integration with other C++ nodes
 * - Lower memory footprint
 * 
 * FUNCTIONALITY:
 * - Subscribes to /scan (LaserScan messages)
 * - Subscribes to /tf for robot position
 * - Detects long-range readings indicating open spaces
 * - Publishes waypoint markers for visualization
 * - Saves waypoints to file
 * 
 * Save this file as: ~/maze_robot_ws/src/maze_explorer/src/waypoint_detector.cpp
 */

#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/laser_scan.hpp>
#include <geometry_msgs/msg/point_stamped.hpp>
#include <visualization_msgs/msg/marker.hpp>
#include <visualization_msgs/msg/marker_array.hpp>
#include <tf2_ros/transform_listener.h>
#include <tf2_ros/buffer.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>

#include <vector>
#include <map>
#include <cmath>
#include <fstream>
#include <yaml-cpp/yaml.h>

/**
 * Structure to hold waypoint information
 */
struct Waypoint {
    double x;
    double y;
    int id;
    int detection_count;  // Confidence counter
};

/**
 * WaypointDetector class
 * 
 * Analyzes LIDAR scans to find start and end points in the maze
 */
class WaypointDetector : public rclcpp::Node
{
public:
    WaypointDetector() : Node("waypoint_detector")
    {
        RCLCPP_INFO(this->get_logger(), "Initializing Waypoint Detector (C++)");
        
        // =====================================================================
        // DECLARE PARAMETERS
        // =====================================================================
        
        // Minimum LIDAR range to consider as waypoint indicator
        this->declare_parameter("min_waypoint_range", 5.0);
        this->declare_parameter("min_consecutive_rays", 10);
        this->declare_parameter("min_waypoint_separation", 1.5);
        this->declare_parameter("confidence_threshold", 3);
        this->declare_parameter("waypoint_file", std::string(getenv("HOME")) + 
                                "/.ros/maze_waypoints.yaml");
        
        // Get parameters
        min_waypoint_range_ = this->get_parameter("min_waypoint_range").as_double();
        min_consecutive_rays_ = this->get_parameter("min_consecutive_rays").as_int();
        min_waypoint_separation_ = this->get_parameter("min_waypoint_separation").as_double();
        confidence_threshold_ = this->get_parameter("confidence_threshold").as_int();
        waypoint_file_ = this->get_parameter("waypoint_file").as_string();
        
        RCLCPP_INFO(this->get_logger(), "Detection threshold: >%.2f meters", 
                    min_waypoint_range_);
        
        // =====================================================================
        // INITIALIZE TF2
        // =====================================================================
        
        tf_buffer_ = std::make_unique<tf2_ros::Buffer>(this->get_clock());
        tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);
        
        // =====================================================================
        // CREATE SUBSCRIBERS
        // =====================================================================
        
        scan_subscription_ = this->create_subscription<sensor_msgs::msg::LaserScan>(
            "/scan",
            10,
            std::bind(&WaypointDetector::scanCallback, this, std::placeholders::_1));
        
        // =====================================================================
        // CREATE PUBLISHERS
        // =====================================================================
        
        marker_publisher_ = this->create_publisher<visualization_msgs::msg::MarkerArray>(
            "/waypoints",
            10);
        
        // =====================================================================
        // LOAD EXISTING WAYPOINTS
        // =====================================================================
        
        loadWaypoints();
        
        RCLCPP_INFO(this->get_logger(), "Waypoint Detector ready. Monitoring for waypoints...");
    }

private:
    /**
     * Callback for LIDAR scan messages
     */
    void scanCallback(const sensor_msgs::msg::LaserScan::SharedPtr scan)
    {
        // =====================================================================
        // STEP 1: ANALYZE SCAN FOR LONG RANGES
        // =====================================================================
        
        int consecutive_count = 0;
        int max_consecutive = 0;
        
        for (size_t i = 0; i < scan->ranges.size(); ++i) {
            float range = scan->ranges[i];
            
            // Check if valid and exceeds threshold
            if (std::isfinite(range) && range > min_waypoint_range_) {
                consecutive_count++;
                max_consecutive = std::max(max_consecutive, consecutive_count);
            } else {
                consecutive_count = 0;
            }
        }
        
        // Need sufficient consecutive long-range readings
        if (max_consecutive < min_consecutive_rays_) {
            return;
        }
        
        // =====================================================================
        // STEP 2: GET ROBOT POSITION
        // =====================================================================
        
        geometry_msgs::msg::TransformStamped transform;
        
        try {
            transform = tf_buffer_->lookupTransform(
                "map",
                "base_footprint",
                tf2::TimePointZero,
                rclcpp::Duration::from_seconds(0.5));
        } catch (const tf2::TransformException& ex) {
            RCLCPP_DEBUG(this->get_logger(), "Transform lookup failed: %s", ex.what());
            return;
        }
        
        double robot_x = transform.transform.translation.x;
        double robot_y = transform.transform.translation.y;
        
        // =====================================================================
        // STEP 3: CHECK IF NEAR EXISTING WAYPOINT
        // =====================================================================
        
        if (isNearExistingWaypoint(robot_x, robot_y)) {
            return;
        }
        
        // =====================================================================
        // STEP 4: UPDATE CANDIDATE WAYPOINTS
        // =====================================================================
        
        // Round position to grid (0.5m resolution)
        int grid_x = static_cast<int>(std::round(robot_x * 2.0));
        int grid_y = static_cast<int>(std::round(robot_y * 2.0));
        auto grid_key = std::make_pair(grid_x, grid_y);
        
        // Increment detection count
        if (candidate_waypoints_.find(grid_key) == candidate_waypoints_.end()) {
            candidate_waypoints_[grid_key] = {robot_x, robot_y, -1, 1};
            RCLCPP_INFO(this->get_logger(), 
                       "New waypoint candidate at (%.2f, %.2f)", robot_x, robot_y);
        } else {
            candidate_waypoints_[grid_key].detection_count++;
        }
        
        // =====================================================================
        // STEP 5: CONFIRM WAYPOINT IF THRESHOLD REACHED
        // =====================================================================
        
        if (candidate_waypoints_[grid_key].detection_count >= confidence_threshold_) {
            // Confirm waypoint
            Waypoint wp = candidate_waypoints_[grid_key];
            wp.id = next_waypoint_id_++;
            
            confirmed_waypoints_.push_back(wp);
            candidate_waypoints_.erase(grid_key);
            
            RCLCPP_INFO(this->get_logger(), 
                       "✓ Waypoint %d CONFIRMED at (%.2f, %.2f)",
                       wp.id, wp.x, wp.y);
            
            // Save and publish
            saveWaypoints();
            publishMarkers();
        }
    }
    
    /**
     * Check if position is near any existing confirmed waypoint
     */
    bool isNearExistingWaypoint(double x, double y)
    {
        for (const auto& wp : confirmed_waypoints_) {
            double distance = std::sqrt(std::pow(x - wp.x, 2) + std::pow(y - wp.y, 2));
            if (distance < min_waypoint_separation_) {
                return true;
            }
        }
        return false;
    }
    
    /**
     * Publish visualization markers for all waypoints
     */
    void publishMarkers()
    {
        visualization_msgs::msg::MarkerArray marker_array;
        
        for (const auto& wp : confirmed_waypoints_) {
            visualization_msgs::msg::Marker marker;
            
            marker.header.frame_id = "map";
            marker.header.stamp = this->get_clock()->now();
            marker.ns = "waypoints";
            marker.id = wp.id;
            marker.type = visualization_msgs::msg::Marker::SPHERE;
            marker.action = visualization_msgs::msg::Marker::ADD;
            
            // Position
            marker.pose.position.x = wp.x;
            marker.pose.position.y = wp.y;
            marker.pose.position.z = 0.2;
            
            // Orientation (identity quaternion)
            marker.pose.orientation.w = 1.0;
            
            // Size
            marker.scale.x = 0.3;
            marker.scale.y = 0.3;
            marker.scale.z = 0.3;
            
            // Color (green)
            marker.color.r = 0.0;
            marker.color.g = 1.0;
            marker.color.b = 0.0;
            marker.color.a = 0.8;
            
            marker.lifetime = rclcpp::Duration::from_seconds(0);  // Forever
            
            marker_array.markers.push_back(marker);
        }
        
        marker_publisher_->publish(marker_array);
    }
    
    /**
     * Save waypoints to YAML file
     */
    void saveWaypoints()
    {
        YAML::Emitter out;
        out << YAML::BeginMap;
        out << YAML::Key << "waypoints";
        out << YAML::Value << YAML::BeginSeq;
        
        for (const auto& wp : confirmed_waypoints_) {
            out << YAML::BeginMap;
            out << YAML::Key << "id" << YAML::Value << wp.id;
            out << YAML::Key << "x" << YAML::Value << wp.x;
            out << YAML::Key << "y" << YAML::Value << wp.y;
            out << YAML::EndMap;
        }
        
        out << YAML::EndSeq;
        out << YAML::EndMap;
        
        std::ofstream fout(waypoint_file_);
        fout << out.c_str();
        fout.close();
        
        RCLCPP_INFO(this->get_logger(), "Waypoints saved to %s", waypoint_file_.c_str());
    }
    
    /**
     * Load waypoints from YAML file
     */
    void loadWaypoints()
    {
        try {
            YAML::Node config = YAML::LoadFile(waypoint_file_);
            
            if (config["waypoints"]) {
                for (const auto& wp_node : config["waypoints"]) {
                    Waypoint wp;
                    wp.id = wp_node["id"].as<int>();
                    wp.x = wp_node["x"].as<double>();
                    wp.y = wp_node["y"].as<double>();
                    wp.detection_count = confidence_threshold_;  // Already confirmed
                    
                    confirmed_waypoints_.push_back(wp);
                    
                    // Update next ID
                    if (wp.id >= next_waypoint_id_) {
                        next_waypoint_id_ = wp.id + 1;
                    }
                }
                
                RCLCPP_INFO(this->get_logger(), 
                           "Loaded %zu waypoints from file", confirmed_waypoints_.size());
                publishMarkers();
            }
        } catch (const YAML::Exception& e) {
            RCLCPP_INFO(this->get_logger(), 
                       "No existing waypoint file found. Starting fresh.");
        }
    }
    
    // =========================================================================
    // MEMBER VARIABLES
    // =========================================================================
    
    // Parameters
    double min_waypoint_range_;
    int min_consecutive_rays_;
    double min_waypoint_separation_;
    int confidence_threshold_;
    std::string waypoint_file_;
    
    // Waypoint tracking
    std::vector<Waypoint> confirmed_waypoints_;
    std::map<std::pair<int, int>, Waypoint> candidate_waypoints_;
    int next_waypoint_id_ = 0;
    
    // ROS2 objects
    rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr scan_subscription_;
    rclcpp::Publisher<visualization_msgs::msg::MarkerArray>::SharedPtr marker_publisher_;
    
    // TF2
    std::unique_ptr<tf2_ros::Buffer> tf_buffer_;
    std::shared_ptr<tf2_ros::TransformListener> tf_listener_;
};

/**
 * Main function
 */
int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    
    auto node = std::make_shared<WaypointDetector>();
    
    rclcpp::spin(node);
    
    rclcpp::shutdown();
    return 0;
}
