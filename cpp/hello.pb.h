// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: hello.proto

#ifndef PROTOBUF_hello_2eproto__INCLUDED
#define PROTOBUF_hello_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3002000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3002000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace hello {
class HelloReq;
class HelloReqDefaultTypeInternal;
extern HelloReqDefaultTypeInternal _HelloReq_default_instance_;
class HelloResp;
class HelloRespDefaultTypeInternal;
extern HelloRespDefaultTypeInternal _HelloResp_default_instance_;
}  // namespace hello

namespace hello {

namespace protobuf_hello_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_hello_2eproto

// ===================================================================

class HelloReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:hello.HelloReq) */ {
 public:
  HelloReq();
  virtual ~HelloReq();

  HelloReq(const HelloReq& from);

  inline HelloReq& operator=(const HelloReq& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const HelloReq& default_instance();

  static inline const HelloReq* internal_default_instance() {
    return reinterpret_cast<const HelloReq*>(
               &_HelloReq_default_instance_);
  }

  void Swap(HelloReq* other);

  // implements Message ----------------------------------------------

  inline HelloReq* New() const PROTOBUF_FINAL { return New(NULL); }

  HelloReq* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const HelloReq& from);
  void MergeFrom(const HelloReq& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(HelloReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string Name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:hello.HelloReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  mutable int _cached_size_;
  friend struct  protobuf_hello_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class HelloResp : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:hello.HelloResp) */ {
 public:
  HelloResp();
  virtual ~HelloResp();

  HelloResp(const HelloResp& from);

  inline HelloResp& operator=(const HelloResp& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const HelloResp& default_instance();

  static inline const HelloResp* internal_default_instance() {
    return reinterpret_cast<const HelloResp*>(
               &_HelloResp_default_instance_);
  }

  void Swap(HelloResp* other);

  // implements Message ----------------------------------------------

  inline HelloResp* New() const PROTOBUF_FINAL { return New(NULL); }

  HelloResp* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const HelloResp& from);
  void MergeFrom(const HelloResp& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(HelloResp* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string Result = 1;
  void clear_result();
  static const int kResultFieldNumber = 1;
  const ::std::string& result() const;
  void set_result(const ::std::string& value);
  #if LANG_CXX11
  void set_result(::std::string&& value);
  #endif
  void set_result(const char* value);
  void set_result(const char* value, size_t size);
  ::std::string* mutable_result();
  ::std::string* release_result();
  void set_allocated_result(::std::string* result);

  // @@protoc_insertion_point(class_scope:hello.HelloResp)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr result_;
  mutable int _cached_size_;
  friend struct  protobuf_hello_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// HelloReq

// string Name = 1;
inline void HelloReq::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& HelloReq::name() const {
  // @@protoc_insertion_point(field_get:hello.HelloReq.Name)
  return name_.GetNoArena();
}
inline void HelloReq::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:hello.HelloReq.Name)
}
#if LANG_CXX11
inline void HelloReq::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:hello.HelloReq.Name)
}
#endif
inline void HelloReq::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:hello.HelloReq.Name)
}
inline void HelloReq::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:hello.HelloReq.Name)
}
inline ::std::string* HelloReq::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:hello.HelloReq.Name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* HelloReq::release_name() {
  // @@protoc_insertion_point(field_release:hello.HelloReq.Name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HelloReq::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:hello.HelloReq.Name)
}

// -------------------------------------------------------------------

// HelloResp

// string Result = 1;
inline void HelloResp::clear_result() {
  result_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& HelloResp::result() const {
  // @@protoc_insertion_point(field_get:hello.HelloResp.Result)
  return result_.GetNoArena();
}
inline void HelloResp::set_result(const ::std::string& value) {
  
  result_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:hello.HelloResp.Result)
}
#if LANG_CXX11
inline void HelloResp::set_result(::std::string&& value) {
  
  result_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:hello.HelloResp.Result)
}
#endif
inline void HelloResp::set_result(const char* value) {
  
  result_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:hello.HelloResp.Result)
}
inline void HelloResp::set_result(const char* value, size_t size) {
  
  result_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:hello.HelloResp.Result)
}
inline ::std::string* HelloResp::mutable_result() {
  
  // @@protoc_insertion_point(field_mutable:hello.HelloResp.Result)
  return result_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* HelloResp::release_result() {
  // @@protoc_insertion_point(field_release:hello.HelloResp.Result)
  
  return result_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HelloResp::set_allocated_result(::std::string* result) {
  if (result != NULL) {
    
  } else {
    
  }
  result_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), result);
  // @@protoc_insertion_point(field_set_allocated:hello.HelloResp.Result)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace hello

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_hello_2eproto__INCLUDED
