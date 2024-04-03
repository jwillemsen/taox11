/**
 * @file    taox11_pi_export.h
 * @author  Marcel Smit
 *
 * @brief   Export file for the TAOX11 PI library
 *
 * This file is generated automatically by generate_export_file.pl TAOX11_PortableInterceptor
 *
 * @copyright Copyright (c) Remedy IT Expertise BV
 */
#ifndef TAOX11_PI_EXPORT_H
#define TAOX11_PI_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (TAOX11_PI_HAS_DLL)
#  define TAOX11_PI_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && TAOX11_PI_HAS_DLL */

#if !defined (TAOX11_PI_HAS_DLL)
#  define TAOX11_PI_HAS_DLL 1
#endif /* ! TAOX11_PI_HAS_DLL */

#if defined (TAOX11_PI_HAS_DLL) && (TAOX11_PI_HAS_DLL == 1)
#  if defined (TAOX11_PI_BUILD_DLL)
#    define TAOX11_PortableInterceptor_Export ACE_Proper_Export_Flag
#    define TAOX11_PI_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define TAOX11_PI_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* TAOX11_PI_BUILD_DLL */
#    define TAOX11_PortableInterceptor_Export ACE_Proper_Import_Flag
#    define TAOX11_PI_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define TAOX11_PI_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* TAOX11_PI_BUILD_DLL */
#else /* TAOX11_PI_HAS_DLL == 1 */
#  define TAOX11_PortableInterceptor_Export
#  define TAOX11_PI_SINGLETON_DECLARATION(T)
#  define TAOX11_PI_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* TAOX11_PI_HAS_DLL == 1 */

#endif /* TAOX11_PI_EXPORT_H */

// End of auto generated file.
