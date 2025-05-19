// generated from
// rosidl_typesupport_introspection_c/resource/rosidl_typesupport_introspection_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef LASERSCAN_TO_RANGES__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_
#define LASERSCAN_TO_RANGES__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_laserscan_to_ranges __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_laserscan_to_ranges __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_laserscan_to_ranges __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_laserscan_to_ranges __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_INTROSPECTION_C_BUILDING_DLL_laserscan_to_ranges
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_laserscan_to_ranges ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_laserscan_to_ranges
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_laserscan_to_ranges ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_laserscan_to_ranges
  #endif
#else
  #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_laserscan_to_ranges __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_laserscan_to_ranges
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_laserscan_to_ranges __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_laserscan_to_ranges
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // LASERSCAN_TO_RANGES__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_
