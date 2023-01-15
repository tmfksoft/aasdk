// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SensorChannelData.proto

#include "SensorChannelData.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_SensorData_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Sensor_SensorData_2eproto;
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {
class SensorChannelDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SensorChannel> _instance;
} _SensorChannel_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
static void InitDefaultsscc_info_SensorChannel_SensorChannelData_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::data::_SensorChannel_default_instance_;
    new (ptr) ::f1x::aasdk::proto::data::SensorChannel();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::data::SensorChannel::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_SensorChannel_SensorChannelData_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_SensorChannel_SensorChannelData_2eproto}, {
      &scc_info_Sensor_SensorData_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_SensorChannelData_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_SensorChannelData_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_SensorChannelData_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_SensorChannelData_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::SensorChannel, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::SensorChannel, sensors_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::f1x::aasdk::proto::data::SensorChannel)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::f1x::aasdk::proto::data::_SensorChannel_default_instance_),
};

const char descriptor_table_protodef_SensorChannelData_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\027SensorChannelData.proto\022\024f1x.aasdk.pro"
  "to.data\032\020SensorData.proto\">\n\rSensorChann"
  "el\022-\n\007sensors\030\001 \003(\0132\034.f1x.aasdk.proto.da"
  "ta.Sensorb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_SensorChannelData_2eproto_deps[1] = {
  &::descriptor_table_SensorData_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_SensorChannelData_2eproto_sccs[1] = {
  &scc_info_SensorChannel_SensorChannelData_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_SensorChannelData_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SensorChannelData_2eproto = {
  false, false, descriptor_table_protodef_SensorChannelData_2eproto, "SensorChannelData.proto", 137,
  &descriptor_table_SensorChannelData_2eproto_once, descriptor_table_SensorChannelData_2eproto_sccs, descriptor_table_SensorChannelData_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_SensorChannelData_2eproto::offsets,
  file_level_metadata_SensorChannelData_2eproto, 1, file_level_enum_descriptors_SensorChannelData_2eproto, file_level_service_descriptors_SensorChannelData_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_SensorChannelData_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_SensorChannelData_2eproto)), true);
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

void SensorChannel::InitAsDefaultInstance() {
}
class SensorChannel::_Internal {
 public:
};

void SensorChannel::clear_sensors() {
  sensors_.Clear();
}
SensorChannel::SensorChannel(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  sensors_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:f1x.aasdk.proto.data.SensorChannel)
}
SensorChannel::SensorChannel(const SensorChannel& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      sensors_(from.sensors_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.data.SensorChannel)
}

void SensorChannel::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_SensorChannel_SensorChannelData_2eproto.base);
}

SensorChannel::~SensorChannel() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.data.SensorChannel)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void SensorChannel::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void SensorChannel::ArenaDtor(void* object) {
  SensorChannel* _this = reinterpret_cast< SensorChannel* >(object);
  (void)_this;
}
void SensorChannel::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SensorChannel::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SensorChannel& SensorChannel::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SensorChannel_SensorChannelData_2eproto.base);
  return *internal_default_instance();
}


void SensorChannel::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.data.SensorChannel)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  sensors_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SensorChannel::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .f1x.aasdk.proto.data.Sensor sensors = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_sensors(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* SensorChannel::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.data.SensorChannel)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .f1x.aasdk.proto.data.Sensor sensors = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_sensors_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_sensors(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.data.SensorChannel)
  return target;
}

size_t SensorChannel::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.data.SensorChannel)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .f1x.aasdk.proto.data.Sensor sensors = 1;
  total_size += 1UL * this->_internal_sensors_size();
  for (const auto& msg : this->sensors_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SensorChannel::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.data.SensorChannel)
  GOOGLE_DCHECK_NE(&from, this);
  const SensorChannel* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SensorChannel>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.data.SensorChannel)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.data.SensorChannel)
    MergeFrom(*source);
  }
}

void SensorChannel::MergeFrom(const SensorChannel& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.data.SensorChannel)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  sensors_.MergeFrom(from.sensors_);
}

void SensorChannel::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.data.SensorChannel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SensorChannel::CopyFrom(const SensorChannel& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.data.SensorChannel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SensorChannel::IsInitialized() const {
  return true;
}

void SensorChannel::InternalSwap(SensorChannel* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  sensors_.InternalSwap(&other->sensors_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SensorChannel::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::f1x::aasdk::proto::data::SensorChannel* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::data::SensorChannel >(Arena* arena) {
  return Arena::CreateMessageInternal< ::f1x::aasdk::proto::data::SensorChannel >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
