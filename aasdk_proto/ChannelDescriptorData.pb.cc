// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ChannelDescriptorData.proto

#include "ChannelDescriptorData.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_AVChannelData_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_AVChannel_AVChannelData_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_AVInputChannelData_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_AVInputChannel_AVInputChannelData_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_BluetoothChannelData_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_BluetoothChannel_BluetoothChannelData_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_InputChannelData_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_InputChannel_InputChannelData_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_NavigationChannelData_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_NavigationChannel_NavigationChannelData_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_SensorChannelData_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_SensorChannel_SensorChannelData_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_VendorExtensionChannelData_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_VendorExtensionChannel_VendorExtensionChannelData_2eproto;
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {
class ChannelDescriptorDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ChannelDescriptor> _instance;
} _ChannelDescriptor_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
static void InitDefaultsscc_info_ChannelDescriptor_ChannelDescriptorData_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::data::_ChannelDescriptor_default_instance_;
    new (ptr) ::f1x::aasdk::proto::data::ChannelDescriptor();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::data::ChannelDescriptor::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<7> scc_info_ChannelDescriptor_ChannelDescriptorData_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 7, 0, InitDefaultsscc_info_ChannelDescriptor_ChannelDescriptorData_2eproto}, {
      &scc_info_SensorChannel_SensorChannelData_2eproto.base,
      &scc_info_AVChannel_AVChannelData_2eproto.base,
      &scc_info_InputChannel_InputChannelData_2eproto.base,
      &scc_info_AVInputChannel_AVInputChannelData_2eproto.base,
      &scc_info_BluetoothChannel_BluetoothChannelData_2eproto.base,
      &scc_info_NavigationChannel_NavigationChannelData_2eproto.base,
      &scc_info_VendorExtensionChannel_VendorExtensionChannelData_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_ChannelDescriptorData_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_ChannelDescriptorData_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ChannelDescriptorData_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ChannelDescriptorData_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::ChannelDescriptor, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::ChannelDescriptor, channel_id_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::ChannelDescriptor, sensor_channel_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::ChannelDescriptor, av_channel_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::ChannelDescriptor, input_channel_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::ChannelDescriptor, av_input_channel_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::ChannelDescriptor, bluetooth_channel_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::ChannelDescriptor, navigation_channel_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::ChannelDescriptor, vendor_extension_channel_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::f1x::aasdk::proto::data::ChannelDescriptor)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::f1x::aasdk::proto::data::_ChannelDescriptor_default_instance_),
};

const char descriptor_table_protodef_ChannelDescriptorData_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033ChannelDescriptorData.proto\022\024f1x.aasdk"
  ".proto.data\032\027SensorChannelData.proto\032\023AV"
  "ChannelData.proto\032\026InputChannelData.prot"
  "o\032\030AVInputChannelData.proto\032\032BluetoothCh"
  "annelData.proto\032\033NavigationChannelData.p"
  "roto\032 VendorExtensionChannelData.proto\"\354"
  "\003\n\021ChannelDescriptor\022\022\n\nchannel_id\030\001 \001(\r"
  "\022;\n\016sensor_channel\030\002 \001(\0132#.f1x.aasdk.pro"
  "to.data.SensorChannel\0223\n\nav_channel\030\003 \001("
  "\0132\037.f1x.aasdk.proto.data.AVChannel\0229\n\rin"
  "put_channel\030\004 \001(\0132\".f1x.aasdk.proto.data"
  ".InputChannel\022>\n\020av_input_channel\030\005 \001(\0132"
  "$.f1x.aasdk.proto.data.AVInputChannel\022A\n"
  "\021bluetooth_channel\030\006 \001(\0132&.f1x.aasdk.pro"
  "to.data.BluetoothChannel\022C\n\022navigation_c"
  "hannel\030\010 \001(\0132\'.f1x.aasdk.proto.data.Navi"
  "gationChannel\022N\n\030vendor_extension_channe"
  "l\030\014 \001(\0132,.f1x.aasdk.proto.data.VendorExt"
  "ensionChannelb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_ChannelDescriptorData_2eproto_deps[7] = {
  &::descriptor_table_AVChannelData_2eproto,
  &::descriptor_table_AVInputChannelData_2eproto,
  &::descriptor_table_BluetoothChannelData_2eproto,
  &::descriptor_table_InputChannelData_2eproto,
  &::descriptor_table_NavigationChannelData_2eproto,
  &::descriptor_table_SensorChannelData_2eproto,
  &::descriptor_table_VendorExtensionChannelData_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_ChannelDescriptorData_2eproto_sccs[1] = {
  &scc_info_ChannelDescriptor_ChannelDescriptorData_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ChannelDescriptorData_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ChannelDescriptorData_2eproto = {
  false, false, descriptor_table_protodef_ChannelDescriptorData_2eproto, "ChannelDescriptorData.proto", 741,
  &descriptor_table_ChannelDescriptorData_2eproto_once, descriptor_table_ChannelDescriptorData_2eproto_sccs, descriptor_table_ChannelDescriptorData_2eproto_deps, 1, 7,
  schemas, file_default_instances, TableStruct_ChannelDescriptorData_2eproto::offsets,
  file_level_metadata_ChannelDescriptorData_2eproto, 1, file_level_enum_descriptors_ChannelDescriptorData_2eproto, file_level_service_descriptors_ChannelDescriptorData_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_ChannelDescriptorData_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_ChannelDescriptorData_2eproto)), true);
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

