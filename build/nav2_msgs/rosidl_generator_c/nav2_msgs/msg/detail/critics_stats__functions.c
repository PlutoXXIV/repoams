// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav2_msgs:msg/CriticsStats.idl
// generated code does not contain a copyright notice
#include "nav2_msgs/msg/detail/critics_stats__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `critics`
#include "rosidl_runtime_c/string_functions.h"
// Member `changed`
// Member `costs_sum`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
nav2_msgs__msg__CriticsStats__init(nav2_msgs__msg__CriticsStats * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    nav2_msgs__msg__CriticsStats__fini(msg);
    return false;
  }
  // critics
  if (!rosidl_runtime_c__String__Sequence__init(&msg->critics, 0)) {
    nav2_msgs__msg__CriticsStats__fini(msg);
    return false;
  }
  // changed
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->changed, 0)) {
    nav2_msgs__msg__CriticsStats__fini(msg);
    return false;
  }
  // costs_sum
  if (!rosidl_runtime_c__float__Sequence__init(&msg->costs_sum, 0)) {
    nav2_msgs__msg__CriticsStats__fini(msg);
    return false;
  }
  return true;
}

void
nav2_msgs__msg__CriticsStats__fini(nav2_msgs__msg__CriticsStats * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // critics
  rosidl_runtime_c__String__Sequence__fini(&msg->critics);
  // changed
  rosidl_runtime_c__boolean__Sequence__fini(&msg->changed);
  // costs_sum
  rosidl_runtime_c__float__Sequence__fini(&msg->costs_sum);
}

bool
nav2_msgs__msg__CriticsStats__are_equal(const nav2_msgs__msg__CriticsStats * lhs, const nav2_msgs__msg__CriticsStats * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // critics
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->critics), &(rhs->critics)))
  {
    return false;
  }
  // changed
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->changed), &(rhs->changed)))
  {
    return false;
  }
  // costs_sum
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->costs_sum), &(rhs->costs_sum)))
  {
    return false;
  }
  return true;
}

bool
nav2_msgs__msg__CriticsStats__copy(
  const nav2_msgs__msg__CriticsStats * input,
  nav2_msgs__msg__CriticsStats * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // critics
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->critics), &(output->critics)))
  {
    return false;
  }
  // changed
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->changed), &(output->changed)))
  {
    return false;
  }
  // costs_sum
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->costs_sum), &(output->costs_sum)))
  {
    return false;
  }
  return true;
}

nav2_msgs__msg__CriticsStats *
nav2_msgs__msg__CriticsStats__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__CriticsStats * msg = (nav2_msgs__msg__CriticsStats *)allocator.allocate(sizeof(nav2_msgs__msg__CriticsStats), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__msg__CriticsStats));
  bool success = nav2_msgs__msg__CriticsStats__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__msg__CriticsStats__destroy(nav2_msgs__msg__CriticsStats * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav2_msgs__msg__CriticsStats__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav2_msgs__msg__CriticsStats__Sequence__init(nav2_msgs__msg__CriticsStats__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__CriticsStats * data = NULL;

  if (size) {
    data = (nav2_msgs__msg__CriticsStats *)allocator.zero_allocate(size, sizeof(nav2_msgs__msg__CriticsStats), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__msg__CriticsStats__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__msg__CriticsStats__fini(&data[i - 1]);
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
nav2_msgs__msg__CriticsStats__Sequence__fini(nav2_msgs__msg__CriticsStats__Sequence * array)
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
      nav2_msgs__msg__CriticsStats__fini(&array->data[i]);
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

nav2_msgs__msg__CriticsStats__Sequence *
nav2_msgs__msg__CriticsStats__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__CriticsStats__Sequence * array = (nav2_msgs__msg__CriticsStats__Sequence *)allocator.allocate(sizeof(nav2_msgs__msg__CriticsStats__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__msg__CriticsStats__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav2_msgs__msg__CriticsStats__Sequence__destroy(nav2_msgs__msg__CriticsStats__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav2_msgs__msg__CriticsStats__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav2_msgs__msg__CriticsStats__Sequence__are_equal(const nav2_msgs__msg__CriticsStats__Sequence * lhs, const nav2_msgs__msg__CriticsStats__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav2_msgs__msg__CriticsStats__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav2_msgs__msg__CriticsStats__Sequence__copy(
  const nav2_msgs__msg__CriticsStats__Sequence * input,
  nav2_msgs__msg__CriticsStats__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav2_msgs__msg__CriticsStats);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nav2_msgs__msg__CriticsStats * data =
      (nav2_msgs__msg__CriticsStats *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav2_msgs__msg__CriticsStats__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nav2_msgs__msg__CriticsStats__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav2_msgs__msg__CriticsStats__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
