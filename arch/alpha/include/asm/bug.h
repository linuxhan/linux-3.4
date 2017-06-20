/*
 * arch/alpha/include/asm/bug.h
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#ifndef _ALPHA_BUG_H
#define _ALPHA_BUG_H

#include <linux/linkage.h>

#ifdef CONFIG_BUG
#include <asm/pal.h>

/* ??? Would be nice to use .gprel32 here, but we can't be sure that the
   function loaded the GP, so this could fail in modules.  */
#define BUG()	do {							\
	__asm__ __volatile__(						\
		"call_pal %0  # bugchk\n\t"				\
		".long %1\n\t.8byte %2"					\
		: : "i"(PAL_bugchk), "i"(__LINE__), "i"(__FILE__));	\
	unreachable();							\
  } while (0)

#define HAVE_ARCH_BUG
#endif

#include <asm-generic/bug.h>

#endif
