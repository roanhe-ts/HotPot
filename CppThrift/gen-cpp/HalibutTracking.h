/**
 * Autogenerated by Thrift Compiler (0.14.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef HalibutTracking_H
#define HalibutTracking_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include <memory>
#include "halibut_types.h"



#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class HalibutTrackingIf {
 public:
  virtual ~HalibutTrackingIf() {}
  virtual int32_t GetCatchInPoundsToday() = 0;
  virtual int32_t GetCatchInPoundsByDate(const Date& d, const double t) = 0;
};

class HalibutTrackingIfFactory {
 public:
  typedef HalibutTrackingIf Handler;

  virtual ~HalibutTrackingIfFactory() {}

  virtual HalibutTrackingIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(HalibutTrackingIf* /* handler */) = 0;
};

class HalibutTrackingIfSingletonFactory : virtual public HalibutTrackingIfFactory {
 public:
  HalibutTrackingIfSingletonFactory(const ::std::shared_ptr<HalibutTrackingIf>& iface) : iface_(iface) {}
  virtual ~HalibutTrackingIfSingletonFactory() {}

  virtual HalibutTrackingIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(HalibutTrackingIf* /* handler */) {}

 protected:
  ::std::shared_ptr<HalibutTrackingIf> iface_;
};

class HalibutTrackingNull : virtual public HalibutTrackingIf {
 public:
  virtual ~HalibutTrackingNull() {}
  int32_t GetCatchInPoundsToday() {
    int32_t _return = 0;
    return _return;
  }
  int32_t GetCatchInPoundsByDate(const Date& /* d */, const double /* t */) {
    int32_t _return = 0;
    return _return;
  }
};


class HalibutTracking_GetCatchInPoundsToday_args {
 public:

  HalibutTracking_GetCatchInPoundsToday_args(const HalibutTracking_GetCatchInPoundsToday_args&);
  HalibutTracking_GetCatchInPoundsToday_args& operator=(const HalibutTracking_GetCatchInPoundsToday_args&);
  HalibutTracking_GetCatchInPoundsToday_args() {
  }

  virtual ~HalibutTracking_GetCatchInPoundsToday_args() noexcept;

