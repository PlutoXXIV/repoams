// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from nav2_msgs:srv/GetShapes.idl
// generated code does not contain a copyright notice

#include "nav2_msgs/srv/detail/get_shapes__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
const rosidl_type_hash_t *
nav2_msgs__srv__GetShapes__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa9, 0xbf, 0xc0, 0xfa, 0x83, 0x41, 0xdd, 0xab,
      0x74, 0x8b, 0x7c, 0x91, 0xd6, 0x85, 0x2e, 0xda,
      0x2b, 0x7f, 0xad, 0x9d, 0x28, 0x9e, 0xa2, 0x5f,
      0xdd, 0xc2, 0x72, 0xff, 0x9d, 0x77, 0xd8, 0x0a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
const rosidl_type_hash_t *
nav2_msgs__srv__GetShapes_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x84, 0x5e, 0x03, 0xc4, 0x1e, 0xca, 0x48, 0x05,
      0xa9, 0xd5, 0xa6, 0x20, 0x77, 0x4d, 0x2b, 0xdb,
      0x51, 0xd7, 0x78, 0xe7, 0xf7, 0xcb, 0x58, 0x38,
      0x13, 0xe9, 0x36, 0xbe, 0x4c, 0x82, 0x00, 0xf9,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
const rosidl_type_hash_t *
nav2_msgs__srv__GetShapes_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x71, 0x78, 0x57, 0x02, 0x83, 0xc5, 0x35, 0xc2,
      0xe4, 0x75, 0x32, 0xf0, 0xc4, 0x09, 0x59, 0x27,
      0xe8, 0x5f, 0x16, 0xd5, 0xd9, 0x0f, 0xa4, 0xb9,
      0x85, 0xcb, 0x8b, 0x0c, 0xf2, 0xde, 0x9b, 0xe6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
const rosidl_type_hash_t *
nav2_msgs__srv__GetShapes_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf3, 0xb9, 0x3e, 0xa9, 0xd7, 0x85, 0xca, 0x75,
      0x9d, 0x07, 0xb2, 0xa7, 0x70, 0xa0, 0xc1, 0xa6,
      0xf7, 0x43, 0x87, 0x8f, 0x65, 0x47, 0xe7, 0x36,
      0x4b, 0xfe, 0x76, 0xd0, 0x44, 0x19, 0x9f, 0xa2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point32__functions.h"
#include "nav2_msgs/msg/detail/circle_object__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "nav2_msgs/msg/detail/polygon_object__functions.h"
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point32__EXPECTED_HASH = {1, {
    0x2f, 0xc4, 0xdb, 0x7c, 0xae, 0x16, 0xa4, 0x58,
    0x2c, 0x79, 0xa5, 0x6b, 0x66, 0x17, 0x3a, 0x8d,
    0x48, 0xd5, 0x2c, 0x7d, 0xc5, 0x20, 0xdd, 0xc5,
    0x5a, 0x0d, 0x4b, 0xcf, 0x2a, 0x4b, 0xfd, 0xbc,
  }};
static const rosidl_type_hash_t nav2_msgs__msg__CircleObject__EXPECTED_HASH = {1, {
    0x6e, 0x9f, 0x3f, 0x9c, 0x75, 0xc9, 0x00, 0xb3,
    0xa9, 0xbb, 0x5b, 0xf7, 0x98, 0xd0, 0x8a, 0x6e,
    0xfb, 0xbb, 0x3a, 0x72, 0x98, 0x5e, 0x43, 0x16,
    0x1d, 0x05, 0xec, 0x4a, 0x8f, 0x7e, 0xb7, 0x05,
  }};
