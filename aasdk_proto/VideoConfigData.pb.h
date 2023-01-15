// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: VideoConfigData.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_VideoConfigData_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_VideoConfigData_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "VideoResolutionEnum.pb.h"
#include "VideoFPSEnum.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_VideoConfigData_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_VideoConfigData_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_VideoConfigData_2eproto;
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {
class VideoConfig;
class VideoConfigDefaultTypeInternal;
extern VideoConfigDefaultTypeInternal _VideoConfig_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> ::f1x::aasdk::proto::data::VideoConfig* Arena::CreateMaybeMessage<::f1x::aasdk::proto::data::VideoConfig>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

class VideoConfig PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:f1x.aasdk.proto.data.VideoConfig) */ {
 public:
  inline VideoConfig() : VideoConfig(nullptr) {};
  virtual ~VideoConfig();

  VideoConfig(const VideoConfig& from);
  VideoConfig(VideoConfig&& from) noexcept
    : VideoConfig() {
    *this = ::std::move(from);
  }

  inline VideoConfig& operator=(const VideoConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline VideoConfig& operator=(VideoConfig&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const VideoConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const VideoConfig* internal_default_instance() {
    return reinterpret_cast<const VideoConfig*>(
               &_VideoConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(VideoConfig& a, VideoConfig& b) {
    a.Swap(&b);
  }
  inline void Swap(VideoConfig* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(VideoConfig* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline VideoConfig* New() const final {
    return CreateMaybeMessage<VideoConfig>(nullptr);
  }

  VideoConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<VideoConfig>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const VideoConfig& from);
  void MergeFrom(const VideoConfig& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(VideoConfig* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "f1x.aasdk.proto.data.VideoConfig";
  }
  protected:
  explicit VideoConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_VideoConfigData_2eproto);
    return ::descriptor_table_VideoConfigData_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kVideoResolutionFieldNumber = 1,
    kVideoFpsFieldNumber = 2,
    kMarginWidthFieldNumber = 3,
    kMarginHeightFieldNumber = 4,
    kDpiFieldNumber = 5,
    kAdditionalDepthFieldNumber = 6,
  };
  // .f1x.aasdk.proto.enums.VideoResolution.Enum video_resolution = 1;
  void clear_video_resolution();
  ::f1x::aasdk::proto::enums::VideoResolution_Enum video_resolution() const;
  void set_video_resolution(::f1x::aasdk::proto::enums::VideoResolution_Enum value);
  private:
  ::f1x::aasdk::proto::enums::VideoResolution_Enum _internal_video_resolution() const;
  void _internal_set_video_resolution(::f1x::aasdk::proto::enums::VideoResolution_Enum value);
  public:

  // .f1x.aasdk.proto.enums.VideoFPS.Enum video_fps = 2;
  void clear_video_fps();
  ::f1x::aasdk::proto::enums::VideoFPS_Enum video_fps() const;
  void set_video_fps(::f1x::aasdk::proto::enums::VideoFPS_Enum value);
  private:
  ::f1x::aasdk::proto::enums::VideoFPS_Enum _internal_video_fps() const;
  void _internal_set_video_fps(::f1x::aasdk::proto::enums::VideoFPS_Enum value);
  public:

  // uint32 margin_width = 3;
  void clear_margin_width();
  ::PROTOBUF_NAMESPACE_ID::uint32 margin_width() const;
  void set_margin_width(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_margin_width() const;
  void _internal_set_margin_width(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 margin_height = 4;
  void clear_margin_height();
  ::PROTOBUF_NAMESPACE_ID::uint32 margin_height() const;
  void set_margin_height(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_margin_height() const;
  void _internal_set_margin_height(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 dpi = 5;
  void clear_dpi();
  ::PROTOBUF_NAMESPACE_ID::uint32 dpi() const;
  void set_dpi(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_dpi() const;
  void _internal_set_dpi(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 additional_depth = 6;
  void clear_additional_depth();
  ::PROTOBUF_NAMESPACE_ID::uint32 additional_depth() const;
  void set_additional_depth(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_additional_depth() const;
  void _internal_set_additional_depth(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:f1x.aasdk.proto.data.VideoConfig)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  int video_resolution_;
  int video_fps_;
  ::PROTOBUF_NAMESPACE_ID::uint32 margin_width_;
  ::PROTOBUF_NAMESPACE_ID::uint32 margin_height_;
  ::PROTOBUF_NAMESPACE_ID::uint32 dpi_;
  ::PROTOBUF_NAMESPACE_ID::uint32 additional_depth_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_VideoConfigData_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// VideoConfig

// .f1x.aasdk.proto.enums.VideoResolution.Enum video_resolution = 1;
inline void VideoConfig::clear_video_resolution() {
  video_resolution_ = 0;
}
inline ::f1x::aasdk::proto::enums::VideoResolution_Enum VideoConfig::_internal_video_resolution() const {
  return static_cast< ::f1x::aasdk::proto::enums::VideoResolution_Enum >(video_resolution_);
}
inline ::f1x::aasdk::proto::enums::VideoResolution_Enum VideoConfig::video_resolution() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.VideoConfig.video_resolution)
  return _internal_video_resolution();
}
inline void VideoConfig::_internal_set_video_resolution(::f1x::aasdk::proto::enums::VideoResolution_Enum value) {
  
  video_resolution_ = value;
}
inline void VideoConfig::set_video_resolution(::f1x::aasdk::proto::enums::VideoResolution_Enum value) {
  _internal_set_video_resolution(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.data.VideoConfig.video_resolution)
}

// .f1x.aasdk.proto.enums.VideoFPS.Enum video_fps = 2;
inline void VideoConfig::clear_video_fps() {
  video_fps_ = 0;
}
inline ::f1x::aasdk::proto::enums::VideoFPS_Enum VideoConfig::_internal_video_fps() const {
  return static_cast< ::f1x::aasdk::proto::enums::VideoFPS_Enum >(video_fps_);
}
inline ::f1x::aasdk::proto::enums::VideoFPS_Enum VideoConfig::video_fps() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.VideoConfig.video_fps)
  return _internal_video_fps();
}
inline void VideoConfig::_internal_set_video_fps(::f1x::aasdk::proto::enums::VideoFPS_Enum value) {
  
  video_fps_ = value;
}
inline void VideoConfig::set_video_fps(::f1x::aasdk::proto::enums::VideoFPS_Enum value) {
  _internal_set_video_fps(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.data.VideoConfig.video_fps)
}

// uint32 margin_width = 3;
inline void VideoConfig::clear_margin_width() {
  margin_width_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 VideoConfig::_internal_margin_width() const {
  return margin_width_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 VideoConfig::margin_width() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.VideoConfig.margin_width)
  return _internal_margin_width();
}
inline void VideoConfig::_internal_set_margin_width(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  margin_width_ = value;
}
inline void VideoConfig::set_margin_width(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_margin_width(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.data.VideoConfig.margin_width)
}

// uint32 margin_height = 4;
inline void VideoConfig::clear_margin_height() {
  margin_height_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 VideoConfig::_internal_margin_height() const {
  return margin_height_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 VideoConfig::margin_height() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.VideoConfig.margin_height)
  return _internal_margin_height();
}
inline void VideoConfig::_internal_set_margin_height(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  margin_height_ = value;
}
inline void VideoConfig::set_margin_height(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_margin_height(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.data.VideoConfig.margin_height)
}

// uint32 dpi = 5;
inline void VideoConfig::clear_dpi() {
  dpi_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 VideoConfig::_internal_dpi() const {
  return dpi_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 VideoConfig::dpi() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.VideoConfig.dpi)
  return _internal_dpi();
}
inline void VideoConfig::_internal_set_dpi(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  dpi_ = value;
}
inline void VideoConfig::set_dpi(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_dpi(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.data.VideoConfig.dpi)
}

// uint32 additional_depth = 6;
inline void VideoConfig::clear_additional_depth() {
  additional_depth_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 VideoConfig::_internal_additional_depth() const {
  return additional_depth_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 VideoConfig::additional_depth() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.VideoConfig.additional_depth)
  return _internal_additional_depth();
}
inline void VideoConfig::_internal_set_additional_depth(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  additional_depth_ = value;
}
inline void VideoConfig::set_additional_depth(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_additional_depth(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.data.VideoConfig.additional_depth)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_VideoConfigData_2eproto
