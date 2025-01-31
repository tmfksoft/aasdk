// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AccelData.proto

#include "AccelData.pb.h"

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
class AccelDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Accel> _instance;
} _Accel_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
static void InitDefaultsscc_info_Accel_AccelData_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::data::_Accel_default_instance_;
    new (ptr) ::f1x::aasdk::proto::data::Accel();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::data::Accel::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Accel_AccelData_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Accel_AccelData_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_AccelData_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_AccelData_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_AccelData_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_AccelData_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::Accel, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::Accel, acceleration_x_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::Accel, acceleration_y_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::Accel, acceleration_z_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::f1x::aasdk::proto::data::Accel)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::f1x::aasdk::proto::data::_Accel_default_instance_),
};

const char descriptor_table_protodef_AccelData_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017AccelData.proto\022\024f1x.aasdk.proto.data\""
  "O\n\005Accel\022\026\n\016acceleration_x\030\001 \001(\005\022\026\n\016acce"
  "leration_y\030\002 \001(\005\022\026\n\016acceleration_z\030\003 \001(\005"
  "b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_AccelData_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_AccelData_2eproto_sccs[1] = {
  &scc_info_Accel_AccelData_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_AccelData_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_AccelData_2eproto = {
  false, false, descriptor_table_protodef_AccelData_2eproto, "AccelData.proto", 128,
  &descriptor_table_AccelData_2eproto_once, descriptor_table_AccelData_2eproto_sccs, descriptor_table_AccelData_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_AccelData_2eproto::offsets,
  file_level_metadata_AccelData_2eproto, 1, file_level_enum_descriptors_AccelData_2eproto, file_level_service_descriptors_AccelData_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_AccelData_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_AccelData_2eproto)), true);
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

void Accel::InitAsDefaultInstance() {
}
class Accel::_Internal {
 public:
};

Accel::Accel(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:f1x.aasdk.proto.data.Accel)
}
Accel::Accel(const Accel& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&acceleration_x_, &from.acceleration_x_,
    static_cast<size_t>(reinterpret_cast<char*>(&acceleration_z_) -
    reinterpret_cast<char*>(&acceleration_x_)) + sizeof(acceleration_z_));
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.data.Accel)
}

void Accel::SharedCtor() {
  ::memset(&acceleration_x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&acceleration_z_) -
      reinterpret_cast<char*>(&acceleration_x_)) + sizeof(acceleration_z_));
}

Accel::~Accel() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.data.Accel)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Accel::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void Accel::ArenaDtor(void* object) {
  Accel* _this = reinterpret_cast< Accel* >(object);
  (void)_this;
}
void Accel::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Accel::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Accel& Accel::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Accel_AccelData_2eproto.base);
  return *internal_default_instance();
}


void Accel::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.data.Accel)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&acceleration_x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&acceleration_z_) -
      reinterpret_cast<char*>(&acceleration_x_)) + sizeof(acceleration_z_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Accel::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 acceleration_x = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          acceleration_x_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 acceleration_y = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          acceleration_y_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 acceleration_z = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          acceleration_z_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* Accel::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.data.Accel)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 acceleration_x = 1;
  if (this->acceleration_x() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_acceleration_x(), target);
  }

  // int32 acceleration_y = 2;
  if (this->acceleration_y() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_acceleration_y(), target);
  }

  // int32 acceleration_z = 3;
  if (this->acceleration_z() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_acceleration_z(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.data.Accel)
  return target;
}

size_t Accel::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.data.Accel)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 acceleration_x = 1;
  if (this->acceleration_x() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_acceleration_x());
  }

  // int32 acceleration_y = 2;
  if (this->acceleration_y() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_acceleration_y());
  }

  // int32 acceleration_z = 3;
  if (this->acceleration_z() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_acceleration_z());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Accel::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.data.Accel)
  GOOGLE_DCHECK_NE(&from, this);
  const Accel* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Accel>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.data.Accel)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.data.Accel)
    MergeFrom(*source);
  }
}

void Accel::MergeFrom(const Accel& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.data.Accel)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.acceleration_x() != 0) {
    _internal_set_acceleration_x(from._internal_acceleration_x());
  }
  if (from.acceleration_y() != 0) {
    _internal_set_acceleration_y(from._internal_acceleration_y());
  }
  if (from.acceleration_z() != 0) {
    _internal_set_acceleration_z(from._internal_acceleration_z());
  }
}

void Accel::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.data.Accel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Accel::CopyFrom(const Accel& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.data.Accel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Accel::IsInitialized() const {
  return true;
}

void Accel::InternalSwap(Accel* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Accel, acceleration_z_)
      + sizeof(Accel::acceleration_z_)
      - PROTOBUF_FIELD_OFFSET(Accel, acceleration_x_)>(
          reinterpret_cast<char*>(&acceleration_x_),
          reinterpret_cast<char*>(&other->acceleration_x_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Accel::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::f1x::aasdk::proto::data::Accel* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::data::Accel >(Arena* arena) {
  return Arena::CreateMessageInternal< ::f1x::aasdk::proto::data::Accel >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
