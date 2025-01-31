// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AVInputOpenRequestMessage.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_AVInputOpenRequestMessage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_AVInputOpenRequestMessage_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_AVInputOpenRequestMessage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_AVInputOpenRequestMessage_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_AVInputOpenRequestMessage_2eproto;
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {
class AVInputOpenRequest;
class AVInputOpenRequestDefaultTypeInternal;
extern AVInputOpenRequestDefaultTypeInternal _AVInputOpenRequest_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> ::f1x::aasdk::proto::messages::AVInputOpenRequest* Arena::CreateMaybeMessage<::f1x::aasdk::proto::messages::AVInputOpenRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

class AVInputOpenRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:f1x.aasdk.proto.messages.AVInputOpenRequest) */ {
 public:
  inline AVInputOpenRequest() : AVInputOpenRequest(nullptr) {};
  virtual ~AVInputOpenRequest();

  AVInputOpenRequest(const AVInputOpenRequest& from);
  AVInputOpenRequest(AVInputOpenRequest&& from) noexcept
    : AVInputOpenRequest() {
    *this = ::std::move(from);
  }

  inline AVInputOpenRequest& operator=(const AVInputOpenRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline AVInputOpenRequest& operator=(AVInputOpenRequest&& from) noexcept {
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
  static const AVInputOpenRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AVInputOpenRequest* internal_default_instance() {
    return reinterpret_cast<const AVInputOpenRequest*>(
               &_AVInputOpenRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AVInputOpenRequest& a, AVInputOpenRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(AVInputOpenRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AVInputOpenRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline AVInputOpenRequest* New() const final {
    return CreateMaybeMessage<AVInputOpenRequest>(nullptr);
  }

  AVInputOpenRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<AVInputOpenRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const AVInputOpenRequest& from);
  void MergeFrom(const AVInputOpenRequest& from);
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
  void InternalSwap(AVInputOpenRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "f1x.aasdk.proto.messages.AVInputOpenRequest";
  }
  protected:
  explicit AVInputOpenRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_AVInputOpenRequestMessage_2eproto);
    return ::descriptor_table_AVInputOpenRequestMessage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kOpenFieldNumber = 1,
    kAncFieldNumber = 2,
    kEcFieldNumber = 3,
    kMaxUnackedFieldNumber = 4,
  };
  // bool open = 1;
  void clear_open();
  bool open() const;
  void set_open(bool value);
  private:
  bool _internal_open() const;
  void _internal_set_open(bool value);
  public:

  // bool anc = 2;
  void clear_anc();
  bool anc() const;
  void set_anc(bool value);
  private:
  bool _internal_anc() const;
  void _internal_set_anc(bool value);
  public:

  // bool ec = 3;
  void clear_ec();
  bool ec() const;
  void set_ec(bool value);
  private:
  bool _internal_ec() const;
  void _internal_set_ec(bool value);
  public:

  // int32 max_unacked = 4;
  void clear_max_unacked();
  ::PROTOBUF_NAMESPACE_ID::int32 max_unacked() const;
  void set_max_unacked(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_max_unacked() const;
  void _internal_set_max_unacked(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:f1x.aasdk.proto.messages.AVInputOpenRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  bool open_;
  bool anc_;
  bool ec_;
  ::PROTOBUF_NAMESPACE_ID::int32 max_unacked_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_AVInputOpenRequestMessage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AVInputOpenRequest

// bool open = 1;
inline void AVInputOpenRequest::clear_open() {
  open_ = false;
}
inline bool AVInputOpenRequest::_internal_open() const {
  return open_;
}
inline bool AVInputOpenRequest::open() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.AVInputOpenRequest.open)
  return _internal_open();
}
inline void AVInputOpenRequest::_internal_set_open(bool value) {
  
  open_ = value;
}
inline void AVInputOpenRequest::set_open(bool value) {
  _internal_set_open(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.AVInputOpenRequest.open)
}

// bool anc = 2;
inline void AVInputOpenRequest::clear_anc() {
  anc_ = false;
}
inline bool AVInputOpenRequest::_internal_anc() const {
  return anc_;
}
inline bool AVInputOpenRequest::anc() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.AVInputOpenRequest.anc)
  return _internal_anc();
}
inline void AVInputOpenRequest::_internal_set_anc(bool value) {
  
  anc_ = value;
}
inline void AVInputOpenRequest::set_anc(bool value) {
  _internal_set_anc(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.AVInputOpenRequest.anc)
}

// bool ec = 3;
inline void AVInputOpenRequest::clear_ec() {
  ec_ = false;
}
inline bool AVInputOpenRequest::_internal_ec() const {
  return ec_;
}
inline bool AVInputOpenRequest::ec() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.AVInputOpenRequest.ec)
  return _internal_ec();
}
inline void AVInputOpenRequest::_internal_set_ec(bool value) {
  
  ec_ = value;
}
inline void AVInputOpenRequest::set_ec(bool value) {
  _internal_set_ec(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.AVInputOpenRequest.ec)
}

// int32 max_unacked = 4;
inline void AVInputOpenRequest::clear_max_unacked() {
  max_unacked_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 AVInputOpenRequest::_internal_max_unacked() const {
  return max_unacked_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 AVInputOpenRequest::max_unacked() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.AVInputOpenRequest.max_unacked)
  return _internal_max_unacked();
}
inline void AVInputOpenRequest::_internal_set_max_unacked(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  max_unacked_ = value;
}
inline void AVInputOpenRequest::set_max_unacked(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_max_unacked(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.AVInputOpenRequest.max_unacked)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_AVInputOpenRequestMessage_2eproto
