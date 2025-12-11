// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dwb_msgs:msg/CriticScore.idl
// generated code does not contain a copyright notice

#include "dwb_msgs/msg/detail/critic_score__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
const rosidl_type_hash_t *
dwb_msgs__msg__CriticScore__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4d, 0xfb, 0x08, 0x3c, 0x8d, 0x33, 0xfd, 0xe7,
      0xd1, 0xe1, 0x48, 0x23, 0x81, 0x50, 0x7f, 0xf3,
      0x33, 0xb8, 0x62, 0x33, 0x23, 0x88, 0x80, 0xa8,
      0x96, 0x82, 0x10, 0x69, 0x2c, 0xdd, 0xab, 0x6f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dwb_msgs__msg__CriticScore__TYPE_NAME[] = "dwb_msgs/msg/CriticScore";

// Define type names, field names, and default values
static char dwb_msgs__msg__CriticScore__FIELD_NAME__name[] = "name";
static char dwb_msgs__msg__CriticScore__FIELD_NAME__raw_score[] = "raw_score";
static char dwb_msgs__msg__CriticScore__FIELD_NAME__scale[] = "scale";

static rosidl_runtime_c__type_description__Field dwb_msgs__msg__CriticScore__FIELDS[] = {
  {
    {dwb_msgs__msg__CriticScore__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dwb_msgs__msg__CriticScore__FIELD_NAME__raw_score, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dwb_msgs__msg__CriticScore__FIELD_NAME__scale, 5, 5},
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
dwb_msgs__msg__CriticScore__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dwb_msgs__msg__CriticScore__TYPE_NAME, 24, 24},
      {dwb_msgs__msg__CriticScore__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# The result from one critic scoring a Twist.\n"
  "# Name of the critic\n"
  "string name\n"
  "# Score for the critic, not multiplied by the scale\n"
  "float32 raw_score\n"
  "# Scale for the critic, multiplied by the raw_score and added to the total score\n"
  "float32 scale";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dwb_msgs__msg__CriticScore__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dwb_msgs__msg__CriticScore__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 244, 244},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dwb_msgs__msg__CriticScore__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dwb_msgs__msg__CriticScore__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
