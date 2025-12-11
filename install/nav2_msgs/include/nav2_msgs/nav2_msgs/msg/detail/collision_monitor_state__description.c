// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from nav2_msgs:msg/CollisionMonitorState.idl
// generated code does not contain a copyright notice

#include "nav2_msgs/msg/detail/collision_monitor_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
const rosidl_type_hash_t *
nav2_msgs__msg__CollisionMonitorState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x84, 0x8f, 0x43, 0xf4, 0x07, 0x16, 0xd6, 0xb3,
      0xac, 0x12, 0xa6, 0x98, 0xcc, 0x39, 0x74, 0xa7,
      0xeb, 0x2b, 0xf0, 0x01, 0x58, 0xc5, 0xfc, 0xa7,
      0xbb, 0x93, 0xa1, 0x28, 0x85, 0x0d, 0x5a, 0x1e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char nav2_msgs__msg__CollisionMonitorState__TYPE_NAME[] = "nav2_msgs/msg/CollisionMonitorState";

// Define type names, field names, and default values
static char nav2_msgs__msg__CollisionMonitorState__FIELD_NAME__action_type[] = "action_type";
static char nav2_msgs__msg__CollisionMonitorState__FIELD_NAME__polygon_name[] = "polygon_name";

static rosidl_runtime_c__type_description__Field nav2_msgs__msg__CollisionMonitorState__FIELDS[] = {
  {
    {nav2_msgs__msg__CollisionMonitorState__FIELD_NAME__action_type, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__msg__CollisionMonitorState__FIELD_NAME__polygon_name, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nav2_msgs__msg__CollisionMonitorState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nav2_msgs__msg__CollisionMonitorState__TYPE_NAME, 35, 35},
      {nav2_msgs__msg__CollisionMonitorState__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Action type for robot in Collision Monitor\n"
  "uint8 DO_NOTHING=0 # No action\n"
  "uint8 STOP=1 # Stop the robot\n"
  "uint8 SLOWDOWN=2 # Slowdown in percentage from current operating speed\n"
  "uint8 APPROACH=3 # Keep constant time interval before collision\n"
  "uint8 LIMIT=4 # Sets a limit of velocities if pts in range\n"
  "uint8 action_type\n"
  "\n"
  "# Name of triggered polygon\n"
  "string polygon_name";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
nav2_msgs__msg__CollisionMonitorState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nav2_msgs__msg__CollisionMonitorState__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 367, 367},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nav2_msgs__msg__CollisionMonitorState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nav2_msgs__msg__CollisionMonitorState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