void ChannelDescriptor::InitAsDefaultInstance() {
  ::f1x::aasdk::proto::data::_ChannelDescriptor_default_instance_._instance.get_mutable()->sensor_channel_ = const_cast< ::f1x::aasdk::proto::data::SensorChannel*>(
      ::f1x::aasdk::proto::data::SensorChannel::internal_default_instance());
  ::f1x::aasdk::proto::data::_ChannelDescriptor_default_instance_._instance.get_mutable()->av_channel_ = const_cast< ::f1x::aasdk::proto::data::AVChannel*>(
      ::f1x::aasdk::proto::data::AVChannel::internal_default_instance());
  ::f1x::aasdk::proto::data::_ChannelDescriptor_default_instance_._instance.get_mutable()->input_channel_ = const_cast< ::f1x::aasdk::proto::data::InputChannel*>(
      ::f1x::aasdk::proto::data::InputChannel::internal_default_instance());
  ::f1x::aasdk::proto::data::_ChannelDescriptor_default_instance_._instance.get_mutable()->av_input_channel_ = const_cast< ::f1x::aasdk::proto::data::AVInputChannel*>(
      ::f1x::aasdk::proto::data::AVInputChannel::internal_default_instance());
  ::f1x::aasdk::proto::data::_ChannelDescriptor_default_instance_._instance.get_mutable()->bluetooth_channel_ = const_cast< ::f1x::aasdk::proto::data::BluetoothChannel*>(
      ::f1x::aasdk::proto::data::BluetoothChannel::internal_default_instance());
  ::f1x::aasdk::proto::data::_ChannelDescriptor_default_instance_._instance.get_mutable()->navigation_channel_ = const_cast< ::f1x::aasdk::proto::data::NavigationChannel*>(
      ::f1x::aasdk::proto::data::NavigationChannel::internal_default_instance());
  ::f1x::aasdk::proto::data::_ChannelDescriptor_default_instance_._instance.get_mutable()->vendor_extension_channel_ = const_cast< ::f1x::aasdk::proto::data::VendorExtensionChannel*>(
      ::f1x::aasdk::proto::data::VendorExtensionChannel::internal_default_instance());
}
class ChannelDescriptor::_Internal {
 public:
  static const ::f1x::aasdk::proto::data::SensorChannel& sensor_channel(const ChannelDescriptor* msg);
  static const ::f1x::aasdk::proto::data::AVChannel& av_channel(const ChannelDescriptor* msg);
  static const ::f1x::aasdk::proto::data::InputChannel& input_channel(const ChannelDescriptor* msg);
  static const ::f1x::aasdk::proto::data::AVInputChannel& av_input_channel(const ChannelDescriptor* msg);
  static const ::f1x::aasdk::proto::data::BluetoothChannel& bluetooth_channel(const ChannelDescriptor* msg);
  static const ::f1x::aasdk::proto::data::NavigationChannel& navigation_channel(const ChannelDescriptor* msg);
  static const ::f1x::aasdk::proto::data::VendorExtensionChannel& vendor_extension_channel(const ChannelDescriptor* msg);
};

