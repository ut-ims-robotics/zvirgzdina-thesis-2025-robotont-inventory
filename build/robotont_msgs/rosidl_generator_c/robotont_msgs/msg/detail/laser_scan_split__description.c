// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotont_msgs:msg/LaserScanSplit.idl
// generated code does not contain a copyright notice

#include "robotont_msgs/msg/detail/laser_scan_split__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotont_msgs
const rosidl_type_hash_t *
robotont_msgs__msg__LaserScanSplit__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3b, 0xc1, 0xf3, 0x39, 0x20, 0x0f, 0x7f, 0xd7,
      0xa3, 0x3f, 0xa3, 0xa4, 0x5e, 0x82, 0x0b, 0x49,
      0x65, 0x57, 0xf8, 0xc9, 0x12, 0x0d, 0xd5, 0xa7,
      0x69, 0xbe, 0xe5, 0x47, 0x61, 0x16, 0x7d, 0x4b,
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

static char robotont_msgs__msg__LaserScanSplit__TYPE_NAME[] = "robotont_msgs/msg/LaserScanSplit";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char robotont_msgs__msg__LaserScanSplit__FIELD_NAME__stamp[] = "stamp";
static char robotont_msgs__msg__LaserScanSplit__FIELD_NAME__left_min[] = "left_min";
static char robotont_msgs__msg__LaserScanSplit__FIELD_NAME__center_min[] = "center_min";
static char robotont_msgs__msg__LaserScanSplit__FIELD_NAME__right_min[] = "right_min";
static char robotont_msgs__msg__LaserScanSplit__FIELD_NAME__left_mean[] = "left_mean";
static char robotont_msgs__msg__LaserScanSplit__FIELD_NAME__center_mean[] = "center_mean";
static char robotont_msgs__msg__LaserScanSplit__FIELD_NAME__right_mean[] = "right_mean";

static rosidl_runtime_c__type_description__Field robotont_msgs__msg__LaserScanSplit__FIELDS[] = {
  {
    {robotont_msgs__msg__LaserScanSplit__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {robotont_msgs__msg__LaserScanSplit__FIELD_NAME__left_min, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotont_msgs__msg__LaserScanSplit__FIELD_NAME__center_min, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotont_msgs__msg__LaserScanSplit__FIELD_NAME__right_min, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotont_msgs__msg__LaserScanSplit__FIELD_NAME__left_mean, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotont_msgs__msg__LaserScanSplit__FIELD_NAME__center_mean, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotont_msgs__msg__LaserScanSplit__FIELD_NAME__right_mean, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robotont_msgs__msg__LaserScanSplit__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotont_msgs__msg__LaserScanSplit__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotont_msgs__msg__LaserScanSplit__TYPE_NAME, 32, 32},
      {robotont_msgs__msg__LaserScanSplit__FIELDS, 7, 7},
    },
    {robotont_msgs__msg__LaserScanSplit__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This msg defines a message for dividing laserscan into 3 separate distances\n"
  "# It provides mean and minimum values for the three sectors.\n"
  "\n"
  "builtin_interfaces/Time stamp\n"
  "\n"
  "float64 left_min\n"
  "float64 center_min\n"
  "float64 right_min\n"
  "\n"
  "float64 left_mean\n"
  "float64 center_mean\n"
  "float64 right_mean";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotont_msgs__msg__LaserScanSplit__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotont_msgs__msg__LaserScanSplit__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 282, 282},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotont_msgs__msg__LaserScanSplit__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotont_msgs__msg__LaserScanSplit__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
