/*
 * include/linux/mfd/axp-mfd-19.h
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#ifndef __LINUX_AXP_MFD_19_H_
#define __LINUX_AXP_MFD_19_H_

/* Unified sub device IDs for AXP */
/* LDO0 For RTCLDO ,LDO1-3 for ALDO,LDO*/
enum {
	AXP19_ID_LDO1,   //RTC
	AXP19_ID_LDO2,   //ALDO1
	AXP19_ID_LDO3,   //ALDO2
	AXP19_ID_LDO4,   //ALDO3
	AXP19_ID_LDO5,   //DLDO1
	AXP19_ID_LDOIO0 = 30,
	AXP19_ID_DCDC1 = 40,
	AXP19_ID_DCDC2,
	AXP19_ID_DCDC3,
	AXP19_ID_SUPPLY,
};

/*For AXP19*/
#define AXP19                       (19)
#define POWER19_STATUS              (0x00)
#define POWER19_MODE_CHGSTATUS      (0x01)
#define POWER19_OTG_STATUS          (0x02)
#define POWER19_IC_TYPE             (0x03)
#define POWER19_DATA_BUFFER1        (0x06)
#define POWER19_DATA_BUFFER2        (0x07)
#define POWER19_DATA_BUFFER3        (0x08)
#define POWER19_DATA_BUFFER4        (0x09)
#define POWER19_VERSION             (0x0C)
#define POWER19_LDO3_DC2_CTL        (0x10)
#define POWER19_LDO24_DC13_CTL      (0x12)
#define POWER19_DC2OUT_VOL          (0x23)
#define POWER19_LDO3_DC2_DVM        (0x25)
#define POWER19_DC1OUT_VOL          (0x26)
#define POWER19_DC3OUT_VOL          (0x27)
#define POWER19_LDO24OUT_VOL        (0x28)
#define POWER19_LDO3OUT_VOL         (0x29)
#define POWER19_IPS_SET             (0x30)
#define POWER19_VOFF_SET            (0x31)
#define POWER19_OFF_CTL             (0x32)
#define POWER19_CHARGE1             (0x33)
#define POWER19_CHARGE2             (0x34)
#define POWER19_BACKUP_CHG          (0x35)
#define POWER19_POK_SET             (0x36)
#define POWER19_DCDC_FREQSET        (0x37)
#define POWER19_VLTF_CHGSET         (0x38)
#define POWER19_VHTF_CHGSET         (0x39)
#define POWER19_APS_WARNING1        (0x3A)
#define POWER19_APS_WARNING2        (0x3B)
#define POWER19_VLTF_DISCHGSET      (0x3C)
#define POWER19_VHTF_DISCHGSET      (0x3D)
#define POWER19_DCDC_MODESET        (0x80)
#define POWER19_VOUT_MONITOR        (0x81)
#define POWER19_ADC_EN1             (0x82)
#define POWER19_ADC_EN2             (0x83)
#define POWER19_ADC_SPEED           (0x84)
#define POWER19_ADC_INPUTRANGE      (0x85)
#define POWER19_TIMER_CTL           (0x8A)
#define POWER19_VBUS_DET_SRP        (0x8B)
#define POWER19_HOTOVER_CTL         (0x8F)
#define POWER19_GPIO0_CTL           (0x90)
#define POWER19_GPIO0_VOL           (0x91)
#define POWER19_GPIO1_CTL           (0x92)
#define POWER19_GPIO2_CTL           (0x93)
#define POWER19_GPIO012_SIGNAL      (0x94)
#define POWER19_SENSE_CTL           (0x95)
#define POWER19_SENSE_SIGNAL        (0x96)
#define POWER19_GPIO20_PDCTL        (0x97)
#define POWER19_PWM1_FREQ           (0x98)
#define POWER19_PWM1_DUTYDE         (0x99)
#define POWER19_PWM1_DUTY           (0x9A)
#define POWER19_PWM2_FREQ           (0x9B)
#define POWER19_PWM2_DUTYDE         (0x9C)
#define POWER19_PWM2_DUTY           (0x9D)
#define POWER19_RSTO_CTL            (0x9E)
#define POWER19_GPIO67_CTL          (0x9F)
#define POWER19_INTEN1              (0x40)
#define POWER19_INTEN2              (0x41)
#define POWER19_INTEN3              (0x42)
#define POWER19_INTEN4              (0x43)
#define POWER19_INTSTS1             (0x44)
#define POWER19_INTSTS2             (0x45)
#define POWER19_INTSTS3             (0x46)
#define POWER19_INTSTS4             (0x47)
#define POWER19_GPIO67_CFG          (0xE0)

