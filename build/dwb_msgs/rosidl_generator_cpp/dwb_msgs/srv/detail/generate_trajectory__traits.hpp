// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dwb_msgs:srv/GenerateTrajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dwb_msgs/srv/generate_trajectory.hpp"


#ifndef DWB_MSGS__SRV__DETAIL__GENERATE_TRAJECTORY__TRAITS_HPP_
#define DWB_MSGS__SRV__DETAIL__GENERATE_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dwb_msgs/srv/detail/generate_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'start_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'start_vel'
// Member 'cmd_vel'
#include "nav_2d_msgs/msg/detail/twist2_d__traits.hpp"

namespace dwb_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GenerateTrajectory_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: start_pose
  {
    out << "start_pose: ";
    to_flow_style_yaml(msg.start_pose, out);
    out << ", ";
  }

  // member: start_vel
  {
    out << "start_vel: ";
    to_flow_style_yaml(msg.start_vel, out);
    out << ", ";
  }

  // member: cmd_vel
  {
    out << "cmd_vel: ";
    to_flow_style_yaml(msg.cmd_vel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenerateTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_pose:\n";
    to_block_style_yaml(msg.start_pose, out, indentation + 2);
  }

  // member: start_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_vel:\n";
    to_block_style_yaml(msg.start_vel, out, indentation + 2);
  }

  // member: cmd_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_vel:\n";
    to_block_style_yaml(msg.cmd_vel, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateTrajectory_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dwb_msgs

namespace rosidl_generator_traits
{

[[deprecated("use dwb_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dwb_msgs::srv::GenerateTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dwb_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dwb_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const dwb_msgs::srv::GenerateTrajectory_Request & msg)
{
  return dwb_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dwb_msgs::srv::GenerateTrajectory_Request>()
{
  return "dwb_msgs::srv::GenerateTrajectory_Request";
}

template<>
inline const char * name<dwb_msgs::srv::GenerateTrajectory_Request>()
{
  return "dwb_msgs/srv/GenerateTrajectory_Request";
}

template<>
struct has_fixed_size<dwb_msgs::srv::GenerateTrajectory_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<nav_2d_msgs::msg::Twist2D>::value> {};

template<>
struct has_bounded_size<dwb_msgs::srv::GenerateTrajectory_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<nav_2d_msgs::msg::Twist2D>::value> {};

template<>
struct is_message<dwb_msgs::srv::GenerateTrajectory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'traj'
#include "dwb_msgs/msg/detail/trajectory2_d__traits.hpp"

namespace dwb_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GenerateTrajectory_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: traj
  {
    out << "traj: ";
    to_flow_style_yaml(msg.traj, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenerateTrajectory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: traj
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traj:\n";
    to_block_style_yaml(msg.traj, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateTrajectory_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dwb_msgs

namespace rosidl_generator_traits
{

[[deprecated("use dwb_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dwb_msgs::srv::GenerateTrajectory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dwb_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dwb_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const dwb_msgs::srv::GenerateTrajectory_Response & msg)
{
  return dwb_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dwb_msgs::srv::GenerateTrajectory_Response>()
{
  return "dwb_msgs::srv::GenerateTrajectory_Response";
}

template<>
inline const char * name<dwb_msgs::srv::GenerateTrajectory_Response>()
{
  return "dwb_msgs/srv/GenerateTrajectory_Response";
}

template<>
struct has_fixed_size<dwb_msgs::srv::GenerateTrajectory_Response>
  : std::integral_constant<bool, has_fixed_size<dwb_msgs::msg::Trajectory2D>::value> {};

template<>
struct has_bounded_size<dwb_msgs::srv::GenerateTrajectory_Response>
  : std::integral_constant<bool, has_bounded_size<dwb_msgs::msg::Trajectory2D>::value> {};

template<>
struct is_message<dwb_msgs::srv::GenerateTrajectory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace dwb_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GenerateTrajectory_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
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
  const GenerateTrajectory_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateTrajectory_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dwb_msgs

namespace rosidl_generator_traits
{

[[deprecated("use dwb_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dwb_msgs::srv::GenerateTrajectory_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  dwb_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dwb_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const dwb_msgs::srv::GenerateTrajectory_Event & msg)
{
  return dwb_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dwb_msgs::srv::GenerateTrajectory_Event>()
{
  return "dwb_msgs::srv::GenerateTrajectory_Event";
}

template<>
inline const char * name<dwb_msgs::srv::GenerateTrajectory_Event>()
{
  return "dwb_msgs/srv/GenerateTrajectory_Event";
}

template<>
struct has_fixed_size<dwb_msgs::srv::GenerateTrajectory_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dwb_msgs::srv::GenerateTrajectory_Event>
  : std::integral_constant<bool, has_bounded_size<dwb_msgs::srv::GenerateTrajectory_Request>::value && has_bounded_size<dwb_msgs::srv::GenerateTrajectory_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<dwb_msgs::srv::GenerateTrajectory_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dwb_msgs::srv::GenerateTrajectory>()
{
  return "dwb_msgs::srv::GenerateTrajectory";
}

template<>
inline const char * name<dwb_msgs::srv::GenerateTrajectory>()
{
  return "dwb_msgs/srv/GenerateTrajectory";
}

template<>
struct has_fixed_size<dwb_msgs::srv::GenerateTrajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<dwb_msgs::srv::GenerateTrajectory_Request>::value &&
    has_fixed_size<dwb_msgs::srv::GenerateTrajectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<dwb_msgs::srv::GenerateTrajectory>
  : std::integral_constant<
    bool,
    has_bounded_size<dwb_msgs::srv::GenerateTrajectory_Request>::value &&
    has_bounded_size<dwb_msgs::srv::GenerateTrajectory_Response>::value
  >
{
};

template<>
struct is_service<dwb_msgs::srv::GenerateTrajectory>
  : std::true_type
{
};

template<>
struct is_service_request<dwb_msgs::srv::GenerateTrajectory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dwb_msgs::srv::GenerateTrajectory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DWB_MSGS__SRV__DETAIL__GENERATE_TRAJECTORY__TRAITS_HPP_
