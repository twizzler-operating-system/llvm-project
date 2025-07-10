// -*- C++ -*-
//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_CTYPE_H
#define _LIBCPP_CTYPE_H

/*
    ctype.h synopsis

int isalnum(int c);
int isalpha(int c);
int isblank(int c);  // C99
int iscntrl(int c);
int isdigit(int c);
int isgraph(int c);
int islower(int c);
int isprint(int c);
int ispunct(int c);
int isspace(int c);
int isupper(int c);
int isxdigit(int c);
int tolower(int c);
int toupper(int c);
*/

#if defined(__cplusplus) && __cplusplus < 201103L && defined(_LIBCPP_USE_FROZEN_CXX03_HEADERS)
#  include <__cxx03/ctype.h>
#else
#  include <__config>

#  if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
#    pragma GCC system_header
#  endif

#  if __has_include_next(<ctype.h>)
#    include_next <ctype.h>
#  endif
#ifdef __cplusplus
extern "C" {
#endif

#ifndef __MLIBC_ABI_ONLY

/* Character classification function [7.4.1] */
int isalnum(int __c);
int isalpha(int __c);
int isblank(int __c);
int iscntrl(int __c);
int isdigit(int __c);
int isgraph(int __c);
int islower(int __c);
int isprint(int __c);
int ispunct(int __c);
int isspace(int __c);
int isupper(int __c);
int isxdigit(int __c);

/* glibc extensions. */
int isascii(int __c);

/* Character case mapping functions [7.4.2] */
int tolower(int __c);
int toupper(int __c);

#endif /* !__MLIBC_ABI_ONLY */

/* Borrowed from glibc */
#define	toascii(c)	((c) & 0x7f)

#ifdef __cplusplus
}
#endif
#  ifdef __cplusplus

#    undef isalnum
#    undef isalpha
#    undef isblank
#    undef iscntrl
#    undef isdigit
#    undef isgraph
#    undef islower
#    undef isprint
#    undef ispunct
#    undef isspace
#    undef isupper
#    undef isxdigit
#    undef tolower
#    undef toupper

#  endif
#endif // defined(__cplusplus) && __cplusplus < 201103L && defined(_LIBCPP_USE_FROZEN_CXX03_HEADERS)

#endif // _LIBCPP_CTYPE_H
