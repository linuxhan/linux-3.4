/*
 * arch/sh/include/cpu-sh2a/cpu/sh7203.h
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#ifndef __ASM_SH7203_H__
#define __ASM_SH7203_H__

enum {
	/* PA */
	GPIO_PA7, GPIO_PA6, GPIO_PA5, GPIO_PA4,
	GPIO_PA3, GPIO_PA2, GPIO_PA1, GPIO_PA0,

	/* PB */
	GPIO_PB12,
	GPIO_PB11, GPIO_PB10, GPIO_PB9, GPIO_PB8,
	GPIO_PB7, GPIO_PB6, GPIO_PB5, GPIO_PB4,
	GPIO_PB3, GPIO_PB2, GPIO_PB1, GPIO_PB0,

	/* PC */
	GPIO_PC14, GPIO_PC13, GPIO_PC12,
	GPIO_PC11, GPIO_PC10, GPIO_PC9, GPIO_PC8,
	GPIO_PC7, GPIO_PC6, GPIO_PC5, GPIO_PC4,
	GPIO_PC3, GPIO_PC2, GPIO_PC1, GPIO_PC0,

	/* PD */
	GPIO_PD15, GPIO_PD14, GPIO_PD13, GPIO_PD12,
	GPIO_PD11, GPIO_PD10, GPIO_PD9, GPIO_PD8,
	GPIO_PD7, GPIO_PD6, GPIO_PD5, GPIO_PD4,
	GPIO_PD3, GPIO_PD2, GPIO_PD1, GPIO_PD0,

	/* PE */
	GPIO_PE15, GPIO_PE14, GPIO_PE13, GPIO_PE12,
	GPIO_PE11, GPIO_PE10, GPIO_PE9, GPIO_PE8,
	GPIO_PE7, GPIO_PE6, GPIO_PE5, GPIO_PE4,
	GPIO_PE3, GPIO_PE2, GPIO_PE1, GPIO_PE0,

	/* PF */
	GPIO_PF30, GPIO_PF29, GPIO_PF28,
	GPIO_PF27, GPIO_PF26, GPIO_PF25, GPIO_PF24,
	GPIO_PF23, GPIO_PF22, GPIO_PF21, GPIO_PF20,
	GPIO_PF19, GPIO_PF18, GPIO_PF17, GPIO_PF16,
	GPIO_PF15, GPIO_PF14, GPIO_PF13, GPIO_PF12,
	GPIO_PF11, GPIO_PF10, GPIO_PF9, GPIO_PF8,
	GPIO_PF7, GPIO_PF6, GPIO_PF5, GPIO_PF4,
	GPIO_PF3, GPIO_PF2, GPIO_PF1, GPIO_PF0,

	/* INTC: IRQ and PINT on PB/PD/PE */
	GPIO_FN_PINT7_PB, GPIO_FN_PINT6_PB, GPIO_FN_PINT5_PB, GPIO_FN_PINT4_PB,
	GPIO_FN_PINT3_PB, GPIO_FN_PINT2_PB, GPIO_FN_PINT1_PB, GPIO_FN_PINT0_PB,
	GPIO_FN_PINT7_PD, GPIO_FN_PINT6_PD, GPIO_FN_PINT5_PD, GPIO_FN_PINT4_PD,
	GPIO_FN_PINT3_PD, GPIO_FN_PINT2_PD, GPIO_FN_PINT1_PD, GPIO_FN_PINT0_PD,
	GPIO_FN_IRQ7_PB, GPIO_FN_IRQ6_PB, GPIO_FN_IRQ5_PB, GPIO_FN_IRQ4_PB,
	GPIO_FN_IRQ3_PB, GPIO_FN_IRQ2_PB, GPIO_FN_IRQ1_PB, GPIO_FN_IRQ0_PB,
	GPIO_FN_IRQ7_PD, GPIO_FN_IRQ6_PD, GPIO_FN_IRQ5_PD, GPIO_FN_IRQ4_PD,
	GPIO_FN_IRQ3_PD, GPIO_FN_IRQ2_PD, GPIO_FN_IRQ1_PD, GPIO_FN_IRQ0_PD,
	GPIO_FN_IRQ7_PE, GPIO_FN_IRQ6_PE, GPIO_FN_IRQ5_PE, GPIO_FN_IRQ4_PE,
	GPIO_FN_IRQ3_PE, GPIO_FN_IRQ2_PE, GPIO_FN_IRQ1_PE, GPIO_FN_IRQ0_PE,

	GPIO_FN_WDTOVF, GPIO_FN_IRQOUT, GPIO_FN_REFOUT, GPIO_FN_IRQOUT_REFOUT,
	GPIO_FN_UBCTRG,

	/* CAN */
	GPIO_FN_CTX1, GPIO_FN_CRX1, GPIO_FN_CTX0, GPIO_FN_CTX0_CTX1,
	GPIO_FN_CRX0, GPIO_FN_CRX0_CRX1,

	/* IIC3 */
	GPIO_FN_SDA3, GPIO_FN_SCL3,
	GPIO_FN_SDA2, GPIO_FN_SCL2,
	GPIO_FN_SDA1, GPIO_FN_SCL1,
	GPIO_FN_SDA0, GPIO_FN_SCL0,

	/* DMAC */
	GPIO_FN_TEND0_PD, GPIO_FN_TEND0_PE, GPIO_FN_DACK0_PD,
	GPIO_FN_DACK0_PE, GPIO_FN_DREQ0_PD, GPIO_FN_DREQ0_PE,
	GPIO_FN_TEND1_PD, GPIO_FN_TEND1_PE, GPIO_FN_DACK1_PD,
	GPIO_FN_DACK1_PE, GPIO_FN_DREQ1_PD, GPIO_FN_DREQ1_PE,
	GPIO_FN_DACK2, GPIO_FN_DREQ2,
	GPIO_FN_DACK3, GPIO_FN_DREQ3,

	/* ADC */
	GPIO_FN_ADTRG_PD, GPIO_FN_ADTRG_PE,

	/* BSC */
	GPIO_FN_D31, GPIO_FN_D30, GPIO_FN_D29, GPIO_FN_D28,
	GPIO_FN_D27, GPIO_FN_D26, GPIO_FN_D25, GPIO_FN_D24,
	GPIO_FN_D23, GPIO_FN_D22, GPIO_FN_D21, GPIO_FN_D20,
	GPIO_FN_D19, GPIO_FN_D18, GPIO_FN_D17, GPIO_FN_D16,
	GPIO_FN_A25, GPIO_FN_A24, GPIO_FN_A23, GPIO_FN_A22,
	GPIO_FN_A21, GPIO_FN_CS4, GPIO_FN_MRES, GPIO_FN_BS,
	GPIO_FN_IOIS16, GPIO_FN_CS1, GPIO_FN_CS6_CE1B,
	GPIO_FN_CE2B, GPIO_FN_CS5_CE1A, GPIO_FN_CE2A,
	GPIO_FN_FRAME, GPIO_FN_WAIT, GPIO_FN_RDWR,
	GPIO_FN_CKE, GPIO_FN_CASU, GPIO_FN_BREQ, GPIO_FN_RASU,
	GPIO_FN_BACK, GPIO_FN_CASL, GPIO_FN_RASL,
	GPIO_FN_WE3_DQMUU_AH_ICIO_WR, GPIO_FN_WE2_DQMUL_ICIORD,
	GPIO_FN_WE1_DQMLU_WE, GPIO_FN_WE0_DQMLL,
	GPIO_FN_CS3, GPIO_FN_CS2, GPIO_FN_A1, GPIO_FN_A0, GPIO_FN_CS7,

	/* TMU */
	GPIO_FN_TIOC4D, GPIO_FN_TIOC4C, GPIO_FN_TIOC4B, GPIO_FN_TIOC4A,
	GPIO_FN_TIOC3D, GPIO_FN_TIOC3C, GPIO_FN_TIOC3B, GPIO_FN_TIOC3A,
	GPIO_FN_TIOC2B, GPIO_FN_TIOC1B, GPIO_FN_TIOC2A, GPIO_FN_TIOC1A,
	GPIO_FN_TIOC0D, GPIO_FN_TIOC0C, GPIO_FN_TIOC0B, GPIO_FN_TIOC0A,
	GPIO_FN_TCLKD_PD, GPIO_FN_TCLKC_PD, GPIO_FN_TCLKB_PD, GPIO_FN_TCLKA_PD,
	GPIO_FN_TCLKD_PF, GPIO_FN_TCLKC_PF, GPIO_FN_TCLKB_PF, GPIO_FN_TCLKA_PF,

	/* SSU */
	GPIO_FN_SCS0_PD, GPIO_FN_SSO0_PD, GPIO_FN_SSI0_PD, GPIO_FN_SSCK0_PD,
	GPIO_FN_SCS0_PF, GPIO_FN_SSO0_PF, GPIO_FN_SSI0_PF, GPIO_FN_SSCK0_PF,
	GPIO_FN_SCS1_PD, GPIO_FN_SSO1_PD, GPIO_FN_SSI1_PD, GPIO_FN_SSCK1_PD,
	GPIO_FN_SCS1_PF, GPIO_FN_SSO1_PF, GPIO_FN_SSI1_PF, GPIO_FN_SSCK1_PF,

	/* SCIF */
	GPIO_FN_TXD0, GPIO_FN_RXD0, GPIO_FN_SCK0,
	GPIO_FN_TXD1, GPIO_FN_RXD1, GPIO_FN_SCK1,
	GPIO_FN_TXD2, GPIO_FN_RXD2, GPIO_FN_SCK2,
	GPIO_FN_RTS3, GPIO_FN_CTS3, GPIO_FN_TXD3, GPIO_FN_RXD3, GPIO_FN_SCK3,

	/* SSI */
	GPIO_FN_AUDIO_CLK,
	GPIO_FN_SSIDATA3, GPIO_FN_SSIWS3, GPIO_FN_SSISCK3,
	GPIO_FN_SSIDATA2, GPIO_FN_SSIWS2, GPIO_FN_SSISCK2,
	GPIO_FN_SSIDATA1, GPIO_FN_SSIWS1, GPIO_FN_SSISCK1,
	GPIO_FN_SSIDATA0, GPIO_FN_SSIWS0, GPIO_FN_SSISCK0,

	/* FLCTL */
	GPIO_FN_FCE, GPIO_FN_FRB,
	GPIO_FN_NAF7, GPIO_FN_NAF6, GPIO_FN_NAF5, GPIO_FN_NAF4,
	GPIO_FN_NAF3, GPIO_FN_NAF2, GPIO_FN_NAF1, GPIO_FN_NAF0,
	GPIO_FN_FSC, GPIO_FN_FOE, GPIO_FN_FCDE, GPIO_FN_FWE,

	/* LCDC */
	GPIO_FN_LCD_VEPWC, GPIO_FN_LCD_VCPWC,
	GPIO_FN_LCD_CLK, GPIO_FN_LCD_FLM,
	GPIO_FN_LCD_M_DISP, GPIO_FN_LCD_CL2,
	GPIO_FN_LCD_CL1, GPIO_FN_LCD_DON,
	GPIO_FN_LCD_DATA15, GPIO_FN_LCD_DATA14,
	GPIO_FN_LCD_DATA13, GPIO_FN_LCD_DATA12,
	GPIO_FN_LCD_DATA11, GPIO_FN_LCD_DATA10,
	GPIO_FN_LCD_DATA9, GPIO_FN_LCD_DATA8,
	GPIO_FN_LCD_DATA7, GPIO_FN_LCD_DATA6,
	GPIO_FN_LCD_DATA5, GPIO_FN_LCD_DATA4,
	GPIO_FN_LCD_DATA3, GPIO_FN_LCD_DATA2,
	GPIO_FN_LCD_DATA1, GPIO_FN_LCD_DATA0,
};

#endif /* __ASM_SH7203_H__ */
