// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from unitree_hg:msg/LowState.idl
// generated code does not contain a copyright notice
#include "unitree_hg/msg/detail/low_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "unitree_hg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "unitree_hg/msg/detail/low_state__struct.h"
#include "unitree_hg/msg/detail/low_state__functions.h"
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

#include "unitree_hg/msg/detail/imu_state__functions.h"  // imu_state
#include "unitree_hg/msg/detail/motor_state__functions.h"  // motor_state

// forward declare type support functions

bool cdr_serialize_unitree_hg__msg__IMUState(
  const unitree_hg__msg__IMUState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_unitree_hg__msg__IMUState(
  eprosima::fastcdr::Cdr & cdr,
  unitree_hg__msg__IMUState * ros_message);

size_t get_serialized_size_unitree_hg__msg__IMUState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_unitree_hg__msg__IMUState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_unitree_hg__msg__IMUState(
  const unitree_hg__msg__IMUState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_unitree_hg__msg__IMUState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_unitree_hg__msg__IMUState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_hg, msg, IMUState)();

bool cdr_serialize_unitree_hg__msg__MotorState(
  const unitree_hg__msg__MotorState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_unitree_hg__msg__MotorState(
  eprosima::fastcdr::Cdr & cdr,
  unitree_hg__msg__MotorState * ros_message);

size_t get_serialized_size_unitree_hg__msg__MotorState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_unitree_hg__msg__MotorState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_unitree_hg__msg__MotorState(
  const unitree_hg__msg__MotorState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_unitree_hg__msg__MotorState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_unitree_hg__msg__MotorState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_hg, msg, MotorState)();


using _LowState__ros_msg_type = unitree_hg__msg__LowState;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_hg
bool cdr_serialize_unitree_hg__msg__LowState(
  const unitree_hg__msg__LowState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: version
  {
    size_t size = 2;
    auto array_ptr = ros_message->version;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: mode_pr
  {
    cdr << ros_message->mode_pr;
  }

  // Field name: mode_machine
  {
    cdr << ros_message->mode_machine;
  }

  // Field name: tick
  {
    cdr << ros_message->tick;
  }

  // Field name: imu_state
  {
    cdr_serialize_unitree_hg__msg__IMUState(
      &ros_message->imu_state, cdr);
  }

  // Field name: motor_state
  {
    size_t size = 35;
    auto array_ptr = ros_message->motor_state;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_unitree_hg__msg__MotorState(
        &array_ptr[i], cdr);
    }
  }

  // Field name: wireless_remote
  {
    size_t size = 40;
    auto array_ptr = ros_message->wireless_remote;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: reserve
  {
    size_t size = 4;
    auto array_ptr = ros_message->reserve;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: crc
  {
    cdr << ros_message->crc;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_hg
bool cdr_deserialize_unitree_hg__msg__LowState(
  eprosima::fastcdr::Cdr & cdr,
  unitree_hg__msg__LowState * ros_message)
{
  // Field name: version
  {
    size_t size = 2;
    auto array_ptr = ros_message->version;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: mode_pr
  {
    cdr >> ros_message->mode_pr;
  }

  // Field name: mode_machine
  {
    cdr >> ros_message->mode_machine;
  }

  // Field name: tick
  {
    cdr >> ros_message->tick;
  }

  // Field name: imu_state
  {
    cdr_deserialize_unitree_hg__msg__IMUState(cdr, &ros_message->imu_state);
  }

  // Field name: motor_state
  {
    size_t size = 35;
    auto array_ptr = ros_message->motor_state;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_unitree_hg__msg__MotorState(cdr, &array_ptr[i]);
    }
  }

  // Field name: wireless_remote
  {
    size_t size = 40;
    auto array_ptr = ros_message->wireless_remote;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: reserve
  {
    size_t size = 4;
    auto array_ptr = ros_message->reserve;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: crc
  {
    cdr >> ros_message->crc;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_hg
size_t get_serialized_size_unitree_hg__msg__LowState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LowState__ros_msg_type * ros_message = static_cast<const _LowState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: version
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->version;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mode_pr
  {
    size_t item_size = sizeof(ros_message->mode_pr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mode_machine
  {
    size_t item_size = sizeof(ros_message->mode_machine);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tick
  {
    size_t item_size = sizeof(ros_message->tick);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: imu_state
  current_alignment += get_serialized_size_unitree_hg__msg__IMUState(
    &(ros_message->imu_state), current_alignment);

  // Field name: motor_state
  {
    size_t array_size = 35;
    auto array_ptr = ros_message->motor_state;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_unitree_hg__msg__MotorState(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: wireless_remote
  {
    size_t array_size = 40;
    auto array_ptr = ros_message->wireless_remote;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
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

  // Field name: crc
  {
    size_t item_size = sizeof(ros_message->crc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_hg
size_t max_serialized_size_unitree_hg__msg__LowState(
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

  // Field name: version
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mode_pr
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: mode_machine
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: tick
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: imu_state
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_unitree_hg__msg__IMUState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: motor_state
  {
    size_t array_size = 35;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_unitree_hg__msg__MotorState(
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

  // Field name: reserve
  {
    size_t array_size = 4;
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
    using DataType = unitree_hg__msg__LowState;
    is_plain =
      (
      offsetof(DataType, crc) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_hg
bool cdr_serialize_key_unitree_hg__msg__LowState(
  const unitree_hg__msg__LowState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: version
  {
    size_t size = 2;
    auto array_ptr = ros_message->version;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: mode_pr
  {
    cdr << ros_message->mode_pr;
  }

  // Field name: mode_machine
  {
    cdr << ros_message->mode_machine;
  }

  // Field name: tick
  {
    cdr << ros_message->tick;
  }

  // Field name: imu_state
  {
    cdr_serialize_key_unitree_hg__msg__IMUState(
      &ros_message->imu_state, cdr);
  }

  // Field name: motor_state
  {
    size_t size = 35;
    auto array_ptr = ros_message->motor_state;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_unitree_hg__msg__MotorState(
        &array_ptr[i], cdr);
    }
  }

  // Field name: wireless_remote
  {
    size_t size = 40;
    auto array_ptr = ros_message->wireless_remote;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: reserve
  {
    size_t size = 4;
    auto array_ptr = ros_message->reserve;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: crc
  {
    cdr << ros_message->crc;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_hg
size_t get_serialized_size_key_unitree_hg__msg__LowState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LowState__ros_msg_type * ros_message = static_cast<const _LowState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: version
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->version;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mode_pr
  {
    size_t item_size = sizeof(ros_message->mode_pr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mode_machine
  {
    size_t item_size = sizeof(ros_message->mode_machine);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tick
  {
    size_t item_size = sizeof(ros_message->tick);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: imu_state
  current_alignment += get_serialized_size_key_unitree_hg__msg__IMUState(
    &(ros_message->imu_state), current_alignment);

  // Field name: motor_state
  {
    size_t array_size = 35;
    auto array_ptr = ros_message->motor_state;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_unitree_hg__msg__MotorState(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: wireless_remote
  {
    size_t array_size = 40;
    auto array_ptr = ros_message->wireless_remote;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
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

  // Field name: crc
  {
    size_t item_size = sizeof(ros_message->crc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_hg
size_t max_serialized_size_key_unitree_hg__msg__LowState(
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
  // Field name: version
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mode_pr
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: mode_machine
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: tick
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: imu_state
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_unitree_hg__msg__IMUState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: motor_state
  {
    size_t array_size = 35;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_unitree_hg__msg__MotorState(
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

  // Field name: reserve
  {
    size_t array_size = 4;
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
    using DataType = unitree_hg__msg__LowState;
    is_plain =
      (
      offsetof(DataType, crc) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _LowState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const unitree_hg__msg__LowState * ros_message = static_cast<const unitree_hg__msg__LowState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_unitree_hg__msg__LowState(ros_message, cdr);
}

static bool _LowState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  unitree_hg__msg__LowState * ros_message = static_cast<unitree_hg__msg__LowState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_unitree_hg__msg__LowState(cdr, ros_message);
}

static uint32_t _LowState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_unitree_hg__msg__LowState(
      untyped_ros_message, 0));
}

static size_t _LowState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_unitree_hg__msg__LowState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LowState = {
  "unitree_hg::msg",
  "LowState",
  _LowState__cdr_serialize,
  _LowState__cdr_deserialize,
  _LowState__get_serialized_size,
  _LowState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _LowState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LowState,
  get_message_typesupport_handle_function,
  &unitree_hg__msg__LowState__get_type_hash,
  &unitree_hg__msg__LowState__get_type_description,
  &unitree_hg__msg__LowState__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_hg, msg, LowState)() {
  return &_LowState__type_support;
}

#if defined(__cplusplus)
}
#endif
