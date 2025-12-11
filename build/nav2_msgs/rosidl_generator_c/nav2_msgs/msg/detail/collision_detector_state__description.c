// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from nav2_msgs:msg/CollisionDetectorState.idl
// generated code does not contain a copyright notice

#include "nav2_msgs/msg/detail/collision_detector_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
const rosidl_type_hash_t *
nav2_msgs__msg__CollisionDetectorState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf3, 0xe8, 0xab, 0xa6, 0x71, 0x35, 0xe9, 0xdd,
      0x5f, 0xdd, 0xd3, 0xd9, 0xd5, 0xc8, 0x0a, 0x47,
      0xa9, 0x79, 0x8c, 0xc6, 0x9c, 0x8f, 0x06, 0x20,
      0x69, 0x63, 0x38, 0xa1, 0x20, 0xd2, 0xf5, 0xa5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char nav2_msgs__msg__CollisionDetectorState__TYPE_NAME[] = "nav2_msgs/msg/CollisionDetectorState";

// Define type names, field names, and default values
static char nav2_msgs__msg__CollisionDetectorState__FIELD_NAME__polygons[] = "polygons";
static char nav2_msgs__msg__CollisionDetectorState__FIELD_NAME__detections[] = "detections";

static rosidl_runtime_c__type_description__Field nav2_msgs__msg__CollisionDetectorState__FIELDS[] = {
  {
    {nav2_msgs__msg__CollisionDetectorState__FIELD_NAME__polygons, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__msg__CollisionDetectorState__FIELD_NAME__detections, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nav2_msgs__msg__CollisionDetectorState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nav2_msgs__msg__CollisionDetectorState__TYPE_NAME, 36, 36},
      {nav2_msgs__msg__CollisionDetectorState__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Name of configured polygons\n"
  "string[] polygons\n"
  "# List of detections for each polygon\n"
  "bool[] detections";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
nav2_msgs__msg__CollisionDetectorState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nav2_msgs__msg__CollisionDetectorState__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 104, 104},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nav2_msgs__msg__CollisionDetectorState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nav2_msgs__msg__CollisionDetectorState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
