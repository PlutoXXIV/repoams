// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav2_msgs:msg/PolygonObject.idl
// generated code does not contain a copyright notice
#include "nav2_msgs/msg/detail/polygon_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `uuid`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `points`
#include "geometry_msgs/msg/detail/point32__functions.h"

bool
nav2_msgs__msg__PolygonObject__init(nav2_msgs__msg__PolygonObject * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    nav2_msgs__msg__PolygonObject__fini(msg);
    return false;
  }
  // uuid
  if (!unique_identifier_msgs__msg__UUID__init(&msg->uuid)) {
    nav2_msgs__msg__PolygonObject__fini(msg);
    return false;
  }
  // points
  if (!geometry_msgs__msg__Point32__Sequence__init(&msg->points, 0)) {
    nav2_msgs__msg__PolygonObject__fini(msg);
    return false;
  }
  // closed
  // value
  return true;
}

void
nav2_msgs__msg__PolygonObject__fini(nav2_msgs__msg__PolygonObject * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // uuid
  unique_identifier_msgs__msg__UUID__fini(&msg->uuid);
  // points
  geometry_msgs__msg__Point32__Sequence__fini(&msg->points);
  // closed
  // value
}

bool
nav2_msgs__msg__PolygonObject__are_equal(const nav2_msgs__msg__PolygonObject * lhs, const nav2_msgs__msg__PolygonObject * rhs)
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
  // uuid
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->uuid), &(rhs->uuid)))
  {
    return false;
  }
  // points
  if (!geometry_msgs__msg__Point32__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  // closed
  if (lhs->closed != rhs->closed) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
nav2_msgs__msg__PolygonObject__copy(
  const nav2_msgs__msg__PolygonObject * input,
  nav2_msgs__msg__PolygonObject * output)
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
  // uuid
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->uuid), &(output->uuid)))
  {
    return false;
  }
  // points
  if (!geometry_msgs__msg__Point32__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  // closed
  output->closed = input->closed;
  // value
  output->value = input->value;
  return true;
}

nav2_msgs__msg__PolygonObject *
nav2_msgs__msg__PolygonObject__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__PolygonObject * msg = (nav2_msgs__msg__PolygonObject *)allocator.allocate(sizeof(nav2_msgs__msg__PolygonObject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__msg__PolygonObject));
  bool success = nav2_msgs__msg__PolygonObject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__msg__PolygonObject__destroy(nav2_msgs__msg__PolygonObject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav2_msgs__msg__PolygonObject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav2_msgs__msg__PolygonObject__Sequence__init(nav2_msgs__msg__PolygonObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__PolygonObject * data = NULL;

  if (size) {
    data = (nav2_msgs__msg__PolygonObject *)allocator.zero_allocate(size, sizeof(nav2_msgs__msg__PolygonObject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__msg__PolygonObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__msg__PolygonObject__fini(&data[i - 1]);
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
nav2_msgs__msg__PolygonObject__Sequence__fini(nav2_msgs__msg__PolygonObject__Sequence * array)
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
      nav2_msgs__msg__PolygonObject__fini(&array->data[i]);
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

nav2_msgs__msg__PolygonObject__Sequence *
nav2_msgs__msg__PolygonObject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__PolygonObject__Sequence * array = (nav2_msgs__msg__PolygonObject__Sequence *)allocator.allocate(sizeof(nav2_msgs__msg__PolygonObject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__msg__PolygonObject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav2_msgs__msg__PolygonObject__Sequence__destroy(nav2_msgs__msg__PolygonObject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav2_msgs__msg__PolygonObject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav2_msgs__msg__PolygonObject__Sequence__are_equal(const nav2_msgs__msg__PolygonObject__Sequence * lhs, const nav2_msgs__msg__PolygonObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav2_msgs__msg__PolygonObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav2_msgs__msg__PolygonObject__Sequence__copy(
  const nav2_msgs__msg__PolygonObject__Sequence * input,
  nav2_msgs__msg__PolygonObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav2_msgs__msg__PolygonObject);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nav2_msgs__msg__PolygonObject * data =
      (nav2_msgs__msg__PolygonObject *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav2_msgs__msg__PolygonObject__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nav2_msgs__msg__PolygonObject__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav2_msgs__msg__PolygonObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
