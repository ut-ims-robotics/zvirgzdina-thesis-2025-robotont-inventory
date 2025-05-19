// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotont_msgs:msg/LedModuleMode.idl
// generated code does not contain a copyright notice

#include "robotont_msgs/msg/detail/led_module_mode__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotont_msgs
const rosidl_type_hash_t *
robotont_msgs__msg__LedModuleMode__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd9, 0xa4, 0x8a, 0x28, 0x6b, 0x34, 0x63, 0xe8,
      0xf9, 0x5d, 0x37, 0x93, 0xb3, 0x0c, 0x46, 0x24,
      0xc3, 0x99, 0xe7, 0x28, 0x61, 0xf0, 0xd5, 0xf3,
      0x04, 0xf0, 0x52, 0x8e, 0xe9, 0x58, 0x1f, 0xb5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robotont_msgs__msg__LedModuleMode__TYPE_NAME[] = "robotont_msgs/msg/LedModuleMode";

// Define type names, field names, and default values
static char robotont_msgs__msg__LedModuleMode__FIELD_NAME__mode[] = "mode";
static char robotont_msgs__msg__LedModuleMode__FIELD_NAME__params[] = "params";

static rosidl_runtime_c__type_description__Field robotont_msgs__msg__LedModuleMode__FIELDS[] = {
  {
    {robotont_msgs__msg__LedModuleMode__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotont_msgs__msg__LedModuleMode__FIELD_NAME__params, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotont_msgs__msg__LedModuleMode__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotont_msgs__msg__LedModuleMode__TYPE_NAME, 31, 31},
      {robotont_msgs__msg__LedModuleMode__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 NONE=0            # Parameters: -\n"
  "uint8 SPIN=1            # Parameters: r, g, b, speed\n"
  "uint8 PULSE=2           # Parameters: r, g, b, speed\n"
  "uint8 COLORS_SMOOTH=3   # Parameters: speed\n"
  "uint8 WHEEL_COLORS=4    # Parameters: speed\n"
  "uint8 COLORS_RGB=5      # Parameters: -\n"
  "uint8 COLORS_SPIN=6     # Parameters: speed\n"
  "uint8 MOTOR_DUTY=7      # Parameters: -\n"
  "uint8 MOTOR_SPEEDS=8    # Parameters: -\n"
  "uint8 SCAN_RANGES=9     # Parameters: left, right, front\n"
  "uint8 mode\n"
  "int16[] params";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotont_msgs__msg__LedModuleMode__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotont_msgs__msg__LedModuleMode__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 481, 481},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotont_msgs__msg__LedModuleMode__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotont_msgs__msg__LedModuleMode__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
