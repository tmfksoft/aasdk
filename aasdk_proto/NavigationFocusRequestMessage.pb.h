// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NavigationFocusRequestMessage.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_NavigationFocusRequestMessage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_NavigationFocusRequestMessage_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_NavigationFocusRequestMessage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_NavigationFocusRequestMessage_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_NavigationFocusRequestMessage_2eproto;
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {
class NavigationFocusRequest;
class NavigationFocusRequestDefaultTypeInternal;
extern NavigationFocusRequestDefaultTypeInternal _NavigationFocusRequest_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> ::f1x::aasdk::proto::messages::NavigationFocusRequest* Arena::CreateMaybeMessage<::f1x::aasdk::proto::messages::NavigationFocusRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

class NavigationFocusRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:f1x.aasdk.proto.messages.NavigationFocusRequest) */ {
 public:
  inline NavigationFocusRequest() : NavigationFocusRequest(nullptr) {};
  virtual ~NavigationFocusRequest();

  NavigationFocusRequest(const NavigationFocusRequest& from);
  NavigationFocusRequest(NavigationFocusRequest&& from) noexcept
    : NavigationFocusRequest() {
    *this = ::std::move(from);
  }

  inline NavigationFocusRequest& operator=(const NavigationFocusRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline NavigationFocusRequest& operator=(NavigationFocusRequest&& from) noexcept {
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
  static const NavigationFocusRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const NavigationFocusRequest* internal_default_instance() {
    return reinterpret_cast<const NavigationFocusRequest*>(
               &_NavigationFocusRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(NavigationFocusRequest& a, NavigationFocusRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(NavigationFocusRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NavigationFocusRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline NavigationFocusRequest* New() const final {
    return CreateMaybeMessage<NavigationFocusRequest>(nullptr);
  }

  NavigationFocusRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<NavigationFocusRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const NavigationFocusRequest& from);
  void MergeFrom(const NavigationFocusRequest& from);
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
  void InternalSwap(NavigationFocusRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "f1x.aasdk.proto.messages.NavigationFocusRequest";
  }
  protected:
  explicit NavigationFocusRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_NavigationFocusRequestMessage_2eproto);
    return ::descriptor_table_NavigationFocusRequestMessage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTypeFieldNumber = 1,
  };
  // uint32 type = 1;
  void clear_type();
  ::PROTOBUF_NAMESPACE_ID::uint32 type() const;
  void set_type(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_type() const;
  void _internal_set_type(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:f1x.aasdk.proto.messages.NavigationFocusRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::uint32 type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_NavigationFocusRequestMessage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NavigationFocusRequest

// uint32 type = 1;
inline void NavigationFocusRequest::clear_type() {
  type_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 NavigationFocusRequest::_internal_type() const {
  return type_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 NavigationFocusRequest::type() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.NavigationFocusRequest.type)
  return _internal_type();
}
inline void NavigationFocusRequest::_internal_set_type(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  type_ = value;
}
inline void NavigationFocusRequest::set_type(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.NavigationFocusRequest.type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_NavigationFocusRequestMessage_2eproto
