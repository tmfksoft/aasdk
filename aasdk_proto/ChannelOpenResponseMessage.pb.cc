// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ChannelOpenResponseMessage.proto

#include "ChannelOpenResponseMessage.pb.h"

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
class ChannelOpenResponseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ChannelOpenResponse> _instance;
} _ChannelOpenResponse_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
static void InitDefaultsscc_info_ChannelOpenResponse_ChannelOpenResponseMessage_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::messages::_ChannelOpenResponse_default_instance_;
    new (ptr) ::f1x::aasdk::proto::messages::ChannelOpenResponse();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::messages::ChannelOpenResponse::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ChannelOpenResponse_ChannelOpenResponseMessage_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ChannelOpenResponse_ChannelOpenResponseMessage_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_ChannelOpenResponseMessage_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_ChannelOpenResponseMessage_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ChannelOpenResponseMessage_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ChannelOpenResponseMessage_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::messages::ChannelOpenResponse, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::messages::ChannelOpenResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::messages::ChannelOpenResponse, status_),
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::f1x::aasdk::proto::messages::ChannelOpenResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::f1x::aasdk::proto::messages::_ChannelOpenResponse_default_instance_),
};

const char descriptor_table_protodef_ChannelOpenResponseMessage_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n ChannelOpenResponseMessage.proto\022\030f1x."
  "aasdk.proto.messages\032\020StatusEnum.proto\"I"
  "\n\023ChannelOpenResponse\0222\n\006status\030\001 \002(\0162\"."
  "f1x.aasdk.proto.enums.Status.Enum"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_ChannelOpenResponseMessage_2eproto_deps[1] = {
  &::descriptor_table_StatusEnum_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_ChannelOpenResponseMessage_2eproto_sccs[1] = {
  &scc_info_ChannelOpenResponse_ChannelOpenResponseMessage_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ChannelOpenResponseMessage_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ChannelOpenResponseMessage_2eproto = {
  false, false, descriptor_table_protodef_ChannelOpenResponseMessage_2eproto, "ChannelOpenResponseMessage.proto", 153,
  &descriptor_table_ChannelOpenResponseMessage_2eproto_once, descriptor_table_ChannelOpenResponseMessage_2eproto_sccs, descriptor_table_ChannelOpenResponseMessage_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_ChannelOpenResponseMessage_2eproto::offsets,
  file_level_metadata_ChannelOpenResponseMessage_2eproto, 1, file_level_enum_descriptors_ChannelOpenResponseMessage_2eproto, file_level_service_descriptors_ChannelOpenResponseMessage_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_ChannelOpenResponseMessage_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_ChannelOpenResponseMessage_2eproto)), true);
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

void ChannelOpenResponse::InitAsDefaultInstance() {
}
class ChannelOpenResponse::_Internal {
 public:
  using HasBits = decltype(std::declval<ChannelOpenResponse>()._has_bits_);
  static void set_has_status(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000001) ^ 0x00000001) != 0;
  }
};

ChannelOpenResponse::ChannelOpenResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:f1x.aasdk.proto.messages.ChannelOpenResponse)
}
ChannelOpenResponse::ChannelOpenResponse(const ChannelOpenResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  status_ = from.status_;
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.messages.ChannelOpenResponse)
}

void ChannelOpenResponse::SharedCtor() {
  status_ = 0;
}

ChannelOpenResponse::~ChannelOpenResponse() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.messages.ChannelOpenResponse)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ChannelOpenResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void ChannelOpenResponse::ArenaDtor(void* object) {
  ChannelOpenResponse* _this = reinterpret_cast< ChannelOpenResponse* >(object);
  (void)_this;
}
void ChannelOpenResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ChannelOpenResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ChannelOpenResponse& ChannelOpenResponse::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ChannelOpenResponse_ChannelOpenResponseMessage_2eproto.base);
  return *internal_default_instance();
}


void ChannelOpenResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.messages.ChannelOpenResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  status_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ChannelOpenResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required .f1x.aasdk.proto.enums.Status.Enum status = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::f1x::aasdk::proto::enums::Status_Enum_IsValid(val))) {
            _internal_set_status(static_cast<::f1x::aasdk::proto::enums::Status_Enum>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
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

::PROTOBUF_NAMESPACE_ID::uint8* ChannelOpenResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.messages.ChannelOpenResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .f1x.aasdk.proto.enums.Status.Enum status = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_status(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.messages.ChannelOpenResponse)
  return target;
}

size_t ChannelOpenResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.messages.ChannelOpenResponse)
  size_t total_size = 0;

  // required .f1x.aasdk.proto.enums.Status.Enum status = 1;
  if (_internal_has_status()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_status());
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

void ChannelOpenResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.messages.ChannelOpenResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const ChannelOpenResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ChannelOpenResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.messages.ChannelOpenResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.messages.ChannelOpenResponse)
    MergeFrom(*source);
  }
}

void ChannelOpenResponse::MergeFrom(const ChannelOpenResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.messages.ChannelOpenResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_status()) {
    _internal_set_status(from._internal_status());
  }
}

void ChannelOpenResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.messages.ChannelOpenResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ChannelOpenResponse::CopyFrom(const ChannelOpenResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.messages.ChannelOpenResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChannelOpenResponse::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void ChannelOpenResponse::InternalSwap(ChannelOpenResponse* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(status_, other->status_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ChannelOpenResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::f1x::aasdk::proto::messages::ChannelOpenResponse* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::messages::ChannelOpenResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::f1x::aasdk::proto::messages::ChannelOpenResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
