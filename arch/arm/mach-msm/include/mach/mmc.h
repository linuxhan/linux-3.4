/*
 * arch/arm/mach-msm/include/mach/mmc.h
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
/*
 *  arch/arm/include/asm/mach/mmc.h
 */
#ifndef ASMARM_MACH_MMC_H
#define ASMARM_MACH_MMC_H

#include <linux/mmc/host.h>
#include <linux/mmc/card.h>
#include <linux/mmc/sdio_func.h>

struct msm_mmc_gpio {
	unsigned no;
	const char *name;
};

struct msm_mmc_gpio_data {
	struct msm_mmc_gpio *gpio;
	u8 size;
};

struct msm_mmc_platform_data {
	unsigned int ocr_mask;			/* available voltages */
	u32 (*translate_vdd)(struct device *, unsigned int);
	unsigned int (*status)(struct device *);
	int (*register_status_notify)(void (*callback)(int card_present, void *dev_id), void *dev_id);
	struct msm_mmc_gpio_data *gpio_data;
	void (*init_card)(struct mmc_card *card);
};

#endif
