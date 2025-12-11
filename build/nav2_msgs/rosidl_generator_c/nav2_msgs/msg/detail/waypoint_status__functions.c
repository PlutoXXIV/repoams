// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav2_msgs:msg/WaypointStatus.idl
// generated code does not contain a copyright notice
#include "nav2_msgs/msg/detail/waypoint_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `waypoint_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `error_msg`
#include "rosidl_runtime_c/string_functions.h"

bool
nav2_msgs__msg__WaypointStatus__init(nav2_msgs__msg__WaypointStatus * msg)
{
  if (!msg) {
    return false;
  }
  // waypoint_status
  // waypoint_index
  // waypoint_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->waypoint_pose)) {
    nav2_msgs__msg__WaypointStatus__fini(msg);
    return false;
  }
  // error_code
  // error_msg
  if (!rosidl_runtime_c__String__init(&msg->error_msg)) {
    nav2_msgs__msg__WaypointStatus__fini(msg);
    return false;
  }
  return true;
}

void
nav2_msgs__msg__WaypointStatus__fini(nav2_msgs__msg__WaypointStatus * msg)
{
  if (!msg) {
    return;
  }
  // waypoint_status
  // waypoint_index
  // waypoint_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->waypoint_pose);
  // error_code
  // error_msg
  rosidl_runtime_c__String__fini(&msg->error_msg);
}

bool
nav2_msgs__msg__WaypointStatus__are_equal(const nav2_msgs__msg__WaypointStatus * lhs, const nav2_msgs__msg__WaypointStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // waypoint_status
  if (lhs->waypoint_status != rhs->waypoint_status) {
    return false;
  }
  // waypoint_index
  if (lhs->waypoint_index != rhs->waypoint_index) {
    return false;
  }
  // waypoint_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->waypoint_pose), &(rhs->waypoint_pose)))
  {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  // error_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_msg), &(rhs->error_msg)))
  {
    return false;
  }
  return true;
}

bool
nav2_msgs__msg__WaypointStatus__copy(
  const nav2_msgs__msg__WaypointStatus * input,
  nav2_msgs__msg__WaypointStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // waypoint_status
  output->waypoint_status = input->waypoint_status;
  // waypoint_index
  output->waypoint_index = input->waypoint_index;
  // waypoint_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->waypoint_pose), &(output->waypoint_pose)))
  {
    return false;
  }
  // error_code
  output->error_code = input->error_code;
  // error_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->error_msg), &(output->error_msg)))
  {
    return false;
  }
  return true;
}

nav2_msgs__msg__WaypointStatus *
nav2_msgs__msg__WaypointStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__WaypointStatus * msg = (nav2_msgs__msg__WaypointStatus *)allocator.allocate(sizeof(nav2_msgs__msg__WaypointStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__msg__WaypointStatus));
  bool success = nav2_msgs__msg__WaypointStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__msg__WaypointStatus__destroy(nav2_msgs__msg__WaypointStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav2_msgs__msg__WaypointStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav2_msgs__msg__WaypointStatus__Sequence__init(nav2_msgs__msg__WaypointStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__WaypointStatus * data = NULL;

  if (size) {
    data = (nav2_msgs__msg__WaypointStatus *)allocator.zero_allocate(size, sizeof(nav2_msgs__msg__WaypointStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__msg__WaypointStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__msg__WaypointStatus__fini(&data[i - 1]);
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
nav2_msgs__msg__WaypointStatus__Sequence__fini(nav2_msgs__msg__WaypointStatus__Sequence * array)
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
      nav2_msgs__msg__WaypointStatus__fini(&array->data[i]);
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

nav2_msgs__msg__WaypointStatus__Sequence *
nav2_msgs__msg__WaypointStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__WaypointStatus__Sequence * array = (nav2_msgs__msg__WaypointStatus__Sequence *)allocator.allocate(sizeof(nav2_msgs__msg__WaypointStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__msg__WaypointStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav2_msgs__msg__WaypointStatus__Sequence__destroy(nav2_msgs__msg__WaypointStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav2_msgs__msg__WaypointStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav2_msgs__msg__WaypointStatus__Sequence__are_equal(const nav2_msgs__msg__WaypointStatus__Sequence * lhs, const nav2_msgs__msg__WaypointStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav2_msgs__msg__WaypointStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav2_msgs__msg__WaypointStatus__Sequence__copy(
  const nav2_msgs__msg__WaypointStatus__Sequence * input,
  nav2_msgs__msg__WaypointStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav2_msgs__msg__WaypointStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nav2_msgs__msg__WaypointStatus * data =
      (nav2_msgs__msg__WaypointStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav2_msgs__msg__WaypointStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nav2_msgs__msg__WaypointStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav2_msgs__msg__WaypointStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
