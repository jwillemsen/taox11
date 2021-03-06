/**
 * @file    ami_test_i.h
 * @author  Marijke Hengstmengel
 *
 * @brief   CORBA C++11 interface ami test
 *
 * @copyright Copyright (c) Remedy IT Expertise BV
 */
#ifndef TAO_AMI_TEST_I_H
#define TAO_AMI_TEST_I_H

#include "testlib/taox11_testlog.h"

#include "ami_testS.h"

class AMI_TEST_SKEL_Export MyFoo_i
: public virtual CORBA::servant_traits< MyFoo>::base_type
{
public:
  /// ctor
  MyFoo_i();

  // The MyFoo methods.
  int32_t foo (int32_t& out_l,
               int32_t in_l,
               const std::string& in_str) override;
  int32_t yadda () override;
  void yadda (int32_t yadda) override;
  bool bool_attr() override;
  void bool_attr(bool) override;
  std::string foo_struct (structType &out_t) override;

private:
  int32_t yadda_;
  int32_t in_l_;
  int32_t in_l_last_;
  bool attr_bool_;
  const std::string in_str_;
  const std::string in_str_last_;
};

class AMI_TEST_SKEL_Export MyDerived_i
: public virtual CORBA::servant_traits< A::MyDerived>::base_type
{
public:
  int32_t foo (int32_t& out_l,
               int32_t in_l,
               const std::string& in_str) override;
  int32_t yadda () override;
  void yadda (int32_t yadda) override;
  bool bool_attr() override;
  void bool_attr(bool) override;
  std::string foo_struct (structType &out_t) override;
  int32_t do_something (const std::string& ) override;
  int32_t my_derived_attrib () override;
  void my_derived_attrib (int32_t) override;
};
/// Implement the Hello interface
class AMI_TEST_SKEL_Export Hello_i:
    public virtual CORBA::servant_traits<Hello>::base_type
{
public:
  /// Constructor
  Hello_i(IDL::traits<CORBA::ORB>::ref_type orb,
      IDL::traits<PortableServer::POA>::ref_type poa);

  // = The skeleton methods
  IDL::traits<MyFoo>::ref_type get_iMyFoo() override;
  IDL::traits<A::MyDerived>::ref_type get_iMyDerived() override;

  void shutdown() override;
private:
  /// Use an ORB reference to convert strings to objects and shutdown
  /// the application.
  IDL::traits<CORBA::ORB>::ref_type orb_;
  IDL::traits<PortableServer::POA>::ref_type poa_;
};

#endif /* TAO_AMI_TEST_I_H */
