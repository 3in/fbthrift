/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "src/gen-cpp2/module_types.h"
#include "src/gen-cpp2/module_types.tcc"

#include <algorithm>
#include <folly/Indestructible.h>

#include "src/gen-cpp2/module_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits< ::some::ns::ModuleA>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "i32Field") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "strField") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "listField") {
    fid = 3;
    _ftype = apache::thrift::protocol::T_LIST;
  }
  else if (_fname == "mapField") {
    fid = 4;
    _ftype = apache::thrift::protocol::T_MAP;
  }
}
void TccStructTraits< ::some::ns::ModuleB>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "i32Field") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_I32;
  }
}
void TccStructTraits< ::some::ns::ExceptionA>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "code") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "msg") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_STRING;
  }
}
void TccStructTraits< ::some::ns::ExceptionB>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "code") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "msg") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_STRING;
  }
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace some { namespace ns {

ModuleA::ModuleA(apache::thrift::FragileConstructor, int32_t i32Field__arg, std::string strField__arg, std::vector<int16_t> listField__arg, std::map<std::string, int32_t> mapField__arg) :
    i32Field(std::move(i32Field__arg)),
    strField(std::move(strField__arg)),
    listField(std::move(listField__arg)),
    mapField(std::move(mapField__arg)) {
  __isset.i32Field = true;
  __isset.strField = true;
  __isset.listField = true;
  __isset.mapField = true;
}

void ModuleA::__clear() {
  // clear all fields
  i32Field = 0;
  strField = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  listField.clear();
  mapField.clear();
  __isset = {};
}

bool ModuleA::operator==(const ModuleA& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  if (!(lhs.i32Field == rhs.i32Field)) {
    return false;
  }
  if (!(lhs.strField == rhs.strField)) {
    return false;
  }
  if (!(lhs.listField == rhs.listField)) {
    return false;
  }
  if (!(lhs.mapField == rhs.mapField)) {
    return false;
  }
  return true;
}

bool ModuleA::operator<(const ModuleA& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  if (!(lhs.i32Field == rhs.i32Field)) {
    return lhs.i32Field < rhs.i32Field;
  }
  if (!(lhs.strField == rhs.strField)) {
    return lhs.strField < rhs.strField;
  }
  if (!(lhs.listField == rhs.listField)) {
    return lhs.listField < rhs.listField;
  }
  if (!(lhs.mapField == rhs.mapField)) {
    return lhs.mapField < rhs.mapField;
  }
  return false;
}

const std::vector<int16_t>& ModuleA::get_listField() const& {
  return listField;
}

std::vector<int16_t> ModuleA::get_listField() && {
  return std::move(listField);
}

const std::map<std::string, int32_t>& ModuleA::get_mapField() const& {
  return mapField;
}

std::map<std::string, int32_t> ModuleA::get_mapField() && {
  return std::move(mapField);
}


void swap(ModuleA& a, ModuleA& b) {
  using ::std::swap;
  swap(a.i32Field, b.i32Field);
  swap(a.strField, b.strField);
  swap(a.listField, b.listField);
  swap(a.mapField, b.mapField);
  swap(a.__isset, b.__isset);
}

template void ModuleA::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ModuleA::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ModuleA::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ModuleA::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void ModuleA::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t ModuleA::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ModuleA::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ModuleA::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // some::ns
namespace some { namespace ns {

ModuleB::ModuleB(apache::thrift::FragileConstructor, int32_t i32Field__arg) :
    i32Field(std::move(i32Field__arg)) {
  __isset.i32Field = true;
}

void ModuleB::__clear() {
  // clear all fields
  i32Field = 0;
  __isset = {};
}

bool ModuleB::operator==(const ModuleB& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  if (!(lhs.i32Field == rhs.i32Field)) {
    return false;
  }
  return true;
}

bool ModuleB::operator<(const ModuleB& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  if (!(lhs.i32Field == rhs.i32Field)) {
    return lhs.i32Field < rhs.i32Field;
  }
  return false;
}


void swap(ModuleB& a, ModuleB& b) {
  using ::std::swap;
  swap(a.i32Field, b.i32Field);
  swap(a.__isset, b.__isset);
}

template void ModuleB::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ModuleB::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ModuleB::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ModuleB::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void ModuleB::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t ModuleB::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ModuleB::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ModuleB::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // some::ns
namespace some { namespace ns {

ExceptionA::ExceptionA(apache::thrift::FragileConstructor, int32_t code__arg, std::string msg__arg) :
    code(std::move(code__arg)),
    msg(std::move(msg__arg)) {
  __isset.code = true;
  __isset.msg = true;
}

void ExceptionA::__clear() {
  // clear all fields
  code = 0;
  msg = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  __isset = {};
}

bool ExceptionA::operator==(const ExceptionA& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  if (!(lhs.code == rhs.code)) {
    return false;
  }
  if (!(lhs.msg == rhs.msg)) {
    return false;
  }
  return true;
}

bool ExceptionA::operator<(const ExceptionA& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  if (!(lhs.code == rhs.code)) {
    return lhs.code < rhs.code;
  }
  if (!(lhs.msg == rhs.msg)) {
    return lhs.msg < rhs.msg;
  }
  return false;
}


void swap(ExceptionA& a, ExceptionA& b) {
  using ::std::swap;
  swap(a.code, b.code);
  swap(a.msg, b.msg);
  swap(a.__isset, b.__isset);
}

template void ExceptionA::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ExceptionA::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ExceptionA::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ExceptionA::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void ExceptionA::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t ExceptionA::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ExceptionA::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ExceptionA::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // some::ns
namespace some { namespace ns {

ExceptionB::ExceptionB(apache::thrift::FragileConstructor, int32_t code__arg, std::string msg__arg) :
    code(std::move(code__arg)),
    msg(std::move(msg__arg)) {
  __isset.code = true;
  __isset.msg = true;
}

void ExceptionB::__clear() {
  // clear all fields
  code = 0;
  msg = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  __isset = {};
}

bool ExceptionB::operator==(const ExceptionB& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  if (!(lhs.code == rhs.code)) {
    return false;
  }
  if (!(lhs.msg == rhs.msg)) {
    return false;
  }
  return true;
}

bool ExceptionB::operator<(const ExceptionB& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  if (!(lhs.code == rhs.code)) {
    return lhs.code < rhs.code;
  }
  if (!(lhs.msg == rhs.msg)) {
    return lhs.msg < rhs.msg;
  }
  return false;
}


void swap(ExceptionB& a, ExceptionB& b) {
  using ::std::swap;
  swap(a.code, b.code);
  swap(a.msg, b.msg);
  swap(a.__isset, b.__isset);
}

template void ExceptionB::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ExceptionB::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ExceptionB::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ExceptionB::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void ExceptionB::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t ExceptionB::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ExceptionB::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ExceptionB::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // some::ns
