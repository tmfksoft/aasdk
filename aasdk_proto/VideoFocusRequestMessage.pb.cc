// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: VideoFocusRequestMessage.proto

#include "VideoFocusRequestMessage.pb.h"

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
class VideoFocusRequestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<VideoFocusRequest> _instance;
} _VideoFocusRequest_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
static void InitDefaultsscc_info_VideoFocusRequest_VideoFocusRequestMessage_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::messages::_VideoFocusRequest_default_instance_;
    new (ptr) ::f1x::aasdk::proto::messages::VideoFocusRequest();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::messages::VideoFocusRequest::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_VideoFocusRequest_VideoFocusRequestMessage_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_VideoFocusRequest_VideoFocusRequestMessage_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_VideoFocusRequestMessage_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_VideoFocusRequestMessage_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_VideoFocusRequestMessage_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_VideoFocusRequestMessage_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::messages::VideoFocusRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::messages::VideoFocusRequest, disp_index_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::messages::VideoFocusRequest, focus_mode_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::messages::VideoFocusRequest, focus_reason_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::f1x::aasdk::proto::messages::VideoFocusRequest)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::f1x::aasdk::proto::messages::_VideoFocusRequest_default_instance_),
};

const char descriptor_table_protodef_VideoFocusRequestMessage_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\036VideoFocusRequestMessage.proto\022\030f1x.aa"
  "sdk.proto.messages\032\030VideoFocusModeEnum.p"
  "roto\032\032VideoFocusReasonEnum.proto\"\253\001\n\021Vid"
  "eoFocusRequest\022\022\n\ndisp_index\030\001 \001(\005\022>\n\nfo"
  "cus_mode\030\002 \001(\0162*.f1x.aasdk.proto.enums.V"
  "ideoFocusMode.Enum\022B\n\014focus_reason\030\003 \001(\016"
  "2,.f1x.aasdk.proto.enums.VideoFocusReaso"
  "n.Enumb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_VideoFocusRequestMessage_2eproto_deps[2] = {
  &::descriptor_table_VideoFocusModeEnum_2eproto,
  &::descriptor_table_VideoFocusReasonEnum_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_VideoFocusRequestMessage_2eproto_sccs[1] = {
  &scc_info_VideoFocusRequest_VideoFocusRequestMessage_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_VideoFocusRequestMessage_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_VideoFocusRequestMessage_2eproto = {
  false, false, descriptor_table_protodef_VideoFocusRequestMessage_2eproto, "VideoFocusRequestMessage.proto", 294,
  &descriptor_table_VideoFocusRequestMessage_2eproto_once, descriptor_table_VideoFocusRequestMessage_2eproto_sccs, descriptor_table_VideoFocusRequestMessage_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_VideoFocusRequestMessage_2eproto::offsets,
  file_level_metadata_VideoFocusRequestMessage_2eproto, 1, file_level_enum_descriptors_VideoFocusRequestMessage_2eproto, file_level_service_descriptors_VideoFocusRequestMessage_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_VideoFocusRequestMessage_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_VideoFocusRequestMessage_2eproto)), true);
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

void VideoFocusRequest::InitAsDefaultInstance() {
}
class VideoFocusRequest::_Internal {
 public:
};

VideoFocusRequest::VideoFocusRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:f1x.aasdk.proto.messages.VideoFocusRequest)
}
VideoFocusRequest::VideoFocusRequest(const VideoFocusRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&disp_index_, &from.disp_index_,
    static_cast<size_t>(reinterpret_cast<char*>(&focus_reason_) -
    reinterpret_cast<char*>(&disp_index_)) + sizeof(focus_reason_));
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.messages.VideoFocusRequest)
}

void VideoFocusRequest::SharedCtor() {
  ::memset(&disp_index_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&focus_reason_) -
      reinterpret_cast<char*>(&disp_index_)) + sizeof(focus_reason_));
}

VideoFocusRequest::~VideoFocusRequest() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.messages.VideoFocusRequest)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void VideoFocusRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void VideoFocusRequest::ArenaDtor(void* object) {
  VideoFocusRequest* _this = reinterpret_cast< VideoFocusRequest* >(object);
  (void)_this;
}
void VideoFocusRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void VideoFocusRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const VideoFocusRequest& VideoFocusRequest::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_VideoFocusRequest_VideoFocusRequestMessage_2eproto.base);
  return *internal_default_instance();
}


void VideoFocusRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.messages.VideoFocusRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&disp_index_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&focus_reason_) -
      reinterpret_cast<char*>(&disp_index_)) + sizeof(focus_reason_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* VideoFocusRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 disp_index = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          disp_index_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .f1x.aasdk.proto.enums.VideoFocusMode.Enum focus_mode = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_focus_mode(static_cast<::f1x::aasdk::proto::enums::VideoFocusMode_Enum>(val));
        } else goto handle_unusual;
        continue;
      // .f1x.aasdk.proto.enums.VideoFocusReason.Enum focus_reason = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_focus_reason(static_cast<::f1x::aasdk::proto::enums::VideoFocusReason_Enum>(val));
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

::PROTOBUF_NAMESPACE_ID::uint8* VideoFocusRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.messages.VideoFocusRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 disp_index = 1;
  if (this->disp_index() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_disp_index(), target);
  }

  // .f1x.aasdk.proto.enums.VideoFocusMode.Enum focus_mode = 2;
  if (this->focus_mode() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_focus_mode(), target);
  }

  // .f1x.aasdk.proto.enums.VideoFocusReason.Enum focus_reason = 3;
  if (this->focus_reason() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      3, this->_internal_focus_reason(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.messages.VideoFocusRequest)
  return target;
}

size_t VideoFocusRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.messages.VideoFocusRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 disp_index = 1;
  if (this->disp_index() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_disp_index());
  }

  // .f1x.aasdk.proto.enums.VideoFocusMode.Enum focus_mode = 2;
  if (this->focus_mode() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_focus_mode());
  }

  // .f1x.aasdk.proto.enums.VideoFocusReason.Enum focus_reason = 3;
  if (this->focus_reason() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_focus_reason());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void VideoFocusRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.messages.VideoFocusRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const VideoFocusRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<VideoFocusRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.messages.VideoFocusRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.messages.VideoFocusRequest)
    MergeFrom(*source);
  }
}

void VideoFocusRequest::MergeFrom(const VideoFocusRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.messages.VideoFocusRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.disp_index() != 0) {
    _internal_set_disp_index(from._internal_disp_index());
  }
  if (from.focus_mode() != 0) {
    _internal_set_focus_mode(from._internal_focus_mode());
  }
  if (from.focus_reason() != 0) {
    _internal_set_focus_reason(from._internal_focus_reason());
  }
}

void VideoFocusRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.messages.VideoFocusRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VideoFocusRequest::CopyFrom(const VideoFocusRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.messages.VideoFocusRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VideoFocusRequest::IsInitialized() const {
  return true;
}

void VideoFocusRequest::InternalSwap(VideoFocusRequest* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(VideoFocusRequest, focus_reason_)
      + sizeof(VideoFocusRequest::focus_reason_)
      - PROTOBUF_FIELD_OFFSET(VideoFocusRequest, disp_index_)>(
          reinterpret_cast<char*>(&disp_index_),
          reinterpret_cast<char*>(&other->disp_index_));
}

::PROTOBUF_NAMESPACE_ID::Metadata VideoFocusRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::f1x::aasdk::proto::messages::VideoFocusRequest* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::messages::VideoFocusRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::f1x::aasdk::proto::messages::VideoFocusRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
