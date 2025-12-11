// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from nav2_msgs:srv/DynamicEdges.idl
// generated code does not contain a copyright notice

#include "nav2_msgs/srv/detail/dynamic_edges__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
const rosidl_type_hash_t *
nav2_msgs__srv__DynamicEdges__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x85, 0x7b, 0x6e, 0x43, 0x0a, 0x2a, 0xa8, 0x93,
      0x45, 0xe2, 0xb8, 0xbd, 0xdc, 0x0a, 0x49, 0x56,
      0xc4, 0x25, 0xd5, 0x26, 0x21, 0x8a, 0xe4, 0x3e,
      0x63, 0x65, 0x77, 0xde, 0x46, 0x5d, 0xa3, 0x16,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
const rosidl_type_hash_t *
nav2_msgs__srv__DynamicEdges_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x90, 0x38, 0x19, 0x64, 0xc8, 0xd9, 0xee, 0x8f,
      0xa6, 0x7a, 0xe2, 0x54, 0xa0, 0xfe, 0xf0, 0xe2,
      0x9d, 0x31, 0x0f, 0xdc, 0xfe, 0x47, 0x7e, 0x61,
      0x31, 0xa0, 0xaf, 0xf1, 0xcd, 0xc2, 0x27, 0x65,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
const rosidl_type_hash_t *
nav2_msgs__srv__DynamicEdges_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4b, 0x08, 0xbc, 0xbf, 0x65, 0x2b, 0x7b, 0x8c,
      0xe6, 0x8a, 0x6c, 0xef, 0xe6, 0xe8, 0xfe, 0xd8,
      0xac, 0x98, 0xbb, 0x57, 0x8d, 0xd7, 0x76, 0x31,
      0x47, 0x6d, 0xfd, 0x66, 0x5b, 0x73, 0xa9, 0x5c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
const rosidl_type_hash_t *
nav2_msgs__srv__DynamicEdges_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x60, 0x7a, 0xcf, 0xc5, 0xf6, 0x76, 0x37, 0x63,
      0x21, 0x24, 0x60, 0x23, 0xd6, 0x0e, 0x1d, 0x06,
      0x46, 0x02, 0x7a, 0x6f, 0xee, 0x08, 0xa0, 0xbf,
      0x9d, 0x6a, 0x00, 0xe6, 0x32, 0x62, 0xa8, 0xba,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "nav2_msgs/msg/detail/edge_cost__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t nav2_msgs__msg__EdgeCost__EXPECTED_HASH = {1, {
    0x8d, 0xc1, 0x47, 0x0f, 0xcd, 0x5f, 0xc0, 0x25,
    0x3a, 0xe4, 0x85, 0x88, 0xf8, 0xf4, 0x7d, 0x67,
    0x21, 0x4d, 0x26, 0x72, 0xd1, 0x36, 0xc9, 0xf8,
    0xc9, 0xd1, 0xf4, 0x42, 0x20, 0xdd, 0xf5, 0x6f,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char nav2_msgs__srv__DynamicEdges__TYPE_NAME[] = "nav2_msgs/srv/DynamicEdges";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char nav2_msgs__msg__EdgeCost__TYPE_NAME[] = "nav2_msgs/msg/EdgeCost";
