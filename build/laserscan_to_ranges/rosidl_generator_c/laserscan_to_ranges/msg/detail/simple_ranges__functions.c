// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from laserscan_to_ranges:msg/SimpleRanges.idl
// generated code does not contain a copyright notice
#include "laserscan_to_ranges/msg/detail/simple_ranges__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
laserscan_to_ranges__msg__SimpleRanges__init(laserscan_to_ranges__msg__SimpleRanges * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    laserscan_to_ranges__msg__SimpleRanges__fini(msg);
    return false;
  }
  // left
  // front
  // right
  return true;
}

void
laserscan_to_ranges__msg__SimpleRanges__fini(laserscan_to_ranges__msg__SimpleRanges * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // left
  // front
  // right
}

bool
laserscan_to_ranges__msg__SimpleRanges__are_equal(const laserscan_to_ranges__msg__SimpleRanges * lhs, const laserscan_to_ranges__msg__SimpleRanges * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // left
  if (lhs->left != rhs->left) {
    return false;
  }
  // front
  if (lhs->front != rhs->front) {
    return false;
  }
  // right
  if (lhs->right != rhs->right) {
    return false;
  }
  return true;
}

bool
laserscan_to_ranges__msg__SimpleRanges__copy(
  const laserscan_to_ranges__msg__SimpleRanges * input,
  laserscan_to_ranges__msg__SimpleRanges * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // left
  output->left = input->left;
  // front
  output->front = input->front;
  // right
  output->right = input->right;
  return true;
}

laserscan_to_ranges__msg__SimpleRanges *
laserscan_to_ranges__msg__SimpleRanges__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  laserscan_to_ranges__msg__SimpleRanges * msg = (laserscan_to_ranges__msg__SimpleRanges *)allocator.allocate(sizeof(laserscan_to_ranges__msg__SimpleRanges), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(laserscan_to_ranges__msg__SimpleRanges));
  bool success = laserscan_to_ranges__msg__SimpleRanges__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
laserscan_to_ranges__msg__SimpleRanges__destroy(laserscan_to_ranges__msg__SimpleRanges * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    laserscan_to_ranges__msg__SimpleRanges__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
laserscan_to_ranges__msg__SimpleRanges__Sequence__init(laserscan_to_ranges__msg__SimpleRanges__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  laserscan_to_ranges__msg__SimpleRanges * data = NULL;

  if (size) {
    data = (laserscan_to_ranges__msg__SimpleRanges *)allocator.zero_allocate(size, sizeof(laserscan_to_ranges__msg__SimpleRanges), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = laserscan_to_ranges__msg__SimpleRanges__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        laserscan_to_ranges__msg__SimpleRanges__fini(&data[i - 1]);
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
laserscan_to_ranges__msg__SimpleRanges__Sequence__fini(laserscan_to_ranges__msg__SimpleRanges__Sequence * array)
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
      laserscan_to_ranges__msg__SimpleRanges__fini(&array->data[i]);
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

laserscan_to_ranges__msg__SimpleRanges__Sequence *
laserscan_to_ranges__msg__SimpleRanges__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  laserscan_to_ranges__msg__SimpleRanges__Sequence * array = (laserscan_to_ranges__msg__SimpleRanges__Sequence *)allocator.allocate(sizeof(laserscan_to_ranges__msg__SimpleRanges__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = laserscan_to_ranges__msg__SimpleRanges__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
laserscan_to_ranges__msg__SimpleRanges__Sequence__destroy(laserscan_to_ranges__msg__SimpleRanges__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    laserscan_to_ranges__msg__SimpleRanges__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
laserscan_to_ranges__msg__SimpleRanges__Sequence__are_equal(const laserscan_to_ranges__msg__SimpleRanges__Sequence * lhs, const laserscan_to_ranges__msg__SimpleRanges__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!laserscan_to_ranges__msg__SimpleRanges__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
laserscan_to_ranges__msg__SimpleRanges__Sequence__copy(
  const laserscan_to_ranges__msg__SimpleRanges__Sequence * input,
  laserscan_to_ranges__msg__SimpleRanges__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(laserscan_to_ranges__msg__SimpleRanges);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    laserscan_to_ranges__msg__SimpleRanges * data =
      (laserscan_to_ranges__msg__SimpleRanges *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!laserscan_to_ranges__msg__SimpleRanges__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          laserscan_to_ranges__msg__SimpleRanges__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!laserscan_to_ranges__msg__SimpleRanges__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
