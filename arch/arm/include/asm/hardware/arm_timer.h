/*
 * arch/arm/include/asm/hardware/arm_timer.h
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#ifndef __ASM_ARM_HARDWARE_ARM_TIMER_H
#define __ASM_ARM_HARDWARE_ARM_TIMER_H

/*
 * ARM timer implementation, found in Integrator, Versatile and Realview
 * platforms.  Not all platforms support all registers and bits in these
 * registers, so we mark them with A for Integrator AP, C for Integrator
 * CP, V for Versatile and R for Realview.
 *
 * Integrator AP has 16-bit timers, Integrator CP, Versatile and Realview
 * can have 16-bit or 32-bit selectable via a bit in the control register.
 *
 * Every SP804 contains two identical timers.
 */
#define TIMER_1_BASE	0x00
#define TIMER_2_BASE	0x20

#define TIMER_LOAD	0x00			/* ACVR rw */
#define TIMER_VALUE	0x04			/* ACVR ro */
#define TIMER_CTRL	0x08			/* ACVR rw */
#define TIMER_CTRL_ONESHOT	(1 << 0)	/*  CVR */
#define TIMER_CTRL_32BIT	(1 << 1)	/*  CVR */
#define TIMER_CTRL_DIV1		(0 << 2)	/* ACVR */
#define TIMER_CTRL_DIV16	(1 << 2)	/* ACVR */
#define TIMER_CTRL_DIV256	(2 << 2)	/* ACVR */
#define TIMER_CTRL_IE		(1 << 5)	/*   VR */
#define TIMER_CTRL_PERIODIC	(1 << 6)	/* ACVR */
#define TIMER_CTRL_ENABLE	(1 << 7)	/* ACVR */

#define TIMER_INTCLR	0x0c			/* ACVR wo */
#define TIMER_RIS	0x10			/*  CVR ro */
#define TIMER_MIS	0x14			/*  CVR ro */
#define TIMER_BGLOAD	0x18			/*  CVR rw */

#endif
