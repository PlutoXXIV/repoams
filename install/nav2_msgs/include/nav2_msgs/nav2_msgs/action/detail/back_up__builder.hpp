// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:action/BackUp.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/action/back_up.hpp"


#ifndef NAV2_MSGS__ACTION__DETAIL__BACK_UP__BUILDER_HPP_
#define NAV2_MSGS__ACTION__DETAIL__BACK_UP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/action/detail/back_up__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_BackUp_Goal_disable_collision_checks
{
public:
  explicit Init_BackUp_Goal_disable_collision_checks(::nav2_msgs::action::BackUp_Goal & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::BackUp_Goal disable_collision_checks(::nav2_msgs::action::BackUp_Goal::_disable_collision_checks_type arg)
  {
    msg_.disable_collision_checks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::BackUp_Goal msg_;
};

class Init_BackUp_Goal_time_allowance
{
public:
  explicit Init_BackUp_Goal_time_allowance(::nav2_msgs::action::BackUp_Goal & msg)
  : msg_(msg)
  {}
  Init_BackUp_Goal_disable_collision_checks time_allowance(::nav2_msgs::action::BackUp_Goal::_time_allowance_type arg)
  {
    msg_.time_allowance = std::move(arg);
    return Init_BackUp_Goal_disable_collision_checks(msg_);
  }

private:
  ::nav2_msgs::action::BackUp_Goal msg_;
};

class Init_BackUp_Goal_speed
{
public:
  explicit Init_BackUp_Goal_speed(::nav2_msgs::action::BackUp_Goal & msg)
  : msg_(msg)
  {}
  Init_BackUp_Goal_time_allowance speed(::nav2_msgs::action::BackUp_Goal::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_BackUp_Goal_time_allowance(msg_);
  }

private:
  ::nav2_msgs::action::BackUp_Goal msg_;
};

class Init_BackUp_Goal_target
{
public:
  Init_BackUp_Goal_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BackUp_Goal_speed target(::nav2_msgs::action::BackUp_Goal::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_BackUp_Goal_speed(msg_);
  }

private:
  ::nav2_msgs::action::BackUp_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::BackUp_Goal>()
{
  return nav2_msgs::action::builder::Init_BackUp_Goal_target();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_BackUp_Result_error_msg
{
public:
  explicit Init_BackUp_Result_error_msg(::nav2_msgs::action::BackUp_Result & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::BackUp_Result error_msg(::nav2_msgs::action::BackUp_Result::_error_msg_type arg)
  {
    msg_.error_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::BackUp_Result msg_;
};

class Init_BackUp_Result_error_code
{
public:
  explicit Init_BackUp_Result_error_code(::nav2_msgs::action::BackUp_Result & msg)
  : msg_(msg)
  {}
  Init_BackUp_Result_error_msg error_code(::nav2_msgs::action::BackUp_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_BackUp_Result_error_msg(msg_);
  }

private:
  ::nav2_msgs::action::BackUp_Result msg_;
};

class Init_BackUp_Result_total_elapsed_time
{
public:
  Init_BackUp_Result_total_elapsed_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BackUp_Result_error_code total_elapsed_time(::nav2_msgs::action::BackUp_Result::_total_elapsed_time_type arg)
  {
    msg_.total_elapsed_time = std::move(arg);
    return Init_BackUp_Result_error_code(msg_);
  }

private:
  ::nav2_msgs::action::BackUp_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::BackUp_Result>()
{
  return nav2_msgs::action::builder::Init_BackUp_Result_total_elapsed_time();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_BackUp_Feedback_distance_traveled
{
public:
  Init_BackUp_Feedback_distance_traveled()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::action::BackUp_Feedback distance_traveled(::nav2_msgs::action::BackUp_Feedback::_distance_traveled_type arg)
  {
    msg_.distance_traveled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::BackUp_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::BackUp_Feedback>()
{
  return nav2_msgs::action::builder::Init_BackUp_Feedback_distance_traveled();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_BackUp_SendGoal_Request_goal
{
public:
  explicit Init_BackUp_SendGoal_Request_goal(::nav2_msgs::action::BackUp_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::BackUp_SendGoal_Request goal(::nav2_msgs::action::BackUp_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::BackUp_SendGoal_Request msg_;
};

class Init_BackUp_SendGoal_Request_goal_id
{
public:
  Init_BackUp_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BackUp_SendGoal_Request_goal goal_id(::nav2_msgs::action::BackUp_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_BackUp_SendGoal_Request_goal(msg_);
  }

private:
  ::nav2_msgs::action::BackUp_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::BackUp_SendGoal_Request>()
{
  return nav2_msgs::action::builder::Init_BackUp_SendGoal_Request_goal_id();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_BackUp_SendGoal_Response_stamp
{
public:
  explicit Init_BackUp_SendGoal_Response_stamp(::nav2_msgs::action::BackUp_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::BackUp_SendGoal_Response stamp(::nav2_msgs::action::BackUp_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::BackUp_SendGoal_Response msg_;
};

class Init_BackUp_SendGoal_Response_accepted
{
public:
  Init_BackUp_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BackUp_SendGoal_Response_stamp accepted(::nav2_msgs::action::BackUp_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_BackUp_SendGoal_Response_stamp(msg_);
  }

private:
  ::nav2_msgs::action::BackUp_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::BackUp_SendGoal_Response>()
{
  return nav2_msgs::action::builder::Init_BackUp_SendGoal_Response_accepted();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_BackUp_SendGoal_Event_response
{
public:
  explicit Init_BackUp_SendGoal_Event_response(::nav2_msgs::action::BackUp_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::BackUp_SendGoal_Event response(::nav2_msgs::action::BackUp_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::BackUp_SendGoal_Event msg_;
};

class Init_BackUp_SendGoal_Event_request
{
public:
  explicit Init_BackUp_SendGoal_Event_request(::nav2_msgs::action::BackUp_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_BackUp_SendGoal_Event_response request(::nav2_msgs::action::BackUp_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_BackUp_SendGoal_Event_response(msg_);
  }

private:
  ::nav2_msgs::action::BackUp_SendGoal_Event msg_;
};

class Init_BackUp_SendGoal_Event_info
{
public:
  Init_BackUp_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BackUp_SendGoal_Event_request info(::nav2_msgs::action::BackUp_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_BackUp_SendGoal_Event_request(msg_);
  }

private:
  ::nav2_msgs::action::BackUp_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::BackUp_SendGoal_Event>()
{
  return nav2_msgs::action::builder::Init_BackUp_SendGoal_Event_info();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_BackUp_GetResult_Request_goal_id
{
public:
  Init_BackUp_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::action::BackUp_GetResult_Request goal_id(::nav2_msgs::action::BackUp_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::BackUp_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::BackUp_GetResult_Request>()
{
  return nav2_msgs::action::builder::Init_BackUp_GetResult_Request_goal_id();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_BackUp_GetResult_Response_result
{
public:
  explicit Init_BackUp_GetResult_Response_result(::nav2_msgs::action::BackUp_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::BackUp_GetResult_Response result(::nav2_msgs::action::BackUp_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::BackUp_GetResult_Response msg_;
};

class Init_BackUp_GetResult_Response_status
{
public:
  Init_BackUp_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BackUp_GetResult_Response_result status(::nav2_msgs::action::BackUp_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_BackUp_GetResult_Response_result(msg_);
  }

private:
  ::nav2_msgs::action::BackUp_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::BackUp_GetResult_Response>()
{
  return nav2_msgs::action::builder::Init_BackUp_GetResult_Response_status();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_BackUp_GetResult_Event_response
{
public:
  explicit Init_BackUp_GetResult_Event_response(::nav2_msgs::action::BackUp_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::BackUp_GetResult_Event response(::nav2_msgs::action::BackUp_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::BackUp_GetResult_Event msg_;
};

class Init_BackUp_GetResult_Event_request
{
public:
  explicit Init_BackUp_GetResult_Event_request(::nav2_msgs::action::BackUp_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_BackUp_GetResult_Event_response request(::nav2_msgs::action::BackUp_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_BackUp_GetResult_Event_response(msg_);
  }

private:
  ::nav2_msgs::action::BackUp_GetResult_Event msg_;
};

class Init_BackUp_GetResult_Event_info
{
public:
  Init_BackUp_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BackUp_GetResult_Event_request info(::nav2_msgs::action::BackUp_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_BackUp_GetResult_Event_request(msg_);
  }

private:
  ::nav2_msgs::action::BackUp_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::BackUp_GetResult_Event>()
{
  return nav2_msgs::action::builder::Init_BackUp_GetResult_Event_info();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_BackUp_FeedbackMessage_feedback
{
public:
  explicit Init_BackUp_FeedbackMessage_feedback(::nav2_msgs::action::BackUp_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::BackUp_FeedbackMessage feedback(::nav2_msgs::action::BackUp_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::BackUp_FeedbackMessage msg_;
};

class Init_BackUp_FeedbackMessage_goal_id
{
public:
  Init_BackUp_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BackUp_FeedbackMessage_feedback goal_id(::nav2_msgs::action::BackUp_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_BackUp_FeedbackMessage_feedback(msg_);
  }

private:
  ::nav2_msgs::action::BackUp_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::BackUp_FeedbackMessage>()
{
  return nav2_msgs::action::builder::Init_BackUp_FeedbackMessage_goal_id();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__ACTION__DETAIL__BACK_UP__BUILDER_HPP_
