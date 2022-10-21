/**
 * Autogenerated by Thrift Compiler (0.14.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef halibut_TYPES_H
#define halibut_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <functional>
#include <memory>




class Date;

typedef struct _Date__isset {
  _Date__isset() : year(false), month(false), day(false) {}
  bool year :1;
  bool month :1;
  bool day :1;
} _Date__isset;

class Date : public virtual ::apache::thrift::TBase {
 public:

  Date(const Date&);
  Date& operator=(const Date&);
  Date() : year(0), month(0), day(0) {
  }

  virtual ~Date() noexcept;
  int16_t year;
  int16_t month;
  int16_t day;

  _Date__isset __isset;

  void __set_year(const int16_t val);

  void __set_month(const int16_t val);

  void __set_day(const int16_t val);

  bool operator == (const Date & rhs) const
  {
    if (!(year == rhs.year))
      return false;
    if (!(month == rhs.month))
      return false;
    if (!(day == rhs.day))
      return false;
    return true;
  }
  bool operator != (const Date &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Date & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Date &a, Date &b);

std::ostream& operator<<(std::ostream& out, const Date& obj);



#endif