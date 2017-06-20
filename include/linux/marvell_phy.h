/*
 * include/linux/marvell_phy.h
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#ifndef _MARVELL_PHY_H
#define _MARVELL_PHY_H

/* Mask used for ID comparisons */
#define MARVELL_PHY_ID_MASK		0xfffffff0

/* Known PHY IDs */
#define MARVELL_PHY_ID_88E1101		0x01410c60
#define MARVELL_PHY_ID_88E1112		0x01410c90
#define MARVELL_PHY_ID_88E1111		0x01410cc0
#define MARVELL_PHY_ID_88E1118		0x01410e10
#define MARVELL_PHY_ID_88E1121R		0x01410cb0
#define MARVELL_PHY_ID_88E1145		0x01410cd0
#define MARVELL_PHY_ID_88E1149R		0x01410e50
#define MARVELL_PHY_ID_88E1240		0x01410e30
#define MARVELL_PHY_ID_88E1318S		0x01410e90

/* struct phy_device dev_flags definitions */
#define MARVELL_PHY_M1145_FLAGS_RESISTANCE	0x00000001
#define MARVELL_PHY_M1118_DNS323_LEDS		0x00000002

#endif /* _MARVELL_PHY_H */
