// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NavigationChannelData.proto

#include "NavigationChannelData.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_NavigationImageOptionsData_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_NavigationImageOptions_NavigationImageOptionsData_2eproto;
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {
class NavigationChannelDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<NavigationChannel> _instance;
} _NavigationChannel_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
static void InitDefaultsscc_info_NavigationChannel_NavigationChannelData_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::data::_NavigationChannel_default_instance_;
    new (ptr) ::f1x::aasdk::proto::data::NavigationChannel();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::data::NavigationChannel::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_NavigationChannel_NavigationChannelData_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_NavigationChannel_NavigationChannelData_2eproto}, {
      &scc_info_NavigationImageOptions_NavigationImageOptionsData_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_NavigationChannelData_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_NavigationChannelData_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_NavigationChannelData_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_NavigationChannelData_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::NavigationChannel, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::NavigationChannel, minimum_interval_ms_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::NavigationChannel, type_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::NavigationChannel, image_options_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::f1x::aasdk::proto::data::NavigationChannel)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::f1x::aasdk::proto::data::_NavigationChannel_default_instance_),
};

const char descriptor_table_protodef_NavigationChannelData_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033NavigationChannelData.proto\022\024f1x.aasdk"
  ".proto.data\032 NavigationImageOptionsData."
  "proto\"\203\001\n\021NavigationChannel\022\033\n\023minimum_i"
  "nterval_ms\030\001 \001(\r\022\014\n\004type\030\002 \001(\r\022C\n\rimage_"
  "options\030\003 \001(\0132,.f1x.aasdk.proto.data.Nav"
  "igationImageOptionsb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_NavigationChannelData_2eproto_deps[1] = {
  &::descriptor_table_NavigationImageOptionsData_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_NavigationChannelData_2eproto_sccs[1] = {
  &scc_info_NavigationChannel_NavigationChannelData_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_NavigationChannelData_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_NavigationChannelData_2eproto = {
  false, false, descriptor_table_protodef_NavigationChannelData_2eproto, "NavigationChannelData.proto", 227,
  &descriptor_table_NavigationChannelData_2eproto_once, descriptor_table_NavigationChannelData_2eproto_sccs, descriptor_table_NavigationChannelData_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_NavigationChannelData_2eproto::offsets,
  file_level_metadata_NavigationChannelData_2eproto, 1, file_level_enum_descriptors_NavigationChannelData_2eproto, file_level_service_descriptors_NavigationChannelData_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_NavigationChannelData_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_NavigationChannelData_2eproto)), true);
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

void NavigationChannel::InitAsDefaultInstance() {
  ::f1x::aasdk::proto::data::_NavigationChannel_default_instance_._instance.get_mutable()->image_options_ = const_cast< ::f1x::aasdk::proto::data::NavigationImageOptions*>(
      ::f1x::aasdk::proto::data::NavigationImageOptions::internal_default_instance());
}
class NavigationChannel::_Internal {
 public:
  static const ::f1x::aasdk::proto::data::NavigationImageOptions& image_options(const NavigationChannel* msg);
};

const ::f1x::aasdk::proto::data::NavigationImageOptions&
NavigationChannel::_Internal::image_options(const NavigationChannel* msg) {
  return *msg->image_options_;
}
void NavigationChannel::clear_image_options() {
  if (GetArena() == nullptr && image_options_ != nullptr) {
    delete image_options_;
  }
  image_options_ = nullptr;
}
NavigationChannel::NavigationChannel(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:f1x.aasdk.proto.data.NavigationChannel)
}
NavigationChannel::NavigationChannel(const NavigationChannel& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_image_options()) {
    image_options_ = new ::f1x::aasdk::proto::data::NavigationImageOptions(*from.image_options_);
  } else {
    image_options_ = nullptr;
  }
  ::memcpy(&minimum_interval_ms_, &from.minimum_interval_ms_,
    static_cast<size_t>(reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&minimum_interval_ms_)) + sizeof(type_));
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.data.NavigationChannel)
}

void NavigationChannel::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_NavigationChannel_NavigationChannelData_2eproto.base);
  ::memset(&image_options_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&image_options_)) + sizeof(type_));
}

NavigationChannel::~NavigationChannel() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.data.NavigationChannel)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void NavigationChannel::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete image_options_;
}

void NavigationChannel::ArenaDtor(void* object) {
  NavigationChannel* _this = reinterpret_cast< NavigationChannel* >(object);
  (void)_this;
}
void NavigationChannel::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void NavigationChannel::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const NavigationChannel& NavigationChannel::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_NavigationChannel_NavigationChannelData_2eproto.base);
  return *internal_default_instance();
}


void NavigationChannel::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.data.NavigationChannel)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArena() == nullptr && image_options_ != nullptr) {
    delete image_options_;
  }
  image_options_ = nullptr;
  ::memset(&minimum_interval_ms_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&minimum_interval_ms_)) + sizeof(type_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* NavigationChannel::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint32 minimum_interval_ms = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          minimum_interval_ms_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 type = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          type_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .f1x.aasdk.proto.data.NavigationImageOptions image_options = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_image_options(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* NavigationChannel::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.data.NavigationChannel)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 minimum_interval_ms = 1;
  if (this->minimum_interval_ms() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_minimum_interval_ms(), target);
  }

  // uint32 type = 2;
  if (this->type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_type(), target);
  }

  // .f1x.aasdk.proto.data.NavigationImageOptions image_options = 3;
  if (this->has_image_options()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::image_options(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.data.NavigationChannel)
  return target;
}

size_t NavigationChannel::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.data.NavigationChannel)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .f1x.aasdk.proto.data.NavigationImageOptions image_options = 3;
  if (this->has_image_options()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *image_options_);
  }

  // uint32 minimum_interval_ms = 1;
  if (this->minimum_interval_ms() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_minimum_interval_ms());
  }

  // uint32 type = 2;
  if (this->type() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_type());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void NavigationChannel::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.data.NavigationChannel)
  GOOGLE_DCHECK_NE(&from, this);
  const NavigationChannel* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<NavigationChannel>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.data.NavigationChannel)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.data.NavigationChannel)
    MergeFrom(*source);
  }
}

void NavigationChannel::MergeFrom(const NavigationChannel& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.data.NavigationChannel)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_image_options()) {
    _internal_mutable_image_options()->::f1x::aasdk::proto::data::NavigationImageOptions::MergeFrom(from._internal_image_options());
  }
  if (from.minimum_interval_ms() != 0) {
    _internal_set_minimum_interval_ms(from._internal_minimum_interval_ms());
  }
  if (from.type() != 0) {
    _internal_set_type(from._internal_type());
  }
}

void NavigationChannel::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.data.NavigationChannel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void NavigationChannel::CopyFrom(const NavigationChannel& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.data.NavigationChannel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NavigationChannel::IsInitialized() const {
  return true;
}

void NavigationChannel::InternalSwap(NavigationChannel* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(NavigationChannel, type_)
      + sizeof(NavigationChannel::type_)
      - PROTOBUF_FIELD_OFFSET(NavigationChannel, image_options_)>(
          reinterpret_cast<char*>(&image_options_),
          reinterpret_cast<char*>(&other->image_options_));
}

::PROTOBUF_NAMESPACE_ID::Metadata NavigationChannel::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::f1x::aasdk::proto::data::NavigationChannel* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::data::NavigationChannel >(Arena* arena) {
  return Arena::CreateMessageInternal< ::f1x::aasdk::proto::data::NavigationChannel >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
