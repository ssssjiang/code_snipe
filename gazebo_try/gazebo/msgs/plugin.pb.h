// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: plugin.proto

#ifndef PROTOBUF_plugin_2eproto__INCLUDED
#define PROTOBUF_plugin_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

// Internal implementation detail -- do not call these.
void GZ_MSGS_VISIBLE protobuf_AddDesc_plugin_2eproto();
void protobuf_AssignDesc_plugin_2eproto();
void protobuf_ShutdownFile_plugin_2eproto();

class Plugin;

// ===================================================================

class GZ_MSGS_VISIBLE Plugin : public ::google::protobuf::Message {
 public:
  Plugin();
  virtual ~Plugin();

  Plugin(const Plugin& from);

  inline Plugin& operator=(const Plugin& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Plugin& default_instance();

  void Swap(Plugin* other);

  // implements Message ----------------------------------------------

  Plugin* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Plugin& from);
  void MergeFrom(const Plugin& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // required string filename = 2;
  inline bool has_filename() const;
  inline void clear_filename();
  static const int kFilenameFieldNumber = 2;
  inline const ::std::string& filename() const;
  inline void set_filename(const ::std::string& value);
  inline void set_filename(const char* value);
  inline void set_filename(const char* value, size_t size);
  inline ::std::string* mutable_filename();
  inline ::std::string* release_filename();
  inline void set_allocated_filename(::std::string* filename);

  // optional string innerxml = 3 [default = ""];
  inline bool has_innerxml() const;
  inline void clear_innerxml();
  static const int kInnerxmlFieldNumber = 3;
  inline const ::std::string& innerxml() const;
  inline void set_innerxml(const ::std::string& value);
  inline void set_innerxml(const char* value);
  inline void set_innerxml(const char* value, size_t size);
  inline ::std::string* mutable_innerxml();
  inline ::std::string* release_innerxml();
  inline void set_allocated_innerxml(::std::string* innerxml);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Plugin)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_filename();
  inline void clear_has_filename();
  inline void set_has_innerxml();
  inline void clear_has_innerxml();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* name_;
  ::std::string* filename_;
  ::std::string* innerxml_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void GZ_MSGS_VISIBLE protobuf_AddDesc_plugin_2eproto();
  friend void protobuf_AssignDesc_plugin_2eproto();
  friend void protobuf_ShutdownFile_plugin_2eproto();

  void InitAsDefaultInstance();
  static Plugin* default_instance_;
};
// ===================================================================


// ===================================================================

// Plugin

// required string name = 1;
inline bool Plugin::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Plugin::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Plugin::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Plugin::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& Plugin::name() const {
  return *name_;
}
inline void Plugin::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Plugin::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Plugin::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Plugin::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* Plugin::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Plugin::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string filename = 2;
inline bool Plugin::has_filename() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Plugin::set_has_filename() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Plugin::clear_has_filename() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Plugin::clear_filename() {
  if (filename_ != &::google::protobuf::internal::kEmptyString) {
    filename_->clear();
  }
  clear_has_filename();
}
inline const ::std::string& Plugin::filename() const {
  return *filename_;
}
inline void Plugin::set_filename(const ::std::string& value) {
  set_has_filename();
  if (filename_ == &::google::protobuf::internal::kEmptyString) {
    filename_ = new ::std::string;
  }
  filename_->assign(value);
}
inline void Plugin::set_filename(const char* value) {
  set_has_filename();
  if (filename_ == &::google::protobuf::internal::kEmptyString) {
    filename_ = new ::std::string;
  }
  filename_->assign(value);
}
inline void Plugin::set_filename(const char* value, size_t size) {
  set_has_filename();
  if (filename_ == &::google::protobuf::internal::kEmptyString) {
    filename_ = new ::std::string;
  }
  filename_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Plugin::mutable_filename() {
  set_has_filename();
  if (filename_ == &::google::protobuf::internal::kEmptyString) {
    filename_ = new ::std::string;
  }
  return filename_;
}
inline ::std::string* Plugin::release_filename() {
  clear_has_filename();
  if (filename_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = filename_;
    filename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Plugin::set_allocated_filename(::std::string* filename) {
  if (filename_ != &::google::protobuf::internal::kEmptyString) {
    delete filename_;
  }
  if (filename) {
    set_has_filename();
    filename_ = filename;
  } else {
    clear_has_filename();
    filename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string innerxml = 3 [default = ""];
inline bool Plugin::has_innerxml() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Plugin::set_has_innerxml() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Plugin::clear_has_innerxml() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Plugin::clear_innerxml() {
  if (innerxml_ != &::google::protobuf::internal::kEmptyString) {
    innerxml_->clear();
  }
  clear_has_innerxml();
}
inline const ::std::string& Plugin::innerxml() const {
  return *innerxml_;
}
inline void Plugin::set_innerxml(const ::std::string& value) {
  set_has_innerxml();
  if (innerxml_ == &::google::protobuf::internal::kEmptyString) {
    innerxml_ = new ::std::string;
  }
  innerxml_->assign(value);
}
inline void Plugin::set_innerxml(const char* value) {
  set_has_innerxml();
  if (innerxml_ == &::google::protobuf::internal::kEmptyString) {
    innerxml_ = new ::std::string;
  }
  innerxml_->assign(value);
}
inline void Plugin::set_innerxml(const char* value, size_t size) {
  set_has_innerxml();
  if (innerxml_ == &::google::protobuf::internal::kEmptyString) {
    innerxml_ = new ::std::string;
  }
  innerxml_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Plugin::mutable_innerxml() {
  set_has_innerxml();
  if (innerxml_ == &::google::protobuf::internal::kEmptyString) {
    innerxml_ = new ::std::string;
  }
  return innerxml_;
}
inline ::std::string* Plugin::release_innerxml() {
  clear_has_innerxml();
  if (innerxml_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = innerxml_;
    innerxml_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Plugin::set_allocated_innerxml(::std::string* innerxml) {
  if (innerxml_ != &::google::protobuf::internal::kEmptyString) {
    delete innerxml_;
  }
  if (innerxml) {
    set_has_innerxml();
    innerxml_ = innerxml;
  } else {
    clear_has_innerxml();
    innerxml_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


typedef boost::shared_ptr<gazebo::msgs::Plugin> PluginPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

typedef const boost::shared_ptr<gazebo::msgs::Plugin const> ConstPluginPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_plugin_2eproto__INCLUDED