const ::f1x::aasdk::proto::data::SensorChannel&
ChannelDescriptor::_Internal::sensor_channel(const ChannelDescriptor* msg) {
  return *msg->sensor_channel_;
}
const ::f1x::aasdk::proto::data::AVChannel&
ChannelDescriptor::_Internal::av_channel(const ChannelDescriptor* msg) {
  return *msg->av_channel_;
}
const ::f1x::aasdk::proto::data::InputChannel&
ChannelDescriptor::_Internal::input_channel(const ChannelDescriptor* msg) {
  return *msg->input_channel_;
}
const ::f1x::aasdk::proto::data::AVInputChannel&
ChannelDescriptor::_Internal::av_input_channel(const ChannelDescriptor* msg) {
  return *msg->av_input_channel_;
}
const ::f1x::aasdk::proto::data::BluetoothChannel&
ChannelDescriptor::_Internal::bluetooth_channel(const ChannelDescriptor* msg) {
  return *msg->bluetooth_channel_;
}
const ::f1x::aasdk::proto::data::NavigationChannel&
ChannelDescriptor::_Internal::navigation_channel(const ChannelDescriptor* msg) {
  return *msg->navigation_channel_;
}
const ::f1x::aasdk::proto::data::VendorExtensionChannel&
ChannelDescriptor::_Internal::vendor_extension_channel(const ChannelDescriptor* msg) {
  return *msg->vendor_extension_channel_;
}
void ChannelDescriptor::clear_sensor_channel() {
  if (GetArena() == nullptr && sensor_channel_ != nullptr) {
    delete sensor_channel_;
  }
  sensor_channel_ = nullptr;
}
void ChannelDescriptor::clear_av_channel() {
  if (GetArena() == nullptr && av_channel_ != nullptr) {
    delete av_channel_;
  }
  av_channel_ = nullptr;
}
void ChannelDescriptor::clear_input_channel() {
  if (GetArena() == nullptr && input_channel_ != nullptr) {
    delete input_channel_;
  }
  input_channel_ = nullptr;
}
void ChannelDescriptor::clear_av_input_channel() {
  if (GetArena() == nullptr && av_input_channel_ != nullptr) {
    delete av_input_channel_;
  }
  av_input_channel_ = nullptr;
}
void ChannelDescriptor::clear_bluetooth_channel() {
  if (GetArena() == nullptr && bluetooth_channel_ != nullptr) {
    delete bluetooth_channel_;
  }
  bluetooth_channel_ = nullptr;
}
void ChannelDescriptor::clear_navigation_channel() {
  if (GetArena() == nullptr && navigation_channel_ != nullptr) {
    delete navigation_channel_;
  }
  navigation_channel_ = nullptr;
}
void ChannelDescriptor::clear_vendor_extension_channel() {
  if (GetArena() == nullptr && vendor_extension_channel_ != nullptr) {
    delete vendor_extension_channel_;
  }
  vendor_extension_channel_ = nullptr;
}
ChannelDescriptor::ChannelDescriptor(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:f1x.aasdk.proto.data.ChannelDescriptor)
}
ChannelDescriptor::ChannelDescriptor(const ChannelDescriptor& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_sensor_channel()) {
    sensor_channel_ = new ::f1x::aasdk::proto::data::SensorChannel(*from.sensor_channel_);
  } else {
    sensor_channel_ = nullptr;
  }
  if (from._internal_has_av_channel()) {
    av_channel_ = new ::f1x::aasdk::proto::data::AVChannel(*from.av_channel_);
  } else {
    av_channel_ = nullptr;
  }
  if (from._internal_has_input_channel()) {
    input_channel_ = new ::f1x::aasdk::proto::data::InputChannel(*from.input_channel_);
  } else {
    input_channel_ = nullptr;
  }
  if (from._internal_has_av_input_channel()) {
    av_input_channel_ = new ::f1x::aasdk::proto::data::AVInputChannel(*from.av_input_channel_);
  } else {
    av_input_channel_ = nullptr;
  }
  if (from._internal_has_bluetooth_channel()) {
    bluetooth_channel_ = new ::f1x::aasdk::proto::data::BluetoothChannel(*from.bluetooth_channel_);
  } else {
    bluetooth_channel_ = nullptr;
  }
  if (from._internal_has_navigation_channel()) {
    navigation_channel_ = new ::f1x::aasdk::proto::data::NavigationChannel(*from.navigation_channel_);
  } else {
    navigation_channel_ = nullptr;
  }
  if (from._internal_has_vendor_extension_channel()) {
    vendor_extension_channel_ = new ::f1x::aasdk::proto::data::VendorExtensionChannel(*from.vendor_extension_channel_);
  } else {
    vendor_extension_channel_ = nullptr;
  }
  channel_id_ = from.channel_id_;
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.data.ChannelDescriptor)
}

