/**
 * @file    ami_test_i.cpp
 * @author  Marijke Hengstmengel
 *
 * @brief   CORBA C++11 interface ami test
 *
 * @copyright Copyright (c) Remedy IT Expertise BV
 */

#include "ami_test_i.h"

AMI_Test_i::AMI_Test_i (IDL::traits<CORBA::ORB>::ref_type orb)
  :  orb_ (std::move(orb))
{
}

int32_t
AMI_Test_i::foo (int32_t in_l)
{
  if (in_l == 0)
    {
      throw A::DidTheRightThing(42, "Hello world");
    }
  return in_l;
}

int32_t
AMI_Test_i::foo_no_raises (int32_t in_l)
{
  if (in_l == 0)
    {
      throw A::DidTheRightThing(42, "Hello world");
    }
  return in_l;
}


int32_t
AMI_Test_i::bar (int32_t in_l)
{
  if (in_l == 0)
    {
      throw A::DidAnOtherThing(42, L"Hello there!");
    }
  return in_l;
}


void
AMI_Test_i::shutdown ()
{
  this->orb_->shutdown (false);
}
