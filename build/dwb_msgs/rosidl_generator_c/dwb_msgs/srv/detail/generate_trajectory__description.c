// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dwb_msgs:srv/GenerateTrajectory.idl
// generated code does not contain a copyright notice

#include "dwb_msgs/srv/detail/generate_trajectory__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
const rosidl_type_hash_t *
dwb_msgs__srv__GenerateTrajectory__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x26, 0x27, 0x5c, 0xa0, 0xa6, 0x48, 0xc5, 0x5a,
      0x09, 0x8d, 0x30, 0x5b, 0x0c, 0xef, 0x38, 0xae,
      0x89, 0x4a, 0x1a, 0x82, 0xdd, 0x50, 0x9e, 0xaa,
      0x44, 0x63, 0x6a, 0x1c, 0xf7, 0x67, 0xb0, 0x88,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
const rosidl_type_hash_t *
dwb_msgs__srv__GenerateTrajectory_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc6, 0xb9, 0x4f, 0x33, 0xbf, 0x29, 0x11, 0x8e,
      0xe8, 0x95, 0x5c, 0x87, 0x4c, 0xbf, 0xcd, 0x9d,
      0xcd, 0xeb, 0x1a, 0xf8, 0x77, 0x2c, 0xdf, 0x48,
      0x18, 0xdc, 0x71, 0x7e, 0x55, 0x5c, 0xce, 0x40,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
const rosidl_type_hash_t *
dwb_msgs__srv__GenerateTrajectory_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe6, 0xb5, 0xca, 0x14, 0xaa, 0xf8, 0x0d, 0x98,
      0xcb, 0x30, 0x2e, 0x17, 0x8f, 0xd3, 0x55, 0x9c,
      0xdd, 0x73, 0x53, 0x37, 0xed, 0x38, 0xa4, 0x95,
      0xd0, 0xed, 0xf7, 0x86, 0xcd, 0x25, 0x30, 0x28,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
const rosidl_type_hash_t *
dwb_msgs__srv__GenerateTrajectory_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xeb, 0x52, 0x58, 0xae, 0x96, 0x91, 0xc7, 0x41,
      0xb7, 0xe1, 0x54, 0x28, 0x5a, 0xe7, 0xde, 0xc8,
      0xe4, 0x4c, 0xb1, 0xa8, 0x84, 0xff, 0xb1, 0x56,
      0x2a, 0x3c, 0x70, 0x89, 0x9e, 0x5b, 0x91, 0xbd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "nav_2d_msgs/msg/detail/twist2_d__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "dwb_msgs/msg/detail/trajectory2_d__functions.h"
