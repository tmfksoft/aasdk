// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AbsoluteInputEventData.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_AbsoluteInputEventData_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_AbsoluteInputEventData_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_AbsoluteInputEventData_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_AbsoluteInputEventData_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_AbsoluteInputEventData_2eproto;
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {
class AbsoluteInputEvent;
class AbsoluteInputEventDefaultTypeInternal;
extern AbsoluteInputEventDefaultTypeInternal _AbsoluteInputEvent_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> ::f1x::aasdk::proto::data::AbsoluteInputEvent* Arena::CreateMaybeMessage<::f1x::aasdk::proto::data::AbsoluteInputEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

class AbsoluteInputEvent PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:f1x.aasdk.proto.data.AbsoluteInputEvent) */ {
 public:
  inline AbsoluteInputEvent() : AbsoluteInputEvent(nullptr) {};
  virtual ~AbsoluteInputEvent();

  AbsoluteInputEvent(const AbsoluteInputEvent& from);
  AbsoluteInputEvent(AbsoluteInputEvent&& from) noexcept
    : AbsoluteInputEvent() {
    *this = ::std::move(from);
  }

  inline AbsoluteInputEvent& operator=(const AbsoluteInputEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline AbsoluteInputEvent& operator=(AbsoluteInputEvent&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const AbsoluteInputEvent& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AbsoluteInputEvent* internal_default_instance() {
    return reinterpret_cast<const AbsoluteInputEvent*>(
               &_AbsoluteInputEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AbsoluteInputEvent& a, AbsoluteInputEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(AbsoluteInputEvent* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AbsoluteInputEvent* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline AbsoluteInputEvent* New() const final {
    return CreateMaybeMessage<AbsoluteInputEvent>(nullptr);
  }

  AbsoluteInputEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<AbsoluteInputEvent>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const AbsoluteInputEvent& from);
  void MergeFrom(const AbsoluteInputEvent& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AbsoluteInputEvent* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "f1x.aasdk.proto.data.AbsoluteInputEvent";
  }
  protected:
  explicit AbsoluteInputEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_AbsoluteInputEventData_2eproto);
    return ::descriptor_table_AbsoluteInputEventData_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kScanCodeFieldNumber = 1,
    kValueFieldNumber = 2,
  };
  // uint32 scan_code = 1;
  void clear_scan_code();
  ::PROTOBUF_NAMESPACE_ID::uint32 scan_code() const;
  void set_scan_code(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_scan_code() const;
  void _internal_set_scan_code(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // int32 value = 2;
  void clear_value();
  ::PROTOBUF_NAMESPACE_ID::int32 value() const;
  void set_value(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_value() const;
  void _internal_set_value(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:f1x.aasdk.proto.data.AbsoluteInputEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::uint32 scan_code_;
  ::PROTOBUF_NAMESPACE_ID::int32 value_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_AbsoluteInputEventData_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AbsoluteInputEvent

// uint32 scan_code = 1;
inline void AbsoluteInputEvent::clear_scan_code() {
  scan_code_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 AbsoluteInputEvent::_internal_scan_code() const {
  return scan_code_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 AbsoluteInputEvent::scan_code() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.AbsoluteInputEvent.scan_code)
  return _internal_scan_code();
}
inline void AbsoluteInputEvent::_internal_set_scan_code(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  scan_code_ = value;
}
inline void AbsoluteInputEvent::set_scan_code(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_scan_code(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.data.AbsoluteInputEvent.scan_code)
}

// int32 value = 2;
inline void AbsoluteInputEvent::clear_value() {
  value_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 AbsoluteInputEvent::_internal_value() const {
  return value_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 AbsoluteInputEvent::value() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.AbsoluteInputEvent.value)
  return _internal_value();
}
inline void AbsoluteInputEvent::_internal_set_value(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  value_ = value;
}
inline void AbsoluteInputEvent::set_value(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.data.AbsoluteInputEvent.value)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_AbsoluteInputEventData_2eproto