void ChannelDescriptor::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ChannelDescriptor_ChannelDescriptorData_2eproto.base);
  ::memset(&sensor_channel_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&channel_id_) -
      reinterpret_cast<char*>(&sensor_channel_)) + sizeof(channel_id_));
}

ChannelDescriptor::~ChannelDescriptor() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.data.ChannelDescriptor)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ChannelDescriptor::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete sensor_channel_;
  if (this != internal_default_instance()) delete av_channel_;
  if (this != internal_default_instance()) delete input_channel_;
  if (this != internal_default_instance()) delete av_input_channel_;
  if (this != internal_default_instance()) delete bluetooth_channel_;
  if (this != internal_default_instance()) delete navigation_channel_;
  if (this != internal_default_instance()) delete vendor_extension_channel_;
}

void ChannelDescriptor::ArenaDtor(void* object) {
  ChannelDescriptor* _this = reinterpret_cast< ChannelDescriptor* >(object);
  (void)_this;
}
void ChannelDescriptor::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ChannelDescriptor::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ChannelDescriptor& ChannelDescriptor::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ChannelDescriptor_ChannelDescriptorData_2eproto.base);
  return *internal_default_instance();
}


void ChannelDescriptor::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.data.ChannelDescriptor)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArena() == nullptr && sensor_channel_ != nullptr) {
    delete sensor_channel_;
  }
  sensor_channel_ = nullptr;
  if (GetArena() == nullptr && av_channel_ != nullptr) {
    delete av_channel_;
  }
  av_channel_ = nullptr;
  if (GetArena() == nullptr && input_channel_ != nullptr) {
    delete input_channel_;
  }
  input_channel_ = nullptr;
  if (GetArena() == nullptr && av_input_channel_ != nullptr) {
    delete av_input_channel_;
  }
  av_input_channel_ = nullptr;
  if (GetArena() == nullptr && bluetooth_channel_ != nullptr) {
    delete bluetooth_channel_;
  }
  bluetooth_channel_ = nullptr;
  if (GetArena() == nullptr && navigation_channel_ != nullptr) {
    delete navigation_channel_;
  }
  navigation_channel_ = nullptr;
  if (GetArena() == nullptr && vendor_extension_channel_ != nullptr) {
    delete vendor_extension_channel_;
  }
  vendor_extension_channel_ = nullptr;
  channel_id_ = 0u;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ChannelDescriptor::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint32 channel_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          channel_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .f1x.aasdk.proto.data.SensorChannel sensor_channel = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_sensor_channel(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .f1x.aasdk.proto.data.AVChannel av_channel = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_av_channel(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .f1x.aasdk.proto.data.InputChannel input_channel = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_input_channel(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .f1x.aasdk.proto.data.AVInputChannel av_input_channel = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_av_input_channel(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .f1x.aasdk.proto.data.BluetoothChannel bluetooth_channel = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_bluetooth_channel(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .f1x.aasdk.proto.data.NavigationChannel navigation_channel = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66)) {
          ptr = ctx->ParseMessage(_internal_mutable_navigation_channel(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .f1x.aasdk.proto.data.VendorExtensionChannel vendor_extension_channel = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 98)) {
          ptr = ctx->ParseMessage(_internal_mutable_vendor_extension_channel(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* ChannelDescriptor::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.data.ChannelDescriptor)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 channel_id = 1;
  if (this->channel_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_channel_id(), target);
  }

  // .f1x.aasdk.proto.data.SensorChannel sensor_channel = 2;
  if (this->has_sensor_channel()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::sensor_channel(this), target, stream);
  }

  // .f1x.aasdk.proto.data.AVChannel av_channel = 3;
  if (this->has_av_channel()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::av_channel(this), target, stream);
  }

  // .f1x.aasdk.proto.data.InputChannel input_channel = 4;
  if (this->has_input_channel()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        4, _Internal::input_channel(this), target, stream);
  }

  // .f1x.aasdk.proto.data.AVInputChannel av_input_channel = 5;
  if (this->has_av_input_channel()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        5, _Internal::av_input_channel(this), target, stream);
  }

  // .f1x.aasdk.proto.data.BluetoothChannel bluetooth_channel = 6;
  if (this->has_bluetooth_channel()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        6, _Internal::bluetooth_channel(this), target, stream);
  }

  // .f1x.aasdk.proto.data.NavigationChannel navigation_channel = 8;
  if (this->has_navigation_channel()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        8, _Internal::navigation_channel(this), target, stream);
  }

  // .f1x.aasdk.proto.data.VendorExtensionChannel vendor_extension_channel = 12;
  if (this->has_vendor_extension_channel()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        12, _Internal::vendor_extension_channel(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.data.ChannelDescriptor)
  return target;
}