#include "builtin_interfaces/msg/detail/duration__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Duration__EXPECTED_HASH = {1, {
    0xe8, 0xd0, 0x09, 0xf6, 0x59, 0x81, 0x6f, 0x75,
    0x8b, 0x75, 0x33, 0x4e, 0xe1, 0xa9, 0xca, 0x5b,
    0x5c, 0x0b, 0x85, 0x98, 0x43, 0x26, 0x1f, 0x14,
    0xc7, 0xf9, 0x37, 0x34, 0x95, 0x99, 0xd9, 0x3b,
  }};
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t dwb_msgs__msg__Trajectory2D__EXPECTED_HASH = {1, {
    0x29, 0xb0, 0xbe, 0x71, 0x66, 0xdf, 0xf9, 0x1e,
    0xc4, 0xc2, 0xc0, 0x03, 0xfa, 0x49, 0xf1, 0x2f,
    0xae, 0x03, 0x51, 0x6b, 0x46, 0xb7, 0xc8, 0x23,
    0x0e, 0x13, 0x0a, 0xa7, 0xc8, 0x05, 0xe8, 0xde,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose__EXPECTED_HASH = {1, {
    0xd5, 0x01, 0x95, 0x4e, 0x94, 0x76, 0xce, 0xa2,
    0x99, 0x69, 0x84, 0xe8, 0x12, 0x05, 0x4b, 0x68,
    0x02, 0x6a, 0xe0, 0xbf, 0xae, 0x78, 0x9d, 0x9a,
    0x10, 0xb2, 0x3d, 0xaf, 0x35, 0xcc, 0x90, 0xfa,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t nav_2d_msgs__msg__Twist2D__EXPECTED_HASH = {1, {
    0x33, 0xa3, 0xa4, 0x7d, 0x7b, 0x3a, 0xaa, 0xd5,
    0x37, 0x6a, 0x48, 0x25, 0x05, 0x97, 0x09, 0x3f,
    0xeb, 0x4b, 0x92, 0xab, 0x87, 0x06, 0xc9, 0x6d,
    0xca, 0x69, 0xf4, 0x7d, 0x9a, 0x98, 0x07, 0xd0,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char dwb_msgs__srv__GenerateTrajectory__TYPE_NAME[] = "dwb_msgs/srv/GenerateTrajectory";
static char builtin_interfaces__msg__Duration__TYPE_NAME[] = "builtin_interfaces/msg/Duration";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char dwb_msgs__msg__Trajectory2D__TYPE_NAME[] = "dwb_msgs/msg/Trajectory2D";
static char dwb_msgs__srv__GenerateTrajectory_Event__TYPE_NAME[] = "dwb_msgs/srv/GenerateTrajectory_Event";
static char dwb_msgs__srv__GenerateTrajectory_Request__TYPE_NAME[] = "dwb_msgs/srv/GenerateTrajectory_Request";
static char dwb_msgs__srv__GenerateTrajectory_Response__TYPE_NAME[] = "dwb_msgs/srv/GenerateTrajectory_Response";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char nav_2d_msgs__msg__Twist2D__TYPE_NAME[] = "nav_2d_msgs/msg/Twist2D";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char dwb_msgs__srv__GenerateTrajectory__FIELD_NAME__request_message[] = "request_message";
static char dwb_msgs__srv__GenerateTrajectory__FIELD_NAME__response_message[] = "response_message";
static char dwb_msgs__srv__GenerateTrajectory__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field dwb_msgs__srv__GenerateTrajectory__FIELDS[] = {
  {
    {dwb_msgs__srv__GenerateTrajectory__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dwb_msgs__srv__GenerateTrajectory_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {dwb_msgs__srv__GenerateTrajectory__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dwb_msgs__srv__GenerateTrajectory_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {dwb_msgs__srv__GenerateTrajectory__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dwb_msgs__srv__GenerateTrajectory_Event__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dwb_msgs__srv__GenerateTrajectory__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dwb_msgs__msg__Trajectory2D__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {dwb_msgs__srv__GenerateTrajectory_Event__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {dwb_msgs__srv__GenerateTrajectory_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {dwb_msgs__srv__GenerateTrajectory_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {nav_2d_msgs__msg__Twist2D__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dwb_msgs__srv__GenerateTrajectory__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dwb_msgs__srv__GenerateTrajectory__TYPE_NAME, 31, 31},
      {dwb_msgs__srv__GenerateTrajectory__FIELDS, 3, 3},
    },
    {dwb_msgs__srv__GenerateTrajectory__REFERENCED_TYPE_DESCRIPTIONS, 11, 11},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&dwb_msgs__msg__Trajectory2D__EXPECTED_HASH, dwb_msgs__msg__Trajectory2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = dwb_msgs__msg__Trajectory2D__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = dwb_msgs__srv__GenerateTrajectory_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = dwb_msgs__srv__GenerateTrajectory_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = dwb_msgs__srv__GenerateTrajectory_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&nav_2d_msgs__msg__Twist2D__EXPECTED_HASH, nav_2d_msgs__msg__Twist2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = nav_2d_msgs__msg__Twist2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dwb_msgs__srv__GenerateTrajectory_Request__FIELD_NAME__start_pose[] = "start_pose";
static char dwb_msgs__srv__GenerateTrajectory_Request__FIELD_NAME__start_vel[] = "start_vel";
static char dwb_msgs__srv__GenerateTrajectory_Request__FIELD_NAME__cmd_vel[] = "cmd_vel";

static rosidl_runtime_c__type_description__Field dwb_msgs__srv__GenerateTrajectory_Request__FIELDS[] = {
  {
    {dwb_msgs__srv__GenerateTrajectory_Request__FIELD_NAME__start_pose, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {dwb_msgs__srv__GenerateTrajectory_Request__FIELD_NAME__start_vel, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {nav_2d_msgs__msg__Twist2D__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {dwb_msgs__srv__GenerateTrajectory_Request__FIELD_NAME__cmd_vel, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {nav_2d_msgs__msg__Twist2D__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dwb_msgs__srv__GenerateTrajectory_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {nav_2d_msgs__msg__Twist2D__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dwb_msgs__srv__GenerateTrajectory_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dwb_msgs__srv__GenerateTrajectory_Request__TYPE_NAME, 39, 39},
      {dwb_msgs__srv__GenerateTrajectory_Request__FIELDS, 3, 3},
    },
    {dwb_msgs__srv__GenerateTrajectory_Request__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&nav_2d_msgs__msg__Twist2D__EXPECTED_HASH, nav_2d_msgs__msg__Twist2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = nav_2d_msgs__msg__Twist2D__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dwb_msgs__srv__GenerateTrajectory_Response__FIELD_NAME__traj[] = "traj";

static rosidl_runtime_c__type_description__Field dwb_msgs__srv__GenerateTrajectory_Response__FIELDS[] = {
  {
    {dwb_msgs__srv__GenerateTrajectory_Response__FIELD_NAME__traj, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dwb_msgs__msg__Trajectory2D__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dwb_msgs__srv__GenerateTrajectory_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {dwb_msgs__msg__Trajectory2D__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {nav_2d_msgs__msg__Twist2D__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dwb_msgs__srv__GenerateTrajectory_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dwb_msgs__srv__GenerateTrajectory_Response__TYPE_NAME, 40, 40},
      {dwb_msgs__srv__GenerateTrajectory_Response__FIELDS, 1, 1},
    },
    {dwb_msgs__srv__GenerateTrajectory_Response__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&dwb_msgs__msg__Trajectory2D__EXPECTED_HASH, dwb_msgs__msg__Trajectory2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = dwb_msgs__msg__Trajectory2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&nav_2d_msgs__msg__Twist2D__EXPECTED_HASH, nav_2d_msgs__msg__Twist2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = nav_2d_msgs__msg__Twist2D__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dwb_msgs__srv__GenerateTrajectory_Event__FIELD_NAME__info[] = "info";
static char dwb_msgs__srv__GenerateTrajectory_Event__FIELD_NAME__request[] = "request";
static char dwb_msgs__srv__GenerateTrajectory_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field dwb_msgs__srv__GenerateTrajectory_Event__FIELDS[] = {
  {
    {dwb_msgs__srv__GenerateTrajectory_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {dwb_msgs__srv__GenerateTrajectory_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dwb_msgs__srv__GenerateTrajectory_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {dwb_msgs__srv__GenerateTrajectory_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dwb_msgs__srv__GenerateTrajectory_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dwb_msgs__srv__GenerateTrajectory_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dwb_msgs__msg__Trajectory2D__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {dwb_msgs__srv__GenerateTrajectory_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {dwb_msgs__srv__GenerateTrajectory_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {nav_2d_msgs__msg__Twist2D__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dwb_msgs__srv__GenerateTrajectory_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dwb_msgs__srv__GenerateTrajectory_Event__TYPE_NAME, 37, 37},
      {dwb_msgs__srv__GenerateTrajectory_Event__FIELDS, 3, 3},
    },
    {dwb_msgs__srv__GenerateTrajectory_Event__REFERENCED_TYPE_DESCRIPTIONS, 10, 10},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&dwb_msgs__msg__Trajectory2D__EXPECTED_HASH, dwb_msgs__msg__Trajectory2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = dwb_msgs__msg__Trajectory2D__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = dwb_msgs__srv__GenerateTrajectory_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = dwb_msgs__srv__GenerateTrajectory_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&nav_2d_msgs__msg__Twist2D__EXPECTED_HASH, nav_2d_msgs__msg__Twist2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = nav_2d_msgs__msg__Twist2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# For a given start pose, velocity and desired velocity, generate which poses will be visited\n"
  "geometry_msgs/Pose start_pose\n"
  "nav_2d_msgs/Twist2D start_vel\n"
  "nav_2d_msgs/Twist2D cmd_vel\n"
  "---\n"
  "Trajectory2D traj";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dwb_msgs__srv__GenerateTrajectory__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dwb_msgs__srv__GenerateTrajectory__TYPE_NAME, 31, 31},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 204, 204},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dwb_msgs__srv__GenerateTrajectory_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dwb_msgs__srv__GenerateTrajectory_Request__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dwb_msgs__srv__GenerateTrajectory_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dwb_msgs__srv__GenerateTrajectory_Response__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dwb_msgs__srv__GenerateTrajectory_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dwb_msgs__srv__GenerateTrajectory_Event__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dwb_msgs__srv__GenerateTrajectory__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[12];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 12, 12};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dwb_msgs__srv__GenerateTrajectory__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[3] = *dwb_msgs__msg__Trajectory2D__get_individual_type_description_source(NULL);
    sources[4] = *dwb_msgs__srv__GenerateTrajectory_Event__get_individual_type_description_source(NULL);
    sources[5] = *dwb_msgs__srv__GenerateTrajectory_Request__get_individual_type_description_source(NULL);
    sources[6] = *dwb_msgs__srv__GenerateTrajectory_Response__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[8] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[9] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[10] = *nav_2d_msgs__msg__Twist2D__get_individual_type_description_source(NULL);
    sources[11] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dwb_msgs__srv__GenerateTrajectory_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dwb_msgs__srv__GenerateTrajectory_Request__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[4] = *nav_2d_msgs__msg__Twist2D__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dwb_msgs__srv__GenerateTrajectory_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dwb_msgs__srv__GenerateTrajectory_Response__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *dwb_msgs__msg__Trajectory2D__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[6] = *nav_2d_msgs__msg__Twist2D__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dwb_msgs__srv__GenerateTrajectory_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[11];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 11, 11};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dwb_msgs__srv__GenerateTrajectory_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[3] = *dwb_msgs__msg__Trajectory2D__get_individual_type_description_source(NULL);
    sources[4] = *dwb_msgs__srv__GenerateTrajectory_Request__get_individual_type_description_source(NULL);
    sources[5] = *dwb_msgs__srv__GenerateTrajectory_Response__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[8] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[9] = *nav_2d_msgs__msg__Twist2D__get_individual_type_description_source(NULL);
    sources[10] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
