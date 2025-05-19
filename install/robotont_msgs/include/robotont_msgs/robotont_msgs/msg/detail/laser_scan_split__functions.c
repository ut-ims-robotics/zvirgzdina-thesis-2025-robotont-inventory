// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robotont_msgs:msg/LaserScanSplit.idl
// generated code does not contain a copyright notice
#include "robotont_msgs/msg/detail/laser_scan_split__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
robotont_msgs__msg__LaserScanSplit__init(robotont_msgs__msg__LaserScanSplit * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    robotont_msgs__msg__LaserScanSplit__fini(msg);
    return false;
  }
  // left_min
  // center_min
  // right_min
  // left_mean
  // center_mean
  // right_mean
  return true;
}

void
robotont_msgs__msg__LaserScanSplit__fini(robotont_msgs__msg__LaserScanSplit * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // left_min
  // center_min
  // right_min
  // left_mean
  // center_mean
  // right_mean
}

bool
robotont_msgs__msg__LaserScanSplit__are_equal(const robotont_msgs__msg__LaserScanSplit * lhs, const robotont_msgs__msg__LaserScanSplit * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // left_min
  if (lhs->left_min != rhs->left_min) {
    return false;
  }
  // center_min
  if (lhs->center_min != rhs->center_min) {
    return false;
  }
  // right_min
  if (lhs->right_min != rhs->right_min) {
    return false;
  }
  // left_mean
  if (lhs->left_mean != rhs->left_mean) {
    return false;
  }
  // center_mean
  if (lhs->center_mean != rhs->center_mean) {
    return false;
  }
  // right_mean
  if (lhs->right_mean != rhs->right_mean) {
    return false;
  }
  return true;
}

bool
robotont_msgs__msg__LaserScanSplit__copy(
  const robotont_msgs__msg__LaserScanSplit * input,
  robotont_msgs__msg__LaserScanSplit * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // left_min
  output->left_min = input->left_min;
  // center_min
  output->center_min = input->center_min;
  // right_min
  output->right_min = input->right_min;
  // left_mean
  output->left_mean = input->left_mean;
  // center_mean
  output->center_mean = input->center_mean;
  // right_mean
  output->right_mean = input->right_mean;
  return true;
}

robotont_msgs__msg__LaserScanSplit *
robotont_msgs__msg__LaserScanSplit__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotont_msgs__msg__LaserScanSplit * msg = (robotont_msgs__msg__LaserScanSplit *)allocator.allocate(sizeof(robotont_msgs__msg__LaserScanSplit), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robotont_msgs__msg__LaserScanSplit));
  bool success = robotont_msgs__msg__LaserScanSplit__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robotont_msgs__msg__LaserScanSplit__destroy(robotont_msgs__msg__LaserScanSplit * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robotont_msgs__msg__LaserScanSplit__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robotont_msgs__msg__LaserScanSplit__Sequence__init(robotont_msgs__msg__LaserScanSplit__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotont_msgs__msg__LaserScanSplit * data = NULL;

  if (size) {
    data = (robotont_msgs__msg__LaserScanSplit *)allocator.zero_allocate(size, sizeof(robotont_msgs__msg__LaserScanSplit), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robotont_msgs__msg__LaserScanSplit__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robotont_msgs__msg__LaserScanSplit__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robotont_msgs__msg__LaserScanSplit__Sequence__fini(robotont_msgs__msg__LaserScanSplit__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robotont_msgs__msg__LaserScanSplit__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robotont_msgs__msg__LaserScanSplit__Sequence *
robotont_msgs__msg__LaserScanSplit__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotont_msgs__msg__LaserScanSplit__Sequence * array = (robotont_msgs__msg__LaserScanSplit__Sequence *)allocator.allocate(sizeof(robotont_msgs__msg__LaserScanSplit__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robotont_msgs__msg__LaserScanSplit__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robotont_msgs__msg__LaserScanSplit__Sequence__destroy(robotont_msgs__msg__LaserScanSplit__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robotont_msgs__msg__LaserScanSplit__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robotont_msgs__msg__LaserScanSplit__Sequence__are_equal(const robotont_msgs__msg__LaserScanSplit__Sequence * lhs, const robotont_msgs__msg__LaserScanSplit__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robotont_msgs__msg__LaserScanSplit__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robotont_msgs__msg__LaserScanSplit__Sequence__copy(
  const robotont_msgs__msg__LaserScanSplit__Sequence * input,
  robotont_msgs__msg__LaserScanSplit__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robotont_msgs__msg__LaserScanSplit);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robotont_msgs__msg__LaserScanSplit * data =
      (robotont_msgs__msg__LaserScanSplit *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robotont_msgs__msg__LaserScanSplit__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robotont_msgs__msg__LaserScanSplit__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robotont_msgs__msg__LaserScanSplit__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
