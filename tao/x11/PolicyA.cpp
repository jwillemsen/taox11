/**
 * @file    PolicyA.cpp
 * @author  Martin Corino
 *
 * @brief   CORBA C++11 Policy client stub class
 * Handcrafted after initial generation by RIDL.
 *
 * @copyright Copyright (c) Remedy IT Expertise BV
 */
/*
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT Expertise BV
 *        The Netherlands
 *        https://www.remedy.nl
 */

#define __TAOX11_INCLUDE_STUB_PROXY__

#include "tao/CDR.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "tao/AnyTypeCode/PolicyA.h"

#include "tao/x11/objproxy.h"
#include "tao/x11/system_exception_x11.h"
#include "tao/x11/anytypecode/typecode_impl.h"

#include "PolicyC.h"

namespace __tao
{
  namespace TAOX11_NAMESPACE
  {
    namespace CORBA
    {
      TAO_CORBA::TypeCode_ptr const _tc_Policy = 0; // dummy to satify linker
    }
  }
}

// generated from c++/cli_src/typecode.erb
TAOX11_CORBA::typecode_reference const TAOX11_CORBA::_tc_PolicyErrorCode =
  TAOX11_CORBA::make_reference< TAOX11_CORBA::TypeCode_impl> (
    TAO_CORBA::_tc_PolicyErrorCode, true);

// generated from c++/cli_src/typecode.erb
TAOX11_CORBA::typecode_reference const TAOX11_CORBA::_tc_PolicyError =
  TAOX11_CORBA::make_reference< TAOX11_CORBA::TypeCode_impl> (
    TAO_CORBA::_tc_PolicyError, true);

// generated from c++/cli_src/typecode.erb
TAOX11_CORBA::typecode_reference const TAOX11_CORBA::_tc_InvalidPolicies =
  TAOX11_CORBA::make_reference< TAOX11_CORBA::TypeCode_impl> (
    TAO_CORBA::_tc_InvalidPolicies, true);

// generated from c++/cli_src/typecode.erb
TAOX11_CORBA::typecode_reference const TAOX11_CORBA::_tc_Policy =
  TAOX11_CORBA::make_reference< TAOX11_CORBA::TypeCode_impl> (
    TAO_CORBA::_tc_Policy, true);

// generated from StubSourceAnyOpWriter#pre_visit
namespace TAOX11_NAMESPACE
{

  // generated from c++/cli_src/anyop.erb
  void operator<<= (TAOX11_CORBA::Any &, const TAOX11_CORBA::PolicyError&)
  {}
  void operator<<= (TAOX11_CORBA::Any &, TAOX11_CORBA::PolicyError&&)
  {}
  bool operator>>= (const TAOX11_CORBA::Any &, TAOX11_CORBA::PolicyError&)
  {
    return false;
  }

  // generated from c++/cli_src/anyop.erb
  void operator<<= (TAOX11_CORBA::Any &, const TAOX11_CORBA::InvalidPolicies&)
  {}
  void operator<<= (TAOX11_CORBA::Any &, TAOX11_CORBA::InvalidPolicies&&)
  {}
  bool operator>>= (const TAOX11_CORBA::Any &, TAOX11_CORBA::InvalidPolicies&)
  {
    return false;
  }

  // generated from c++/cli_src/anyop.erb
  void operator<<= (TAOX11_CORBA::Any &, IDL::traits< TAOX11_CORBA::Policy>::ref_type)
  {}
  bool operator>>= (const TAOX11_CORBA::Any &, IDL::traits< TAOX11_CORBA::Policy>::ref_type&)
  {
    return false;
  }

} // namespace TAOX11_NAMESPACE

// -*- END -*-
