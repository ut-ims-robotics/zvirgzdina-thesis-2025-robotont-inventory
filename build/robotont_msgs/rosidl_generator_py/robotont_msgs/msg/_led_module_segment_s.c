// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robotont_msgs:msg/LedModuleSegment.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "robotont_msgs/msg/detail/led_module_segment__struct.h"
#include "robotont_msgs/msg/detail/led_module_segment__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "robotont_msgs/msg/detail/color_rgb__functions.h"
// end nested array functions include
bool robotont_msgs__msg__color_rgb__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * robotont_msgs__msg__color_rgb__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool robotont_msgs__msg__led_module_segment__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("robotont_msgs.msg._led_module_segment.LedModuleSegment", full_classname_dest, 54) == 0);
  }
  robotont_msgs__msg__LedModuleSegment * ros_message = _ros_message;
  {  // idx_start
    PyObject * field = PyObject_GetAttrString(_pymsg, "idx_start");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->idx_start = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // idx_end
    PyObject * field = PyObject_GetAttrString(_pymsg, "idx_end");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->idx_end = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // colors
    PyObject * field = PyObject_GetAttrString(_pymsg, "colors");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'colors'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!robotont_msgs__msg__ColorRGB__Sequence__init(&(ros_message->colors), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create robotont_msgs__msg__ColorRGB__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    robotont_msgs__msg__ColorRGB * dest = ros_message->colors.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!robotont_msgs__msg__color_rgb__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robotont_msgs__msg__led_module_segment__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LedModuleSegment */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robotont_msgs.msg._led_module_segment");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LedModuleSegment");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robotont_msgs__msg__LedModuleSegment * ros_message = (robotont_msgs__msg__LedModuleSegment *)raw_ros_message;
  {  // idx_start
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->idx_start);
    {
      int rc = PyObject_SetAttrString(_pymessage, "idx_start", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // idx_end
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->idx_end);
    {
      int rc = PyObject_SetAttrString(_pymessage, "idx_end", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // colors
    PyObject * field = NULL;
    size_t size = ros_message->colors.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    robotont_msgs__msg__ColorRGB * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->colors.data[i]);
      PyObject * pyitem = robotont_msgs__msg__color_rgb__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "colors", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
