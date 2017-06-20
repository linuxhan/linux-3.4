/*
 * include/linux/smscphy.h
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#ifndef __LINUX_SMSCPHY_H__
#define __LINUX_SMSCPHY_H__

#define MII_LAN83C185_ISF 29 /* Interrupt Source Flags */
#define MII_LAN83C185_IM  30 /* Interrupt Mask */
#define MII_LAN83C185_CTRL_STATUS 17 /* Mode/Status Register */

#define MII_LAN83C185_ISF_INT1 (1<<1) /* Auto-Negotiation Page Received */
#define MII_LAN83C185_ISF_INT2 (1<<2) /* Parallel Detection Fault */
#define MII_LAN83C185_ISF_INT3 (1<<3) /* Auto-Negotiation LP Ack */
#define MII_LAN83C185_ISF_INT4 (1<<4) /* Link Down */
#define MII_LAN83C185_ISF_INT5 (1<<5) /* Remote Fault Detected */
#define MII_LAN83C185_ISF_INT6 (1<<6) /* Auto-Negotiation complete */
#define MII_LAN83C185_ISF_INT7 (1<<7) /* ENERGYON */

#define MII_LAN83C185_ISF_INT_ALL (0x0e)

#define MII_LAN83C185_ISF_INT_PHYLIB_EVENTS \
	(MII_LAN83C185_ISF_INT6 | MII_LAN83C185_ISF_INT4 | \
	 MII_LAN83C185_ISF_INT7)

#define MII_LAN83C185_EDPWRDOWN (1 << 13) /* EDPWRDOWN */
#define MII_LAN83C185_ENERGYON  (1 << 1)  /* ENERGYON */

#endif /* __LINUX_SMSCPHY_H__ */
