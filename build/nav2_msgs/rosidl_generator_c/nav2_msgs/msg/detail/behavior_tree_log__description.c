// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from nav2_msgs:msg/BehaviorTreeLog.idl
// generated code does not contain a copyright notice

#include "nav2_msgs/msg/detail/behavior_tree_log__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
const rosidl_type_hash_t *
nav2_msgs__msg__BehaviorTreeLog__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x93, 0x35, 0xec, 0xb6, 0x88, 0xa4, 0xf6, 0x1b,
      0x7e, 0xb8, 0x2a, 0x7c, 0x10, 0xf2, 0x3e, 0xea,
      0x5f, 0x4e, 0x8b, 0xbd, 0xb7, 0xed, 0xfa, 0x04,
      0x8e, 0x35, 0x39, 0xaa, 0x92, 0x8f, 0x51, 0xb7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "nav2_msgs/msg/detail/behavior_tree_status_change__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t nav2_msgs__msg__BehaviorTreeStatusChange__EXPECTED_HASH = {1, {
    0x54, 0xc5, 0xa8, 0xcc, 0x55, 0x9e, 0x5e, 0xef,
    0xc9, 0x0b, 0x9c, 0x23, 0xa9, 0xf8, 0x1c, 0x1b,
    0x32, 0x6c, 0x97, 0xc0, 0x36, 0xd1, 0x0b, 0xaa,
    0x55, 0x6b, 0xac, 0x3e, 0xf0, 0x71, 0x13, 0xc6,
  }};
#endif

static char nav2_msgs__msg__BehaviorTreeLog__TYPE_NAME[] = "nav2_msgs/msg/BehaviorTreeLog";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char nav2_msgs__msg__BehaviorTreeStatusChange__TYPE_NAME[] = "nav2_msgs/msg/BehaviorTreeStatusChange";

// Define type names, field names, and default values
static char nav2_msgs__msg__BehaviorTreeLog__FIELD_NAME__timestamp[] = "timestamp";
static char nav2_msgs__msg__BehaviorTreeLog__FIELD_NAME__event_log[] = "event_log";

static rosidl_runtime_c__type_description__Field nav2_msgs__msg__BehaviorTreeLog__FIELDS[] = {
  {
    {nav2_msgs__msg__BehaviorTreeLog__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__msg__BehaviorTreeLog__FIELD_NAME__event_log, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {nav2_msgs__msg__BehaviorTreeStatusChange__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription nav2_msgs__msg__BehaviorTreeLog__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__msg__BehaviorTreeStatusChange__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nav2_msgs__msg__BehaviorTreeLog__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nav2_msgs__msg__BehaviorTreeLog__TYPE_NAME, 29, 29},
      {nav2_msgs__msg__BehaviorTreeLog__FIELDS, 2, 2},
    },
    {nav2_msgs__msg__BehaviorTreeLog__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&nav2_msgs__msg__BehaviorTreeStatusChange__EXPECTED_HASH, nav2_msgs__msg__BehaviorTreeStatusChange__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = nav2_msgs__msg__BehaviorTreeStatusChange__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "builtin_interfaces/Time timestamp    # ROS time that this log message was sent.\n"
  "BehaviorTreeStatusChange[] event_log";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
nav2_msgs__msg__BehaviorTreeLog__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nav2_msgs__msg__BehaviorTreeLog__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 117, 117},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nav2_msgs__msg__BehaviorTreeLog__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nav2_msgs__msg__BehaviorTreeLog__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *nav2_msgs__msg__BehaviorTreeStatusChange__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