static char nav2_msgs__srv__DynamicEdges_Event__TYPE_NAME[] = "nav2_msgs/srv/DynamicEdges_Event";
static char nav2_msgs__srv__DynamicEdges_Request__TYPE_NAME[] = "nav2_msgs/srv/DynamicEdges_Request";
static char nav2_msgs__srv__DynamicEdges_Response__TYPE_NAME[] = "nav2_msgs/srv/DynamicEdges_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char nav2_msgs__srv__DynamicEdges__FIELD_NAME__request_message[] = "request_message";
static char nav2_msgs__srv__DynamicEdges__FIELD_NAME__response_message[] = "response_message";
static char nav2_msgs__srv__DynamicEdges__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field nav2_msgs__srv__DynamicEdges__FIELDS[] = {
  {
    {nav2_msgs__srv__DynamicEdges__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {nav2_msgs__srv__DynamicEdges_Request__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__DynamicEdges__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {nav2_msgs__srv__DynamicEdges_Response__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__DynamicEdges__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {nav2_msgs__srv__DynamicEdges_Event__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription nav2_msgs__srv__DynamicEdges__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__msg__EdgeCost__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__DynamicEdges_Event__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__DynamicEdges_Request__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__DynamicEdges_Response__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nav2_msgs__srv__DynamicEdges__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nav2_msgs__srv__DynamicEdges__TYPE_NAME, 26, 26},
      {nav2_msgs__srv__DynamicEdges__FIELDS, 3, 3},
    },
    {nav2_msgs__srv__DynamicEdges__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&nav2_msgs__msg__EdgeCost__EXPECTED_HASH, nav2_msgs__msg__EdgeCost__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = nav2_msgs__msg__EdgeCost__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = nav2_msgs__srv__DynamicEdges_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = nav2_msgs__srv__DynamicEdges_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = nav2_msgs__srv__DynamicEdges_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char nav2_msgs__srv__DynamicEdges_Request__FIELD_NAME__closed_edges[] = "closed_edges";
static char nav2_msgs__srv__DynamicEdges_Request__FIELD_NAME__opened_edges[] = "opened_edges";
static char nav2_msgs__srv__DynamicEdges_Request__FIELD_NAME__adjust_edges[] = "adjust_edges";

static rosidl_runtime_c__type_description__Field nav2_msgs__srv__DynamicEdges_Request__FIELDS[] = {
  {
    {nav2_msgs__srv__DynamicEdges_Request__FIELD_NAME__closed_edges, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__DynamicEdges_Request__FIELD_NAME__opened_edges, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__DynamicEdges_Request__FIELD_NAME__adjust_edges, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {nav2_msgs__msg__EdgeCost__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription nav2_msgs__srv__DynamicEdges_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {nav2_msgs__msg__EdgeCost__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nav2_msgs__srv__DynamicEdges_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nav2_msgs__srv__DynamicEdges_Request__TYPE_NAME, 34, 34},
      {nav2_msgs__srv__DynamicEdges_Request__FIELDS, 3, 3},
    },
    {nav2_msgs__srv__DynamicEdges_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&nav2_msgs__msg__EdgeCost__EXPECTED_HASH, nav2_msgs__msg__EdgeCost__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = nav2_msgs__msg__EdgeCost__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char nav2_msgs__srv__DynamicEdges_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field nav2_msgs__srv__DynamicEdges_Response__FIELDS[] = {
  {
    {nav2_msgs__srv__DynamicEdges_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nav2_msgs__srv__DynamicEdges_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nav2_msgs__srv__DynamicEdges_Response__TYPE_NAME, 35, 35},
      {nav2_msgs__srv__DynamicEdges_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char nav2_msgs__srv__DynamicEdges_Event__FIELD_NAME__info[] = "info";
static char nav2_msgs__srv__DynamicEdges_Event__FIELD_NAME__request[] = "request";
static char nav2_msgs__srv__DynamicEdges_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field nav2_msgs__srv__DynamicEdges_Event__FIELDS[] = {
  {
    {nav2_msgs__srv__DynamicEdges_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__DynamicEdges_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {nav2_msgs__srv__DynamicEdges_Request__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__DynamicEdges_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {nav2_msgs__srv__DynamicEdges_Response__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription nav2_msgs__srv__DynamicEdges_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__msg__EdgeCost__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__DynamicEdges_Request__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__DynamicEdges_Response__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nav2_msgs__srv__DynamicEdges_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nav2_msgs__srv__DynamicEdges_Event__TYPE_NAME, 32, 32},
      {nav2_msgs__srv__DynamicEdges_Event__FIELDS, 3, 3},
    },
    {nav2_msgs__srv__DynamicEdges_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&nav2_msgs__msg__EdgeCost__EXPECTED_HASH, nav2_msgs__msg__EdgeCost__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = nav2_msgs__msg__EdgeCost__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = nav2_msgs__srv__DynamicEdges_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = nav2_msgs__srv__DynamicEdges_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint16[] closed_edges\n"
  "uint16[] opened_edges\n"
  "EdgeCost[] adjust_edges\n"
  "---\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
nav2_msgs__srv__DynamicEdges__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nav2_msgs__srv__DynamicEdges__TYPE_NAME, 26, 26},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 85, 85},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
nav2_msgs__srv__DynamicEdges_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nav2_msgs__srv__DynamicEdges_Request__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
nav2_msgs__srv__DynamicEdges_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nav2_msgs__srv__DynamicEdges_Response__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
nav2_msgs__srv__DynamicEdges_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nav2_msgs__srv__DynamicEdges_Event__TYPE_NAME, 32, 32},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nav2_msgs__srv__DynamicEdges__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nav2_msgs__srv__DynamicEdges__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *nav2_msgs__msg__EdgeCost__get_individual_type_description_source(NULL);
    sources[3] = *nav2_msgs__srv__DynamicEdges_Event__get_individual_type_description_source(NULL);
    sources[4] = *nav2_msgs__srv__DynamicEdges_Request__get_individual_type_description_source(NULL);
    sources[5] = *nav2_msgs__srv__DynamicEdges_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nav2_msgs__srv__DynamicEdges_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nav2_msgs__srv__DynamicEdges_Request__get_individual_type_description_source(NULL),
    sources[1] = *nav2_msgs__msg__EdgeCost__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nav2_msgs__srv__DynamicEdges_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nav2_msgs__srv__DynamicEdges_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nav2_msgs__srv__DynamicEdges_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nav2_msgs__srv__DynamicEdges_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *nav2_msgs__msg__EdgeCost__get_individual_type_description_source(NULL);
    sources[3] = *nav2_msgs__srv__DynamicEdges_Request__get_individual_type_description_source(NULL);
    sources[4] = *nav2_msgs__srv__DynamicEdges_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
