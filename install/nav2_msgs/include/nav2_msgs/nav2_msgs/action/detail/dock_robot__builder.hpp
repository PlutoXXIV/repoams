// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:action/DockRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/action/dock_robot.hpp"


#ifndef NAV2_MSGS__ACTION__DETAIL__DOCK_ROBOT__BUILDER_HPP_
#define NAV2_MSGS__ACTION__DETAIL__DOCK_ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/action/detail/dock_robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_DockRobot_Goal_navigate_to_staging_pose
{
public:
  explicit Init_DockRobot_Goal_navigate_to_staging_pose(::nav2_msgs::action::DockRobot_Goal & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::DockRobot_Goal navigate_to_staging_pose(::nav2_msgs::action::DockRobot_Goal::_navigate_to_staging_pose_type arg)
  {
    msg_.navigate_to_staging_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::DockRobot_Goal msg_;
};

class Init_DockRobot_Goal_max_staging_time
{
public:
  explicit Init_DockRobot_Goal_max_staging_time(::nav2_msgs::action::DockRobot_Goal & msg)
  : msg_(msg)
  {}
  Init_DockRobot_Goal_navigate_to_staging_pose max_staging_time(::nav2_msgs::action::DockRobot_Goal::_max_staging_time_type arg)
  {
    msg_.max_staging_time = std::move(arg);
    return Init_DockRobot_Goal_navigate_to_staging_pose(msg_);
  }

private:
  ::nav2_msgs::action::DockRobot_Goal msg_;
};

class Init_DockRobot_Goal_dock_type
{
public:
  explicit Init_DockRobot_Goal_dock_type(::nav2_msgs::action::DockRobot_Goal & msg)
  : msg_(msg)
  {}
  Init_DockRobot_Goal_max_staging_time dock_type(::nav2_msgs::action::DockRobot_Goal::_dock_type_type arg)
  {
    msg_.dock_type = std::move(arg);
    return Init_DockRobot_Goal_max_staging_time(msg_);
  }

private:
  ::nav2_msgs::action::DockRobot_Goal msg_;
};

class Init_DockRobot_Goal_dock_pose
{
public:
  explicit Init_DockRobot_Goal_dock_pose(::nav2_msgs::action::DockRobot_Goal & msg)
  : msg_(msg)
  {}
  Init_DockRobot_Goal_dock_type dock_pose(::nav2_msgs::action::DockRobot_Goal::_dock_pose_type arg)
  {
    msg_.dock_pose = std::move(arg);
    return Init_DockRobot_Goal_dock_type(msg_);
  }

private:
  ::nav2_msgs::action::DockRobot_Goal msg_;
};

class Init_DockRobot_Goal_dock_id
{
public:
  explicit Init_DockRobot_Goal_dock_id(::nav2_msgs::action::DockRobot_Goal & msg)
  : msg_(msg)
  {}
  Init_DockRobot_Goal_dock_pose dock_id(::nav2_msgs::action::DockRobot_Goal::_dock_id_type arg)
  {
    msg_.dock_id = std::move(arg);
    return Init_DockRobot_Goal_dock_pose(msg_);
  }

private:
  ::nav2_msgs::action::DockRobot_Goal msg_;
};

class Init_DockRobot_Goal_use_dock_id
{
public:
  Init_DockRobot_Goal_use_dock_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DockRobot_Goal_dock_id use_dock_id(::nav2_msgs::action::DockRobot_Goal::_use_dock_id_type arg)
  {
    msg_.use_dock_id = std::move(arg);
    return Init_DockRobot_Goal_dock_id(msg_);
  }

private:
  ::nav2_msgs::action::DockRobot_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::DockRobot_Goal>()
{
  return nav2_msgs::action::builder::Init_DockRobot_Goal_use_dock_id();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_DockRobot_Result_error_msg
{
public:
  explicit Init_DockRobot_Result_error_msg(::nav2_msgs::action::DockRobot_Result & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::DockRobot_Result error_msg(::nav2_msgs::action::DockRobot_Result::_error_msg_type arg)
  {
    msg_.error_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::DockRobot_Result msg_;
};

class Init_DockRobot_Result_num_retries
{
public:
  explicit Init_DockRobot_Result_num_retries(::nav2_msgs::action::DockRobot_Result & msg)
  : msg_(msg)
  {}
  Init_DockRobot_Result_error_msg num_retries(::nav2_msgs::action::DockRobot_Result::_num_retries_type arg)
  {
    msg_.num_retries = std::move(arg);
    return Init_DockRobot_Result_error_msg(msg_);
  }

private:
  ::nav2_msgs::action::DockRobot_Result msg_;
};

class Init_DockRobot_Result_error_code
{
public:
  explicit Init_DockRobot_Result_error_code(::nav2_msgs::action::DockRobot_Result & msg)
  : msg_(msg)
  {}
  Init_DockRobot_Result_num_retries error_code(::nav2_msgs::action::DockRobot_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_DockRobot_Result_num_retries(msg_);
  }

private:
  ::nav2_msgs::action::DockRobot_Result msg_;
};

class Init_DockRobot_Result_success
{
public:
  Init_DockRobot_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DockRobot_Result_error_code success(::nav2_msgs::action::DockRobot_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_DockRobot_Result_error_code(msg_);
  }

private:
  ::nav2_msgs::action::DockRobot_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::DockRobot_Result>()
{
  return nav2_msgs::action::builder::Init_DockRobot_Result_success();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_DockRobot_Feedback_num_retries
{
public:
  explicit Init_DockRobot_Feedback_num_retries(::nav2_msgs::action::DockRobot_Feedback & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::DockRobot_Feedback num_retries(::nav2_msgs::action::DockRobot_Feedback::_num_retries_type arg)
  {
    msg_.num_retries = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::DockRobot_Feedback msg_;
};

class Init_DockRobot_Feedback_docking_time
{
public:
  explicit Init_DockRobot_Feedback_docking_time(::nav2_msgs::action::DockRobot_Feedback & msg)
  : msg_(msg)
  {}
  Init_DockRobot_Feedback_num_retries docking_time(::nav2_msgs::action::DockRobot_Feedback::_docking_time_type arg)
  {
    msg_.docking_time = std::move(arg);
    return Init_DockRobot_Feedback_num_retries(msg_);
  }

private:
  ::nav2_msgs::action::DockRobot_Feedback msg_;
};

class Init_DockRobot_Feedback_state
{
public:
  Init_DockRobot_Feedback_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DockRobot_Feedback_docking_time state(::nav2_msgs::action::DockRobot_Feedback::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_DockRobot_Feedback_docking_time(msg_);
  }

private:
  ::nav2_msgs::action::DockRobot_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::DockRobot_Feedback>()
{
  return nav2_msgs::action::builder::Init_DockRobot_Feedback_state();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_DockRobot_SendGoal_Request_goal
{
public:
  explicit Init_DockRobot_SendGoal_Request_goal(::nav2_msgs::action::DockRobot_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::DockRobot_SendGoal_Request goal(::nav2_msgs::action::DockRobot_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::DockRobot_SendGoal_Request msg_;
};

class Init_DockRobot_SendGoal_Request_goal_id
{
public:
  Init_DockRobot_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DockRobot_SendGoal_Request_goal goal_id(::nav2_msgs::action::DockRobot_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DockRobot_SendGoal_Request_goal(msg_);
  }

private:
  ::nav2_msgs::action::DockRobot_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::DockRobot_SendGoal_Request>()
{
  return nav2_msgs::action::builder::Init_DockRobot_SendGoal_Request_goal_id();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_DockRobot_SendGoal_Response_stamp
{
public:
  explicit Init_DockRobot_SendGoal_Response_stamp(::nav2_msgs::action::DockRobot_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::DockRobot_SendGoal_Response stamp(::nav2_msgs::action::DockRobot_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::DockRobot_SendGoal_Response msg_;
};

class Init_DockRobot_SendGoal_Response_accepted
{
public:
  Init_DockRobot_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DockRobot_SendGoal_Response_stamp accepted(::nav2_msgs::action::DockRobot_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_DockRobot_SendGoal_Response_stamp(msg_);
  }

private:
  ::nav2_msgs::action::DockRobot_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::DockRobot_SendGoal_Response>()
{
  return nav2_msgs::action::builder::Init_DockRobot_SendGoal_Response_accepted();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_DockRobot_SendGoal_Event_response
{
public:
  explicit Init_DockRobot_SendGoal_Event_response(::nav2_msgs::action::DockRobot_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::DockRobot_SendGoal_Event response(::nav2_msgs::action::DockRobot_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::DockRobot_SendGoal_Event msg_;
};

class Init_DockRobot_SendGoal_Event_request
{
public:
  explicit Init_DockRobot_SendGoal_Event_request(::nav2_msgs::action::DockRobot_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_DockRobot_SendGoal_Event_response request(::nav2_msgs::action::DockRobot_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DockRobot_SendGoal_Event_response(msg_);
  }

private:
  ::nav2_msgs::action::DockRobot_SendGoal_Event msg_;
};

class Init_DockRobot_SendGoal_Event_info
{
public:
  Init_DockRobot_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DockRobot_SendGoal_Event_request info(::nav2_msgs::action::DockRobot_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DockRobot_SendGoal_Event_request(msg_);
  }

private:
  ::nav2_msgs::action::DockRobot_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::DockRobot_SendGoal_Event>()
{
  return nav2_msgs::action::builder::Init_DockRobot_SendGoal_Event_info();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_DockRobot_GetResult_Request_goal_id
{
public:
  Init_DockRobot_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::action::DockRobot_GetResult_Request goal_id(::nav2_msgs::action::DockRobot_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::DockRobot_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::DockRobot_GetResult_Request>()
{
  return nav2_msgs::action::builder::Init_DockRobot_GetResult_Request_goal_id();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_DockRobot_GetResult_Response_result
{
public:
  explicit Init_DockRobot_GetResult_Response_result(::nav2_msgs::action::DockRobot_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::DockRobot_GetResult_Response result(::nav2_msgs::action::DockRobot_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::DockRobot_GetResult_Response msg_;
};

class Init_DockRobot_GetResult_Response_status
{
public:
  Init_DockRobot_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DockRobot_GetResult_Response_result status(::nav2_msgs::action::DockRobot_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DockRobot_GetResult_Response_result(msg_);
  }

private:
  ::nav2_msgs::action::DockRobot_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::DockRobot_GetResult_Response>()
{
  return nav2_msgs::action::builder::Init_DockRobot_GetResult_Response_status();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_DockRobot_GetResult_Event_response
{
public:
  explicit Init_DockRobot_GetResult_Event_response(::nav2_msgs::action::DockRobot_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::DockRobot_GetResult_Event response(::nav2_msgs::action::DockRobot_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::DockRobot_GetResult_Event msg_;
};

class Init_DockRobot_GetResult_Event_request
{
public:
  explicit Init_DockRobot_GetResult_Event_request(::nav2_msgs::action::DockRobot_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_DockRobot_GetResult_Event_response request(::nav2_msgs::action::DockRobot_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DockRobot_GetResult_Event_response(msg_);
  }

private:
  ::nav2_msgs::action::DockRobot_GetResult_Event msg_;
};

class Init_DockRobot_GetResult_Event_info
{
public:
  Init_DockRobot_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DockRobot_GetResult_Event_request info(::nav2_msgs::action::DockRobot_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DockRobot_GetResult_Event_request(msg_);
  }

private:
  ::nav2_msgs::action::DockRobot_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::DockRobot_GetResult_Event>()
{
  return nav2_msgs::action::builder::Init_DockRobot_GetResult_Event_info();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_DockRobot_FeedbackMessage_feedback
{
public:
  explicit Init_DockRobot_FeedbackMessage_feedback(::nav2_msgs::action::DockRobot_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::DockRobot_FeedbackMessage feedback(::nav2_msgs::action::DockRobot_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::DockRobot_FeedbackMessage msg_;
};

class Init_DockRobot_FeedbackMessage_goal_id
{
public:
  Init_DockRobot_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DockRobot_FeedbackMessage_feedback goal_id(::nav2_msgs::action::DockRobot_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DockRobot_FeedbackMessage_feedback(msg_);
  }

private:
  ::nav2_msgs::action::DockRobot_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::DockRobot_FeedbackMessage>()
{
  return nav2_msgs::action::builder::Init_DockRobot_FeedbackMessage_goal_id();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__ACTION__DETAIL__DOCK_ROBOT__BUILDER_HPP_
