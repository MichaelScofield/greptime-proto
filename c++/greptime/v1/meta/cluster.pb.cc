// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: greptime/v1/meta/cluster.proto

#include "greptime/v1/meta/cluster.pb.h"

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

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace greptime {
namespace v1 {
namespace meta {
PROTOBUF_CONSTEXPR MetasrvPeersRequest::MetasrvPeersRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.header_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MetasrvPeersRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MetasrvPeersRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MetasrvPeersRequestDefaultTypeInternal() {}
  union {
    MetasrvPeersRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MetasrvPeersRequestDefaultTypeInternal _MetasrvPeersRequest_default_instance_;
PROTOBUF_CONSTEXPR MetasrvPeersResponse::MetasrvPeersResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.followers_)*/{}
  , /*decltype(_impl_.header_)*/nullptr
  , /*decltype(_impl_.leader_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MetasrvPeersResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MetasrvPeersResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MetasrvPeersResponseDefaultTypeInternal() {}
  union {
    MetasrvPeersResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MetasrvPeersResponseDefaultTypeInternal _MetasrvPeersResponse_default_instance_;
PROTOBUF_CONSTEXPR MetasrvNodeInfo::MetasrvNodeInfo(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.version_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.git_commit_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.peer_)*/nullptr
  , /*decltype(_impl_.start_time_ms_)*/uint64_t{0u}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MetasrvNodeInfoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MetasrvNodeInfoDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MetasrvNodeInfoDefaultTypeInternal() {}
  union {
    MetasrvNodeInfo _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MetasrvNodeInfoDefaultTypeInternal _MetasrvNodeInfo_default_instance_;
}  // namespace meta
}  // namespace v1
}  // namespace greptime
static ::_pb::Metadata file_level_metadata_greptime_2fv1_2fmeta_2fcluster_2eproto[3];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_greptime_2fv1_2fmeta_2fcluster_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_greptime_2fv1_2fmeta_2fcluster_2eproto = nullptr;

const uint32_t TableStruct_greptime_2fv1_2fmeta_2fcluster_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::greptime::v1::meta::MetasrvPeersRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::greptime::v1::meta::MetasrvPeersRequest, _impl_.header_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::greptime::v1::meta::MetasrvPeersResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::greptime::v1::meta::MetasrvPeersResponse, _impl_.header_),
  PROTOBUF_FIELD_OFFSET(::greptime::v1::meta::MetasrvPeersResponse, _impl_.leader_),
  PROTOBUF_FIELD_OFFSET(::greptime::v1::meta::MetasrvPeersResponse, _impl_.followers_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::greptime::v1::meta::MetasrvNodeInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::greptime::v1::meta::MetasrvNodeInfo, _impl_.peer_),
  PROTOBUF_FIELD_OFFSET(::greptime::v1::meta::MetasrvNodeInfo, _impl_.version_),
  PROTOBUF_FIELD_OFFSET(::greptime::v1::meta::MetasrvNodeInfo, _impl_.git_commit_),
  PROTOBUF_FIELD_OFFSET(::greptime::v1::meta::MetasrvNodeInfo, _impl_.start_time_ms_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::greptime::v1::meta::MetasrvPeersRequest)},
  { 7, -1, -1, sizeof(::greptime::v1::meta::MetasrvPeersResponse)},
  { 16, -1, -1, sizeof(::greptime::v1::meta::MetasrvNodeInfo)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::greptime::v1::meta::_MetasrvPeersRequest_default_instance_._instance,
  &::greptime::v1::meta::_MetasrvPeersResponse_default_instance_._instance,
  &::greptime::v1::meta::_MetasrvNodeInfo_default_instance_._instance,
};

