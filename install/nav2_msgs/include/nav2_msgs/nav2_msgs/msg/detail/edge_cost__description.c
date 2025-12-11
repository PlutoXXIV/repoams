// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from nav2_msgs:msg/EdgeCost.idl
// generated code does not contain a copyright notice

#include "nav2_msgs/msg/detail/edge_cost__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
const rosidl_type_hash_t *
nav2_msgs__msg__EdgeCost__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8d, 0xc1, 0x47, 0x0f, 0xcd, 0x5f, 0xc0, 0x25,
      0x3a, 0xe4, 0x85, 0x88, 0xf8, 0xf4, 0x7d, 0x67,
      0x21, 0x4d, 0x26, 0x72, 0xd1, 0x36, 0xc9, 0xf8,
      0xc9, 0xd1, 0xf4, 0x42, 0x20, 0xdd, 0xf5, 0x6f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char nav2_msgs__msg__EdgeCost__TYPE_NAME[] = "nav2_msgs/msg/EdgeCost";

// Define type names, field names, and default values
static char nav2_msgs__msg__EdgeCost__FIELD_NAME__edgeid[] = "edgeid";
static char nav2_msgs__msg__EdgeCost__FIELD_NAME__cost[] = "cost";

static rosidl_runtime_c__type_description__Field nav2_msgs__msg__EdgeCost__FIELDS[] = {
  {
    {nav2_msgs__msg__EdgeCost__FIELD_NAME__edgeid, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__msg__EdgeCost__FIELD_NAME__cost, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nav2_msgs__msg__EdgeCost__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nav2_msgs__msg__EdgeCost__TYPE_NAME, 22, 22},
      {nav2_msgs__msg__EdgeCost__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Edge cost to use with nav2_msgs/srv/DynamicEdges to adjust route edge costs\n"
  "uint16 edgeid\n"
  "float32 cost";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
nav2_msgs__msg__EdgeCost__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nav2_msgs__msg__EdgeCost__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 105, 105},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nav2_msgs__msg__EdgeCost__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nav2_msgs__msg__EdgeCost__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
