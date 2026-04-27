// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from unitree_go:msg/IMUState.idl
// generated code does not contain a copyright notice
#include "unitree_go/msg/detail/imu_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "unitree_go/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "unitree_go/msg/detail/imu_state__struct.h"
#include "unitree_go/msg/detail/imu_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _IMUState__ros_msg_type = unitree_go__msg__IMUState;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
bool cdr_serialize_unitree_go__msg__IMUState(
  const unitree_go__msg__IMUState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: quaternion
  {
    size_t size = 4;
    auto array_ptr = ros_message->quaternion;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: gyroscope
  {
    size_t size = 3;
    auto array_ptr = ros_message->gyroscope;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: accelerometer
  {
    size_t size = 3;
    auto array_ptr = ros_message->accelerometer;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: rpy
  {
    size_t size = 3;
    auto array_ptr = ros_message->rpy;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: temperature
  {
    cdr << ros_message->temperature;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
bool cdr_deserialize_unitree_go__msg__IMUState(
  eprosima::fastcdr::Cdr & cdr,
  unitree_go__msg__IMUState * ros_message)
{
  // Field name: quaternion
  {
    size_t size = 4;
    auto array_ptr = ros_message->quaternion;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: gyroscope
  {
    size_t size = 3;
    auto array_ptr = ros_message->gyroscope;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: accelerometer
  {
    size_t size = 3;
    auto array_ptr = ros_message->accelerometer;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: rpy
  {
    size_t size = 3;
    auto array_ptr = ros_message->rpy;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: temperature
  {
    cdr >> ros_message->temperature;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
size_t get_serialized_size_unitree_go__msg__IMUState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IMUState__ros_msg_type * ros_message = static_cast<const _IMUState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: quaternion
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->quaternion;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gyroscope
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->gyroscope;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: accelerometer
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->accelerometer;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rpy
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->rpy;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: temperature
  {
    size_t item_size = sizeof(ros_message->temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
size_t max_serialized_size_unitree_go__msg__IMUState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: quaternion
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: gyroscope
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: accelerometer
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: rpy
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = unitree_go__msg__IMUState;
    is_plain =
      (
      offsetof(DataType, temperature) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
bool cdr_serialize_key_unitree_go__msg__IMUState(
  const unitree_go__msg__IMUState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: quaternion
  {
    size_t size = 4;
    auto array_ptr = ros_message->quaternion;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: gyroscope
  {
    size_t size = 3;
    auto array_ptr = ros_message->gyroscope;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: accelerometer
  {
    size_t size = 3;
    auto array_ptr = ros_message->accelerometer;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: rpy
  {
    size_t size = 3;
    auto array_ptr = ros_message->rpy;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: temperature
  {
    cdr << ros_message->temperature;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
size_t get_serialized_size_key_unitree_go__msg__IMUState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IMUState__ros_msg_type * ros_message = static_cast<const _IMUState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: quaternion
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->quaternion;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gyroscope
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->gyroscope;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: accelerometer
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->accelerometer;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rpy
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->rpy;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: temperature
  {
    size_t item_size = sizeof(ros_message->temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
size_t max_serialized_size_key_unitree_go__msg__IMUState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: quaternion
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: gyroscope
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: accelerometer
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: rpy
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = unitree_go__msg__IMUState;
    is_plain =
      (
      offsetof(DataType, temperature) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _IMUState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const unitree_go__msg__IMUState * ros_message = static_cast<const unitree_go__msg__IMUState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_unitree_go__msg__IMUState(ros_message, cdr);
}

static bool _IMUState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  unitree_go__msg__IMUState * ros_message = static_cast<unitree_go__msg__IMUState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_unitree_go__msg__IMUState(cdr, ros_message);
}

static uint32_t _IMUState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_unitree_go__msg__IMUState(
      untyped_ros_message, 0));
}

static size_t _IMUState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_unitree_go__msg__IMUState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_IMUState = {
  "unitree_go::msg",
  "IMUState",
  _IMUState__cdr_serialize,
  _IMUState__cdr_deserialize,
  _IMUState__get_serialized_size,
  _IMUState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _IMUState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_IMUState,
  get_message_typesupport_handle_function,
  &unitree_go__msg__IMUState__get_type_hash,
  &unitree_go__msg__IMUState__get_type_description,
  &unitree_go__msg__IMUState__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_go, msg, IMUState)() {
  return &_IMUState__type_support;
}

#if defined(__cplusplus)
}
#endif
