/*
 * arch/ia64/include/asm/msidef.h
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#ifndef _IA64_MSI_DEF_H
#define _IA64_MSI_DEF_H

/*
 * Shifts for APIC-based data
 */

#define     MSI_DATA_VECTOR_SHIFT	0
#define	    MSI_DATA_VECTOR(v)		(((u8)v) << MSI_DATA_VECTOR_SHIFT)
#define     MSI_DATA_VECTOR_MASK	0xffffff00

#define     MSI_DATA_DELIVERY_MODE_SHIFT	8
#define     MSI_DATA_DELIVERY_FIXED	(0 << MSI_DATA_DELIVERY_MODE_SHIFT)
#define     MSI_DATA_DELIVERY_LOWPRI	(1 << MSI_DATA_DELIVERY_MODE_SHIFT)

#define     MSI_DATA_LEVEL_SHIFT	14
#define     MSI_DATA_LEVEL_DEASSERT	(0 << MSI_DATA_LEVEL_SHIFT)
#define     MSI_DATA_LEVEL_ASSERT	(1 << MSI_DATA_LEVEL_SHIFT)

#define     MSI_DATA_TRIGGER_SHIFT	15
#define     MSI_DATA_TRIGGER_EDGE	(0 << MSI_DATA_TRIGGER_SHIFT)
#define     MSI_DATA_TRIGGER_LEVEL	(1 << MSI_DATA_TRIGGER_SHIFT)

/*
 * Shift/mask fields for APIC-based bus address
 */

#define     MSI_ADDR_DEST_ID_SHIFT	4
#define     MSI_ADDR_HEADER		0xfee00000

#define     MSI_ADDR_DEST_ID_MASK	0xfff0000f
#define     MSI_ADDR_DEST_ID_CPU(cpu)	((cpu) << MSI_ADDR_DEST_ID_SHIFT)

#define     MSI_ADDR_DEST_MODE_SHIFT	2
#define     MSI_ADDR_DEST_MODE_PHYS	(0 << MSI_ADDR_DEST_MODE_SHIFT)
#define	    MSI_ADDR_DEST_MODE_LOGIC	(1 << MSI_ADDR_DEST_MODE_SHIFT)

#define     MSI_ADDR_REDIRECTION_SHIFT	3
#define     MSI_ADDR_REDIRECTION_CPU	(0 << MSI_ADDR_REDIRECTION_SHIFT)
#define     MSI_ADDR_REDIRECTION_LOWPRI	(1 << MSI_ADDR_REDIRECTION_SHIFT)

#endif/* _IA64_MSI_DEF_H */
