// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NavigationImageOptionsData.proto

#include "NavigationImageOptionsData.pb.h"

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
namespace data {
class NavigationImageOptionsDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<NavigationImageOptions> _instance;
} _NavigationImageOptions_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
static void InitDefaultsscc_info_NavigationImageOptions_NavigationImageOptionsData_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::data::_NavigationImageOptions_default_instance_;
    new (ptr) ::f1x::aasdk::proto::data::NavigationImageOptions();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::data::NavigationImageOptions::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_NavigationImageOptions_NavigationImageOptionsData_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_NavigationImageOptions_NavigationImageOptionsData_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_NavigationImageOptionsData_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_NavigationImageOptionsData_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_NavigationImageOptionsData_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_NavigationImageOptionsData_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::NavigationImageOptions, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::NavigationImageOptions, width_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::NavigationImageOptions, height_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::NavigationImageOptions, colour_depth_bits_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::f1x::aasdk::proto::data::NavigationImageOptions)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::f1x::aasdk::proto::data::_NavigationImageOptions_default_instance_),
};

const char descriptor_table_protodef_NavigationImageOptionsData_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n NavigationImageOptionsData.proto\022\024f1x."
  "aasdk.proto.data\"R\n\026NavigationImageOptio"
  "ns\022\r\n\005width\030\001 \001(\005\022\016\n\006height\030\002 \001(\005\022\031\n\021col"
  "our_depth_bits\030\003 \001(\005b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_NavigationImageOptionsData_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_NavigationImageOptionsData_2eproto_sccs[1] = {
  &scc_info_NavigationImageOptions_NavigationImageOptionsData_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_NavigationImageOptionsData_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_NavigationImageOptionsData_2eproto = {
  false, false, descriptor_table_protodef_NavigationImageOptionsData_2eproto, "NavigationImageOptionsData.proto", 148,
  &descriptor_table_NavigationImageOptionsData_2eproto_once, descriptor_table_NavigationImageOptionsData_2eproto_sccs, descriptor_table_NavigationImageOptionsData_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_NavigationImageOptionsData_2eproto::offsets,
  file_level_metadata_NavigationImageOptionsData_2eproto, 1, file_level_enum_descriptors_NavigationImageOptionsData_2eproto, file_level_service_descriptors_NavigationImageOptionsData_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_NavigationImageOptionsData_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_NavigationImageOptionsData_2eproto)), true);
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

void NavigationImageOptions::InitAsDefaultInstance() {
}
class NavigationImageOptions::_Internal {
 public:
};

NavigationImageOptions::NavigationImageOptions(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:f1x.aasdk.proto.data.NavigationImageOptions)
}
NavigationImageOptions::NavigationImageOptions(const NavigationImageOptions& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&width_, &from.width_,
    static_cast<size_t>(reinterpret_cast<char*>(&colour_depth_bits_) -
    reinterpret_cast<char*>(&width_)) + sizeof(colour_depth_bits_));
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.data.NavigationImageOptions)
}

void NavigationImageOptions::SharedCtor() {
  ::memset(&width_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&colour_depth_bits_) -
      reinterpret_cast<char*>(&width_)) + sizeof(colour_depth_bits_));
}

NavigationImageOptions::~NavigationImageOptions() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.data.NavigationImageOptions)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void NavigationImageOptions::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void NavigationImageOptions::ArenaDtor(void* object) {
  NavigationImageOptions* _this = reinterpret_cast< NavigationImageOptions* >(object);
  (void)_this;
}
void NavigationImageOptions::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void NavigationImageOptions::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const NavigationImageOptions& NavigationImageOptions::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_NavigationImageOptions_NavigationImageOptionsData_2eproto.base);
  return *internal_default_instance();
}


void NavigationImageOptions::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.data.NavigationImageOptions)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&width_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&colour_depth_bits_) -
      reinterpret_cast<char*>(&width_)) + sizeof(colour_depth_bits_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* NavigationImageOptions::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 width = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          width_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 height = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          height_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 colour_depth_bits = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          colour_depth_bits_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* NavigationImageOptions::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.data.NavigationImageOptions)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 width = 1;
  if (this->width() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_width(), target);
  }

  // int32 height = 2;
  if (this->height() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_height(), target);
  }

  // int32 colour_depth_bits = 3;
  if (this->colour_depth_bits() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_colour_depth_bits(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.data.NavigationImageOptions)
  return target;
}

size_t NavigationImageOptions::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.data.NavigationImageOptions)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 width = 1;
  if (this->width() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_width());
  }

  // int32 height = 2;
  if (this->height() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_height());
  }

  // int32 colour_depth_bits = 3;
  if (this->colour_depth_bits() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_colour_depth_bits());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void NavigationImageOptions::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.data.NavigationImageOptions)
  GOOGLE_DCHECK_NE(&from, this);
  const NavigationImageOptions* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<NavigationImageOptions>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.data.NavigationImageOptions)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.data.NavigationImageOptions)
    MergeFrom(*source);
  }
}

void NavigationImageOptions::MergeFrom(const NavigationImageOptions& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.data.NavigationImageOptions)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.width() != 0) {
    _internal_set_width(from._internal_width());
  }
  if (from.height() != 0) {
    _internal_set_height(from._internal_height());
  }
  if (from.colour_depth_bits() != 0) {
    _internal_set_colour_depth_bits(from._internal_colour_depth_bits());
  }
}

void NavigationImageOptions::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.data.NavigationImageOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void NavigationImageOptions::CopyFrom(const NavigationImageOptions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.data.NavigationImageOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NavigationImageOptions::IsInitialized() const {
  return true;
}

void NavigationImageOptions::InternalSwap(NavigationImageOptions* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(NavigationImageOptions, colour_depth_bits_)
      + sizeof(NavigationImageOptions::colour_depth_bits_)
      - PROTOBUF_FIELD_OFFSET(NavigationImageOptions, width_)>(
          reinterpret_cast<char*>(&width_),
          reinterpret_cast<char*>(&other->width_));
}

::PROTOBUF_NAMESPACE_ID::Metadata NavigationImageOptions::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::f1x::aasdk::proto::data::NavigationImageOptions* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::data::NavigationImageOptions >(Arena* arena) {
  return Arena::CreateMessageInternal< ::f1x::aasdk::proto::data::NavigationImageOptions >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
