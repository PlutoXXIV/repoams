// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:action/ComputePathToPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/action/compute_path_to_pose.hpp"


#ifndef NAV2_MSGS__ACTION__DETAIL__COMPUTE_PATH_TO_POSE__BUILDER_HPP_
#define NAV2_MSGS__ACTION__DETAIL__COMPUTE_PATH_TO_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/action/detail/compute_path_to_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_ComputePathToPose_Goal_use_start
{
public:
  explicit Init_ComputePathToPose_Goal_use_start(::nav2_msgs::action::ComputePathToPose_Goal & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::ComputePathToPose_Goal use_start(::nav2_msgs::action::ComputePathToPose_Goal::_use_start_type arg)
  {
    msg_.use_start = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::ComputePathToPose_Goal msg_;
};

class Init_ComputePathToPose_Goal_planner_id
{
public:
  explicit Init_ComputePathToPose_Goal_planner_id(::nav2_msgs::action::ComputePathToPose_Goal & msg)
  : msg_(msg)
  {}
  Init_ComputePathToPose_Goal_use_start planner_id(::nav2_msgs::action::ComputePathToPose_Goal::_planner_id_type arg)
  {
    msg_.planner_id = std::move(arg);
    return Init_ComputePathToPose_Goal_use_start(msg_);
  }

private:
  ::nav2_msgs::action::ComputePathToPose_Goal msg_;
};

class Init_ComputePathToPose_Goal_start
{
public:
  explicit Init_ComputePathToPose_Goal_start(::nav2_msgs::action::ComputePathToPose_Goal & msg)
  : msg_(msg)
  {}
  Init_ComputePathToPose_Goal_planner_id start(::nav2_msgs::action::ComputePathToPose_Goal::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_ComputePathToPose_Goal_planner_id(msg_);
  }

private:
  ::nav2_msgs::action::ComputePathToPose_Goal msg_;
};

class Init_ComputePathToPose_Goal_goal
{
public:
  Init_ComputePathToPose_Goal_goal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePathToPose_Goal_start goal(::nav2_msgs::action::ComputePathToPose_Goal::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return Init_ComputePathToPose_Goal_start(msg_);
  }

private:
  ::nav2_msgs::action::ComputePathToPose_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::ComputePathToPose_Goal>()
{
  return nav2_msgs::action::builder::Init_ComputePathToPose_Goal_goal();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_ComputePathToPose_Result_error_msg
{
public:
  explicit Init_ComputePathToPose_Result_error_msg(::nav2_msgs::action::ComputePathToPose_Result & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::ComputePathToPose_Result error_msg(::nav2_msgs::action::ComputePathToPose_Result::_error_msg_type arg)
  {
    msg_.error_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::ComputePathToPose_Result msg_;
};

class Init_ComputePathToPose_Result_error_code
{
public:
  explicit Init_ComputePathToPose_Result_error_code(::nav2_msgs::action::ComputePathToPose_Result & msg)
  : msg_(msg)
  {}
  Init_ComputePathToPose_Result_error_msg error_code(::nav2_msgs::action::ComputePathToPose_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_ComputePathToPose_Result_error_msg(msg_);
  }

private:
  ::nav2_msgs::action::ComputePathToPose_Result msg_;
};

class Init_ComputePathToPose_Result_planning_time
{
public:
  explicit Init_ComputePathToPose_Result_planning_time(::nav2_msgs::action::ComputePathToPose_Result & msg)
  : msg_(msg)
  {}
  Init_ComputePathToPose_Result_error_code planning_time(::nav2_msgs::action::ComputePathToPose_Result::_planning_time_type arg)
  {
    msg_.planning_time = std::move(arg);
    return Init_ComputePathToPose_Result_error_code(msg_);
  }

private:
  ::nav2_msgs::action::ComputePathToPose_Result msg_;
};

class Init_ComputePathToPose_Result_path
{
public:
  Init_ComputePathToPose_Result_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePathToPose_Result_planning_time path(::nav2_msgs::action::ComputePathToPose_Result::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_ComputePathToPose_Result_planning_time(msg_);
  }

private:
  ::nav2_msgs::action::ComputePathToPose_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::ComputePathToPose_Result>()
{
  return nav2_msgs::action::builder::Init_ComputePathToPose_Result_path();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::ComputePathToPose_Feedback>()
{
  return ::nav2_msgs::action::ComputePathToPose_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_ComputePathToPose_SendGoal_Request_goal
{
public:
  explicit Init_ComputePathToPose_SendGoal_Request_goal(::nav2_msgs::action::ComputePathToPose_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::ComputePathToPose_SendGoal_Request goal(::nav2_msgs::action::ComputePathToPose_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::ComputePathToPose_SendGoal_Request msg_;
};

class Init_ComputePathToPose_SendGoal_Request_goal_id
{
public:
  Init_ComputePathToPose_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePathToPose_SendGoal_Request_goal goal_id(::nav2_msgs::action::ComputePathToPose_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ComputePathToPose_SendGoal_Request_goal(msg_);
  }

private:
  ::nav2_msgs::action::ComputePathToPose_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::ComputePathToPose_SendGoal_Request>()
{
  return nav2_msgs::action::builder::Init_ComputePathToPose_SendGoal_Request_goal_id();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_ComputePathToPose_SendGoal_Response_stamp
{
public:
  explicit Init_ComputePathToPose_SendGoal_Response_stamp(::nav2_msgs::action::ComputePathToPose_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::ComputePathToPose_SendGoal_Response stamp(::nav2_msgs::action::ComputePathToPose_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::ComputePathToPose_SendGoal_Response msg_;
};

class Init_ComputePathToPose_SendGoal_Response_accepted
{
public:
  Init_ComputePathToPose_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePathToPose_SendGoal_Response_stamp accepted(::nav2_msgs::action::ComputePathToPose_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ComputePathToPose_SendGoal_Response_stamp(msg_);
  }

private:
  ::nav2_msgs::action::ComputePathToPose_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::ComputePathToPose_SendGoal_Response>()
{
  return nav2_msgs::action::builder::Init_ComputePathToPose_SendGoal_Response_accepted();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_ComputePathToPose_SendGoal_Event_response
{
public:
  explicit Init_ComputePathToPose_SendGoal_Event_response(::nav2_msgs::action::ComputePathToPose_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::ComputePathToPose_SendGoal_Event response(::nav2_msgs::action::ComputePathToPose_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::ComputePathToPose_SendGoal_Event msg_;
};

class Init_ComputePathToPose_SendGoal_Event_request
{
public:
  explicit Init_ComputePathToPose_SendGoal_Event_request(::nav2_msgs::action::ComputePathToPose_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_ComputePathToPose_SendGoal_Event_response request(::nav2_msgs::action::ComputePathToPose_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ComputePathToPose_SendGoal_Event_response(msg_);
  }

private:
  ::nav2_msgs::action::ComputePathToPose_SendGoal_Event msg_;
};

class Init_ComputePathToPose_SendGoal_Event_info
{
public:
  Init_ComputePathToPose_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePathToPose_SendGoal_Event_request info(::nav2_msgs::action::ComputePathToPose_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ComputePathToPose_SendGoal_Event_request(msg_);
  }

private:
  ::nav2_msgs::action::ComputePathToPose_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::ComputePathToPose_SendGoal_Event>()
{
  return nav2_msgs::action::builder::Init_ComputePathToPose_SendGoal_Event_info();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_ComputePathToPose_GetResult_Request_goal_id
{
public:
  Init_ComputePathToPose_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::action::ComputePathToPose_GetResult_Request goal_id(::nav2_msgs::action::ComputePathToPose_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::ComputePathToPose_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::ComputePathToPose_GetResult_Request>()
{
  return nav2_msgs::action::builder::Init_ComputePathToPose_GetResult_Request_goal_id();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_ComputePathToPose_GetResult_Response_result
{
public:
  explicit Init_ComputePathToPose_GetResult_Response_result(::nav2_msgs::action::ComputePathToPose_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::ComputePathToPose_GetResult_Response result(::nav2_msgs::action::ComputePathToPose_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::ComputePathToPose_GetResult_Response msg_;
};

class Init_ComputePathToPose_GetResult_Response_status
{
public:
  Init_ComputePathToPose_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePathToPose_GetResult_Response_result status(::nav2_msgs::action::ComputePathToPose_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ComputePathToPose_GetResult_Response_result(msg_);
  }

private:
  ::nav2_msgs::action::ComputePathToPose_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::ComputePathToPose_GetResult_Response>()
{
  return nav2_msgs::action::builder::Init_ComputePathToPose_GetResult_Response_status();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_ComputePathToPose_GetResult_Event_response
{
public:
  explicit Init_ComputePathToPose_GetResult_Event_response(::nav2_msgs::action::ComputePathToPose_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::ComputePathToPose_GetResult_Event response(::nav2_msgs::action::ComputePathToPose_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::ComputePathToPose_GetResult_Event msg_;
};

class Init_ComputePathToPose_GetResult_Event_request
{
public:
  explicit Init_ComputePathToPose_GetResult_Event_request(::nav2_msgs::action::ComputePathToPose_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_ComputePathToPose_GetResult_Event_response request(::nav2_msgs::action::ComputePathToPose_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ComputePathToPose_GetResult_Event_response(msg_);
  }

private:
  ::nav2_msgs::action::ComputePathToPose_GetResult_Event msg_;
};

class Init_ComputePathToPose_GetResult_Event_info
{
public:
  Init_ComputePathToPose_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePathToPose_GetResult_Event_request info(::nav2_msgs::action::ComputePathToPose_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ComputePathToPose_GetResult_Event_request(msg_);
  }

private:
  ::nav2_msgs::action::ComputePathToPose_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::ComputePathToPose_GetResult_Event>()
{
  return nav2_msgs::action::builder::Init_ComputePathToPose_GetResult_Event_info();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_ComputePathToPose_FeedbackMessage_feedback
{
public:
  explicit Init_ComputePathToPose_FeedbackMessage_feedback(::nav2_msgs::action::ComputePathToPose_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::ComputePathToPose_FeedbackMessage feedback(::nav2_msgs::action::ComputePathToPose_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::ComputePathToPose_FeedbackMessage msg_;
};

class Init_ComputePathToPose_FeedbackMessage_goal_id
{
public:
  Init_ComputePathToPose_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePathToPose_FeedbackMessage_feedback goal_id(::nav2_msgs::action::ComputePathToPose_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ComputePathToPose_FeedbackMessage_feedback(msg_);
  }

private:
  ::nav2_msgs::action::ComputePathToPose_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::ComputePathToPose_FeedbackMessage>()
{
  return nav2_msgs::action::builder::Init_ComputePathToPose_FeedbackMessage_goal_id();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__ACTION__DETAIL__COMPUTE_PATH_TO_POSE__BUILDER_HPP_
