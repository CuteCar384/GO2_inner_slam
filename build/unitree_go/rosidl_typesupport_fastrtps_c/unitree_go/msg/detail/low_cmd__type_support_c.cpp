// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from unitree_go:msg/LowCmd.idl
// generated code does not contain a copyright notice
#include "unitree_go/msg/detail/low_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "unitree_go/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "unitree_go/msg/detail/low_cmd__struct.h"
#include "unitree_go/msg/detail/low_cmd__functions.h"
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

#include "unitree_go/msg/detail/bms_cmd__functions.h"  // bms_cmd
#include "unitree_go/msg/detail/motor_cmd__functions.h"  // motor_cmd

// forward declare type support functions

bool cdr_serialize_unitree_go__msg__BmsCmd(
  const unitree_go__msg__BmsCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_unitree_go__msg__BmsCmd(
  eprosima::fastcdr::Cdr & cdr,
  unitree_go__msg__BmsCmd * ros_message);

size_t get_serialized_size_unitree_go__msg__BmsCmd(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_unitree_go__msg__BmsCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_unitree_go__msg__BmsCmd(
  const unitree_go__msg__BmsCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_unitree_go__msg__BmsCmd(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_unitree_go__msg__BmsCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_go, msg, BmsCmd)();

bool cdr_serialize_unitree_go__msg__MotorCmd(
  const unitree_go__msg__MotorCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_unitree_go__msg__MotorCmd(
  eprosima::fastcdr::Cdr & cdr,
  unitree_go__msg__MotorCmd * ros_message);

size_t get_serialized_size_unitree_go__msg__MotorCmd(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_unitree_go__msg__MotorCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_unitree_go__msg__MotorCmd(
  const unitree_go__msg__MotorCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_unitree_go__msg__MotorCmd(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_unitree_go__msg__MotorCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_go, msg, MotorCmd)();


using _LowCmd__ros_msg_type = unitree_go__msg__LowCmd;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
bool cdr_serialize_unitree_go__msg__LowCmd(
  const unitree_go__msg__LowCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: head
  {
    size_t size = 2;
    auto array_ptr = ros_message->head;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: level_flag
  {
    cdr << ros_message->level_flag;
  }

  // Field name: frame_reserve
  {
    cdr << ros_message->frame_reserve;
  }

  // Field name: sn
  {
    size_t size = 2;
    auto array_ptr = ros_message->sn;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: version
  {
    size_t size = 2;
    auto array_ptr = ros_message->version;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: bandwidth
  {
    cdr << ros_message->bandwidth;
  }

  // Field name: motor_cmd
  {
    size_t size = 20;
    auto array_ptr = ros_message->motor_cmd;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_unitree_go__msg__MotorCmd(
        &array_ptr[i], cdr);
    }
  }

  // Field name: bms_cmd
  {
    cdr_serialize_unitree_go__msg__BmsCmd(
      &ros_message->bms_cmd, cdr);
  }

  // Field name: wireless_remote
  {
    size_t size = 40;
    auto array_ptr = ros_message->wireless_remote;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: led
  {
    size_t size = 12;
    auto array_ptr = ros_message->led;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: fan
  {
    size_t size = 2;
    auto array_ptr = ros_message->fan;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: gpio
  {
    cdr << ros_message->gpio;
  }

  // Field name: reserve
  {
    cdr << ros_message->reserve;
  }

  // Field name: crc
  {
    cdr << ros_message->crc;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
bool cdr_deserialize_unitree_go__msg__LowCmd(
  eprosima::fastcdr::Cdr & cdr,
  unitree_go__msg__LowCmd * ros_message)
{
  // Field name: head
  {
    size_t size = 2;
    auto array_ptr = ros_message->head;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: level_flag
  {
    cdr >> ros_message->level_flag;
  }

  // Field name: frame_reserve
  {
    cdr >> ros_message->frame_reserve;
  }

  // Field name: sn
  {
    size_t size = 2;
    auto array_ptr = ros_message->sn;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: version
  {
    size_t size = 2;
    auto array_ptr = ros_message->version;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: bandwidth
  {
    cdr >> ros_message->bandwidth;
  }

  // Field name: motor_cmd
  {
    size_t size = 20;
    auto array_ptr = ros_message->motor_cmd;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_unitree_go__msg__MotorCmd(cdr, &array_ptr[i]);
    }
  }

  // Field name: bms_cmd
  {
    cdr_deserialize_unitree_go__msg__BmsCmd(cdr, &ros_message->bms_cmd);
  }

  // Field name: wireless_remote
  {
    size_t size = 40;
    auto array_ptr = ros_message->wireless_remote;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: led
  {
    size_t size = 12;
    auto array_ptr = ros_message->led;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: fan
  {
    size_t size = 2;
    auto array_ptr = ros_message->fan;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: gpio
  {
    cdr >> ros_message->gpio;
  }

  // Field name: reserve
  {
    cdr >> ros_message->reserve;
  }

  // Field name: crc
  {
    cdr >> ros_message->crc;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
size_t get_serialized_size_unitree_go__msg__LowCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LowCmd__ros_msg_type * ros_message = static_cast<const _LowCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: head
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->head;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: level_flag
  {
    size_t item_size = sizeof(ros_message->level_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: frame_reserve
  {
    size_t item_size = sizeof(ros_message->frame_reserve);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sn
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->sn;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: version
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->version;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bandwidth
  {
    size_t item_size = sizeof(ros_message->bandwidth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: motor_cmd
  {
    size_t array_size = 20;
    auto array_ptr = ros_message->motor_cmd;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_unitree_go__msg__MotorCmd(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: bms_cmd
  current_alignment += get_serialized_size_unitree_go__msg__BmsCmd(
    &(ros_message->bms_cmd), current_alignment);

  // Field name: wireless_remote
  {
    size_t array_size = 40;
    auto array_ptr = ros_message->wireless_remote;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: led
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->led;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fan
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->fan;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gpio
  {
    size_t item_size = sizeof(ros_message->gpio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reserve
  {
    size_t item_size = sizeof(ros_message->reserve);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: crc
  {
    size_t item_size = sizeof(ros_message->crc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
size_t max_serialized_size_unitree_go__msg__LowCmd(
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

  // Field name: head
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: level_flag
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: frame_reserve
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: sn
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: version
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: bandwidth
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: motor_cmd
  {
    size_t array_size = 20;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_unitree_go__msg__MotorCmd(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: bms_cmd
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_unitree_go__msg__BmsCmd(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: wireless_remote
  {
    size_t array_size = 40;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: led
  {
    size_t array_size = 12;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: fan
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: gpio
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: reserve
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: crc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = unitree_go__msg__LowCmd;
    is_plain =
      (
      offsetof(DataType, crc) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
bool cdr_serialize_key_unitree_go__msg__LowCmd(
  const unitree_go__msg__LowCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: head
  {
    size_t size = 2;
    auto array_ptr = ros_message->head;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: level_flag
  {
    cdr << ros_message->level_flag;
  }

  // Field name: frame_reserve
  {
    cdr << ros_message->frame_reserve;
  }

  // Field name: sn
  {
    size_t size = 2;
    auto array_ptr = ros_message->sn;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: version
  {
    size_t size = 2;
    auto array_ptr = ros_message->version;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: bandwidth
  {
    cdr << ros_message->bandwidth;
  }

  // Field name: motor_cmd
  {
    size_t size = 20;
    auto array_ptr = ros_message->motor_cmd;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_unitree_go__msg__MotorCmd(
        &array_ptr[i], cdr);
    }
  }

  // Field name: bms_cmd
  {
    cdr_serialize_key_unitree_go__msg__BmsCmd(
      &ros_message->bms_cmd, cdr);
  }

  // Field name: wireless_remote
  {
    size_t size = 40;
    auto array_ptr = ros_message->wireless_remote;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: led
  {
    size_t size = 12;
    auto array_ptr = ros_message->led;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: fan
  {
    size_t size = 2;
    auto array_ptr = ros_message->fan;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: gpio
  {
    cdr << ros_message->gpio;
  }

  // Field name: reserve
  {
    cdr << ros_message->reserve;
  }

  // Field name: crc
  {
    cdr << ros_message->crc;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
size_t get_serialized_size_key_unitree_go__msg__LowCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LowCmd__ros_msg_type * ros_message = static_cast<const _LowCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: head
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->head;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: level_flag
  {
    size_t item_size = sizeof(ros_message->level_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: frame_reserve
  {
    size_t item_size = sizeof(ros_message->frame_reserve);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sn
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->sn;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: version
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->version;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bandwidth
  {
    size_t item_size = sizeof(ros_message->bandwidth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: motor_cmd
  {
    size_t array_size = 20;
    auto array_ptr = ros_message->motor_cmd;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_unitree_go__msg__MotorCmd(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: bms_cmd
  current_alignment += get_serialized_size_key_unitree_go__msg__BmsCmd(
    &(ros_message->bms_cmd), current_alignment);

  // Field name: wireless_remote
  {
    size_t array_size = 40;
    auto array_ptr = ros_message->wireless_remote;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: led
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->led;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fan
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->fan;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gpio
  {
    size_t item_size = sizeof(ros_message->gpio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reserve
  {
    size_t item_size = sizeof(ros_message->reserve);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: crc
  {
    size_t item_size = sizeof(ros_message->crc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
size_t max_serialized_size_key_unitree_go__msg__LowCmd(
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
  // Field name: head
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: level_flag
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: frame_reserve
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: sn
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: version
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: bandwidth
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: motor_cmd
  {
    size_t array_size = 20;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_unitree_go__msg__MotorCmd(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: bms_cmd
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_unitree_go__msg__BmsCmd(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: wireless_remote
  {
    size_t array_size = 40;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: led
  {
    size_t array_size = 12;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: fan
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: gpio
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: reserve
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: crc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = unitree_go__msg__LowCmd;
    is_plain =
      (
      offsetof(DataType, crc) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _LowCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const unitree_go__msg__LowCmd * ros_message = static_cast<const unitree_go__msg__LowCmd *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_unitree_go__msg__LowCmd(ros_message, cdr);
}

static bool _LowCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  unitree_go__msg__LowCmd * ros_message = static_cast<unitree_go__msg__LowCmd *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_unitree_go__msg__LowCmd(cdr, ros_message);
}

static uint32_t _LowCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_unitree_go__msg__LowCmd(
      untyped_ros_message, 0));
}

static size_t _LowCmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_unitree_go__msg__LowCmd(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LowCmd = {
  "unitree_go::msg",
  "LowCmd",
  _LowCmd__cdr_serialize,
  _LowCmd__cdr_deserialize,
  _LowCmd__get_serialized_size,
  _LowCmd__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _LowCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LowCmd,
  get_message_typesupport_handle_function,
  &unitree_go__msg__LowCmd__get_type_hash,
  &unitree_go__msg__LowCmd__get_type_description,
  &unitree_go__msg__LowCmd__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_go, msg, LowCmd)() {
  return &_LowCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
