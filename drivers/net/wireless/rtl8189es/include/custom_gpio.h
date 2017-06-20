/*
 * drivers/net/wireless/rtl8189es/include/custom_gpio.h
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#ifndef __CUSTOM_GPIO_H__
#define __CUSTOM_GPIO_H___

#include <drv_conf.h>
#include <osdep_service.h>

#ifdef PLATFORM_OS_XP
#include <drv_types_xp.h>
#endif

#ifdef PLATFORM_OS_CE
#include <drv_types_ce.h>
#endif

#ifdef PLATFORM_LINUX
#include <drv_types_linux.h>
#endif

typedef enum cust_gpio_modes {
	WLAN_PWDN_ON,
	WLAN_PWDN_OFF,
	WLAN_POWER_ON,
	WLAN_POWER_OFF,
	WLAN_BT_PWDN_ON,
	WLAN_BT_PWDN_OFF
} cust_gpio_modes_t;

extern int rtw_wifi_gpio_init(void);
extern int rtw_wifi_gpio_deinit(void);
extern void rtw_wifi_gpio_wlan_ctrl(int onoff);

#endif