const char descriptor_table_protodef_greptime_2fv1_2fmeta_2fcluster_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\036greptime/v1/meta/cluster.proto\022\020grepti"
  "me.v1.meta\032\035greptime/v1/meta/common.prot"
  "o\032\034greptime/v1/meta/store.proto\"F\n\023Metas"
  "rvPeersRequest\022/\n\006header\030\001 \001(\0132\037.greptim"
  "e.v1.meta.RequestHeader\"\261\001\n\024MetasrvPeers"
  "Response\0220\n\006header\030\001 \001(\0132 .greptime.v1.m"
  "eta.ResponseHeader\0221\n\006leader\030\002 \001(\0132!.gre"
  "ptime.v1.meta.MetasrvNodeInfo\0224\n\tfollowe"
  "rs\030\003 \003(\0132!.greptime.v1.meta.MetasrvNodeI"
  "nfo\"s\n\017MetasrvNodeInfo\022$\n\004peer\030\001 \001(\0132\026.g"
  "reptime.v1.meta.Peer\022\017\n\007version\030\002 \001(\t\022\022\n"
  "\ngit_commit\030\003 \001(\t\022\025\n\rstart_time_ms\030\004 \001(\004"
  "2\205\002\n\007Cluster\022Q\n\010BatchGet\022!.greptime.v1.m"
  "eta.BatchGetRequest\032\".greptime.v1.meta.B"
  "atchGetResponse\022H\n\005Range\022\036.greptime.v1.m"
  "eta.RangeRequest\032\037.greptime.v1.meta.Rang"
  "eResponse\022]\n\014MetasrvPeers\022%.greptime.v1."
  "meta.MetasrvPeersRequest\032&.greptime.v1.m"
  "eta.MetasrvPeersResponseB<Z:github.com/G"
  "reptimeTeam/greptime-proto/go/greptime/v"
  "1/metab\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_greptime_2fv1_2fmeta_2fcluster_2eproto_deps[2] = {
  &::descriptor_table_greptime_2fv1_2fmeta_2fcommon_2eproto,
  &::descriptor_table_greptime_2fv1_2fmeta_2fstore_2eproto,
};
static ::_pbi::once_flag descriptor_table_greptime_2fv1_2fmeta_2fcluster_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_greptime_2fv1_2fmeta_2fcluster_2eproto = {
    false, false, 814, descriptor_table_protodef_greptime_2fv1_2fmeta_2fcluster_2eproto,
    "greptime/v1/meta/cluster.proto",
    &descriptor_table_greptime_2fv1_2fmeta_2fcluster_2eproto_once, descriptor_table_greptime_2fv1_2fmeta_2fcluster_2eproto_deps, 2, 3,
    schemas, file_default_instances, TableStruct_greptime_2fv1_2fmeta_2fcluster_2eproto::offsets,
    file_level_metadata_greptime_2fv1_2fmeta_2fcluster_2eproto, file_level_enum_descriptors_greptime_2fv1_2fmeta_2fcluster_2eproto,
    file_level_service_descriptors_greptime_2fv1_2fmeta_2fcluster_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_greptime_2fv1_2fmeta_2fcluster_2eproto_getter() {
  return &descriptor_table_greptime_2fv1_2fmeta_2fcluster_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_greptime_2fv1_2fmeta_2fcluster_2eproto(&descriptor_table_greptime_2fv1_2fmeta_2fcluster_2eproto);
namespace greptime {
namespace v1 {
namespace meta {

// ===================================================================

class MetasrvPeersRequest::_Internal {
 public:
  static const ::greptime::v1::meta::RequestHeader& header(const MetasrvPeersRequest* msg);
};

const ::greptime::v1::meta::RequestHeader&
MetasrvPeersRequest::_Internal::header(const MetasrvPeersRequest* msg) {
  return *msg->_impl_.header_;
}
void MetasrvPeersRequest::clear_header() {
  if (GetArenaForAllocation() == nullptr && _impl_.header_ != nullptr) {
    delete _impl_.header_;
  }
  _impl_.header_ = nullptr;
}
MetasrvPeersRequest::MetasrvPeersRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:greptime.v1.meta.MetasrvPeersRequest)
}
MetasrvPeersRequest::MetasrvPeersRequest(const MetasrvPeersRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MetasrvPeersRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.header_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_header()) {
    _this->_impl_.header_ = new ::greptime::v1::meta::RequestHeader(*from._impl_.header_);
  }
  // @@protoc_insertion_point(copy_constructor:greptime.v1.meta.MetasrvPeersRequest)
}

inline void MetasrvPeersRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.header_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

MetasrvPeersRequest::~MetasrvPeersRequest() {
  // @@protoc_insertion_point(destructor:greptime.v1.meta.MetasrvPeersRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MetasrvPeersRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.header_;
}

void MetasrvPeersRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MetasrvPeersRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:greptime.v1.meta.MetasrvPeersRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.header_ != nullptr) {
    delete _impl_.header_;
  }
  _impl_.header_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MetasrvPeersRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .greptime.v1.meta.RequestHeader header = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_header(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* MetasrvPeersRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:greptime.v1.meta.MetasrvPeersRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .greptime.v1.meta.RequestHeader header = 1;
  if (this->_internal_has_header()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::header(this),
        _Internal::header(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:greptime.v1.meta.MetasrvPeersRequest)
  return target;
}

size_t MetasrvPeersRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:greptime.v1.meta.MetasrvPeersRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .greptime.v1.meta.RequestHeader header = 1;
  if (this->_internal_has_header()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.header_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MetasrvPeersRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MetasrvPeersRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MetasrvPeersRequest::GetClassData() const { return &_class_data_; }


void MetasrvPeersRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MetasrvPeersRequest*>(&to_msg);
  auto& from = static_cast<const MetasrvPeersRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:greptime.v1.meta.MetasrvPeersRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_header()) {
    _this->_internal_mutable_header()->::greptime::v1::meta::RequestHeader::MergeFrom(
        from._internal_header());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MetasrvPeersRequest::CopyFrom(const MetasrvPeersRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:greptime.v1.meta.MetasrvPeersRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MetasrvPeersRequest::IsInitialized() const {
  return true;
}

void MetasrvPeersRequest::InternalSwap(MetasrvPeersRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.header_, other->_impl_.header_);
}

::PROTOBUF_NAMESPACE_ID::Metadata MetasrvPeersRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_greptime_2fv1_2fmeta_2fcluster_2eproto_getter, &descriptor_table_greptime_2fv1_2fmeta_2fcluster_2eproto_once,
      file_level_metadata_greptime_2fv1_2fmeta_2fcluster_2eproto[0]);
}

// ===================================================================

class MetasrvPeersResponse::_Internal {
 public:
  static const ::greptime::v1::meta::ResponseHeader& header(const MetasrvPeersResponse* msg);
  static const ::greptime::v1::meta::MetasrvNodeInfo& leader(const MetasrvPeersResponse* msg);
};

const ::greptime::v1::meta::ResponseHeader&
MetasrvPeersResponse::_Internal::header(const MetasrvPeersResponse* msg) {
  return *msg->_impl_.header_;
}
const ::greptime::v1::meta::MetasrvNodeInfo&
MetasrvPeersResponse::_Internal::leader(const MetasrvPeersResponse* msg) {
  return *msg->_impl_.leader_;
}
void MetasrvPeersResponse::clear_header() {
  if (GetArenaForAllocation() == nullptr && _impl_.header_ != nullptr) {
    delete _impl_.header_;
  }
  _impl_.header_ = nullptr;
}
MetasrvPeersResponse::MetasrvPeersResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:greptime.v1.meta.MetasrvPeersResponse)
}
MetasrvPeersResponse::MetasrvPeersResponse(const MetasrvPeersResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MetasrvPeersResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.followers_){from._impl_.followers_}
    , decltype(_impl_.header_){nullptr}
    , decltype(_impl_.leader_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_header()) {
    _this->_impl_.header_ = new ::greptime::v1::meta::ResponseHeader(*from._impl_.header_);
  }
  if (from._internal_has_leader()) {
    _this->_impl_.leader_ = new ::greptime::v1::meta::MetasrvNodeInfo(*from._impl_.leader_);
  }
  // @@protoc_insertion_point(copy_constructor:greptime.v1.meta.MetasrvPeersResponse)
}

