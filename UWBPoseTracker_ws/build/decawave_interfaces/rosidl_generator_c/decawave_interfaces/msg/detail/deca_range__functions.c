// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from decawave_interfaces:msg/DecaRange.idl
// generated code does not contain a copyright notice
#include "decawave_interfaces/msg/detail/deca_range__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `tag_id`
// Member `anch_id1`
// Member `anch_id2`
// Member `anch_id3`
// Member `anch_id4`
#include "rosidl_runtime_c/string_functions.h"

bool
decawave_interfaces__msg__DecaRange__init(decawave_interfaces__msg__DecaRange * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    decawave_interfaces__msg__DecaRange__fini(msg);
    return false;
  }
  // tag_id
  if (!rosidl_runtime_c__String__init(&msg->tag_id)) {
    decawave_interfaces__msg__DecaRange__fini(msg);
    return false;
  }
  // anch_id1
  if (!rosidl_runtime_c__String__init(&msg->anch_id1)) {
    decawave_interfaces__msg__DecaRange__fini(msg);
    return false;
  }
  // range1
  // anch_id2
  if (!rosidl_runtime_c__String__init(&msg->anch_id2)) {
    decawave_interfaces__msg__DecaRange__fini(msg);
    return false;
  }
  // range2
  // anch_id3
  if (!rosidl_runtime_c__String__init(&msg->anch_id3)) {
    decawave_interfaces__msg__DecaRange__fini(msg);
    return false;
  }
  // range3
  // anch_id4
  if (!rosidl_runtime_c__String__init(&msg->anch_id4)) {
    decawave_interfaces__msg__DecaRange__fini(msg);
    return false;
  }
  // range4
  return true;
}

void
decawave_interfaces__msg__DecaRange__fini(decawave_interfaces__msg__DecaRange * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tag_id
  rosidl_runtime_c__String__fini(&msg->tag_id);
  // anch_id1
  rosidl_runtime_c__String__fini(&msg->anch_id1);
  // range1
  // anch_id2
  rosidl_runtime_c__String__fini(&msg->anch_id2);
  // range2
  // anch_id3
  rosidl_runtime_c__String__fini(&msg->anch_id3);
  // range3
  // anch_id4
  rosidl_runtime_c__String__fini(&msg->anch_id4);
  // range4
}

bool
decawave_interfaces__msg__DecaRange__are_equal(const decawave_interfaces__msg__DecaRange * lhs, const decawave_interfaces__msg__DecaRange * rhs)
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
  // tag_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->tag_id), &(rhs->tag_id)))
  {
    return false;
  }
  // anch_id1
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->anch_id1), &(rhs->anch_id1)))
  {
    return false;
  }
  // range1
  if (lhs->range1 != rhs->range1) {
    return false;
  }
  // anch_id2
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->anch_id2), &(rhs->anch_id2)))
  {
    return false;
  }
  // range2
  if (lhs->range2 != rhs->range2) {
    return false;
  }
  // anch_id3
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->anch_id3), &(rhs->anch_id3)))
  {
    return false;
  }
  // range3
  if (lhs->range3 != rhs->range3) {
    return false;
  }
  // anch_id4
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->anch_id4), &(rhs->anch_id4)))
  {
    return false;
  }
  // range4
  if (lhs->range4 != rhs->range4) {
    return false;
  }
  return true;
}

bool
decawave_interfaces__msg__DecaRange__copy(
  const decawave_interfaces__msg__DecaRange * input,
  decawave_interfaces__msg__DecaRange * output)
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
  // tag_id
  if (!rosidl_runtime_c__String__copy(
      &(input->tag_id), &(output->tag_id)))
  {
    return false;
  }
  // anch_id1
  if (!rosidl_runtime_c__String__copy(
      &(input->anch_id1), &(output->anch_id1)))
  {
    return false;
  }
  // range1
  output->range1 = input->range1;
  // anch_id2
  if (!rosidl_runtime_c__String__copy(
      &(input->anch_id2), &(output->anch_id2)))
  {
    return false;
  }
  // range2
  output->range2 = input->range2;
  // anch_id3
  if (!rosidl_runtime_c__String__copy(
      &(input->anch_id3), &(output->anch_id3)))
  {
    return false;
  }
  // range3
  output->range3 = input->range3;
  // anch_id4
  if (!rosidl_runtime_c__String__copy(
      &(input->anch_id4), &(output->anch_id4)))
  {
    return false;
  }
  // range4
  output->range4 = input->range4;
  return true;
}

decawave_interfaces__msg__DecaRange *
decawave_interfaces__msg__DecaRange__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  decawave_interfaces__msg__DecaRange * msg = (decawave_interfaces__msg__DecaRange *)allocator.allocate(sizeof(decawave_interfaces__msg__DecaRange), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(decawave_interfaces__msg__DecaRange));
  bool success = decawave_interfaces__msg__DecaRange__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
decawave_interfaces__msg__DecaRange__destroy(decawave_interfaces__msg__DecaRange * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    decawave_interfaces__msg__DecaRange__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
decawave_interfaces__msg__DecaRange__Sequence__init(decawave_interfaces__msg__DecaRange__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  decawave_interfaces__msg__DecaRange * data = NULL;

  if (size) {
    data = (decawave_interfaces__msg__DecaRange *)allocator.zero_allocate(size, sizeof(decawave_interfaces__msg__DecaRange), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = decawave_interfaces__msg__DecaRange__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        decawave_interfaces__msg__DecaRange__fini(&data[i - 1]);
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
decawave_interfaces__msg__DecaRange__Sequence__fini(decawave_interfaces__msg__DecaRange__Sequence * array)
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
      decawave_interfaces__msg__DecaRange__fini(&array->data[i]);
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

decawave_interfaces__msg__DecaRange__Sequence *
decawave_interfaces__msg__DecaRange__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  decawave_interfaces__msg__DecaRange__Sequence * array = (decawave_interfaces__msg__DecaRange__Sequence *)allocator.allocate(sizeof(decawave_interfaces__msg__DecaRange__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = decawave_interfaces__msg__DecaRange__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
decawave_interfaces__msg__DecaRange__Sequence__destroy(decawave_interfaces__msg__DecaRange__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    decawave_interfaces__msg__DecaRange__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
decawave_interfaces__msg__DecaRange__Sequence__are_equal(const decawave_interfaces__msg__DecaRange__Sequence * lhs, const decawave_interfaces__msg__DecaRange__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!decawave_interfaces__msg__DecaRange__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
decawave_interfaces__msg__DecaRange__Sequence__copy(
  const decawave_interfaces__msg__DecaRange__Sequence * input,
  decawave_interfaces__msg__DecaRange__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(decawave_interfaces__msg__DecaRange);
    decawave_interfaces__msg__DecaRange * data =
      (decawave_interfaces__msg__DecaRange *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!decawave_interfaces__msg__DecaRange__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          decawave_interfaces__msg__DecaRange__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!decawave_interfaces__msg__DecaRange__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
