// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from nav2_msgs:srv/ClearCostmapAroundRobot.idl
// generated code does not contain a copyright notice

#include "nav2_msgs/srv/detail/clear_costmap_around_robot__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
const rosidl_type_hash_t *
nav2_msgs__srv__ClearCostmapAroundRobot__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x24, 0x97, 0x3b, 0x6e, 0x8b, 0x3e, 0x7e, 0xc7,
      0x0c, 0x37, 0xd6, 0xb4, 0x11, 0xf1, 0xe3, 0x2c,
      0xef, 0x44, 0x05, 0x1d, 0xfe, 0x7f, 0x34, 0xad,
      0x0e, 0xe7, 0xd6, 0xd9, 0x05, 0x5c, 0xd6, 0xea,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
const rosidl_type_hash_t *
nav2_msgs__srv__ClearCostmapAroundRobot_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x27, 0x34, 0xfa, 0xf8, 0xfd, 0x07, 0xb3, 0xdc,
      0x5e, 0xce, 0x2d, 0xc4, 0x26, 0x17, 0x7d, 0x51,
      0x03, 0x9a, 0x11, 0xb2, 0xeb, 0xbf, 0xb0, 0x3a,
      0x86, 0x96, 0x57, 0x9a, 0xa0, 0x2c, 0x9e, 0xe8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
const rosidl_type_hash_t *
nav2_msgs__srv__ClearCostmapAroundRobot_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd5, 0x39, 0x6e, 0xc0, 0xbd, 0x16, 0x53, 0x04,
      0x2a, 0x94, 0x37, 0xc7, 0xf2, 0xcb, 0x3e, 0x09,
      0x3a, 0xad, 0xa3, 0xab, 0x8a, 0x67, 0x32, 0x7f,
      0x30, 0xee, 0x23, 0x58, 0x33, 0xf5, 0x78, 0x97,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
const rosidl_type_hash_t *
nav2_msgs__srv__ClearCostmapAroundRobot_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2a, 0xdc, 0xb2, 0x9c, 0x10, 0x51, 0x09, 0xb9,
      0x0a, 0xc4, 0x9f, 0x75, 0xec, 0x20, 0x7a, 0xfc,
      0x4e, 0xf5, 0x92, 0x47, 0x69, 0x16, 0xe2, 0xa9,
      0xf3, 0xed, 0x99, 0x0a, 0xdb, 0x0d, 0x3f, 0xf4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/empty__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t std_msgs__msg__Empty__EXPECTED_HASH = {1, {
    0x20, 0xb6, 0x25, 0x25, 0x6f, 0x32, 0xd5, 0xdb,
    0xc0, 0xd0, 0x4f, 0xee, 0x44, 0xf4, 0x3c, 0x41,
    0xe5, 0x1c, 0x70, 0xd3, 0x50, 0x2f, 0x84, 0xb4,
    0xa0, 0x8e, 0x7a, 0x9c, 0x26, 0xa9, 0x63, 0x12,
  }};
#endif

static char nav2_msgs__srv__ClearCostmapAroundRobot__TYPE_NAME[] = "nav2_msgs/srv/ClearCostmapAroundRobot";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char nav2_msgs__srv__ClearCostmapAroundRobot_Event__TYPE_NAME[] = "nav2_msgs/srv/ClearCostmapAroundRobot_Event";
static char nav2_msgs__srv__ClearCostmapAroundRobot_Request__TYPE_NAME[] = "nav2_msgs/srv/ClearCostmapAroundRobot_Request";
static char nav2_msgs__srv__ClearCostmapAroundRobot_Response__TYPE_NAME[] = "nav2_msgs/srv/ClearCostmapAroundRobot_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_msgs__msg__Empty__TYPE_NAME[] = "std_msgs/msg/Empty";

