// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dwb_msgs:msg/TrajectoryScore.idl
// generated code does not contain a copyright notice
#include "dwb_msgs/msg/detail/trajectory_score__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dwb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dwb_msgs/msg/detail/trajectory_score__struct.h"
#include "dwb_msgs/msg/detail/trajectory_score__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "dwb_msgs/msg/detail/critic_score__functions.h"  // scores
#include "dwb_msgs/msg/detail/trajectory2_d__functions.h"  // traj

// forward declare type support functions

bool cdr_serialize_dwb_msgs__msg__CriticScore(
  const dwb_msgs__msg__CriticScore * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_dwb_msgs__msg__CriticScore(
  eprosima::fastcdr::Cdr & cdr,
  dwb_msgs__msg__CriticScore * ros_message);

size_t get_serialized_size_dwb_msgs__msg__CriticScore(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dwb_msgs__msg__CriticScore(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_dwb_msgs__msg__CriticScore(
  const dwb_msgs__msg__CriticScore * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_dwb_msgs__msg__CriticScore(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_dwb_msgs__msg__CriticScore(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, msg, CriticScore)();

bool cdr_serialize_dwb_msgs__msg__Trajectory2D(
  const dwb_msgs__msg__Trajectory2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_dwb_msgs__msg__Trajectory2D(
  eprosima::fastcdr::Cdr & cdr,
  dwb_msgs__msg__Trajectory2D * ros_message);

size_t get_serialized_size_dwb_msgs__msg__Trajectory2D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dwb_msgs__msg__Trajectory2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_dwb_msgs__msg__Trajectory2D(
  const dwb_msgs__msg__Trajectory2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_dwb_msgs__msg__Trajectory2D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_dwb_msgs__msg__Trajectory2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, msg, Trajectory2D)();


using _TrajectoryScore__ros_msg_type = dwb_msgs__msg__TrajectoryScore;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
bool cdr_serialize_dwb_msgs__msg__TrajectoryScore(
  const dwb_msgs__msg__TrajectoryScore * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: traj
  {
    cdr_serialize_dwb_msgs__msg__Trajectory2D(
      &ros_message->traj, cdr);
  }

  // Field name: scores
  {
    size_t size = ros_message->scores.size;
    auto array_ptr = ros_message->scores.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_dwb_msgs__msg__CriticScore(
        &array_ptr[i], cdr);
    }
  }

  // Field name: total
  {
    cdr << ros_message->total;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
bool cdr_deserialize_dwb_msgs__msg__TrajectoryScore(
  eprosima::fastcdr::Cdr & cdr,
  dwb_msgs__msg__TrajectoryScore * ros_message)
{
  // Field name: traj
  {
    cdr_deserialize_dwb_msgs__msg__Trajectory2D(cdr, &ros_message->traj);
  }

  // Field name: scores
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->scores.data) {
      dwb_msgs__msg__CriticScore__Sequence__fini(&ros_message->scores);
    }
    if (!dwb_msgs__msg__CriticScore__Sequence__init(&ros_message->scores, size)) {
      fprintf(stderr, "failed to create array for field 'scores'");
      return false;
    }
    auto array_ptr = ros_message->scores.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_dwb_msgs__msg__CriticScore(cdr, &array_ptr[i]);
    }
  }

  // Field name: total
  {
    cdr >> ros_message->total;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t get_serialized_size_dwb_msgs__msg__TrajectoryScore(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrajectoryScore__ros_msg_type * ros_message = static_cast<const _TrajectoryScore__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: traj
  current_alignment += get_serialized_size_dwb_msgs__msg__Trajectory2D(
    &(ros_message->traj), current_alignment);

  // Field name: scores
  {
    size_t array_size = ros_message->scores.size;
    auto array_ptr = ros_message->scores.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_dwb_msgs__msg__CriticScore(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: total
  {
    size_t item_size = sizeof(ros_message->total);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t max_serialized_size_dwb_msgs__msg__TrajectoryScore(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: traj
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_dwb_msgs__msg__Trajectory2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: scores
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_dwb_msgs__msg__CriticScore(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: total
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dwb_msgs__msg__TrajectoryScore;
    is_plain =
      (
      offsetof(DataType, total) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
bool cdr_serialize_key_dwb_msgs__msg__TrajectoryScore(
  const dwb_msgs__msg__TrajectoryScore * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: traj
  {
    cdr_serialize_key_dwb_msgs__msg__Trajectory2D(
      &ros_message->traj, cdr);
  }

  // Field name: scores
  {
    size_t size = ros_message->scores.size;
    auto array_ptr = ros_message->scores.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_dwb_msgs__msg__CriticScore(
        &array_ptr[i], cdr);
    }
  }

  // Field name: total
  {
    cdr << ros_message->total;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t get_serialized_size_key_dwb_msgs__msg__TrajectoryScore(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrajectoryScore__ros_msg_type * ros_message = static_cast<const _TrajectoryScore__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: traj
  current_alignment += get_serialized_size_key_dwb_msgs__msg__Trajectory2D(
    &(ros_message->traj), current_alignment);

  // Field name: scores
  {
    size_t array_size = ros_message->scores.size;
    auto array_ptr = ros_message->scores.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_dwb_msgs__msg__CriticScore(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: total
  {
    size_t item_size = sizeof(ros_message->total);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t max_serialized_size_key_dwb_msgs__msg__TrajectoryScore(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: traj
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_dwb_msgs__msg__Trajectory2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: scores
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_dwb_msgs__msg__CriticScore(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: total
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dwb_msgs__msg__TrajectoryScore;
    is_plain =
      (
      offsetof(DataType, total) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _TrajectoryScore__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const dwb_msgs__msg__TrajectoryScore * ros_message = static_cast<const dwb_msgs__msg__TrajectoryScore *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_dwb_msgs__msg__TrajectoryScore(ros_message, cdr);
}

static bool _TrajectoryScore__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  dwb_msgs__msg__TrajectoryScore * ros_message = static_cast<dwb_msgs__msg__TrajectoryScore *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_dwb_msgs__msg__TrajectoryScore(cdr, ros_message);
}

static uint32_t _TrajectoryScore__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dwb_msgs__msg__TrajectoryScore(
      untyped_ros_message, 0));
}

static size_t _TrajectoryScore__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dwb_msgs__msg__TrajectoryScore(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TrajectoryScore = {
  "dwb_msgs::msg",
  "TrajectoryScore",
  _TrajectoryScore__cdr_serialize,
  _TrajectoryScore__cdr_deserialize,
  _TrajectoryScore__get_serialized_size,
  _TrajectoryScore__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TrajectoryScore__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrajectoryScore,
  get_message_typesupport_handle_function,
  &dwb_msgs__msg__TrajectoryScore__get_type_hash,
  &dwb_msgs__msg__TrajectoryScore__get_type_description,
  &dwb_msgs__msg__TrajectoryScore__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, msg, TrajectoryScore)() {
  return &_TrajectoryScore__type_support;
}

#if defined(__cplusplus)
}
#endif
