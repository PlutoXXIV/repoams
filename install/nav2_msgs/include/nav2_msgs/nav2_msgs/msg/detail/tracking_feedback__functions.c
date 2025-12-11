// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav2_msgs:msg/TrackingFeedback.idl
// generated code does not contain a copyright notice
#include "nav2_msgs/msg/detail/tracking_feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `robot_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
nav2_msgs__msg__TrackingFeedback__init(nav2_msgs__msg__TrackingFeedback * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    nav2_msgs__msg__TrackingFeedback__fini(msg);
    return false;
  }
  // tracking_error
  // current_path_index
  // robot_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->robot_pose)) {
    nav2_msgs__msg__TrackingFeedback__fini(msg);
    return false;
  }
  // distance_to_goal
  // speed
  // remaining_path_length
  return true;
}

void
nav2_msgs__msg__TrackingFeedback__fini(nav2_msgs__msg__TrackingFeedback * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tracking_error
  // current_path_index
  // robot_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->robot_pose);
  // distance_to_goal
  // speed
  // remaining_path_length
}

bool
nav2_msgs__msg__TrackingFeedback__are_equal(const nav2_msgs__msg__TrackingFeedback * lhs, const nav2_msgs__msg__TrackingFeedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // tracking_error
  if (lhs->tracking_error != rhs->tracking_error) {
    return false;
  }
  // current_path_index
  if (lhs->current_path_index != rhs->current_path_index) {
    return false;
  }
  // robot_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->robot_pose), &(rhs->robot_pose)))
  {
    return false;
  }
  // distance_to_goal
  if (lhs->distance_to_goal != rhs->distance_to_goal) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // remaining_path_length
  if (lhs->remaining_path_length != rhs->remaining_path_length) {
    return false;
  }
  return true;
}

bool
nav2_msgs__msg__TrackingFeedback__copy(
  const nav2_msgs__msg__TrackingFeedback * input,
  nav2_msgs__msg__TrackingFeedback * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // tracking_error
  output->tracking_error = input->tracking_error;
  // current_path_index
  output->current_path_index = input->current_path_index;
  // robot_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->robot_pose), &(output->robot_pose)))
  {
    return false;
  }
  // distance_to_goal
  output->distance_to_goal = input->distance_to_goal;
  // speed
  output->speed = input->speed;
  // remaining_path_length
  output->remaining_path_length = input->remaining_path_length;
  return true;
}

nav2_msgs__msg__TrackingFeedback *
nav2_msgs__msg__TrackingFeedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__TrackingFeedback * msg = (nav2_msgs__msg__TrackingFeedback *)allocator.allocate(sizeof(nav2_msgs__msg__TrackingFeedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__msg__TrackingFeedback));
  bool success = nav2_msgs__msg__TrackingFeedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__msg__TrackingFeedback__destroy(nav2_msgs__msg__TrackingFeedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav2_msgs__msg__TrackingFeedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav2_msgs__msg__TrackingFeedback__Sequence__init(nav2_msgs__msg__TrackingFeedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__TrackingFeedback * data = NULL;

  if (size) {
    data = (nav2_msgs__msg__TrackingFeedback *)allocator.zero_allocate(size, sizeof(nav2_msgs__msg__TrackingFeedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__msg__TrackingFeedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__msg__TrackingFeedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nav2_msgs__msg__TrackingFeedback__Sequence__fini(nav2_msgs__msg__TrackingFeedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav2_msgs__msg__TrackingFeedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nav2_msgs__msg__TrackingFeedback__Sequence *
nav2_msgs__msg__TrackingFeedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__TrackingFeedback__Sequence * array = (nav2_msgs__msg__TrackingFeedback__Sequence *)allocator.allocate(sizeof(nav2_msgs__msg__TrackingFeedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__msg__TrackingFeedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav2_msgs__msg__TrackingFeedback__Sequence__destroy(nav2_msgs__msg__TrackingFeedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav2_msgs__msg__TrackingFeedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav2_msgs__msg__TrackingFeedback__Sequence__are_equal(const nav2_msgs__msg__TrackingFeedback__Sequence * lhs, const nav2_msgs__msg__TrackingFeedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav2_msgs__msg__TrackingFeedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav2_msgs__msg__TrackingFeedback__Sequence__copy(
  const nav2_msgs__msg__TrackingFeedback__Sequence * input,
  nav2_msgs__msg__TrackingFeedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav2_msgs__msg__TrackingFeedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nav2_msgs__msg__TrackingFeedback * data =
      (nav2_msgs__msg__TrackingFeedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav2_msgs__msg__TrackingFeedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nav2_msgs__msg__TrackingFeedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav2_msgs__msg__TrackingFeedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
