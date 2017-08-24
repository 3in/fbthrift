/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/Cursor.h>

#include <thrift/lib/cpp2/GeneratedHeaderHelper.h>





namespace cpp2 {

class ReflectionStruct;

class ReflectionStruct : private apache::thrift::detail::st::ComparisonOperators<ReflectionStruct> {
 public:

  ReflectionStruct() :
      fieldA(5) {}
  // FragileConstructor for use in initialization lists only

  ReflectionStruct(apache::thrift::FragileConstructor, int32_t fieldA__arg) :
      fieldA(std::move(fieldA__arg)) {
    __isset.fieldA = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  ReflectionStruct(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    ReflectionStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    fieldA = arg.move();
    __isset.fieldA = true;
  }

  ReflectionStruct(ReflectionStruct&&) = default;

  ReflectionStruct(const ReflectionStruct&) = default;

  ReflectionStruct& operator=(ReflectionStruct&&) = default;

  ReflectionStruct& operator=(const ReflectionStruct&) = default;
  void __clear();

  virtual ~ReflectionStruct() {}

  int32_t fieldA;

  struct __isset {
    void __clear() {
      fieldA = false;
    }

    bool fieldA = false;
  } __isset;
  bool operator==(const ReflectionStruct& rhs) const;

  bool operator < (const ReflectionStruct& rhs) const {
    if (!(fieldA == rhs.fieldA)) {
      return fieldA < rhs.fieldA;
    }
    (void)rhs;
    return false;
  }

  int32_t get_fieldA() const {
    return fieldA;
  }

  int32_t& set_fieldA(int32_t fieldA_) {
    fieldA = fieldA_;
    __isset.fieldA = true;
    return fieldA;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  static void translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype);
};

void swap(ReflectionStruct& a, ReflectionStruct& b);
extern template uint32_t ReflectionStruct::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t ReflectionStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t ReflectionStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t ReflectionStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t ReflectionStruct::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t ReflectionStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t ReflectionStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t ReflectionStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::ReflectionStruct>::clear( ::cpp2::ReflectionStruct* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::ReflectionStruct>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::ReflectionStruct>::write(Protocol* proto,  ::cpp2::ReflectionStruct const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::ReflectionStruct>::read(Protocol* proto,  ::cpp2::ReflectionStruct* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::ReflectionStruct>::serializedSize(Protocol const* proto,  ::cpp2::ReflectionStruct const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::ReflectionStruct>::serializedSizeZC(Protocol const* proto,  ::cpp2::ReflectionStruct const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

} // cpp2