//axp 19 adc data register
#define POWER19_BAT_AVERVOL_H8          (0x78)
#define POWER19_BAT_AVERVOL_L4          (0x79)
#define POWER19_BAT_AVERCHGCUR_H8       (0x7A)
#define POWER19_BAT_AVERCHGCUR_L5       (0x7B)
#define POWER19_ACIN_VOL_H8             (0x56)
#define POWER19_ACIN_VOL_L4             (0x57)
#define POWER19_ACIN_CUR_H8             (0x58)
#define POWER19_ACIN_CUR_L4             (0x59)
#define POWER19_VBUS_VOL_H8             (0x5A)
#define POWER19_VBUS_VOL_L4             (0x5B)
#define POWER19_VBUS_CUR_H8             (0x5C)
#define POWER19_VBUS_CUR_L4             (0x5D)
#define POWER19_BAT_AVERDISCHGCUR_H8    (0x7C)
#define POWER19_BAT_AVERDISCHGCUR_L5    (0x7D)
#define POWER19_APS_AVERVOL_H8          (0x7E)
#define POWER19_APS_AVERVOL_L4          (0x7F)
#define POWER19_BAT_CHGCOULOMB3         (0xB0)
#define POWER19_BAT_CHGCOULOMB2         (0xB1)
#define POWER19_BAT_CHGCOULOMB1         (0xB2)
#define POWER19_BAT_CHGCOULOMB0         (0xB3)
#define POWER19_BAT_DISCHGCOULOMB3      (0xB4)
#define POWER19_BAT_DISCHGCOULOMB2      (0xB5)
#define POWER19_BAT_DISCHGCOULOMB1      (0xB6)
#define POWER19_BAT_DISCHGCOULOMB0      (0xB7)
#define POWER19_COULOMB_CTL             (0xB8)
#define POWER19_BAT_POWERH8             (0x70)
#define POWER19_BAT_POWERM8             (0x71)
#define POWER19_BAT_POWERL8             (0x72)

/*  AXP19  */
#define	AXP19_IRQ_USBLO         ( 1 <<  1)
#define	AXP19_IRQ_USBRE         ( 1 <<  2)
#define	AXP19_IRQ_USBIN         ( 1 <<  3)
#define	AXP19_IRQ_USBOV         ( 1 <<  4)
#define	AXP19_IRQ_ACRE          ( 1 <<  5)
#define	AXP19_IRQ_ACIN          ( 1 <<  6)
#define	AXP19_IRQ_ACOV          ( 1 <<  7)
#define	AXP19_IRQ_TEMLO         ( 1 <<  8)
#define	AXP19_IRQ_TEMOV         ( 1 <<  9)
#define	AXP19_IRQ_CHAOV         ( 1 << 10)
#define	AXP19_IRQ_CHAST         ( 1 << 11)
#define	AXP19_IRQ_BATATOU       ( 1 << 12)
#define	AXP19_IRQ_BATATIN       ( 1 << 13)
#define AXP19_IRQ_BATRE         ( 1 << 14)
#define AXP19_IRQ_BATIN         ( 1 << 15)
#define	AXP19_IRQ_PEKLO         ( 1 << 16)
#define	AXP19_IRQ_PEKSH         ( 1 << 17)
#define AXP19_IRQ_LDO3LO        ( 1 << 18)
#define AXP19_IRQ_DCDC3LO       ( 1 << 19)
#define AXP19_IRQ_DCDC2LO       ( 1 << 20)
#define AXP19_IRQ_DCDC1LO       ( 1 << 21)
#define AXP19_IRQ_CHACURLO      ( 1 << 22)
#define AXP19_IRQ_ICTEMOV       ( 1 << 23)

#define AXP19_IRQ_EXTLOWARN     ( 1 << 25)
#define AXP19_IRQ_USBSESUN      ( 1 << 26)
#define AXP19_IRQ_USBSESVA      ( 1 << 27)
#define AXP19_IRQ_USBUN         ( 1 << 28)
#define AXP19_IRQ_USBVA         ( 1 << 29)
#define AXP19_IRQ_NOECLO        ( 1 << 30)
#define AXP19_IRQ_NOEOPE        ( 1 << 31)

/*  AXP19  */
#define AXP19_STATUS_SOURCE     ( 1 <<  0)
#define AXP19_STATUS_ACUSBSH    ( 1 <<  1)
#define AXP19_STATUS_BATCURDIR  ( 1 <<  2)
#define AXP19_STATUS_USBLAVHO   ( 1 <<  3)
#define AXP19_STATUS_USBVA      ( 1 <<  4)
#define AXP19_STATUS_USBEN      ( 1 <<  5)
#define AXP19_STATUS_ACVA       ( 1 <<  6)
#define AXP19_STATUS_ACEN       ( 1 <<  7)

#define AXP19_STATUS_OPENWAY     ( 1 <<  9)
#define AXP19_STATUS_CHACURLOEXP ( 1 << 10)
#define AXP19_STATUS_BATINACT    ( 1 << 11)
#define AXP19_STATUS_BATEN       ( 1 << 13)
#define AXP19_STATUS_INCHAR      ( 1 << 14)
#define AXP19_STATUS_ICTEMOV     ( 1 << 15)

#endif /* __LINUX_AXP_MFD_19_H_ */

