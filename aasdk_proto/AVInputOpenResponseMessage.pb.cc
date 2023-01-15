// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AVInputOpenResponseMessage.proto

#include "AVInputOpenResponseMessage.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {
class AVInputOpenResponseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<AVInputOpenResponse> _instance;
} _AVInputOpenResponse_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
static void InitDefaultsscc_info_AVInputOpenResponse_AVInputOpenResponseMessage_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::messages::_AVInputOpenResponse_default_instance_;
    new (ptr) ::f1x::aasdk::proto::messages::AVInputOpenResponse();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::messages::AVInputOpenResponse::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_AVInputOpenResponse_AVInputOpenResponseMessage_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_AVInputOpenResponse_AVInputOpenResponseMessage_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_AVInputOpenResponseMessage_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_AVInputOpenResponseMessage_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_AVInputOpenResponseMessage_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_AVInputOpenResponseMessage_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVInputOpenResponse, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVInputOpenResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVInputOpenResponse, session_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVInputOpenResponse, value_),
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::f1x::aasdk::proto::messages::AVInputOpenResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::f1x::aasdk::proto::messages::_AVInputOpenResponse_default_instance_),
};

const char descriptor_table_protodef_AVInputOpenResponseMessage_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n AVInputOpenResponseMessage.proto\022\030f1x."
  "aasdk.proto.messages\"5\n\023AVInputOpenRespo"
  "nse\022\017\n\007session\030\001 \002(\005\022\r\n\005value\030\002 \002(\r"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_AVInputOpenResponseMessage_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_AVInputOpenResponseMessage_2eproto_sccs[1] = {
  &scc_info_AVInputOpenResponse_AVInputOpenResponseMessage_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_AVInputOpenResponseMessage_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_AVInputOpenResponseMessage_2eproto = {
  false, false, descriptor_table_protodef_AVInputOpenResponseMessage_2eproto, "AVInputOpenResponseMessage.proto", 115,
  &descriptor_table_AVInputOpenResponseMessage_2eproto_once, descriptor_table_AVInputOpenResponseMessage_2eproto_sccs, descriptor_table_AVInputOpenResponseMessage_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_AVInputOpenResponseMessage_2eproto::offsets,
  file_level_metadata_AVInputOpenResponseMessage_2eproto, 1, file_level_enum_descriptors_AVInputOpenResponseMessage_2eproto, file_level_service_descriptors_AVInputOpenResponseMessage_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_AVInputOpenResponseMessage_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_AVInputOpenResponseMessage_2eproto)), true);
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

void AVInputOpenResponse::InitAsDefaultInstance() {
}
class AVInputOpenResponse::_Internal {
 public:
  using HasBits = decltype(std::declval<AVInputOpenResponse>()._has_bits_);
  static void set_has_session(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_value(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000003) ^ 0x00000003) != 0;
  }
};

AVInputOpenResponse::AVInputOpenResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:f1x.aasdk.proto.messages.AVInputOpenResponse)
}
AVInputOpenResponse::AVInputOpenResponse(const AVInputOpenResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&session_, &from.session_,
    static_cast<size_t>(reinterpret_cast<char*>(&value_) -
    reinterpret_cast<char*>(&session_)) + sizeof(value_));
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.messages.AVInputOpenResponse)
}

void AVInputOpenResponse::SharedCtor() {
  ::memset(&session_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&value_) -
      reinterpret_cast<char*>(&session_)) + sizeof(value_));
}

AVInputOpenResponse::~AVInputOpenResponse() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.messages.AVInputOpenResponse)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void AVInputOpenResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void AVInputOpenResponse::ArenaDtor(void* object) {
  AVInputOpenResponse* _this = reinterpret_cast< AVInputOpenResponse* >(object);
  (void)_this;
}
void AVInputOpenResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void AVInputOpenResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const AVInputOpenResponse& AVInputOpenResponse::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_AVInputOpenResponse_AVInputOpenResponseMessage_2eproto.base);
  return *internal_default_instance();
}


void AVInputOpenResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.messages.AVInputOpenResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&session_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&value_) -
        reinterpret_cast<char*>(&session_)) + sizeof(value_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AVInputOpenResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required int32 session = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_session(&has_bits);
          session_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required uint32 value = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_value(&has_bits);
          value_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* AVInputOpenResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.messages.AVInputOpenResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 session = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_session(), target);
  }

  // required uint32 value = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_value(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.messages.AVInputOpenResponse)
  return target;
}

size_t AVInputOpenResponse::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:f1x.aasdk.proto.messages.AVInputOpenResponse)
  size_t total_size = 0;

  if (_internal_has_session()) {
    // required int32 session = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_session());
  }

  if (_internal_has_value()) {
    // required uint32 value = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_value());
  }

  return total_size;
}
size_t AVInputOpenResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.messages.AVInputOpenResponse)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required int32 session = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_session());

    // required uint32 value = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_value());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AVInputOpenResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.messages.AVInputOpenResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const AVInputOpenResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<AVInputOpenResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.messages.AVInputOpenResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.messages.AVInputOpenResponse)
    MergeFrom(*source);
  }
}

void AVInputOpenResponse::MergeFrom(const AVInputOpenResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.messages.AVInputOpenResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      session_ = from.session_;
    }
    if (cached_has_bits & 0x00000002u) {
      value_ = from.value_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void AVInputOpenResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.messages.AVInputOpenResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AVInputOpenResponse::CopyFrom(const AVInputOpenResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.messages.AVInputOpenResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AVInputOpenResponse::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void AVInputOpenResponse::InternalSwap(AVInputOpenResponse* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(AVInputOpenResponse, value_)
      + sizeof(AVInputOpenResponse::value_)
      - PROTOBUF_FIELD_OFFSET(AVInputOpenResponse, session_)>(
          reinterpret_cast<char*>(&session_),
          reinterpret_cast<char*>(&other->session_));
}

::PROTOBUF_NAMESPACE_ID::Metadata AVInputOpenResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::f1x::aasdk::proto::messages::AVInputOpenResponse* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::messages::AVInputOpenResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::f1x::aasdk::proto::messages::AVInputOpenResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
