// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from unitree_hg:msg/HandCmd.idl
// generated code does not contain a copyright notice
#include "unitree_hg/msg/detail/hand_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "unitree_hg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "unitree_hg/msg/detail/hand_cmd__struct.h"
#include "unitree_hg/msg/detail/hand_cmd__functions.h"
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

#include "unitree_hg/msg/detail/motor_cmd__functions.h"  // motor_cmd

// forward declare type support functions

bool cdr_serialize_unitree_hg__msg__MotorCmd(
  const unitree_hg__msg__MotorCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_unitree_hg__msg__MotorCmd(
  eprosima::fastcdr::Cdr & cdr,
  unitree_hg__msg__MotorCmd * ros_message);

size_t get_serialized_size_unitree_hg__msg__MotorCmd(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_unitree_hg__msg__MotorCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_unitree_hg__msg__MotorCmd(
  const unitree_hg__msg__MotorCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_unitree_hg__msg__MotorCmd(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_unitree_hg__msg__MotorCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_hg, msg, MotorCmd)();


using _HandCmd__ros_msg_type = unitree_hg__msg__HandCmd;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_hg
bool cdr_serialize_unitree_hg__msg__HandCmd(
  const unitree_hg__msg__HandCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: motor_cmd
  {
    size_t size = ros_message->motor_cmd.size;
    auto array_ptr = ros_message->motor_cmd.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_unitree_hg__msg__MotorCmd(
        &array_ptr[i], cdr);
    }
  }

  // Field name: reserve
  {
    size_t size = 4;
    auto array_ptr = ros_message->reserve;
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_hg
bool cdr_deserialize_unitree_hg__msg__HandCmd(
  eprosima::fastcdr::Cdr & cdr,
  unitree_hg__msg__HandCmd * ros_message)
{
  // Field name: motor_cmd
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->motor_cmd.data) {
      unitree_hg__msg__MotorCmd__Sequence__fini(&ros_message->motor_cmd);
    }
    if (!unitree_hg__msg__MotorCmd__Sequence__init(&ros_message->motor_cmd, size)) {
      fprintf(stderr, "failed to create array for field 'motor_cmd'");
      return false;
    }
    auto array_ptr = ros_message->motor_cmd.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_unitree_hg__msg__MotorCmd(cdr, &array_ptr[i]);
    }
  }

  // Field name: reserve
  {
    size_t size = 4;
    auto array_ptr = ros_message->reserve;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_hg
size_t get_serialized_size_unitree_hg__msg__HandCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HandCmd__ros_msg_type * ros_message = static_cast<const _HandCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: motor_cmd
  {
    size_t array_size = ros_message->motor_cmd.size;
    auto array_ptr = ros_message->motor_cmd.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_unitree_hg__msg__MotorCmd(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: reserve
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->reserve;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_hg
size_t max_serialized_size_unitree_hg__msg__HandCmd(
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

  // Field name: motor_cmd
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_unitree_hg__msg__MotorCmd(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: reserve
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = unitree_hg__msg__HandCmd;
    is_plain =
      (
      offsetof(DataType, reserve) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_hg
bool cdr_serialize_key_unitree_hg__msg__HandCmd(
  const unitree_hg__msg__HandCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: motor_cmd
  {
    size_t size = ros_message->motor_cmd.size;
    auto array_ptr = ros_message->motor_cmd.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_unitree_hg__msg__MotorCmd(
        &array_ptr[i], cdr);
    }
  }

  // Field name: reserve
  {
    size_t size = 4;
    auto array_ptr = ros_message->reserve;
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_hg
size_t get_serialized_size_key_unitree_hg__msg__HandCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HandCmd__ros_msg_type * ros_message = static_cast<const _HandCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: motor_cmd
  {
    size_t array_size = ros_message->motor_cmd.size;
    auto array_ptr = ros_message->motor_cmd.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_unitree_hg__msg__MotorCmd(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: reserve
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->reserve;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_hg
size_t max_serialized_size_key_unitree_hg__msg__HandCmd(
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
  // Field name: motor_cmd
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_unitree_hg__msg__MotorCmd(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: reserve
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = unitree_hg__msg__HandCmd;
    is_plain =
      (
      offsetof(DataType, reserve) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _HandCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const unitree_hg__msg__HandCmd * ros_message = static_cast<const unitree_hg__msg__HandCmd *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_unitree_hg__msg__HandCmd(ros_message, cdr);
}

static bool _HandCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  unitree_hg__msg__HandCmd * ros_message = static_cast<unitree_hg__msg__HandCmd *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_unitree_hg__msg__HandCmd(cdr, ros_message);
}

static uint32_t _HandCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_unitree_hg__msg__HandCmd(
      untyped_ros_message, 0));
}

static size_t _HandCmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_unitree_hg__msg__HandCmd(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HandCmd = {
  "unitree_hg::msg",
  "HandCmd",
  _HandCmd__cdr_serialize,
  _HandCmd__cdr_deserialize,
  _HandCmd__get_serialized_size,
  _HandCmd__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _HandCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HandCmd,
  get_message_typesupport_handle_function,
  &unitree_hg__msg__HandCmd__get_type_hash,
  &unitree_hg__msg__HandCmd__get_type_description,
  &unitree_hg__msg__HandCmd__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_hg, msg, HandCmd)() {
  return &_HandCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
