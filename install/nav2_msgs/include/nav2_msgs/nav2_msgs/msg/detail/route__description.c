// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from nav2_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#include "nav2_msgs/msg/detail/route__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
const rosidl_type_hash_t *
nav2_msgs__msg__Route__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe7, 0xa3, 0x03, 0x27, 0xe3, 0xf1, 0x7e, 0x37,
      0xbb, 0x7c, 0x8d, 0x55, 0x9c, 0xa6, 0xa8, 0x4e,
      0x18, 0x9e, 0xd1, 0x77, 0x25, 0xf0, 0xb6, 0xec,
      0xc0, 0x2f, 0xbc, 0xce, 0xee, 0xf7, 0x01, 0x84,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "nav2_msgs/msg/detail/route_edge__functions.h"
#include "nav2_msgs/msg/detail/route_node__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t nav2_msgs__msg__RouteEdge__EXPECTED_HASH = {1, {
    0xd4, 0x83, 0x9a, 0x85, 0x1d, 0x45, 0xcc, 0x76,
    0x3a, 0xba, 0x22, 0x6f, 0x9f, 0xa1, 0x5a, 0x9e,
    0x37, 0x25, 0xd7, 0xfd, 0x91, 0xf9, 0xf5, 0xb0,
    0x5f, 0xb0, 0xdc, 0x79, 0x6e, 0xe4, 0x51, 0x30,
  }};
static const rosidl_type_hash_t nav2_msgs__msg__RouteNode__EXPECTED_HASH = {1, {
    0x97, 0xea, 0xe2, 0x8f, 0xcc, 0x46, 0x9a, 0x60,
    0x40, 0xbd, 0xdd, 0x9d, 0xa9, 0xd8, 0x0c, 0x35,
    0x51, 0xd4, 0xa7, 0x82, 0xb0, 0xe6, 0xac, 0x69,
    0x07, 0x22, 0x49, 0x27, 0x35, 0xbe, 0x7e, 0x46,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char nav2_msgs__msg__Route__TYPE_NAME[] = "nav2_msgs/msg/Route";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char nav2_msgs__msg__RouteEdge__TYPE_NAME[] = "nav2_msgs/msg/RouteEdge";
static char nav2_msgs__msg__RouteNode__TYPE_NAME[] = "nav2_msgs/msg/RouteNode";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char nav2_msgs__msg__Route__FIELD_NAME__header[] = "header";
static char nav2_msgs__msg__Route__FIELD_NAME__route_cost[] = "route_cost";
static char nav2_msgs__msg__Route__FIELD_NAME__nodes[] = "nodes";
static char nav2_msgs__msg__Route__FIELD_NAME__edges[] = "edges";

static rosidl_runtime_c__type_description__Field nav2_msgs__msg__Route__FIELDS[] = {
  {
    {nav2_msgs__msg__Route__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__msg__Route__FIELD_NAME__route_cost, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__msg__Route__FIELD_NAME__nodes, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {nav2_msgs__msg__RouteNode__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__msg__Route__FIELD_NAME__edges, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {nav2_msgs__msg__RouteEdge__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription nav2_msgs__msg__Route__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__msg__RouteEdge__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__msg__RouteNode__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nav2_msgs__msg__Route__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nav2_msgs__msg__Route__TYPE_NAME, 19, 19},
      {nav2_msgs__msg__Route__FIELDS, 4, 4},
    },
    {nav2_msgs__msg__Route__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&nav2_msgs__msg__RouteEdge__EXPECTED_HASH, nav2_msgs__msg__RouteEdge__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = nav2_msgs__msg__RouteEdge__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&nav2_msgs__msg__RouteNode__EXPECTED_HASH, nav2_msgs__msg__RouteNode__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = nav2_msgs__msg__RouteNode__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "float32 route_cost\n"
  "RouteNode[] nodes # ordered set of nodes of the route\n"
  "RouteEdge[] edges # ordered set of edges that connect nodes";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
nav2_msgs__msg__Route__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nav2_msgs__msg__Route__TYPE_NAME, 19, 19},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 156, 156},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nav2_msgs__msg__Route__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nav2_msgs__msg__Route__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *nav2_msgs__msg__RouteEdge__get_individual_type_description_source(NULL);
    sources[4] = *nav2_msgs__msg__RouteNode__get_individual_type_description_source(NULL);
    sources[5] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