// Define type names, field names, and default values
static char nav2_msgs__srv__ClearCostmapAroundRobot__FIELD_NAME__request_message[] = "request_message";
static char nav2_msgs__srv__ClearCostmapAroundRobot__FIELD_NAME__response_message[] = "response_message";
static char nav2_msgs__srv__ClearCostmapAroundRobot__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field nav2_msgs__srv__ClearCostmapAroundRobot__FIELDS[] = {
  {
    {nav2_msgs__srv__ClearCostmapAroundRobot__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {nav2_msgs__srv__ClearCostmapAroundRobot_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__ClearCostmapAroundRobot__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {nav2_msgs__srv__ClearCostmapAroundRobot_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__ClearCostmapAroundRobot__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {nav2_msgs__srv__ClearCostmapAroundRobot_Event__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription nav2_msgs__srv__ClearCostmapAroundRobot__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__ClearCostmapAroundRobot_Event__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__ClearCostmapAroundRobot_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__ClearCostmapAroundRobot_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Empty__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nav2_msgs__srv__ClearCostmapAroundRobot__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nav2_msgs__srv__ClearCostmapAroundRobot__TYPE_NAME, 37, 37},
      {nav2_msgs__srv__ClearCostmapAroundRobot__FIELDS, 3, 3},
    },
    {nav2_msgs__srv__ClearCostmapAroundRobot__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = nav2_msgs__srv__ClearCostmapAroundRobot_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = nav2_msgs__srv__ClearCostmapAroundRobot_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = nav2_msgs__srv__ClearCostmapAroundRobot_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Empty__EXPECTED_HASH, std_msgs__msg__Empty__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = std_msgs__msg__Empty__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char nav2_msgs__srv__ClearCostmapAroundRobot_Request__FIELD_NAME__reset_distance[] = "reset_distance";

static rosidl_runtime_c__type_description__Field nav2_msgs__srv__ClearCostmapAroundRobot_Request__FIELDS[] = {
  {
    {nav2_msgs__srv__ClearCostmapAroundRobot_Request__FIELD_NAME__reset_distance, 14, 14},
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
nav2_msgs__srv__ClearCostmapAroundRobot_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nav2_msgs__srv__ClearCostmapAroundRobot_Request__TYPE_NAME, 45, 45},
      {nav2_msgs__srv__ClearCostmapAroundRobot_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char nav2_msgs__srv__ClearCostmapAroundRobot_Response__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field nav2_msgs__srv__ClearCostmapAroundRobot_Response__FIELDS[] = {
  {
    {nav2_msgs__srv__ClearCostmapAroundRobot_Response__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Empty__TYPE_NAME, 18, 18},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription nav2_msgs__srv__ClearCostmapAroundRobot_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {std_msgs__msg__Empty__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nav2_msgs__srv__ClearCostmapAroundRobot_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nav2_msgs__srv__ClearCostmapAroundRobot_Response__TYPE_NAME, 46, 46},
      {nav2_msgs__srv__ClearCostmapAroundRobot_Response__FIELDS, 1, 1},
    },
    {nav2_msgs__srv__ClearCostmapAroundRobot_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&std_msgs__msg__Empty__EXPECTED_HASH, std_msgs__msg__Empty__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = std_msgs__msg__Empty__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char nav2_msgs__srv__ClearCostmapAroundRobot_Event__FIELD_NAME__info[] = "info";
static char nav2_msgs__srv__ClearCostmapAroundRobot_Event__FIELD_NAME__request[] = "request";
static char nav2_msgs__srv__ClearCostmapAroundRobot_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field nav2_msgs__srv__ClearCostmapAroundRobot_Event__FIELDS[] = {
  {
    {nav2_msgs__srv__ClearCostmapAroundRobot_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__ClearCostmapAroundRobot_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {nav2_msgs__srv__ClearCostmapAroundRobot_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__ClearCostmapAroundRobot_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {nav2_msgs__srv__ClearCostmapAroundRobot_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription nav2_msgs__srv__ClearCostmapAroundRobot_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__ClearCostmapAroundRobot_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__ClearCostmapAroundRobot_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Empty__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nav2_msgs__srv__ClearCostmapAroundRobot_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nav2_msgs__srv__ClearCostmapAroundRobot_Event__TYPE_NAME, 43, 43},
      {nav2_msgs__srv__ClearCostmapAroundRobot_Event__FIELDS, 3, 3},
    },
    {nav2_msgs__srv__ClearCostmapAroundRobot_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = nav2_msgs__srv__ClearCostmapAroundRobot_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = nav2_msgs__srv__ClearCostmapAroundRobot_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Empty__EXPECTED_HASH, std_msgs__msg__Empty__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = std_msgs__msg__Empty__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Clears the costmap within a distance\n"
  "\n"
  "float32 reset_distance\n"
  "---\n"
  "std_msgs/Empty response";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
nav2_msgs__srv__ClearCostmapAroundRobot__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nav2_msgs__srv__ClearCostmapAroundRobot__TYPE_NAME, 37, 37},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 91, 91},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
nav2_msgs__srv__ClearCostmapAroundRobot_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nav2_msgs__srv__ClearCostmapAroundRobot_Request__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
nav2_msgs__srv__ClearCostmapAroundRobot_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nav2_msgs__srv__ClearCostmapAroundRobot_Response__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
nav2_msgs__srv__ClearCostmapAroundRobot_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nav2_msgs__srv__ClearCostmapAroundRobot_Event__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nav2_msgs__srv__ClearCostmapAroundRobot__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nav2_msgs__srv__ClearCostmapAroundRobot__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *nav2_msgs__srv__ClearCostmapAroundRobot_Event__get_individual_type_description_source(NULL);
    sources[3] = *nav2_msgs__srv__ClearCostmapAroundRobot_Request__get_individual_type_description_source(NULL);
    sources[4] = *nav2_msgs__srv__ClearCostmapAroundRobot_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__Empty__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nav2_msgs__srv__ClearCostmapAroundRobot_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nav2_msgs__srv__ClearCostmapAroundRobot_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nav2_msgs__srv__ClearCostmapAroundRobot_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nav2_msgs__srv__ClearCostmapAroundRobot_Response__get_individual_type_description_source(NULL),
    sources[1] = *std_msgs__msg__Empty__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nav2_msgs__srv__ClearCostmapAroundRobot_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nav2_msgs__srv__ClearCostmapAroundRobot_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *nav2_msgs__srv__ClearCostmapAroundRobot_Request__get_individual_type_description_source(NULL);
    sources[3] = *nav2_msgs__srv__ClearCostmapAroundRobot_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[5] = *std_msgs__msg__Empty__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
