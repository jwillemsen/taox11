/**
 * @file    foo.cpp
 * @author  Johnny Willemsen
 *
 * @copyright Copyright (c) Remedy IT Expertise BV
 */
#include "foo.h"

#include "testlib/taox11_testlog.h"

Foo::Foo (IDL::traits<CORBA::ORB>::ref_type orb,
  IDL::traits<PortableServer::POA>::ref_type poa)
  : orb_ (std::move(orb))
  , poa_ (std::move(poa))
{
}

Test::MyBitMask
Foo::test_mybitmask (const Test::MyBitMask & sin,
  Test::MyBitMask & sinout,
  Test::MyBitMask & sout)
{
  sout = sin;
  sinout = sin;
  Test::MyBitMask sret = sin;
  return sret;
}

Test::MyBitMaskBound8
Foo::test_mybitmaskbound8 (const Test::MyBitMaskBound8 & sin,
  Test::MyBitMaskBound8 & sinout,
  Test::MyBitMaskBound8 & sout)
{
  sout = sin;
  sinout = sin;
  Test::MyBitMaskBound8 sret = sin;
  return sret;
}

void
Foo::shutdown ()
{
  this->orb_->shutdown (false);
}
