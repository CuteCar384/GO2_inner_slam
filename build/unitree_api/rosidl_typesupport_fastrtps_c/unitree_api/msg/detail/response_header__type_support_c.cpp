// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from unitree_api:msg/ResponseHeader.idl
// generated code does not contain a copyright notice
#include "unitree_api/msg/detail/response_header__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "unitree_api/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "unitree_api/msg/detail/response_header__struct.h"
#include "unitree_api/msg/detail/response_header__functions.h"
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

#include "unitree_api/msg/detail/request_identity__functions.h"  // identity
#include "unitree_api/msg/detail/response_status__functions.h"  // status

// forward declare type support functions

bool cdr_serialize_unitree_api__msg__RequestIdentity(
  const unitree_api__msg__RequestIdentity * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_unitree_api__msg__RequestIdentity(
  eprosima::fastcdr::Cdr & cdr,
  unitree_api__msg__RequestIdentity * ros_message);

size_t get_serialized_size_unitree_api__msg__RequestIdentity(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_unitree_api__msg__RequestIdentity(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_unitree_api__msg__RequestIdentity(
  const unitree_api__msg__RequestIdentity * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_unitree_api__msg__RequestIdentity(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_unitree_api__msg__RequestIdentity(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_api, msg, RequestIdentity)();

bool cdr_serialize_unitree_api__msg__ResponseStatus(
  const unitree_api__msg__ResponseStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_unitree_api__msg__ResponseStatus(
  eprosima::fastcdr::Cdr & cdr,
  unitree_api__msg__ResponseStatus * ros_message);

size_t get_serialized_size_unitree_api__msg__ResponseStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_unitree_api__msg__ResponseStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_unitree_api__msg__ResponseStatus(
  const unitree_api__msg__ResponseStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_unitree_api__msg__ResponseStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_unitree_api__msg__ResponseStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_api, msg, ResponseStatus)();


using _ResponseHeader__ros_msg_type = unitree_api__msg__ResponseHeader;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_api
bool cdr_serialize_unitree_api__msg__ResponseHeader(
  const unitree_api__msg__ResponseHeader * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: identity
  {
    cdr_serialize_unitree_api__msg__RequestIdentity(
      &ros_message->identity, cdr);
  }

  // Field name: status
  {
    cdr_serialize_unitree_api__msg__ResponseStatus(
      &ros_message->status, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_api
bool cdr_deserialize_unitree_api__msg__ResponseHeader(
  eprosima::fastcdr::Cdr & cdr,
  unitree_api__msg__ResponseHeader * ros_message)
{
  // Field name: identity
  {
    cdr_deserialize_unitree_api__msg__RequestIdentity(cdr, &ros_message->identity);
  }

  // Field name: status
  {
    cdr_deserialize_unitree_api__msg__ResponseStatus(cdr, &ros_message->status);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_api
size_t get_serialized_size_unitree_api__msg__ResponseHeader(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ResponseHeader__ros_msg_type * ros_message = static_cast<const _ResponseHeader__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: identity
  current_alignment += get_serialized_size_unitree_api__msg__RequestIdentity(
    &(ros_message->identity), current_alignment);

  // Field name: status
  current_alignment += get_serialized_size_unitree_api__msg__ResponseStatus(
    &(ros_message->status), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_api
size_t max_serialized_size_unitree_api__msg__ResponseHeader(
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

  // Field name: identity
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_unitree_api__msg__RequestIdentity(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: status
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_unitree_api__msg__ResponseStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = unitree_api__msg__ResponseHeader;
    is_plain =
      (
      offsetof(DataType, status) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_api
bool cdr_serialize_key_unitree_api__msg__ResponseHeader(
  const unitree_api__msg__ResponseHeader * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: identity
  {
    cdr_serialize_key_unitree_api__msg__RequestIdentity(
      &ros_message->identity, cdr);
  }

  // Field name: status
  {
    cdr_serialize_key_unitree_api__msg__ResponseStatus(
      &ros_message->status, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_api
size_t get_serialized_size_key_unitree_api__msg__ResponseHeader(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ResponseHeader__ros_msg_type * ros_message = static_cast<const _ResponseHeader__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: identity
  current_alignment += get_serialized_size_key_unitree_api__msg__RequestIdentity(
    &(ros_message->identity), current_alignment);

  // Field name: status
  current_alignment += get_serialized_size_key_unitree_api__msg__ResponseStatus(
    &(ros_message->status), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_api
size_t max_serialized_size_key_unitree_api__msg__ResponseHeader(
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
  // Field name: identity
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_unitree_api__msg__RequestIdentity(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: status
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_unitree_api__msg__ResponseStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = unitree_api__msg__ResponseHeader;
    is_plain =
      (
      offsetof(DataType, status) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ResponseHeader__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const unitree_api__msg__ResponseHeader * ros_message = static_cast<const unitree_api__msg__ResponseHeader *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_unitree_api__msg__ResponseHeader(ros_message, cdr);
}

static bool _ResponseHeader__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  unitree_api__msg__ResponseHeader * ros_message = static_cast<unitree_api__msg__ResponseHeader *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_unitree_api__msg__ResponseHeader(cdr, ros_message);
}

static uint32_t _ResponseHeader__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_unitree_api__msg__ResponseHeader(
      untyped_ros_message, 0));
}

static size_t _ResponseHeader__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_unitree_api__msg__ResponseHeader(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ResponseHeader = {
  "unitree_api::msg",
  "ResponseHeader",
  _ResponseHeader__cdr_serialize,
  _ResponseHeader__cdr_deserialize,
  _ResponseHeader__get_serialized_size,
  _ResponseHeader__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ResponseHeader__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ResponseHeader,
  get_message_typesupport_handle_function,
  &unitree_api__msg__ResponseHeader__get_type_hash,
  &unitree_api__msg__ResponseHeader__get_type_description,
  &unitree_api__msg__ResponseHeader__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_api, msg, ResponseHeader)() {
  return &_ResponseHeader__type_support;
}

#if defined(__cplusplus)
}
#endif
