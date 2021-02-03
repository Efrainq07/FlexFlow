// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: strategy.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_strategy_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_strategy_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3010000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3010001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_strategy_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_strategy_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_strategy_2eproto;
namespace FFProtoBuf {
class Op;
class OpDefaultTypeInternal;
extern OpDefaultTypeInternal _Op_default_instance_;
class Strategy;
class StrategyDefaultTypeInternal;
extern StrategyDefaultTypeInternal _Strategy_default_instance_;
}  // namespace FFProtoBuf
PROTOBUF_NAMESPACE_OPEN
template<> ::FFProtoBuf::Op* Arena::CreateMaybeMessage<::FFProtoBuf::Op>(Arena*);
template<> ::FFProtoBuf::Strategy* Arena::CreateMaybeMessage<::FFProtoBuf::Strategy>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace FFProtoBuf {

enum Op_DeviceType : int {
  Op_DeviceType_GPU = 0,
  Op_DeviceType_CPU = 1
};
bool Op_DeviceType_IsValid(int value);
constexpr Op_DeviceType Op_DeviceType_DeviceType_MIN = Op_DeviceType_GPU;
constexpr Op_DeviceType Op_DeviceType_DeviceType_MAX = Op_DeviceType_CPU;
constexpr int Op_DeviceType_DeviceType_ARRAYSIZE = Op_DeviceType_DeviceType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Op_DeviceType_descriptor();
template<typename T>
inline const std::string& Op_DeviceType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Op_DeviceType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Op_DeviceType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Op_DeviceType_descriptor(), enum_t_value);
}
inline bool Op_DeviceType_Parse(
    const std::string& name, Op_DeviceType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Op_DeviceType>(
    Op_DeviceType_descriptor(), name, value);
}
enum Op_MemoryType : int {
  Op_MemoryType_FBM = 0,
  Op_MemoryType_ZCM = 1
};
bool Op_MemoryType_IsValid(int value);
constexpr Op_MemoryType Op_MemoryType_MemoryType_MIN = Op_MemoryType_FBM;
constexpr Op_MemoryType Op_MemoryType_MemoryType_MAX = Op_MemoryType_ZCM;
constexpr int Op_MemoryType_MemoryType_ARRAYSIZE = Op_MemoryType_MemoryType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Op_MemoryType_descriptor();
template<typename T>
inline const std::string& Op_MemoryType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Op_MemoryType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Op_MemoryType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Op_MemoryType_descriptor(), enum_t_value);
}
inline bool Op_MemoryType_Parse(
    const std::string& name, Op_MemoryType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Op_MemoryType>(
    Op_MemoryType_descriptor(), name, value);
}
// ===================================================================

class Op :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:FFProtoBuf.Op) */ {
 public:
  Op();
  virtual ~Op();

  Op(const Op& from);
  Op(Op&& from) noexcept
    : Op() {
    *this = ::std::move(from);
  }

