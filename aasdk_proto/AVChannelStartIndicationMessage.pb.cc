// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AVChannelStartIndicationMessage.proto

#include "AVChannelStartIndicationMessage.pb.h"

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
class AVChannelStartIndicationDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<AVChannelStartIndication> _instance;
} _AVChannelStartIndication_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
static void InitDefaultsscc_info_AVChannelStartIndication_AVChannelStartIndicationMessage_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::messages::_AVChannelStartIndication_default_instance_;
    new (ptr) ::f1x::aasdk::proto::messages::AVChannelStartIndication();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::messages::AVChannelStartIndication::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_AVChannelStartIndication_AVChannelStartIndicationMessage_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_AVChannelStartIndication_AVChannelStartIndicationMessage_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_AVChannelStartIndicationMessage_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_AVChannelStartIndicationMessage_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_AVChannelStartIndicationMessage_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_AVChannelStartIndicationMessage_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVChannelStartIndication, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVChannelStartIndication, session_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVChannelStartIndication, config_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::f1x::aasdk::proto::messages::AVChannelStartIndication)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::f1x::aasdk::proto::messages::_AVChannelStartIndication_default_instance_),
};

const char descriptor_table_protodef_AVChannelStartIndicationMessage_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n%AVChannelStartIndicationMessage.proto\022"
  "\030f1x.aasdk.proto.messages\";\n\030AVChannelSt"
  "artIndication\022\017\n\007session\030\001 \001(\005\022\016\n\006config"
  "\030\002 \001(\rb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_AVChannelStartIndicationMessage_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_AVChannelStartIndicationMessage_2eproto_sccs[1] = {
  &scc_info_AVChannelStartIndication_AVChannelStartIndicationMessage_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_AVChannelStartIndicationMessage_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_AVChannelStartIndicationMessage_2eproto = {
  false, false, descriptor_table_protodef_AVChannelStartIndicationMessage_2eproto, "AVChannelStartIndicationMessage.proto", 134,
  &descriptor_table_AVChannelStartIndicationMessage_2eproto_once, descriptor_table_AVChannelStartIndicationMessage_2eproto_sccs, descriptor_table_AVChannelStartIndicationMessage_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_AVChannelStartIndicationMessage_2eproto::offsets,
  file_level_metadata_AVChannelStartIndicationMessage_2eproto, 1, file_level_enum_descriptors_AVChannelStartIndicationMessage_2eproto, file_level_service_descriptors_AVChannelStartIndicationMessage_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_AVChannelStartIndicationMessage_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_AVChannelStartIndicationMessage_2eproto)), true);
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

void AVChannelStartIndication::InitAsDefaultInstance() {
}
class AVChannelStartIndication::_Internal {
 public:
};

AVChannelStartIndication::AVChannelStartIndication(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:f1x.aasdk.proto.messages.AVChannelStartIndication)
}
AVChannelStartIndication::AVChannelStartIndication(const AVChannelStartIndication& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&session_, &from.session_,
    static_cast<size_t>(reinterpret_cast<char*>(&config_) -
    reinterpret_cast<char*>(&session_)) + sizeof(config_));
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.messages.AVChannelStartIndication)
}

void AVChannelStartIndication::SharedCtor() {
  ::memset(&session_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&config_) -
      reinterpret_cast<char*>(&session_)) + sizeof(config_));
}

AVChannelStartIndication::~AVChannelStartIndication() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.messages.AVChannelStartIndication)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void AVChannelStartIndication::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void AVChannelStartIndication::ArenaDtor(void* object) {
  AVChannelStartIndication* _this = reinterpret_cast< AVChannelStartIndication* >(object);
  (void)_this;
}
void AVChannelStartIndication::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void AVChannelStartIndication::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const AVChannelStartIndication& AVChannelStartIndication::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_AVChannelStartIndication_AVChannelStartIndicationMessage_2eproto.base);
  return *internal_default_instance();
}


void AVChannelStartIndication::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.messages.AVChannelStartIndication)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&session_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&config_) -
      reinterpret_cast<char*>(&session_)) + sizeof(config_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AVChannelStartIndication::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 session = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          session_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 config = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          config_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* AVChannelStartIndication::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.messages.AVChannelStartIndication)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 session = 1;
  if (this->session() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_session(), target);
  }

  // uint32 config = 2;
  if (this->config() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_config(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.messages.AVChannelStartIndication)
  return target;
}

size_t AVChannelStartIndication::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.messages.AVChannelStartIndication)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 session = 1;
  if (this->session() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_session());
  }

  // uint32 config = 2;
  if (this->config() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_config());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AVChannelStartIndication::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.messages.AVChannelStartIndication)
  GOOGLE_DCHECK_NE(&from, this);
  const AVChannelStartIndication* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<AVChannelStartIndication>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.messages.AVChannelStartIndication)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.messages.AVChannelStartIndication)
    MergeFrom(*source);
  }
}

void AVChannelStartIndication::MergeFrom(const AVChannelStartIndication& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.messages.AVChannelStartIndication)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.session() != 0) {
    _internal_set_session(from._internal_session());
  }
  if (from.config() != 0) {
    _internal_set_config(from._internal_config());
  }
}

void AVChannelStartIndication::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.messages.AVChannelStartIndication)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AVChannelStartIndication::CopyFrom(const AVChannelStartIndication& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.messages.AVChannelStartIndication)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AVChannelStartIndication::IsInitialized() const {
  return true;
}

void AVChannelStartIndication::InternalSwap(AVChannelStartIndication* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(AVChannelStartIndication, config_)
      + sizeof(AVChannelStartIndication::config_)
      - PROTOBUF_FIELD_OFFSET(AVChannelStartIndication, session_)>(
          reinterpret_cast<char*>(&session_),
          reinterpret_cast<char*>(&other->session_));
}

::PROTOBUF_NAMESPACE_ID::Metadata AVChannelStartIndication::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::f1x::aasdk::proto::messages::AVChannelStartIndication* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::messages::AVChannelStartIndication >(Arena* arena) {
  return Arena::CreateMessageInternal< ::f1x::aasdk::proto::messages::AVChannelStartIndication >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
