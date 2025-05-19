// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotont_msgs:msg/PowerSupply.idl
// generated code does not contain a copyright notice

#include "robotont_msgs/msg/detail/power_supply__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotont_msgs
const rosidl_type_hash_t *
robotont_msgs__msg__PowerSupply__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa4, 0xae, 0x76, 0xbc, 0xea, 0x6d, 0xe9, 0x73,
      0xc4, 0xb4, 0x68, 0xf2, 0x60, 0x5c, 0x5c, 0xf9,
      0xa0, 0xcd, 0x54, 0xd3, 0x6b, 0xdb, 0x12, 0xd3,
      0xde, 0xf1, 0xb3, 0xd8, 0x1b, 0x03, 0xb4, 0xb8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robotont_msgs__msg__PowerSupply__TYPE_NAME[] = "robotont_msgs/msg/PowerSupply";

// Define type names, field names, and default values
static char robotont_msgs__msg__PowerSupply__FIELD_NAME__current[] = "current";
static char robotont_msgs__msg__PowerSupply__FIELD_NAME__voltage[] = "voltage";
static char robotont_msgs__msg__PowerSupply__FIELD_NAME__estop_pressed[] = "estop_pressed";

static rosidl_runtime_c__type_description__Field robotont_msgs__msg__PowerSupply__FIELDS[] = {
  {
    {robotont_msgs__msg__PowerSupply__FIELD_NAME__current, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotont_msgs__msg__PowerSupply__FIELD_NAME__voltage, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotont_msgs__msg__PowerSupply__FIELD_NAME__estop_pressed, 13, 13},
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
robotont_msgs__msg__PowerSupply__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotont_msgs__msg__PowerSupply__TYPE_NAME, 29, 29},
      {robotont_msgs__msg__PowerSupply__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Measured current consumption \n"
  "float32 current\n"
  "\n"
  "# Measured voltage level of the battery\n"
  "float32 voltage\n"
  "\n"
  "# Indicates whether e-stop button is pressed or not\n"
  "bool estop_pressed";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotont_msgs__msg__PowerSupply__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotont_msgs__msg__PowerSupply__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 176, 176},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotont_msgs__msg__PowerSupply__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotont_msgs__msg__PowerSupply__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