static const rosidl_type_hash_t nav2_msgs__msg__PolygonObject__EXPECTED_HASH = {1, {
    0x59, 0xff, 0xd5, 0x90, 0x86, 0x0e, 0x08, 0x94,
    0xc6, 0xee, 0x05, 0x86, 0x10, 0x8d, 0x2b, 0x44,
    0xbb, 0x0d, 0x71, 0xc7, 0x4f, 0x0c, 0x8a, 0xf3,
    0xe8, 0x92, 0x8b, 0x1a, 0x93, 0x0c, 0x19, 0x58,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
static const rosidl_type_hash_t unique_identifier_msgs__msg__UUID__EXPECTED_HASH = {1, {
    0x1b, 0x8e, 0x8a, 0xca, 0x95, 0x8c, 0xbe, 0xa2,
    0x8f, 0xe6, 0xef, 0x60, 0xbf, 0x6c, 0x19, 0xb6,
    0x83, 0xc9, 0x7a, 0x9e, 0xf6, 0x0b, 0xb3, 0x47,
    0x52, 0x06, 0x7d, 0x0f, 0x2f, 0x7a, 0xb4, 0x37,
  }};
#endif

static char nav2_msgs__srv__GetShapes__TYPE_NAME[] = "nav2_msgs/srv/GetShapes";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point32__TYPE_NAME[] = "geometry_msgs/msg/Point32";
static char nav2_msgs__msg__CircleObject__TYPE_NAME[] = "nav2_msgs/msg/CircleObject";
static char nav2_msgs__msg__PolygonObject__TYPE_NAME[] = "nav2_msgs/msg/PolygonObject";
static char nav2_msgs__srv__GetShapes_Event__TYPE_NAME[] = "nav2_msgs/srv/GetShapes_Event";
static char nav2_msgs__srv__GetShapes_Request__TYPE_NAME[] = "nav2_msgs/srv/GetShapes_Request";
static char nav2_msgs__srv__GetShapes_Response__TYPE_NAME[] = "nav2_msgs/srv/GetShapes_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";
static char unique_identifier_msgs__msg__UUID__TYPE_NAME[] = "unique_identifier_msgs/msg/UUID";

// Define type names, field names, and default values
static char nav2_msgs__srv__GetShapes__FIELD_NAME__request_message[] = "request_message";
static char nav2_msgs__srv__GetShapes__FIELD_NAME__response_message[] = "response_message";
static char nav2_msgs__srv__GetShapes__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field nav2_msgs__srv__GetShapes__FIELDS[] = {
  {
    {nav2_msgs__srv__GetShapes__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {nav2_msgs__srv__GetShapes_Request__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__GetShapes__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {nav2_msgs__srv__GetShapes_Response__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__GetShapes__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {nav2_msgs__srv__GetShapes_Event__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription nav2_msgs__srv__GetShapes__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point32__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__msg__CircleObject__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__msg__PolygonObject__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__GetShapes_Event__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__GetShapes_Request__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__GetShapes_Response__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {unique_identifier_msgs__msg__UUID__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nav2_msgs__srv__GetShapes__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nav2_msgs__srv__GetShapes__TYPE_NAME, 23, 23},
      {nav2_msgs__srv__GetShapes__FIELDS, 3, 3},
    },
    {nav2_msgs__srv__GetShapes__REFERENCED_TYPE_DESCRIPTIONS, 10, 10},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point32__EXPECTED_HASH, geometry_msgs__msg__Point32__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point32__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&nav2_msgs__msg__CircleObject__EXPECTED_HASH, nav2_msgs__msg__CircleObject__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = nav2_msgs__msg__CircleObject__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&nav2_msgs__msg__PolygonObject__EXPECTED_HASH, nav2_msgs__msg__PolygonObject__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = nav2_msgs__msg__PolygonObject__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = nav2_msgs__srv__GetShapes_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = nav2_msgs__srv__GetShapes_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[6].fields = nav2_msgs__srv__GetShapes_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&unique_identifier_msgs__msg__UUID__EXPECTED_HASH, unique_identifier_msgs__msg__UUID__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = unique_identifier_msgs__msg__UUID__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char nav2_msgs__srv__GetShapes_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field nav2_msgs__srv__GetShapes_Request__FIELDS[] = {
  {
    {nav2_msgs__srv__GetShapes_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nav2_msgs__srv__GetShapes_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nav2_msgs__srv__GetShapes_Request__TYPE_NAME, 31, 31},
      {nav2_msgs__srv__GetShapes_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char nav2_msgs__srv__GetShapes_Response__FIELD_NAME__circles[] = "circles";
static char nav2_msgs__srv__GetShapes_Response__FIELD_NAME__polygons[] = "polygons";

static rosidl_runtime_c__type_description__Field nav2_msgs__srv__GetShapes_Response__FIELDS[] = {
  {
    {nav2_msgs__srv__GetShapes_Response__FIELD_NAME__circles, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {nav2_msgs__msg__CircleObject__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__GetShapes_Response__FIELD_NAME__polygons, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {nav2_msgs__msg__PolygonObject__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription nav2_msgs__srv__GetShapes_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point32__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__msg__CircleObject__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__msg__PolygonObject__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {unique_identifier_msgs__msg__UUID__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nav2_msgs__srv__GetShapes_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nav2_msgs__srv__GetShapes_Response__TYPE_NAME, 32, 32},
      {nav2_msgs__srv__GetShapes_Response__FIELDS, 2, 2},
    },
    {nav2_msgs__srv__GetShapes_Response__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point32__EXPECTED_HASH, geometry_msgs__msg__Point32__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point32__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&nav2_msgs__msg__CircleObject__EXPECTED_HASH, nav2_msgs__msg__CircleObject__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = nav2_msgs__msg__CircleObject__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&nav2_msgs__msg__PolygonObject__EXPECTED_HASH, nav2_msgs__msg__PolygonObject__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = nav2_msgs__msg__PolygonObject__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&unique_identifier_msgs__msg__UUID__EXPECTED_HASH, unique_identifier_msgs__msg__UUID__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = unique_identifier_msgs__msg__UUID__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char nav2_msgs__srv__GetShapes_Event__FIELD_NAME__info[] = "info";
static char nav2_msgs__srv__GetShapes_Event__FIELD_NAME__request[] = "request";
static char nav2_msgs__srv__GetShapes_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field nav2_msgs__srv__GetShapes_Event__FIELDS[] = {
  {
    {nav2_msgs__srv__GetShapes_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__GetShapes_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {nav2_msgs__srv__GetShapes_Request__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__GetShapes_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {nav2_msgs__srv__GetShapes_Response__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription nav2_msgs__srv__GetShapes_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point32__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__msg__CircleObject__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__msg__PolygonObject__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__GetShapes_Request__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__GetShapes_Response__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {unique_identifier_msgs__msg__UUID__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nav2_msgs__srv__GetShapes_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nav2_msgs__srv__GetShapes_Event__TYPE_NAME, 29, 29},
      {nav2_msgs__srv__GetShapes_Event__FIELDS, 3, 3},
    },
    {nav2_msgs__srv__GetShapes_Event__REFERENCED_TYPE_DESCRIPTIONS, 9, 9},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point32__EXPECTED_HASH, geometry_msgs__msg__Point32__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point32__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&nav2_msgs__msg__CircleObject__EXPECTED_HASH, nav2_msgs__msg__CircleObject__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = nav2_msgs__msg__CircleObject__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&nav2_msgs__msg__PolygonObject__EXPECTED_HASH, nav2_msgs__msg__PolygonObject__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = nav2_msgs__msg__PolygonObject__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = nav2_msgs__srv__GetShapes_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = nav2_msgs__srv__GetShapes_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&unique_identifier_msgs__msg__UUID__EXPECTED_HASH, unique_identifier_msgs__msg__UUID__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = unique_identifier_msgs__msg__UUID__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Get vector objects which are now being applied on map\n"
  "\n"
  "---\n"
  "CircleObject[] circles\n"
  "PolygonObject[] polygons";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
nav2_msgs__srv__GetShapes__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nav2_msgs__srv__GetShapes__TYPE_NAME, 23, 23},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 109, 109},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
nav2_msgs__srv__GetShapes_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nav2_msgs__srv__GetShapes_Request__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
nav2_msgs__srv__GetShapes_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nav2_msgs__srv__GetShapes_Response__TYPE_NAME, 32, 32},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
nav2_msgs__srv__GetShapes_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nav2_msgs__srv__GetShapes_Event__TYPE_NAME, 29, 29},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nav2_msgs__srv__GetShapes__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[11];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 11, 11};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nav2_msgs__srv__GetShapes__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point32__get_individual_type_description_source(NULL);
    sources[3] = *nav2_msgs__msg__CircleObject__get_individual_type_description_source(NULL);
    sources[4] = *nav2_msgs__msg__PolygonObject__get_individual_type_description_source(NULL);
    sources[5] = *nav2_msgs__srv__GetShapes_Event__get_individual_type_description_source(NULL);
    sources[6] = *nav2_msgs__srv__GetShapes_Request__get_individual_type_description_source(NULL);
    sources[7] = *nav2_msgs__srv__GetShapes_Response__get_individual_type_description_source(NULL);
    sources[8] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[9] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[10] = *unique_identifier_msgs__msg__UUID__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nav2_msgs__srv__GetShapes_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nav2_msgs__srv__GetShapes_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nav2_msgs__srv__GetShapes_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nav2_msgs__srv__GetShapes_Response__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point32__get_individual_type_description_source(NULL);
    sources[3] = *nav2_msgs__msg__CircleObject__get_individual_type_description_source(NULL);
    sources[4] = *nav2_msgs__msg__PolygonObject__get_individual_type_description_source(NULL);
    sources[5] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[6] = *unique_identifier_msgs__msg__UUID__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nav2_msgs__srv__GetShapes_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[10];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 10, 10};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nav2_msgs__srv__GetShapes_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point32__get_individual_type_description_source(NULL);
    sources[3] = *nav2_msgs__msg__CircleObject__get_individual_type_description_source(NULL);
    sources[4] = *nav2_msgs__msg__PolygonObject__get_individual_type_description_source(NULL);
    sources[5] = *nav2_msgs__srv__GetShapes_Request__get_individual_type_description_source(NULL);
    sources[6] = *nav2_msgs__srv__GetShapes_Response__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[8] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[9] = *unique_identifier_msgs__msg__UUID__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
