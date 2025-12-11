// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav2_msgs:msg/CollisionDetectorState.idl
// generated code does not contain a copyright notice
#include "nav2_msgs/msg/detail/collision_detector_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `polygons`
#include "rosidl_runtime_c/string_functions.h"
// Member `detections`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
nav2_msgs__msg__CollisionDetectorState__init(nav2_msgs__msg__CollisionDetectorState * msg)
{
  if (!msg) {
    return false;
  }
  // polygons
  if (!rosidl_runtime_c__String__Sequence__init(&msg->polygons, 0)) {
    nav2_msgs__msg__CollisionDetectorState__fini(msg);
    return false;
  }
  // detections
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->detections, 0)) {
    nav2_msgs__msg__CollisionDetectorState__fini(msg);
    return false;
  }
  return true;
}

void
nav2_msgs__msg__CollisionDetectorState__fini(nav2_msgs__msg__CollisionDetectorState * msg)
{
  if (!msg) {
    return;
  }
  // polygons
  rosidl_runtime_c__String__Sequence__fini(&msg->polygons);
  // detections
  rosidl_runtime_c__boolean__Sequence__fini(&msg->detections);
}

bool
nav2_msgs__msg__CollisionDetectorState__are_equal(const nav2_msgs__msg__CollisionDetectorState * lhs, const nav2_msgs__msg__CollisionDetectorState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // polygons
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->polygons), &(rhs->polygons)))
  {
    return false;
  }
  // detections
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->detections), &(rhs->detections)))
  {
    return false;
  }
  return true;
}

bool
nav2_msgs__msg__CollisionDetectorState__copy(
  const nav2_msgs__msg__CollisionDetectorState * input,
  nav2_msgs__msg__CollisionDetectorState * output)
{
  if (!input || !output) {
    return false;
  }
  // polygons
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->polygons), &(output->polygons)))
  {
    return false;
  }
  // detections
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->detections), &(output->detections)))
  {
    return false;
  }
  return true;
}

nav2_msgs__msg__CollisionDetectorState *
nav2_msgs__msg__CollisionDetectorState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__CollisionDetectorState * msg = (nav2_msgs__msg__CollisionDetectorState *)allocator.allocate(sizeof(nav2_msgs__msg__CollisionDetectorState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__msg__CollisionDetectorState));
  bool success = nav2_msgs__msg__CollisionDetectorState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__msg__CollisionDetectorState__destroy(nav2_msgs__msg__CollisionDetectorState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav2_msgs__msg__CollisionDetectorState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav2_msgs__msg__CollisionDetectorState__Sequence__init(nav2_msgs__msg__CollisionDetectorState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__CollisionDetectorState * data = NULL;

  if (size) {
    data = (nav2_msgs__msg__CollisionDetectorState *)allocator.zero_allocate(size, sizeof(nav2_msgs__msg__CollisionDetectorState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__msg__CollisionDetectorState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__msg__CollisionDetectorState__fini(&data[i - 1]);
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
nav2_msgs__msg__CollisionDetectorState__Sequence__fini(nav2_msgs__msg__CollisionDetectorState__Sequence * array)
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
      nav2_msgs__msg__CollisionDetectorState__fini(&array->data[i]);
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

nav2_msgs__msg__CollisionDetectorState__Sequence *
nav2_msgs__msg__CollisionDetectorState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__CollisionDetectorState__Sequence * array = (nav2_msgs__msg__CollisionDetectorState__Sequence *)allocator.allocate(sizeof(nav2_msgs__msg__CollisionDetectorState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__msg__CollisionDetectorState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav2_msgs__msg__CollisionDetectorState__Sequence__destroy(nav2_msgs__msg__CollisionDetectorState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav2_msgs__msg__CollisionDetectorState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav2_msgs__msg__CollisionDetectorState__Sequence__are_equal(const nav2_msgs__msg__CollisionDetectorState__Sequence * lhs, const nav2_msgs__msg__CollisionDetectorState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav2_msgs__msg__CollisionDetectorState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav2_msgs__msg__CollisionDetectorState__Sequence__copy(
  const nav2_msgs__msg__CollisionDetectorState__Sequence * input,
  nav2_msgs__msg__CollisionDetectorState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav2_msgs__msg__CollisionDetectorState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nav2_msgs__msg__CollisionDetectorState * data =
      (nav2_msgs__msg__CollisionDetectorState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav2_msgs__msg__CollisionDetectorState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nav2_msgs__msg__CollisionDetectorState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav2_msgs__msg__CollisionDetectorState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