inline void MetasrvPeersResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.followers_){arena}
    , decltype(_impl_.header_){nullptr}
    , decltype(_impl_.leader_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

MetasrvPeersResponse::~MetasrvPeersResponse() {
  // @@protoc_insertion_point(destructor:greptime.v1.meta.MetasrvPeersResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MetasrvPeersResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.followers_.~RepeatedPtrField();
  if (this != internal_default_instance()) delete _impl_.header_;
  if (this != internal_default_instance()) delete _impl_.leader_;
}

void MetasrvPeersResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MetasrvPeersResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:greptime.v1.meta.MetasrvPeersResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.followers_.Clear();
  if (GetArenaForAllocation() == nullptr && _impl_.header_ != nullptr) {
    delete _impl_.header_;
  }
  _impl_.header_ = nullptr;
  if (GetArenaForAllocation() == nullptr && _impl_.leader_ != nullptr) {
    delete _impl_.leader_;
  }
  _impl_.leader_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MetasrvPeersResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .greptime.v1.meta.ResponseHeader header = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_header(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .greptime.v1.meta.MetasrvNodeInfo leader = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_leader(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .greptime.v1.meta.MetasrvNodeInfo followers = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_followers(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* MetasrvPeersResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:greptime.v1.meta.MetasrvPeersResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .greptime.v1.meta.ResponseHeader header = 1;
  if (this->_internal_has_header()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::header(this),
        _Internal::header(this).GetCachedSize(), target, stream);
  }

  // .greptime.v1.meta.MetasrvNodeInfo leader = 2;
  if (this->_internal_has_leader()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::leader(this),
        _Internal::leader(this).GetCachedSize(), target, stream);
  }

  // repeated .greptime.v1.meta.MetasrvNodeInfo followers = 3;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_followers_size()); i < n; i++) {
    const auto& repfield = this->_internal_followers(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(3, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:greptime.v1.meta.MetasrvPeersResponse)
  return target;
}

size_t MetasrvPeersResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:greptime.v1.meta.MetasrvPeersResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .greptime.v1.meta.MetasrvNodeInfo followers = 3;
  total_size += 1UL * this->_internal_followers_size();
  for (const auto& msg : this->_impl_.followers_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // .greptime.v1.meta.ResponseHeader header = 1;
  if (this->_internal_has_header()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.header_);
  }

  // .greptime.v1.meta.MetasrvNodeInfo leader = 2;
  if (this->_internal_has_leader()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.leader_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MetasrvPeersResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MetasrvPeersResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MetasrvPeersResponse::GetClassData() const { return &_class_data_; }


void MetasrvPeersResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MetasrvPeersResponse*>(&to_msg);
  auto& from = static_cast<const MetasrvPeersResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:greptime.v1.meta.MetasrvPeersResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.followers_.MergeFrom(from._impl_.followers_);
  if (from._internal_has_header()) {
    _this->_internal_mutable_header()->::greptime::v1::meta::ResponseHeader::MergeFrom(
        from._internal_header());
  }
  if (from._internal_has_leader()) {
    _this->_internal_mutable_leader()->::greptime::v1::meta::MetasrvNodeInfo::MergeFrom(
        from._internal_leader());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MetasrvPeersResponse::CopyFrom(const MetasrvPeersResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:greptime.v1.meta.MetasrvPeersResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MetasrvPeersResponse::IsInitialized() const {
  return true;
}

void MetasrvPeersResponse::InternalSwap(MetasrvPeersResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.followers_.InternalSwap(&other->_impl_.followers_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(MetasrvPeersResponse, _impl_.leader_)
      + sizeof(MetasrvPeersResponse::_impl_.leader_)
      - PROTOBUF_FIELD_OFFSET(MetasrvPeersResponse, _impl_.header_)>(
          reinterpret_cast<char*>(&_impl_.header_),
          reinterpret_cast<char*>(&other->_impl_.header_));
}

::PROTOBUF_NAMESPACE_ID::Metadata MetasrvPeersResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_greptime_2fv1_2fmeta_2fcluster_2eproto_getter, &descriptor_table_greptime_2fv1_2fmeta_2fcluster_2eproto_once,
      file_level_metadata_greptime_2fv1_2fmeta_2fcluster_2eproto[1]);
}

// ===================================================================

class MetasrvNodeInfo::_Internal {
 public:
  static const ::greptime::v1::meta::Peer& peer(const MetasrvNodeInfo* msg);
};

const ::greptime::v1::meta::Peer&
MetasrvNodeInfo::_Internal::peer(const MetasrvNodeInfo* msg) {
  return *msg->_impl_.peer_;
}
void MetasrvNodeInfo::clear_peer() {
  if (GetArenaForAllocation() == nullptr && _impl_.peer_ != nullptr) {
    delete _impl_.peer_;
  }
  _impl_.peer_ = nullptr;
}
MetasrvNodeInfo::MetasrvNodeInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:greptime.v1.meta.MetasrvNodeInfo)
}
MetasrvNodeInfo::MetasrvNodeInfo(const MetasrvNodeInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MetasrvNodeInfo* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.version_){}
    , decltype(_impl_.git_commit_){}
    , decltype(_impl_.peer_){nullptr}
    , decltype(_impl_.start_time_ms_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.version_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.version_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_version().empty()) {
    _this->_impl_.version_.Set(from._internal_version(), 
      _this->GetArenaForAllocation());
  }
  _impl_.git_commit_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.git_commit_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_git_commit().empty()) {
    _this->_impl_.git_commit_.Set(from._internal_git_commit(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_peer()) {
    _this->_impl_.peer_ = new ::greptime::v1::meta::Peer(*from._impl_.peer_);
  }
  _this->_impl_.start_time_ms_ = from._impl_.start_time_ms_;
  // @@protoc_insertion_point(copy_constructor:greptime.v1.meta.MetasrvNodeInfo)
}

inline void MetasrvNodeInfo::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.version_){}
    , decltype(_impl_.git_commit_){}
    , decltype(_impl_.peer_){nullptr}
    , decltype(_impl_.start_time_ms_){uint64_t{0u}}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.version_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.version_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.git_commit_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.git_commit_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

MetasrvNodeInfo::~MetasrvNodeInfo() {
  // @@protoc_insertion_point(destructor:greptime.v1.meta.MetasrvNodeInfo)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MetasrvNodeInfo::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.version_.Destroy();
  _impl_.git_commit_.Destroy();
  if (this != internal_default_instance()) delete _impl_.peer_;
}

void MetasrvNodeInfo::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MetasrvNodeInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:greptime.v1.meta.MetasrvNodeInfo)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.version_.ClearToEmpty();
  _impl_.git_commit_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.peer_ != nullptr) {
    delete _impl_.peer_;
  }
  _impl_.peer_ = nullptr;
  _impl_.start_time_ms_ = uint64_t{0u};
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MetasrvNodeInfo::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .greptime.v1.meta.Peer peer = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_peer(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string version = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_version();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "greptime.v1.meta.MetasrvNodeInfo.version"));
        } else
          goto handle_unusual;
        continue;
      // string git_commit = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_git_commit();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "greptime.v1.meta.MetasrvNodeInfo.git_commit"));
        } else
          goto handle_unusual;
        continue;
      // uint64 start_time_ms = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _impl_.start_time_ms_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* MetasrvNodeInfo::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:greptime.v1.meta.MetasrvNodeInfo)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .greptime.v1.meta.Peer peer = 1;
  if (this->_internal_has_peer()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::peer(this),
        _Internal::peer(this).GetCachedSize(), target, stream);
  }

  // string version = 2;
  if (!this->_internal_version().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_version().data(), static_cast<int>(this->_internal_version().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "greptime.v1.meta.MetasrvNodeInfo.version");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_version(), target);
  }

  // string git_commit = 3;
  if (!this->_internal_git_commit().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_git_commit().data(), static_cast<int>(this->_internal_git_commit().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "greptime.v1.meta.MetasrvNodeInfo.git_commit");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_git_commit(), target);
  }

  // uint64 start_time_ms = 4;
  if (this->_internal_start_time_ms() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(4, this->_internal_start_time_ms(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:greptime.v1.meta.MetasrvNodeInfo)
  return target;
}

size_t MetasrvNodeInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:greptime.v1.meta.MetasrvNodeInfo)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string version = 2;
  if (!this->_internal_version().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_version());
  }

  // string git_commit = 3;
  if (!this->_internal_git_commit().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_git_commit());
  }

  // .greptime.v1.meta.Peer peer = 1;
  if (this->_internal_has_peer()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.peer_);
  }

  // uint64 start_time_ms = 4;
  if (this->_internal_start_time_ms() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_start_time_ms());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MetasrvNodeInfo::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MetasrvNodeInfo::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MetasrvNodeInfo::GetClassData() const { return &_class_data_; }


