/**
 * @file    get_skel_arg.h
 * @author  Martin Corino
 *
 * @brief   x11 skeleton argument traits template
 *
 * @copyright Copyright (c) Remedy IT Expertise BV
 */

#ifndef TAOX11_GET_SKEL_ARG_T_H
#define TAOX11_GET_SKEL_ARG_T_H

#pragma once

#include "tao/x11/arg_traits_t.h"
#include "tao/x11/portable_server/sarg_traits_t.h"

namespace TAOX11_NAMESPACE
{
  namespace PS
  {
    /// Get return value/argument.
    template<typename T>
    typename PS::SArg_Traits<T>::ret_arg_type
    get_ret_arg (TAO_Operation_Details const * details,
                 TAO::Argument * const * skel_args)
    {
      if ((details && details->use_stub_args ()) || !skel_args)
      {
        return static_cast<typename TAOX11_NAMESPACE::Arg_Traits<T>::ret_val *> (details->args ()[0])->arg ();

      }
      else
      {
        return static_cast<typename PS::SArg_Traits<T>::ret_val *> (skel_args[0])->arg ();
      }
    }

    /// Get "in" argument.
    template<typename T>
    typename PS::SArg_Traits<T>::in_arg_type
    get_in_arg (TAO_Operation_Details const * details,
                TAO_TAO::Argument * const * skel_args,
                size_t i)
    {
      if ((details && details->use_stub_args ()) || !skel_args)
      {
        return static_cast<typename TAOX11_NAMESPACE::Arg_Traits<T>::in_arg_val *> (details->args ()[i])->arg ();
      }
      else
      {
        return static_cast<typename PS::SArg_Traits<T>::in_arg_val *> (skel_args[i])->arg ();
      }
    }

    /// Get "inout" argument.
    template<typename T>
    typename PS::SArg_Traits<T>::inout_arg_type
    get_inout_arg (TAO_Operation_Details const * details,
                   TAO::Argument * const * skel_args,
                   size_t i)
    {
      if ((details && details->use_stub_args ()) || !skel_args)
      {
        return static_cast<typename TAOX11_NAMESPACE::Arg_Traits<T>::inout_arg_val *> (details->args ()[i])->arg ();
      }
      else
      {
        return static_cast<typename PS::SArg_Traits<T>::inout_arg_val *> (skel_args[i])->arg ();
      }
    }

    /// Get "out" argument.
    template<typename T>
    typename PS::SArg_Traits<T>::out_arg_type
    get_out_arg (TAO_Operation_Details const * details,
                 TAO::Argument * const * skel_args,
                 size_t i)
    {
      if ((details && details->use_stub_args ()) || !skel_args)
      {
        return static_cast<typename TAOX11_NAMESPACE::Arg_Traits<T>::out_arg_val *> (details->args ()[i])->arg ();
      }
      else
      {
        return static_cast<typename PS::SArg_Traits<T>::out_arg_val *> (skel_args[i])->arg ();
      }
    }
  } // namespace PS
} // namespace TAOX11_NAMESPACE

#endif /* TAOX11_GET_SKEL_ARG_T_H */
