// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_msgs:msg/TrackingFeedback.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/msg/tracking_feedback.hpp"


#ifndef NAV2_MSGS__MSG__DETAIL__TRACKING_FEEDBACK__TRAITS_HPP_
#define NAV2_MSGS__MSG__DETAIL__TRACKING_FEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nav2_msgs/msg/detail/tracking_feedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'robot_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace nav2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrackingFeedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: tracking_error
  {
    out << "tracking_error: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_error, out);
    out << ", ";
  }

  // member: current_path_index
  {
    out << "current_path_index: ";
    rosidl_generator_traits::value_to_yaml(msg.current_path_index, out);
    out << ", ";
  }

  // member: robot_pose
  {
    out << "robot_pose: ";
    to_flow_style_yaml(msg.robot_pose, out);
    out << ", ";
  }

  // member: distance_to_goal
  {
    out << "distance_to_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_goal, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: remaining_path_length
  {
    out << "remaining_path_length: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_path_length, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrackingFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: tracking_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_error: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_error, out);
    out << "\n";
  }

  // member: current_path_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_path_index: ";
    rosidl_generator_traits::value_to_yaml(msg.current_path_index, out);
    out << "\n";
  }

  // member: robot_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_pose:\n";
    to_block_style_yaml(msg.robot_pose, out, indentation + 2);
  }

  // member: distance_to_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_to_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_goal, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: remaining_path_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining_path_length: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_path_length, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrackingFeedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace nav2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use nav2_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nav2_msgs::msg::TrackingFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::msg::TrackingFeedback & msg)
{
  return nav2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::msg::TrackingFeedback>()
{
  return "nav2_msgs::msg::TrackingFeedback";
}

template<>
inline const char * name<nav2_msgs::msg::TrackingFeedback>()
{
  return "nav2_msgs/msg/TrackingFeedback";
}

template<>
struct has_fixed_size<nav2_msgs::msg::TrackingFeedback>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<nav2_msgs::msg::TrackingFeedback>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<nav2_msgs::msg::TrackingFeedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAV2_MSGS__MSG__DETAIL__TRACKING_FEEDBACK__TRAITS_HPP_
