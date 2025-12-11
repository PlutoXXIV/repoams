// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_msgs:msg/CollisionDetectorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/msg/collision_detector_state.hpp"


#ifndef NAV2_MSGS__MSG__DETAIL__COLLISION_DETECTOR_STATE__TRAITS_HPP_
#define NAV2_MSGS__MSG__DETAIL__COLLISION_DETECTOR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nav2_msgs/msg/detail/collision_detector_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace nav2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CollisionDetectorState & msg,
  std::ostream & out)
{
  out << "{";
  // member: polygons
  {
    if (msg.polygons.size() == 0) {
      out << "polygons: []";
    } else {
      out << "polygons: [";
      size_t pending_items = msg.polygons.size();
      for (auto item : msg.polygons) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: detections
  {
    if (msg.detections.size() == 0) {
      out << "detections: []";
    } else {
      out << "detections: [";
      size_t pending_items = msg.detections.size();
      for (auto item : msg.detections) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CollisionDetectorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: polygons
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.polygons.size() == 0) {
      out << "polygons: []\n";
    } else {
      out << "polygons:\n";
      for (auto item : msg.polygons) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: detections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.detections.size() == 0) {
      out << "detections: []\n";
    } else {
      out << "detections:\n";
      for (auto item : msg.detections) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CollisionDetectorState & msg, bool use_flow_style = false)
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
  const nav2_msgs::msg::CollisionDetectorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::msg::CollisionDetectorState & msg)
{
  return nav2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::msg::CollisionDetectorState>()
{
  return "nav2_msgs::msg::CollisionDetectorState";
}

template<>
inline const char * name<nav2_msgs::msg::CollisionDetectorState>()
{
  return "nav2_msgs/msg/CollisionDetectorState";
}

template<>
struct has_fixed_size<nav2_msgs::msg::CollisionDetectorState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nav2_msgs::msg::CollisionDetectorState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nav2_msgs::msg::CollisionDetectorState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAV2_MSGS__MSG__DETAIL__COLLISION_DETECTOR_STATE__TRAITS_HPP_