  bool operator == (const HalibutTracking_GetCatchInPoundsToday_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const HalibutTracking_GetCatchInPoundsToday_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HalibutTracking_GetCatchInPoundsToday_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class HalibutTracking_GetCatchInPoundsToday_pargs {
 public:


  virtual ~HalibutTracking_GetCatchInPoundsToday_pargs() noexcept;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _HalibutTracking_GetCatchInPoundsToday_result__isset {
  _HalibutTracking_GetCatchInPoundsToday_result__isset() : success(false) {}
  bool success :1;
} _HalibutTracking_GetCatchInPoundsToday_result__isset;

class HalibutTracking_GetCatchInPoundsToday_result {
 public:

  HalibutTracking_GetCatchInPoundsToday_result(const HalibutTracking_GetCatchInPoundsToday_result&);
  HalibutTracking_GetCatchInPoundsToday_result& operator=(const HalibutTracking_GetCatchInPoundsToday_result&);
  HalibutTracking_GetCatchInPoundsToday_result() : success(0) {
  }

  virtual ~HalibutTracking_GetCatchInPoundsToday_result() noexcept;
  int32_t success;

  _HalibutTracking_GetCatchInPoundsToday_result__isset __isset;

  void __set_success(const int32_t val);

  bool operator == (const HalibutTracking_GetCatchInPoundsToday_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const HalibutTracking_GetCatchInPoundsToday_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HalibutTracking_GetCatchInPoundsToday_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _HalibutTracking_GetCatchInPoundsToday_presult__isset {
  _HalibutTracking_GetCatchInPoundsToday_presult__isset() : success(false) {}
  bool success :1;
} _HalibutTracking_GetCatchInPoundsToday_presult__isset;

class HalibutTracking_GetCatchInPoundsToday_presult {
 public:


  virtual ~HalibutTracking_GetCatchInPoundsToday_presult() noexcept;
  int32_t* success;

  _HalibutTracking_GetCatchInPoundsToday_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _HalibutTracking_GetCatchInPoundsByDate_args__isset {
  _HalibutTracking_GetCatchInPoundsByDate_args__isset() : d(false), t(false) {}
  bool d :1;
  bool t :1;
} _HalibutTracking_GetCatchInPoundsByDate_args__isset;

class HalibutTracking_GetCatchInPoundsByDate_args {
 public:

  HalibutTracking_GetCatchInPoundsByDate_args(const HalibutTracking_GetCatchInPoundsByDate_args&);
  HalibutTracking_GetCatchInPoundsByDate_args& operator=(const HalibutTracking_GetCatchInPoundsByDate_args&);
  HalibutTracking_GetCatchInPoundsByDate_args() : t(0) {
  }

  virtual ~HalibutTracking_GetCatchInPoundsByDate_args() noexcept;
  Date d;
  double t;

  _HalibutTracking_GetCatchInPoundsByDate_args__isset __isset;

  void __set_d(const Date& val);

  void __set_t(const double val);

  bool operator == (const HalibutTracking_GetCatchInPoundsByDate_args & rhs) const
  {
    if (!(d == rhs.d))
      return false;
    if (!(t == rhs.t))
      return false;
    return true;
  }
  bool operator != (const HalibutTracking_GetCatchInPoundsByDate_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HalibutTracking_GetCatchInPoundsByDate_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class HalibutTracking_GetCatchInPoundsByDate_pargs {
 public:


  virtual ~HalibutTracking_GetCatchInPoundsByDate_pargs() noexcept;
  const Date* d;
  const double* t;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _HalibutTracking_GetCatchInPoundsByDate_result__isset {
  _HalibutTracking_GetCatchInPoundsByDate_result__isset() : success(false) {}
  bool success :1;
} _HalibutTracking_GetCatchInPoundsByDate_result__isset;

class HalibutTracking_GetCatchInPoundsByDate_result {
 public:

  HalibutTracking_GetCatchInPoundsByDate_result(const HalibutTracking_GetCatchInPoundsByDate_result&);
  HalibutTracking_GetCatchInPoundsByDate_result& operator=(const HalibutTracking_GetCatchInPoundsByDate_result&);
  HalibutTracking_GetCatchInPoundsByDate_result() : success(0) {
  }

  virtual ~HalibutTracking_GetCatchInPoundsByDate_result() noexcept;
  int32_t success;

  _HalibutTracking_GetCatchInPoundsByDate_result__isset __isset;

  void __set_success(const int32_t val);

  bool operator == (const HalibutTracking_GetCatchInPoundsByDate_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const HalibutTracking_GetCatchInPoundsByDate_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HalibutTracking_GetCatchInPoundsByDate_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _HalibutTracking_GetCatchInPoundsByDate_presult__isset {
  _HalibutTracking_GetCatchInPoundsByDate_presult__isset() : success(false) {}
  bool success :1;
} _HalibutTracking_GetCatchInPoundsByDate_presult__isset;

class HalibutTracking_GetCatchInPoundsByDate_presult {
 public:


  virtual ~HalibutTracking_GetCatchInPoundsByDate_presult() noexcept;
  int32_t* success;

  _HalibutTracking_GetCatchInPoundsByDate_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class HalibutTrackingClient : virtual public HalibutTrackingIf {
 public:
  HalibutTrackingClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  HalibutTrackingClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  int32_t GetCatchInPoundsToday();
  void send_GetCatchInPoundsToday();
  int32_t recv_GetCatchInPoundsToday();
  int32_t GetCatchInPoundsByDate(const Date& d, const double t);
  void send_GetCatchInPoundsByDate(const Date& d, const double t);
  int32_t recv_GetCatchInPoundsByDate();
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class HalibutTrackingProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::std::shared_ptr<HalibutTrackingIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (HalibutTrackingProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_GetCatchInPoundsToday(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_GetCatchInPoundsByDate(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  HalibutTrackingProcessor(::std::shared_ptr<HalibutTrackingIf> iface) :
    iface_(iface) {
    processMap_["GetCatchInPoundsToday"] = &HalibutTrackingProcessor::process_GetCatchInPoundsToday;
    processMap_["GetCatchInPoundsByDate"] = &HalibutTrackingProcessor::process_GetCatchInPoundsByDate;
  }

  virtual ~HalibutTrackingProcessor() {}
};

class HalibutTrackingProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  HalibutTrackingProcessorFactory(const ::std::shared_ptr< HalibutTrackingIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::std::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::std::shared_ptr< HalibutTrackingIfFactory > handlerFactory_;
};

class HalibutTrackingMultiface : virtual public HalibutTrackingIf {
 public:
  HalibutTrackingMultiface(std::vector<std::shared_ptr<HalibutTrackingIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~HalibutTrackingMultiface() {}
 protected:
  std::vector<std::shared_ptr<HalibutTrackingIf> > ifaces_;
  HalibutTrackingMultiface() {}
  void add(::std::shared_ptr<HalibutTrackingIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  int32_t GetCatchInPoundsToday() {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->GetCatchInPoundsToday();
    }
    return ifaces_[i]->GetCatchInPoundsToday();
  }

  int32_t GetCatchInPoundsByDate(const Date& d, const double t) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->GetCatchInPoundsByDate(d, t);
    }
    return ifaces_[i]->GetCatchInPoundsByDate(d, t);
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class HalibutTrackingConcurrentClient : virtual public HalibutTrackingIf {
 public:
  HalibutTrackingConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot, std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(prot);
  }
  HalibutTrackingConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot, std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  int32_t GetCatchInPoundsToday();
  int32_t send_GetCatchInPoundsToday();
  int32_t recv_GetCatchInPoundsToday(const int32_t seqid);
  int32_t GetCatchInPoundsByDate(const Date& d, const double t);
  int32_t send_GetCatchInPoundsByDate(const Date& d, const double t);
  int32_t recv_GetCatchInPoundsByDate(const int32_t seqid);
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif



#endif
