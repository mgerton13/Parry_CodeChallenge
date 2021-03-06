// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: chunk.proto

#include "chunk.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

namespace proto {
class ChunkDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Chunk> _instance;
} _Chunk_default_instance_;
}  // namespace proto
static void InitDefaultsChunk_chunk_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::proto::_Chunk_default_instance_;
    new (ptr) ::proto::Chunk();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::proto::Chunk::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Chunk_chunk_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsChunk_chunk_2eproto}, {}};

void InitDefaults_chunk_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_Chunk_chunk_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_chunk_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_chunk_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_chunk_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_chunk_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::proto::Chunk, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::proto::Chunk, index_),
  PROTOBUF_FIELD_OFFSET(::proto::Chunk, data_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::proto::Chunk)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::proto::_Chunk_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_chunk_2eproto = {
  {}, AddDescriptors_chunk_2eproto, "chunk.proto", schemas,
  file_default_instances, TableStruct_chunk_2eproto::offsets,
  file_level_metadata_chunk_2eproto, 1, file_level_enum_descriptors_chunk_2eproto, file_level_service_descriptors_chunk_2eproto,
};

::google::protobuf::internal::DescriptorTable descriptor_table_chunk_2eproto = {
  false, InitDefaults_chunk_2eproto, 
  "\n\013chunk.proto\022\005proto\"$\n\005Chunk\022\r\n\005Index\030\001"
  " \001(\005\022\014\n\004Data\030\002 \001(\014b\006proto3"
,
  "chunk.proto", &assign_descriptors_table_chunk_2eproto, 66,
};

void AddDescriptors_chunk_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_chunk_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_chunk_2eproto = []() { AddDescriptors_chunk_2eproto(); return true; }();
namespace proto {

// ===================================================================

void Chunk::InitAsDefaultInstance() {
}
class Chunk::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Chunk::kIndexFieldNumber;
const int Chunk::kDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Chunk::Chunk()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto.Chunk)
}
Chunk::Chunk(const Chunk& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.data().size() > 0) {
    data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
  index_ = from.index_;
  // @@protoc_insertion_point(copy_constructor:proto.Chunk)
}

void Chunk::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_Chunk_chunk_2eproto.base);
  data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  index_ = 0;
}

Chunk::~Chunk() {
  // @@protoc_insertion_point(destructor:proto.Chunk)
  SharedDtor();
}

void Chunk::SharedDtor() {
  data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Chunk::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Chunk& Chunk::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_Chunk_chunk_2eproto.base);
  return *internal_default_instance();
}


void Chunk::Clear() {
// @@protoc_insertion_point(message_clear_start:proto.Chunk)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  index_ = 0;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Chunk::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<Chunk*>(object);
  ::google::protobuf::uint32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ::google::protobuf::uint32 tag;
    ptr = Varint::Parse32Inline(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // int32 Index = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 8) goto handle_unusual;
        ::google::protobuf::uint64 val;
        ptr = Varint::Parse64(ptr, &val);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ::google::protobuf::int32 value = val;
        msg->set_index(value);
        break;
      }
      // bytes Data = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 18) goto handle_unusual;
        ptr = Varint::Parse32Inline(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        parser_till_end = ::google::protobuf::internal::StringParser;
        ::std::string* str = msg->mutable_data();
        str->clear();
        object = str;
        if (size > end - ptr) goto len_delim_till_end;
        str->append(ptr, size);
        ptr += size;
        break;
      }
      default: {
      handle_unusual: (void)&&handle_unusual;
        if ((tag & 7) == 4 || tag == 0) {
          bool ok = ctx->ValidEndGroup(tag);
          GOOGLE_PROTOBUF_PARSER_ASSERT(ok);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
len_delim_till_end: (void)&&len_delim_till_end;
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                                 {parser_till_end, object}, size);
group_continues: (void)&&group_continues;
  GOOGLE_DCHECK(ptr >= end);
  ctx->StoreGroup({_InternalParse, msg}, {parser_till_end, object}, depth);
  return ptr;
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool Chunk::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.Chunk)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 Index = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (8 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &index_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes Data = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (18 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_data()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.Chunk)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.Chunk)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Chunk::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.Chunk)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 Index = 1;
  if (this->index() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->index(), output);
  }

  // bytes Data = 2;
  if (this->data().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->data(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.Chunk)
}

::google::protobuf::uint8* Chunk::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.Chunk)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 Index = 1;
  if (this->index() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->index(), target);
  }

  // bytes Data = 2;
  if (this->data().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->data(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.Chunk)
  return target;
}

size_t Chunk::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.Chunk)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes Data = 2;
  if (this->data().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->data());
  }

  // int32 Index = 1;
  if (this->index() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->index());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Chunk::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:proto.Chunk)
  GOOGLE_DCHECK_NE(&from, this);
  const Chunk* source =
      ::google::protobuf::DynamicCastToGenerated<Chunk>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:proto.Chunk)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:proto.Chunk)
    MergeFrom(*source);
  }
}

void Chunk::MergeFrom(const Chunk& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:proto.Chunk)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.data().size() > 0) {

    data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
  if (from.index() != 0) {
    set_index(from.index());
  }
}

void Chunk::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:proto.Chunk)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Chunk::CopyFrom(const Chunk& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto.Chunk)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Chunk::IsInitialized() const {
  return true;
}

void Chunk::Swap(Chunk* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Chunk::InternalSwap(Chunk* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  data_.Swap(&other->data_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(index_, other->index_);
}

::google::protobuf::Metadata Chunk::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_chunk_2eproto);
  return ::file_level_metadata_chunk_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::proto::Chunk* Arena::CreateMaybeMessage< ::proto::Chunk >(Arena* arena) {
  return Arena::CreateInternal< ::proto::Chunk >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
