// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AVChannelMessageIdsEnum.proto

#include "AVChannelMessageIdsEnum.pb.h"

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
namespace ids {
class AVChannelMessageDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<AVChannelMessage> _instance;
} _AVChannelMessage_default_instance_;
}  // namespace ids
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
static void InitDefaultsscc_info_AVChannelMessage_AVChannelMessageIdsEnum_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::ids::_AVChannelMessage_default_instance_;
    new (ptr) ::f1x::aasdk::proto::ids::AVChannelMessage();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::ids::AVChannelMessage::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_AVChannelMessage_AVChannelMessageIdsEnum_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_AVChannelMessage_AVChannelMessageIdsEnum_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_AVChannelMessageIdsEnum_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_AVChannelMessageIdsEnum_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_AVChannelMessageIdsEnum_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_AVChannelMessageIdsEnum_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::ids::AVChannelMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::f1x::aasdk::proto::ids::AVChannelMessage)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::f1x::aasdk::proto::ids::_AVChannelMessage_default_instance_),
};

const char descriptor_table_protodef_AVChannelMessageIdsEnum_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\035AVChannelMessageIdsEnum.proto\022\023f1x.aas"
  "dk.proto.ids\"\311\002\n\020AVChannelMessage\"\264\002\n\004En"
  "um\022&\n\"AV_MEDIA_WITH_TIMESTAMP_INDICATION"
  "\020\000\022\027\n\023AV_MEDIA_INDICATION\020\001\022\023\n\rSETUP_REQ"
  "UEST\020\200\200\002\022\026\n\020START_INDICATION\020\201\200\002\022\025\n\017STOP"
  "_INDICATION\020\202\200\002\022\024\n\016SETUP_RESPONSE\020\203\200\002\022\035\n"
  "\027AV_MEDIA_ACK_INDICATION\020\204\200\002\022\033\n\025AV_INPUT"
  "_OPEN_REQUEST\020\205\200\002\022\034\n\026AV_INPUT_OPEN_RESPO"
  "NSE\020\206\200\002\022\031\n\023VIDEO_FOCUS_REQUEST\020\207\200\002\022\034\n\026VI"
  "DEO_FOCUS_INDICATION\020\210\200\002b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_AVChannelMessageIdsEnum_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_AVChannelMessageIdsEnum_2eproto_sccs[1] = {
  &scc_info_AVChannelMessage_AVChannelMessageIdsEnum_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_AVChannelMessageIdsEnum_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_AVChannelMessageIdsEnum_2eproto = {
  false, false, descriptor_table_protodef_AVChannelMessageIdsEnum_2eproto, "AVChannelMessageIdsEnum.proto", 392,
  &descriptor_table_AVChannelMessageIdsEnum_2eproto_once, descriptor_table_AVChannelMessageIdsEnum_2eproto_sccs, descriptor_table_AVChannelMessageIdsEnum_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_AVChannelMessageIdsEnum_2eproto::offsets,
  file_level_metadata_AVChannelMessageIdsEnum_2eproto, 1, file_level_enum_descriptors_AVChannelMessageIdsEnum_2eproto, file_level_service_descriptors_AVChannelMessageIdsEnum_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_AVChannelMessageIdsEnum_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_AVChannelMessageIdsEnum_2eproto)), true);
namespace f1x {
namespace aasdk {
namespace proto {
namespace ids {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* AVChannelMessage_Enum_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_AVChannelMessageIdsEnum_2eproto);
  return file_level_enum_descriptors_AVChannelMessageIdsEnum_2eproto[0];
}
bool AVChannelMessage_Enum_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 32768:
    case 32769:
    case 32770:
    case 32771:
    case 32772:
    case 32773:
    case 32774:
    case 32775:
    case 32776:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr AVChannelMessage_Enum AVChannelMessage::AV_MEDIA_WITH_TIMESTAMP_INDICATION;
constexpr AVChannelMessage_Enum AVChannelMessage::AV_MEDIA_INDICATION;
constexpr AVChannelMessage_Enum AVChannelMessage::SETUP_REQUEST;
constexpr AVChannelMessage_Enum AVChannelMessage::START_INDICATION;
constexpr AVChannelMessage_Enum AVChannelMessage::STOP_INDICATION;
constexpr AVChannelMessage_Enum AVChannelMessage::SETUP_RESPONSE;
constexpr AVChannelMessage_Enum AVChannelMessage::AV_MEDIA_ACK_INDICATION;
constexpr AVChannelMessage_Enum AVChannelMessage::AV_INPUT_OPEN_REQUEST;
constexpr AVChannelMessage_Enum AVChannelMessage::AV_INPUT_OPEN_RESPONSE;
constexpr AVChannelMessage_Enum AVChannelMessage::VIDEO_FOCUS_REQUEST;
constexpr AVChannelMessage_Enum AVChannelMessage::VIDEO_FOCUS_INDICATION;
constexpr AVChannelMessage_Enum AVChannelMessage::Enum_MIN;
constexpr AVChannelMessage_Enum AVChannelMessage::Enum_MAX;
constexpr int AVChannelMessage::Enum_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void AVChannelMessage::InitAsDefaultInstance() {
}
class AVChannelMessage::_Internal {
 public:
};

AVChannelMessage::AVChannelMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:f1x.aasdk.proto.ids.AVChannelMessage)
}
AVChannelMessage::AVChannelMessage(const AVChannelMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.ids.AVChannelMessage)
}

void AVChannelMessage::SharedCtor() {
}

AVChannelMessage::~AVChannelMessage() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.ids.AVChannelMessage)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void AVChannelMessage::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void AVChannelMessage::ArenaDtor(void* object) {
  AVChannelMessage* _this = reinterpret_cast< AVChannelMessage* >(object);
  (void)_this;
}
void AVChannelMessage::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void AVChannelMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const AVChannelMessage& AVChannelMessage::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_AVChannelMessage_AVChannelMessageIdsEnum_2eproto.base);
  return *internal_default_instance();
}


void AVChannelMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.ids.AVChannelMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AVChannelMessage::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* AVChannelMessage::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.ids.AVChannelMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.ids.AVChannelMessage)
  return target;
}

size_t AVChannelMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.ids.AVChannelMessage)
  size_t total_size = 0;

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

void AVChannelMessage::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.ids.AVChannelMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const AVChannelMessage* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<AVChannelMessage>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.ids.AVChannelMessage)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.ids.AVChannelMessage)
    MergeFrom(*source);
  }
}

void AVChannelMessage::MergeFrom(const AVChannelMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.ids.AVChannelMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void AVChannelMessage::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.ids.AVChannelMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AVChannelMessage::CopyFrom(const AVChannelMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.ids.AVChannelMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AVChannelMessage::IsInitialized() const {
  return true;
}

void AVChannelMessage::InternalSwap(AVChannelMessage* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
}

::PROTOBUF_NAMESPACE_ID::Metadata AVChannelMessage::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace ids
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::f1x::aasdk::proto::ids::AVChannelMessage* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::ids::AVChannelMessage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::f1x::aasdk::proto::ids::AVChannelMessage >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
