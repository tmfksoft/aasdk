// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ButtonEventData.proto

#include "ButtonEventData.pb.h"

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
class ButtonEventDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ButtonEvent> _instance;
} _ButtonEvent_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
static void InitDefaultsscc_info_ButtonEvent_ButtonEventData_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::data::_ButtonEvent_default_instance_;
    new (ptr) ::f1x::aasdk::proto::data::ButtonEvent();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::data::ButtonEvent::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ButtonEvent_ButtonEventData_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ButtonEvent_ButtonEventData_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_ButtonEventData_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_ButtonEventData_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ButtonEventData_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ButtonEventData_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::ButtonEvent, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::ButtonEvent, scan_code_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::ButtonEvent, is_pressed_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::ButtonEvent, meta_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::ButtonEvent, long_press_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::f1x::aasdk::proto::data::ButtonEvent)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::f1x::aasdk::proto::data::_ButtonEvent_default_instance_),
};

const char descriptor_table_protodef_ButtonEventData_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\025ButtonEventData.proto\022\024f1x.aasdk.proto"
  ".data\"V\n\013ButtonEvent\022\021\n\tscan_code\030\001 \001(\r\022"
  "\022\n\nis_pressed\030\002 \001(\010\022\014\n\004meta\030\003 \001(\r\022\022\n\nlon"
  "g_press\030\004 \001(\010b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_ButtonEventData_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_ButtonEventData_2eproto_sccs[1] = {
  &scc_info_ButtonEvent_ButtonEventData_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ButtonEventData_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ButtonEventData_2eproto = {
  false, false, descriptor_table_protodef_ButtonEventData_2eproto, "ButtonEventData.proto", 141,
  &descriptor_table_ButtonEventData_2eproto_once, descriptor_table_ButtonEventData_2eproto_sccs, descriptor_table_ButtonEventData_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_ButtonEventData_2eproto::offsets,
  file_level_metadata_ButtonEventData_2eproto, 1, file_level_enum_descriptors_ButtonEventData_2eproto, file_level_service_descriptors_ButtonEventData_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_ButtonEventData_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_ButtonEventData_2eproto)), true);
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

void ButtonEvent::InitAsDefaultInstance() {
}
class ButtonEvent::_Internal {
 public:
};

ButtonEvent::ButtonEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:f1x.aasdk.proto.data.ButtonEvent)
}
ButtonEvent::ButtonEvent(const ButtonEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&scan_code_, &from.scan_code_,
    static_cast<size_t>(reinterpret_cast<char*>(&long_press_) -
    reinterpret_cast<char*>(&scan_code_)) + sizeof(long_press_));
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.data.ButtonEvent)
}

void ButtonEvent::SharedCtor() {
  ::memset(&scan_code_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&long_press_) -
      reinterpret_cast<char*>(&scan_code_)) + sizeof(long_press_));
}

ButtonEvent::~ButtonEvent() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.data.ButtonEvent)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ButtonEvent::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void ButtonEvent::ArenaDtor(void* object) {
  ButtonEvent* _this = reinterpret_cast< ButtonEvent* >(object);
  (void)_this;
}
void ButtonEvent::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ButtonEvent::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ButtonEvent& ButtonEvent::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ButtonEvent_ButtonEventData_2eproto.base);
  return *internal_default_instance();
}


void ButtonEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.data.ButtonEvent)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&scan_code_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&long_press_) -
      reinterpret_cast<char*>(&scan_code_)) + sizeof(long_press_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ButtonEvent::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint32 scan_code = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          scan_code_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool is_pressed = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          is_pressed_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 meta = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          meta_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool long_press = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          long_press_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* ButtonEvent::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.data.ButtonEvent)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 scan_code = 1;
  if (this->scan_code() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_scan_code(), target);
  }

  // bool is_pressed = 2;
  if (this->is_pressed() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(2, this->_internal_is_pressed(), target);
  }

  // uint32 meta = 3;
  if (this->meta() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->_internal_meta(), target);
  }

  // bool long_press = 4;
  if (this->long_press() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(4, this->_internal_long_press(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.data.ButtonEvent)
  return target;
}

size_t ButtonEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.data.ButtonEvent)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint32 scan_code = 1;
  if (this->scan_code() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_scan_code());
  }

  // uint32 meta = 3;
  if (this->meta() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_meta());
  }

  // bool is_pressed = 2;
  if (this->is_pressed() != 0) {
    total_size += 1 + 1;
  }

  // bool long_press = 4;
  if (this->long_press() != 0) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ButtonEvent::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.data.ButtonEvent)
  GOOGLE_DCHECK_NE(&from, this);
  const ButtonEvent* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ButtonEvent>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.data.ButtonEvent)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.data.ButtonEvent)
    MergeFrom(*source);
  }
}

void ButtonEvent::MergeFrom(const ButtonEvent& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.data.ButtonEvent)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.scan_code() != 0) {
    _internal_set_scan_code(from._internal_scan_code());
  }
  if (from.meta() != 0) {
    _internal_set_meta(from._internal_meta());
  }
  if (from.is_pressed() != 0) {
    _internal_set_is_pressed(from._internal_is_pressed());
  }
  if (from.long_press() != 0) {
    _internal_set_long_press(from._internal_long_press());
  }
}

void ButtonEvent::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.data.ButtonEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ButtonEvent::CopyFrom(const ButtonEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.data.ButtonEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ButtonEvent::IsInitialized() const {
  return true;
}

void ButtonEvent::InternalSwap(ButtonEvent* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ButtonEvent, long_press_)
      + sizeof(ButtonEvent::long_press_)
      - PROTOBUF_FIELD_OFFSET(ButtonEvent, scan_code_)>(
          reinterpret_cast<char*>(&scan_code_),
          reinterpret_cast<char*>(&other->scan_code_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ButtonEvent::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::f1x::aasdk::proto::data::ButtonEvent* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::data::ButtonEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::f1x::aasdk::proto::data::ButtonEvent >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