void MetasrvNodeInfo::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MetasrvNodeInfo*>(&to_msg);
  auto& from = static_cast<const MetasrvNodeInfo&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:greptime.v1.meta.MetasrvNodeInfo)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_version().empty()) {
    _this->_internal_set_version(from._internal_version());
  }
  if (!from._internal_git_commit().empty()) {
    _this->_internal_set_git_commit(from._internal_git_commit());
  }
  if (from._internal_has_peer()) {
    _this->_internal_mutable_peer()->::greptime::v1::meta::Peer::MergeFrom(
        from._internal_peer());
  }
  if (from._internal_start_time_ms() != 0) {
    _this->_internal_set_start_time_ms(from._internal_start_time_ms());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MetasrvNodeInfo::CopyFrom(const MetasrvNodeInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:greptime.v1.meta.MetasrvNodeInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MetasrvNodeInfo::IsInitialized() const {
  return true;
}

void MetasrvNodeInfo::InternalSwap(MetasrvNodeInfo* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.version_, lhs_arena,
      &other->_impl_.version_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.git_commit_, lhs_arena,
      &other->_impl_.git_commit_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(MetasrvNodeInfo, _impl_.start_time_ms_)
      + sizeof(MetasrvNodeInfo::_impl_.start_time_ms_)
      - PROTOBUF_FIELD_OFFSET(MetasrvNodeInfo, _impl_.peer_)>(
          reinterpret_cast<char*>(&_impl_.peer_),
          reinterpret_cast<char*>(&other->_impl_.peer_));
}

::PROTOBUF_NAMESPACE_ID::Metadata MetasrvNodeInfo::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_greptime_2fv1_2fmeta_2fcluster_2eproto_getter, &descriptor_table_greptime_2fv1_2fmeta_2fcluster_2eproto_once,
      file_level_metadata_greptime_2fv1_2fmeta_2fcluster_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace meta
}  // namespace v1
}  // namespace greptime
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::greptime::v1::meta::MetasrvPeersRequest*
Arena::CreateMaybeMessage< ::greptime::v1::meta::MetasrvPeersRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::greptime::v1::meta::MetasrvPeersRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::greptime::v1::meta::MetasrvPeersResponse*
Arena::CreateMaybeMessage< ::greptime::v1::meta::MetasrvPeersResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::greptime::v1::meta::MetasrvPeersResponse >(arena);
}
template<> PROTOBUF_NOINLINE ::greptime::v1::meta::MetasrvNodeInfo*
Arena::CreateMaybeMessage< ::greptime::v1::meta::MetasrvNodeInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::greptime::v1::meta::MetasrvNodeInfo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
