// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: IndicatorStatusEnum.proto

#include "IndicatorStatusEnum.pb.h"

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
namespace enums {
class IndicatorStatusDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<IndicatorStatus> _instance;
} _IndicatorStatus_default_instance_;
}  // namespace enums
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
static void InitDefaultsscc_info_IndicatorStatus_IndicatorStatusEnum_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::enums::_IndicatorStatus_default_instance_;
    new (ptr) ::f1x::aasdk::proto::enums::IndicatorStatus();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::enums::IndicatorStatus::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_IndicatorStatus_IndicatorStatusEnum_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_IndicatorStatus_IndicatorStatusEnum_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_IndicatorStatusEnum_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_IndicatorStatusEnum_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_IndicatorStatusEnum_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_IndicatorStatusEnum_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::enums::IndicatorStatus, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::f1x::aasdk::proto::enums::IndicatorStatus)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::f1x::aasdk::proto::enums::_IndicatorStatus_default_instance_),
};

const char descriptor_table_protodef_IndicatorStatusEnum_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\031IndicatorStatusEnum.proto\022\025f1x.aasdk.p"
  "roto.enums\"M\n\017IndicatorStatus\":\n\004Enum\022\013\n"
  "\007STATE_0\020\000\022\013\n\007STATE_1\020\001\022\013\n\007STATE_2\020\002\022\013\n\007"
  "STATE_3\020\003b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_IndicatorStatusEnum_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_IndicatorStatusEnum_2eproto_sccs[1] = {
  &scc_info_IndicatorStatus_IndicatorStatusEnum_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_IndicatorStatusEnum_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_IndicatorStatusEnum_2eproto = {
  false, false, descriptor_table_protodef_IndicatorStatusEnum_2eproto, "IndicatorStatusEnum.proto", 137,
  &descriptor_table_IndicatorStatusEnum_2eproto_once, descriptor_table_IndicatorStatusEnum_2eproto_sccs, descriptor_table_IndicatorStatusEnum_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_IndicatorStatusEnum_2eproto::offsets,
  file_level_metadata_IndicatorStatusEnum_2eproto, 1, file_level_enum_descriptors_IndicatorStatusEnum_2eproto, file_level_service_descriptors_IndicatorStatusEnum_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_IndicatorStatusEnum_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_IndicatorStatusEnum_2eproto)), true);
namespace f1x {
namespace aasdk {
namespace proto {
namespace enums {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* IndicatorStatus_Enum_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_IndicatorStatusEnum_2eproto);
  return file_level_enum_descriptors_IndicatorStatusEnum_2eproto[0];
}
bool IndicatorStatus_Enum_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr IndicatorStatus_Enum IndicatorStatus::STATE_0;
constexpr IndicatorStatus_Enum IndicatorStatus::STATE_1;
constexpr IndicatorStatus_Enum IndicatorStatus::STATE_2;
constexpr IndicatorStatus_Enum IndicatorStatus::STATE_3;
constexpr IndicatorStatus_Enum IndicatorStatus::Enum_MIN;
constexpr IndicatorStatus_Enum IndicatorStatus::Enum_MAX;
constexpr int IndicatorStatus::Enum_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void IndicatorStatus::InitAsDefaultInstance() {
}
class IndicatorStatus::_Internal {
 public:
};

IndicatorStatus::IndicatorStatus(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:f1x.aasdk.proto.enums.IndicatorStatus)
}
IndicatorStatus::IndicatorStatus(const IndicatorStatus& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.enums.IndicatorStatus)
}

void IndicatorStatus::SharedCtor() {
}

IndicatorStatus::~IndicatorStatus() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.enums.IndicatorStatus)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void IndicatorStatus::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void IndicatorStatus::ArenaDtor(void* object) {
  IndicatorStatus* _this = reinterpret_cast< IndicatorStatus* >(object);
  (void)_this;
}
void IndicatorStatus::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void IndicatorStatus::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const IndicatorStatus& IndicatorStatus::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_IndicatorStatus_IndicatorStatusEnum_2eproto.base);
  return *internal_default_instance();
}


void IndicatorStatus::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.enums.IndicatorStatus)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* IndicatorStatus::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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

::PROTOBUF_NAMESPACE_ID::uint8* IndicatorStatus::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.enums.IndicatorStatus)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.enums.IndicatorStatus)
  return target;
}

size_t IndicatorStatus::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.enums.IndicatorStatus)
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

void IndicatorStatus::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.enums.IndicatorStatus)
  GOOGLE_DCHECK_NE(&from, this);
  const IndicatorStatus* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<IndicatorStatus>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.enums.IndicatorStatus)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.enums.IndicatorStatus)
    MergeFrom(*source);
  }
}

void IndicatorStatus::MergeFrom(const IndicatorStatus& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.enums.IndicatorStatus)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void IndicatorStatus::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.enums.IndicatorStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void IndicatorStatus::CopyFrom(const IndicatorStatus& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.enums.IndicatorStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool IndicatorStatus::IsInitialized() const {
  return true;
}

void IndicatorStatus::InternalSwap(IndicatorStatus* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
}

::PROTOBUF_NAMESPACE_ID::Metadata IndicatorStatus::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace enums
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::f1x::aasdk::proto::enums::IndicatorStatus* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::enums::IndicatorStatus >(Arena* arena) {
  return Arena::CreateMessageInternal< ::f1x::aasdk::proto::enums::IndicatorStatus >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