  inline Op& operator=(const Op& from) {
    CopyFrom(from);
    return *this;
  }
  inline Op& operator=(Op&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
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
  static const Op& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Op* internal_default_instance() {
    return reinterpret_cast<const Op*>(
               &_Op_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Op& a, Op& b) {
    a.Swap(&b);
  }
  inline void Swap(Op* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Op* New() const final {
    return CreateMaybeMessage<Op>(nullptr);
  }

  Op* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Op>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Op& from);
  void MergeFrom(const Op& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Op* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "FFProtoBuf.Op";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_strategy_2eproto);
    return ::descriptor_table_strategy_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Op_DeviceType DeviceType;
  static constexpr DeviceType GPU =
    Op_DeviceType_GPU;
  static constexpr DeviceType CPU =
    Op_DeviceType_CPU;
  static inline bool DeviceType_IsValid(int value) {
    return Op_DeviceType_IsValid(value);
  }
  static constexpr DeviceType DeviceType_MIN =
    Op_DeviceType_DeviceType_MIN;
  static constexpr DeviceType DeviceType_MAX =
    Op_DeviceType_DeviceType_MAX;
  static constexpr int DeviceType_ARRAYSIZE =
    Op_DeviceType_DeviceType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  DeviceType_descriptor() {
    return Op_DeviceType_descriptor();
  }
  template<typename T>
  static inline const std::string& DeviceType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, DeviceType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function DeviceType_Name.");
    return Op_DeviceType_Name(enum_t_value);
  }
  static inline bool DeviceType_Parse(const std::string& name,
      DeviceType* value) {
    return Op_DeviceType_Parse(name, value);
  }

  typedef Op_MemoryType MemoryType;
  static constexpr MemoryType FBM =
    Op_MemoryType_FBM;
  static constexpr MemoryType ZCM =
    Op_MemoryType_ZCM;
  static inline bool MemoryType_IsValid(int value) {
    return Op_MemoryType_IsValid(value);
  }
  static constexpr MemoryType MemoryType_MIN =
    Op_MemoryType_MemoryType_MIN;
  static constexpr MemoryType MemoryType_MAX =
    Op_MemoryType_MemoryType_MAX;
  static constexpr int MemoryType_ARRAYSIZE =
    Op_MemoryType_MemoryType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  MemoryType_descriptor() {
    return Op_MemoryType_descriptor();
  }
  template<typename T>
  static inline const std::string& MemoryType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, MemoryType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function MemoryType_Name.");
    return Op_MemoryType_Name(enum_t_value);
  }
  static inline bool MemoryType_Parse(const std::string& name,
      MemoryType* value) {
    return Op_MemoryType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kDimsFieldNumber = 3,
    kDeviceIdsFieldNumber = 4,
    kMemoryTypesFieldNumber = 5,
    kNameFieldNumber = 1,
    kDeviceTypeFieldNumber = 2,
  };
  // repeated int32 dims = 3;
  int dims_size() const;
  private:
  int _internal_dims_size() const;
  public:
  void clear_dims();
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_dims(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      _internal_dims() const;
  void _internal_add_dims(::PROTOBUF_NAMESPACE_ID::int32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      _internal_mutable_dims();
  public:
  ::PROTOBUF_NAMESPACE_ID::int32 dims(int index) const;
  void set_dims(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_dims(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      dims() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_dims();

  // repeated int32 device_ids = 4;
  int device_ids_size() const;
  private:
  int _internal_device_ids_size() const;
  public:
  void clear_device_ids();
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_device_ids(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      _internal_device_ids() const;
  void _internal_add_device_ids(::PROTOBUF_NAMESPACE_ID::int32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      _internal_mutable_device_ids();
  public:
  ::PROTOBUF_NAMESPACE_ID::int32 device_ids(int index) const;
  void set_device_ids(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_device_ids(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      device_ids() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_device_ids();

  // repeated .FFProtoBuf.Op.MemoryType memory_types = 5;
  int memory_types_size() const;
  private:
  int _internal_memory_types_size() const;
  public:
  void clear_memory_types();
  private:
  ::FFProtoBuf::Op_MemoryType _internal_memory_types(int index) const;
  void _internal_add_memory_types(::FFProtoBuf::Op_MemoryType value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* _internal_mutable_memory_types();
  public:
  ::FFProtoBuf::Op_MemoryType memory_types(int index) const;
  void set_memory_types(int index, ::FFProtoBuf::Op_MemoryType value);
  void add_memory_types(::FFProtoBuf::Op_MemoryType value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>& memory_types() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* mutable_memory_types();

  // required string name = 1;
  bool has_name() const;
  private:
  bool _internal_has_name() const;
  public:
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // required .FFProtoBuf.Op.DeviceType device_type = 2 [default = GPU];
  bool has_device_type() const;
  private:
  bool _internal_has_device_type() const;
  public:
  void clear_device_type();
  ::FFProtoBuf::Op_DeviceType device_type() const;
  void set_device_type(::FFProtoBuf::Op_DeviceType value);
  private:
  ::FFProtoBuf::Op_DeviceType _internal_device_type() const;
  void _internal_set_device_type(::FFProtoBuf::Op_DeviceType value);
  public:

  // @@protoc_insertion_point(class_scope:FFProtoBuf.Op)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > dims_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > device_ids_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int> memory_types_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  int device_type_;
  friend struct ::TableStruct_strategy_2eproto;
};
// -------------------------------------------------------------------

class Strategy :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:FFProtoBuf.Strategy) */ {
 public:
  Strategy();
  virtual ~Strategy();

  Strategy(const Strategy& from);
  Strategy(Strategy&& from) noexcept
    : Strategy() {
    *this = ::std::move(from);
  }

  inline Strategy& operator=(const Strategy& from) {
    CopyFrom(from);
    return *this;
  }
  inline Strategy& operator=(Strategy&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
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
  static const Strategy& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Strategy* internal_default_instance() {
    return reinterpret_cast<const Strategy*>(
               &_Strategy_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Strategy& a, Strategy& b) {
    a.Swap(&b);
  }
  inline void Swap(Strategy* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Strategy* New() const final {
    return CreateMaybeMessage<Strategy>(nullptr);
  }

  Strategy* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Strategy>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Strategy& from);
  void MergeFrom(const Strategy& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Strategy* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "FFProtoBuf.Strategy";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_strategy_2eproto);
    return ::descriptor_table_strategy_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kOpsFieldNumber = 1,
  };
  // repeated .FFProtoBuf.Op ops = 1;
  int ops_size() const;
  private:
  int _internal_ops_size() const;
  public:
  void clear_ops();
  ::FFProtoBuf::Op* mutable_ops(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::FFProtoBuf::Op >*
      mutable_ops();
  private:
  const ::FFProtoBuf::Op& _internal_ops(int index) const;
  ::FFProtoBuf::Op* _internal_add_ops();
  public:
  const ::FFProtoBuf::Op& ops(int index) const;
  ::FFProtoBuf::Op* add_ops();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::FFProtoBuf::Op >&
      ops() const;

  // @@protoc_insertion_point(class_scope:FFProtoBuf.Strategy)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::FFProtoBuf::Op > ops_;
  friend struct ::TableStruct_strategy_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Op

// required string name = 1;
inline bool Op::_internal_has_name() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Op::has_name() const {
  return _internal_has_name();
}
inline void Op::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Op::name() const {
  // @@protoc_insertion_point(field_get:FFProtoBuf.Op.name)
  return _internal_name();
}
inline void Op::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:FFProtoBuf.Op.name)
}
inline std::string* Op::mutable_name() {
  // @@protoc_insertion_point(field_mutable:FFProtoBuf.Op.name)
  return _internal_mutable_name();
}
inline const std::string& Op::_internal_name() const {
  return name_.GetNoArena();
}
inline void Op::_internal_set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Op::set_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:FFProtoBuf.Op.name)
}
inline void Op::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:FFProtoBuf.Op.name)
}
inline void Op::set_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:FFProtoBuf.Op.name)
}
inline std::string* Op::_internal_mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Op::release_name() {
  // @@protoc_insertion_point(field_release:FFProtoBuf.Op.name)
  if (!has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Op::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:FFProtoBuf.Op.name)
}

// required .FFProtoBuf.Op.DeviceType device_type = 2 [default = GPU];
inline bool Op::_internal_has_device_type() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Op::has_device_type() const {
  return _internal_has_device_type();
}
inline void Op::clear_device_type() {
  device_type_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::FFProtoBuf::Op_DeviceType Op::_internal_device_type() const {
  return static_cast< ::FFProtoBuf::Op_DeviceType >(device_type_);
}
inline ::FFProtoBuf::Op_DeviceType Op::device_type() const {
  // @@protoc_insertion_point(field_get:FFProtoBuf.Op.device_type)
  return _internal_device_type();
}
inline void Op::_internal_set_device_type(::FFProtoBuf::Op_DeviceType value) {
  assert(::FFProtoBuf::Op_DeviceType_IsValid(value));
  _has_bits_[0] |= 0x00000002u;
  device_type_ = value;
}
inline void Op::set_device_type(::FFProtoBuf::Op_DeviceType value) {
  _internal_set_device_type(value);
  // @@protoc_insertion_point(field_set:FFProtoBuf.Op.device_type)
}

// repeated int32 dims = 3;
inline int Op::_internal_dims_size() const {
  return dims_.size();
}
inline int Op::dims_size() const {
  return _internal_dims_size();
}
inline void Op::clear_dims() {
  dims_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Op::_internal_dims(int index) const {
  return dims_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Op::dims(int index) const {
  // @@protoc_insertion_point(field_get:FFProtoBuf.Op.dims)
  return _internal_dims(index);
}
inline void Op::set_dims(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  dims_.Set(index, value);
  // @@protoc_insertion_point(field_set:FFProtoBuf.Op.dims)
}
inline void Op::_internal_add_dims(::PROTOBUF_NAMESPACE_ID::int32 value) {
  dims_.Add(value);
}
inline void Op::add_dims(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_dims(value);
  // @@protoc_insertion_point(field_add:FFProtoBuf.Op.dims)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Op::_internal_dims() const {
  return dims_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Op::dims() const {
  // @@protoc_insertion_point(field_list:FFProtoBuf.Op.dims)
  return _internal_dims();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Op::_internal_mutable_dims() {
  return &dims_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Op::mutable_dims() {
  // @@protoc_insertion_point(field_mutable_list:FFProtoBuf.Op.dims)
  return _internal_mutable_dims();
}

// repeated int32 device_ids = 4;
inline int Op::_internal_device_ids_size() const {
  return device_ids_.size();
}
inline int Op::device_ids_size() const {
  return _internal_device_ids_size();
}
inline void Op::clear_device_ids() {
  device_ids_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Op::_internal_device_ids(int index) const {
  return device_ids_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Op::device_ids(int index) const {
  // @@protoc_insertion_point(field_get:FFProtoBuf.Op.device_ids)
  return _internal_device_ids(index);
}
inline void Op::set_device_ids(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  device_ids_.Set(index, value);
  // @@protoc_insertion_point(field_set:FFProtoBuf.Op.device_ids)
}
inline void Op::_internal_add_device_ids(::PROTOBUF_NAMESPACE_ID::int32 value) {
  device_ids_.Add(value);
}
inline void Op::add_device_ids(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_device_ids(value);
  // @@protoc_insertion_point(field_add:FFProtoBuf.Op.device_ids)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Op::_internal_device_ids() const {
  return device_ids_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Op::device_ids() const {
  // @@protoc_insertion_point(field_list:FFProtoBuf.Op.device_ids)
  return _internal_device_ids();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Op::_internal_mutable_device_ids() {
  return &device_ids_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Op::mutable_device_ids() {
  // @@protoc_insertion_point(field_mutable_list:FFProtoBuf.Op.device_ids)
  return _internal_mutable_device_ids();
}

// repeated .FFProtoBuf.Op.MemoryType memory_types = 5;
inline int Op::_internal_memory_types_size() const {
  return memory_types_.size();
}
inline int Op::memory_types_size() const {
  return _internal_memory_types_size();
}
inline void Op::clear_memory_types() {
  memory_types_.Clear();
}
inline ::FFProtoBuf::Op_MemoryType Op::_internal_memory_types(int index) const {
  return static_cast< ::FFProtoBuf::Op_MemoryType >(memory_types_.Get(index));
}
inline ::FFProtoBuf::Op_MemoryType Op::memory_types(int index) const {
  // @@protoc_insertion_point(field_get:FFProtoBuf.Op.memory_types)
  return _internal_memory_types(index);
}
inline void Op::set_memory_types(int index, ::FFProtoBuf::Op_MemoryType value) {
  assert(::FFProtoBuf::Op_MemoryType_IsValid(value));
  memory_types_.Set(index, value);
  // @@protoc_insertion_point(field_set:FFProtoBuf.Op.memory_types)
}
inline void Op::_internal_add_memory_types(::FFProtoBuf::Op_MemoryType value) {
  assert(::FFProtoBuf::Op_MemoryType_IsValid(value));
  memory_types_.Add(value);
}
inline void Op::add_memory_types(::FFProtoBuf::Op_MemoryType value) {
  // @@protoc_insertion_point(field_add:FFProtoBuf.Op.memory_types)
  _internal_add_memory_types(value);
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>&
Op::memory_types() const {
  // @@protoc_insertion_point(field_list:FFProtoBuf.Op.memory_types)
  return memory_types_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>*
Op::_internal_mutable_memory_types() {
  return &memory_types_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>*
Op::mutable_memory_types() {
  // @@protoc_insertion_point(field_mutable_list:FFProtoBuf.Op.memory_types)
  return _internal_mutable_memory_types();
}

// -------------------------------------------------------------------

// Strategy

// repeated .FFProtoBuf.Op ops = 1;
inline int Strategy::_internal_ops_size() const {
  return ops_.size();
}
inline int Strategy::ops_size() const {
  return _internal_ops_size();
}
inline void Strategy::clear_ops() {
  ops_.Clear();
}
inline ::FFProtoBuf::Op* Strategy::mutable_ops(int index) {
  // @@protoc_insertion_point(field_mutable:FFProtoBuf.Strategy.ops)
  return ops_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::FFProtoBuf::Op >*
Strategy::mutable_ops() {
  // @@protoc_insertion_point(field_mutable_list:FFProtoBuf.Strategy.ops)
  return &ops_;
}
inline const ::FFProtoBuf::Op& Strategy::_internal_ops(int index) const {
  return ops_.Get(index);
}
inline const ::FFProtoBuf::Op& Strategy::ops(int index) const {
  // @@protoc_insertion_point(field_get:FFProtoBuf.Strategy.ops)
  return _internal_ops(index);
}
inline ::FFProtoBuf::Op* Strategy::_internal_add_ops() {
  return ops_.Add();
}
inline ::FFProtoBuf::Op* Strategy::add_ops() {
  // @@protoc_insertion_point(field_add:FFProtoBuf.Strategy.ops)
  return _internal_add_ops();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::FFProtoBuf::Op >&
Strategy::ops() const {
  // @@protoc_insertion_point(field_list:FFProtoBuf.Strategy.ops)
  return ops_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace FFProtoBuf

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::FFProtoBuf::Op_DeviceType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::FFProtoBuf::Op_DeviceType>() {
  return ::FFProtoBuf::Op_DeviceType_descriptor();
}
template <> struct is_proto_enum< ::FFProtoBuf::Op_MemoryType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::FFProtoBuf::Op_MemoryType>() {
  return ::FFProtoBuf::Op_MemoryType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_strategy_2eproto
