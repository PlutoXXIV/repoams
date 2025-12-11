// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from nav2_msgs:msg/CriticsStats.idl
// generated code does not contain a copyright notice

#include "nav2_msgs/msg/detail/critics_stats__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
const rosidl_type_hash_t *
nav2_msgs__msg__CriticsStats__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe2, 0xae, 0x3a, 0x92, 0xc9, 0x9e, 0xd8, 0x7e,
      0x90, 0x88, 0x99, 0x1f, 0x31, 0x21, 0xe8, 0x1e,
      0xb9, 0xd5, 0x6d, 0x13, 0x99, 0x81, 0x6d, 0x17,
      0xd2, 0x8a, 0xad, 0x4b, 0x2b, 0x86, 0x67, 0xc9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char nav2_msgs__msg__CriticsStats__TYPE_NAME[] = "nav2_msgs/msg/CriticsStats";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char nav2_msgs__msg__CriticsStats__FIELD_NAME__stamp[] = "stamp";
static char nav2_msgs__msg__CriticsStats__FIELD_NAME__critics[] = "critics";
static char nav2_msgs__msg__CriticsStats__FIELD_NAME__changed[] = "changed";
static char nav2_msgs__msg__CriticsStats__FIELD_NAME__costs_sum[] = "costs_sum";

static rosidl_runtime_c__type_description__Field nav2_msgs__msg__CriticsStats__FIELDS[] = {
  {
    {nav2_msgs__msg__CriticsStats__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__msg__CriticsStats__FIELD_NAME__critics, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__msg__CriticsStats__FIELD_NAME__changed, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__msg__CriticsStats__FIELD_NAME__costs_sum, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription nav2_msgs__msg__CriticsStats__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nav2_msgs__msg__CriticsStats__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nav2_msgs__msg__CriticsStats__TYPE_NAME, 26, 26},
      {nav2_msgs__msg__CriticsStats__FIELDS, 4, 4},
    },
    {nav2_msgs__msg__CriticsStats__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Critics statistics message\n"
  "builtin_interfaces/Time stamp\n"
  "string[] critics\n"
  "bool[] changed\n"
  "float32[] costs_sum";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
nav2_msgs__msg__CriticsStats__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nav2_msgs__msg__CriticsStats__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 111, 111},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nav2_msgs__msg__CriticsStats__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nav2_msgs__msg__CriticsStats__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