size_t ChannelDescriptor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.data.ChannelDescriptor)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .f1x.aasdk.proto.data.SensorChannel sensor_channel = 2;
  if (this->has_sensor_channel()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *sensor_channel_);
  }

  // .f1x.aasdk.proto.data.AVChannel av_channel = 3;
  if (this->has_av_channel()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *av_channel_);
  }

  // .f1x.aasdk.proto.data.InputChannel input_channel = 4;
  if (this->has_input_channel()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *input_channel_);
  }

  // .f1x.aasdk.proto.data.AVInputChannel av_input_channel = 5;
  if (this->has_av_input_channel()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *av_input_channel_);
  }

  // .f1x.aasdk.proto.data.BluetoothChannel bluetooth_channel = 6;
  if (this->has_bluetooth_channel()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *bluetooth_channel_);
  }

  // .f1x.aasdk.proto.data.NavigationChannel navigation_channel = 8;
  if (this->has_navigation_channel()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *navigation_channel_);
  }

  // .f1x.aasdk.proto.data.VendorExtensionChannel vendor_extension_channel = 12;
  if (this->has_vendor_extension_channel()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *vendor_extension_channel_);
  }

  // uint32 channel_id = 1;
  if (this->channel_id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_channel_id());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ChannelDescriptor::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.data.ChannelDescriptor)
  GOOGLE_DCHECK_NE(&from, this);
  const ChannelDescriptor* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ChannelDescriptor>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.data.ChannelDescriptor)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.data.ChannelDescriptor)
    MergeFrom(*source);
  }
}

void ChannelDescriptor::MergeFrom(const ChannelDescriptor& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.data.ChannelDescriptor)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_sensor_channel()) {
    _internal_mutable_sensor_channel()->::f1x::aasdk::proto::data::SensorChannel::MergeFrom(from._internal_sensor_channel());
  }
  if (from.has_av_channel()) {
    _internal_mutable_av_channel()->::f1x::aasdk::proto::data::AVChannel::MergeFrom(from._internal_av_channel());
  }
  if (from.has_input_channel()) {
    _internal_mutable_input_channel()->::f1x::aasdk::proto::data::InputChannel::MergeFrom(from._internal_input_channel());
  }
  if (from.has_av_input_channel()) {
    _internal_mutable_av_input_channel()->::f1x::aasdk::proto::data::AVInputChannel::MergeFrom(from._internal_av_input_channel());
  }
  if (from.has_bluetooth_channel()) {
    _internal_mutable_bluetooth_channel()->::f1x::aasdk::proto::data::BluetoothChannel::MergeFrom(from._internal_bluetooth_channel());
  }
  if (from.has_navigation_channel()) {
    _internal_mutable_navigation_channel()->::f1x::aasdk::proto::data::NavigationChannel::MergeFrom(from._internal_navigation_channel());
  }
  if (from.has_vendor_extension_channel()) {
    _internal_mutable_vendor_extension_channel()->::f1x::aasdk::proto::data::VendorExtensionChannel::MergeFrom(from._internal_vendor_extension_channel());
  }
  if (from.channel_id() != 0) {
    _internal_set_channel_id(from._internal_channel_id());
  }
}

void ChannelDescriptor::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.data.ChannelDescriptor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ChannelDescriptor::CopyFrom(const ChannelDescriptor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.data.ChannelDescriptor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChannelDescriptor::IsInitialized() const {
  return true;
}

void ChannelDescriptor::InternalSwap(ChannelDescriptor* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ChannelDescriptor, channel_id_)
      + sizeof(ChannelDescriptor::channel_id_)
      - PROTOBUF_FIELD_OFFSET(ChannelDescriptor, sensor_channel_)>(
          reinterpret_cast<char*>(&sensor_channel_),
          reinterpret_cast<char*>(&other->sensor_channel_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ChannelDescriptor::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::f1x::aasdk::proto::data::ChannelDescriptor* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::data::ChannelDescriptor >(Arena* arena) {
  return Arena::CreateMessageInternal< ::f1x::aasdk::proto::data::ChannelDescriptor >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
