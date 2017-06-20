/*
 * arch/cris/include/arch-v32/mach-a3/mach/hwregs/asm/pinmux_defs_asm.h
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#ifndef __pinmux_defs_asm_h
#define __pinmux_defs_asm_h

/*
 * This file is autogenerated from
 *   file:           pinmux.r
 * 
 *   by ../../../tools/rdesc/bin/rdes2c -asm -outfile pinmux_defs_asm.h pinmux.r
 * Any changes here will be lost.
 *
 * -*- buffer-read-only: t -*-
 */

#ifndef REG_FIELD
#define REG_FIELD( scope, reg, field, value ) \
  REG_FIELD_X_( value, reg_##scope##_##reg##___##field##___lsb )
#define REG_FIELD_X_( value, shift ) ((value) << shift)
#endif

#ifndef REG_STATE
#define REG_STATE( scope, reg, field, symbolic_value ) \
  REG_STATE_X_( regk_##scope##_##symbolic_value, reg_##scope##_##reg##___##field##___lsb )
#define REG_STATE_X_( k, shift ) (k << shift)
#endif

#ifndef REG_MASK
#define REG_MASK( scope, reg, field ) \
  REG_MASK_X_( reg_##scope##_##reg##___##field##___width, reg_##scope##_##reg##___##field##___lsb )
#define REG_MASK_X_( width, lsb ) (((1 << width)-1) << lsb)
#endif

#ifndef REG_LSB
#define REG_LSB( scope, reg, field ) reg_##scope##_##reg##___##field##___lsb
#endif

#ifndef REG_BIT
#define REG_BIT( scope, reg, field ) reg_##scope##_##reg##___##field##___bit
#endif

#ifndef REG_ADDR
#define REG_ADDR( scope, inst, reg ) REG_ADDR_X_(inst, reg_##scope##_##reg##_offset)
#define REG_ADDR_X_( inst, offs ) ((inst) + offs)
#endif

#ifndef REG_ADDR_VECT
#define REG_ADDR_VECT( scope, inst, reg, index ) \
         REG_ADDR_VECT_X_(inst, reg_##scope##_##reg##_offset, index, \
			 STRIDE_##scope##_##reg )
#define REG_ADDR_VECT_X_( inst, offs, index, stride ) \
                          ((inst) + offs + (index) * stride)
#endif

/* Register rw_hwprot, scope pinmux, type rw */
#define reg_pinmux_rw_hwprot___eth___lsb 0
#define reg_pinmux_rw_hwprot___eth___width 1
#define reg_pinmux_rw_hwprot___eth___bit 0
#define reg_pinmux_rw_hwprot___eth_mdio___lsb 1
#define reg_pinmux_rw_hwprot___eth_mdio___width 1
#define reg_pinmux_rw_hwprot___eth_mdio___bit 1
#define reg_pinmux_rw_hwprot___geth___lsb 2
#define reg_pinmux_rw_hwprot___geth___width 1
#define reg_pinmux_rw_hwprot___geth___bit 2
#define reg_pinmux_rw_hwprot___tg___lsb 3
#define reg_pinmux_rw_hwprot___tg___width 1
#define reg_pinmux_rw_hwprot___tg___bit 3
#define reg_pinmux_rw_hwprot___tg_clk___lsb 4
#define reg_pinmux_rw_hwprot___tg_clk___width 1
#define reg_pinmux_rw_hwprot___tg_clk___bit 4
#define reg_pinmux_rw_hwprot___vout___lsb 5
#define reg_pinmux_rw_hwprot___vout___width 1
#define reg_pinmux_rw_hwprot___vout___bit 5
#define reg_pinmux_rw_hwprot___vout_sync___lsb 6
#define reg_pinmux_rw_hwprot___vout_sync___width 1
#define reg_pinmux_rw_hwprot___vout_sync___bit 6
#define reg_pinmux_rw_hwprot___ser1___lsb 7
#define reg_pinmux_rw_hwprot___ser1___width 1
#define reg_pinmux_rw_hwprot___ser1___bit 7
#define reg_pinmux_rw_hwprot___ser2___lsb 8
#define reg_pinmux_rw_hwprot___ser2___width 1
#define reg_pinmux_rw_hwprot___ser2___bit 8
#define reg_pinmux_rw_hwprot___ser3___lsb 9
#define reg_pinmux_rw_hwprot___ser3___width 1
#define reg_pinmux_rw_hwprot___ser3___bit 9
#define reg_pinmux_rw_hwprot___ser4___lsb 10
#define reg_pinmux_rw_hwprot___ser4___width 1
#define reg_pinmux_rw_hwprot___ser4___bit 10
#define reg_pinmux_rw_hwprot___sser___lsb 11
#define reg_pinmux_rw_hwprot___sser___width 1
#define reg_pinmux_rw_hwprot___sser___bit 11
#define reg_pinmux_rw_hwprot___pwm0___lsb 12
#define reg_pinmux_rw_hwprot___pwm0___width 1
#define reg_pinmux_rw_hwprot___pwm0___bit 12
#define reg_pinmux_rw_hwprot___pwm1___lsb 13
#define reg_pinmux_rw_hwprot___pwm1___width 1
#define reg_pinmux_rw_hwprot___pwm1___bit 13
#define reg_pinmux_rw_hwprot___pwm2___lsb 14
#define reg_pinmux_rw_hwprot___pwm2___width 1
#define reg_pinmux_rw_hwprot___pwm2___bit 14
#define reg_pinmux_rw_hwprot___timer0___lsb 15
#define reg_pinmux_rw_hwprot___timer0___width 1
#define reg_pinmux_rw_hwprot___timer0___bit 15
#define reg_pinmux_rw_hwprot___timer1___lsb 16
#define reg_pinmux_rw_hwprot___timer1___width 1
#define reg_pinmux_rw_hwprot___timer1___bit 16
#define reg_pinmux_rw_hwprot___pio___lsb 17
#define reg_pinmux_rw_hwprot___pio___width 1
#define reg_pinmux_rw_hwprot___pio___bit 17
#define reg_pinmux_rw_hwprot___i2c0___lsb 18
#define reg_pinmux_rw_hwprot___i2c0___width 1
#define reg_pinmux_rw_hwprot___i2c0___bit 18
#define reg_pinmux_rw_hwprot___i2c1___lsb 19
#define reg_pinmux_rw_hwprot___i2c1___width 1
#define reg_pinmux_rw_hwprot___i2c1___bit 19
#define reg_pinmux_rw_hwprot___i2c1_sda1___lsb 20
#define reg_pinmux_rw_hwprot___i2c1_sda1___width 1
#define reg_pinmux_rw_hwprot___i2c1_sda1___bit 20
#define reg_pinmux_rw_hwprot___i2c1_sda2___lsb 21
#define reg_pinmux_rw_hwprot___i2c1_sda2___width 1
#define reg_pinmux_rw_hwprot___i2c1_sda2___bit 21
#define reg_pinmux_rw_hwprot___i2c1_sda3___lsb 22
#define reg_pinmux_rw_hwprot___i2c1_sda3___width 1
#define reg_pinmux_rw_hwprot___i2c1_sda3___bit 22
#define reg_pinmux_rw_hwprot___i2c1_sen___lsb 23
#define reg_pinmux_rw_hwprot___i2c1_sen___width 1
#define reg_pinmux_rw_hwprot___i2c1_sen___bit 23
#define reg_pinmux_rw_hwprot_offset 0

/* Register rw_gio_pa, scope pinmux, type rw */
#define reg_pinmux_rw_gio_pa___pa0___lsb 0
#define reg_pinmux_rw_gio_pa___pa0___width 1
#define reg_pinmux_rw_gio_pa___pa0___bit 0
#define reg_pinmux_rw_gio_pa___pa1___lsb 1
#define reg_pinmux_rw_gio_pa___pa1___width 1
#define reg_pinmux_rw_gio_pa___pa1___bit 1
#define reg_pinmux_rw_gio_pa___pa2___lsb 2
#define reg_pinmux_rw_gio_pa___pa2___width 1
#define reg_pinmux_rw_gio_pa___pa2___bit 2
#define reg_pinmux_rw_gio_pa___pa3___lsb 3
#define reg_pinmux_rw_gio_pa___pa3___width 1
#define reg_pinmux_rw_gio_pa___pa3___bit 3
#define reg_pinmux_rw_gio_pa___pa4___lsb 4
#define reg_pinmux_rw_gio_pa___pa4___width 1
#define reg_pinmux_rw_gio_pa___pa4___bit 4
#define reg_pinmux_rw_gio_pa___pa5___lsb 5
#define reg_pinmux_rw_gio_pa___pa5___width 1
#define reg_pinmux_rw_gio_pa___pa5___bit 5
#define reg_pinmux_rw_gio_pa___pa6___lsb 6
#define reg_pinmux_rw_gio_pa___pa6___width 1
#define reg_pinmux_rw_gio_pa___pa6___bit 6
#define reg_pinmux_rw_gio_pa___pa7___lsb 7
#define reg_pinmux_rw_gio_pa___pa7___width 1
#define reg_pinmux_rw_gio_pa___pa7___bit 7
#define reg_pinmux_rw_gio_pa___pa8___lsb 8
#define reg_pinmux_rw_gio_pa___pa8___width 1
#define reg_pinmux_rw_gio_pa___pa8___bit 8
#define reg_pinmux_rw_gio_pa___pa9___lsb 9
#define reg_pinmux_rw_gio_pa___pa9___width 1
#define reg_pinmux_rw_gio_pa___pa9___bit 9
#define reg_pinmux_rw_gio_pa___pa10___lsb 10
#define reg_pinmux_rw_gio_pa___pa10___width 1
#define reg_pinmux_rw_gio_pa___pa10___bit 10
#define reg_pinmux_rw_gio_pa___pa11___lsb 11
#define reg_pinmux_rw_gio_pa___pa11___width 1
#define reg_pinmux_rw_gio_pa___pa11___bit 11
#define reg_pinmux_rw_gio_pa___pa12___lsb 12
#define reg_pinmux_rw_gio_pa___pa12___width 1
#define reg_pinmux_rw_gio_pa___pa12___bit 12
#define reg_pinmux_rw_gio_pa___pa13___lsb 13
#define reg_pinmux_rw_gio_pa___pa13___width 1
#define reg_pinmux_rw_gio_pa___pa13___bit 13
#define reg_pinmux_rw_gio_pa___pa14___lsb 14
#define reg_pinmux_rw_gio_pa___pa14___width 1
#define reg_pinmux_rw_gio_pa___pa14___bit 14
#define reg_pinmux_rw_gio_pa___pa15___lsb 15
#define reg_pinmux_rw_gio_pa___pa15___width 1
#define reg_pinmux_rw_gio_pa___pa15___bit 15
#define reg_pinmux_rw_gio_pa___pa16___lsb 16
#define reg_pinmux_rw_gio_pa___pa16___width 1
#define reg_pinmux_rw_gio_pa___pa16___bit 16
#define reg_pinmux_rw_gio_pa___pa17___lsb 17
#define reg_pinmux_rw_gio_pa___pa17___width 1
#define reg_pinmux_rw_gio_pa___pa17___bit 17
#define reg_pinmux_rw_gio_pa___pa18___lsb 18
#define reg_pinmux_rw_gio_pa___pa18___width 1
#define reg_pinmux_rw_gio_pa___pa18___bit 18
#define reg_pinmux_rw_gio_pa___pa19___lsb 19
#define reg_pinmux_rw_gio_pa___pa19___width 1
#define reg_pinmux_rw_gio_pa___pa19___bit 19
#define reg_pinmux_rw_gio_pa___pa20___lsb 20
#define reg_pinmux_rw_gio_pa___pa20___width 1
#define reg_pinmux_rw_gio_pa___pa20___bit 20
#define reg_pinmux_rw_gio_pa___pa21___lsb 21
#define reg_pinmux_rw_gio_pa___pa21___width 1
#define reg_pinmux_rw_gio_pa___pa21___bit 21
#define reg_pinmux_rw_gio_pa___pa22___lsb 22
#define reg_pinmux_rw_gio_pa___pa22___width 1
#define reg_pinmux_rw_gio_pa___pa22___bit 22
#define reg_pinmux_rw_gio_pa___pa23___lsb 23
#define reg_pinmux_rw_gio_pa___pa23___width 1
#define reg_pinmux_rw_gio_pa___pa23___bit 23
#define reg_pinmux_rw_gio_pa___pa24___lsb 24
#define reg_pinmux_rw_gio_pa___pa24___width 1
#define reg_pinmux_rw_gio_pa___pa24___bit 24
#define reg_pinmux_rw_gio_pa___pa25___lsb 25
#define reg_pinmux_rw_gio_pa___pa25___width 1
#define reg_pinmux_rw_gio_pa___pa25___bit 25
#define reg_pinmux_rw_gio_pa___pa26___lsb 26
#define reg_pinmux_rw_gio_pa___pa26___width 1
#define reg_pinmux_rw_gio_pa___pa26___bit 26
#define reg_pinmux_rw_gio_pa___pa27___lsb 27
#define reg_pinmux_rw_gio_pa___pa27___width 1
#define reg_pinmux_rw_gio_pa___pa27___bit 27
#define reg_pinmux_rw_gio_pa___pa28___lsb 28
#define reg_pinmux_rw_gio_pa___pa28___width 1
#define reg_pinmux_rw_gio_pa___pa28___bit 28
#define reg_pinmux_rw_gio_pa___pa29___lsb 29
#define reg_pinmux_rw_gio_pa___pa29___width 1
#define reg_pinmux_rw_gio_pa___pa29___bit 29
#define reg_pinmux_rw_gio_pa___pa30___lsb 30
#define reg_pinmux_rw_gio_pa___pa30___width 1
#define reg_pinmux_rw_gio_pa___pa30___bit 30
#define reg_pinmux_rw_gio_pa___pa31___lsb 31
#define reg_pinmux_rw_gio_pa___pa31___width 1
#define reg_pinmux_rw_gio_pa___pa31___bit 31
#define reg_pinmux_rw_gio_pa_offset 4

/* Register rw_gio_pb, scope pinmux, type rw */
#define reg_pinmux_rw_gio_pb___pb0___lsb 0
#define reg_pinmux_rw_gio_pb___pb0___width 1
#define reg_pinmux_rw_gio_pb___pb0___bit 0
#define reg_pinmux_rw_gio_pb___pb1___lsb 1
#define reg_pinmux_rw_gio_pb___pb1___width 1
#define reg_pinmux_rw_gio_pb___pb1___bit 1
#define reg_pinmux_rw_gio_pb___pb2___lsb 2
#define reg_pinmux_rw_gio_pb___pb2___width 1
#define reg_pinmux_rw_gio_pb___pb2___bit 2
#define reg_pinmux_rw_gio_pb___pb3___lsb 3
#define reg_pinmux_rw_gio_pb___pb3___width 1
#define reg_pinmux_rw_gio_pb___pb3___bit 3
#define reg_pinmux_rw_gio_pb___pb4___lsb 4
#define reg_pinmux_rw_gio_pb___pb4___width 1
#define reg_pinmux_rw_gio_pb___pb4___bit 4
#define reg_pinmux_rw_gio_pb___pb5___lsb 5
#define reg_pinmux_rw_gio_pb___pb5___width 1
#define reg_pinmux_rw_gio_pb___pb5___bit 5
#define reg_pinmux_rw_gio_pb___pb6___lsb 6
#define reg_pinmux_rw_gio_pb___pb6___width 1
#define reg_pinmux_rw_gio_pb___pb6___bit 6
#define reg_pinmux_rw_gio_pb___pb7___lsb 7
#define reg_pinmux_rw_gio_pb___pb7___width 1
#define reg_pinmux_rw_gio_pb___pb7___bit 7
#define reg_pinmux_rw_gio_pb___pb8___lsb 8
#define reg_pinmux_rw_gio_pb___pb8___width 1
#define reg_pinmux_rw_gio_pb___pb8___bit 8
#define reg_pinmux_rw_gio_pb___pb9___lsb 9
#define reg_pinmux_rw_gio_pb___pb9___width 1
#define reg_pinmux_rw_gio_pb___pb9___bit 9
#define reg_pinmux_rw_gio_pb___pb10___lsb 10
#define reg_pinmux_rw_gio_pb___pb10___width 1
#define reg_pinmux_rw_gio_pb___pb10___bit 10
#define reg_pinmux_rw_gio_pb___pb11___lsb 11
#define reg_pinmux_rw_gio_pb___pb11___width 1
#define reg_pinmux_rw_gio_pb___pb11___bit 11
#define reg_pinmux_rw_gio_pb___pb12___lsb 12
#define reg_pinmux_rw_gio_pb___pb12___width 1
#define reg_pinmux_rw_gio_pb___pb12___bit 12
#define reg_pinmux_rw_gio_pb___pb13___lsb 13
#define reg_pinmux_rw_gio_pb___pb13___width 1
#define reg_pinmux_rw_gio_pb___pb13___bit 13
#define reg_pinmux_rw_gio_pb___pb14___lsb 14
#define reg_pinmux_rw_gio_pb___pb14___width 1
#define reg_pinmux_rw_gio_pb___pb14___bit 14
#define reg_pinmux_rw_gio_pb___pb15___lsb 15
#define reg_pinmux_rw_gio_pb___pb15___width 1
#define reg_pinmux_rw_gio_pb___pb15___bit 15
#define reg_pinmux_rw_gio_pb___pb16___lsb 16
#define reg_pinmux_rw_gio_pb___pb16___width 1
#define reg_pinmux_rw_gio_pb___pb16___bit 16
#define reg_pinmux_rw_gio_pb___pb17___lsb 17
#define reg_pinmux_rw_gio_pb___pb17___width 1
#define reg_pinmux_rw_gio_pb___pb17___bit 17
#define reg_pinmux_rw_gio_pb___pb18___lsb 18
#define reg_pinmux_rw_gio_pb___pb18___width 1
#define reg_pinmux_rw_gio_pb___pb18___bit 18
#define reg_pinmux_rw_gio_pb___pb19___lsb 19
#define reg_pinmux_rw_gio_pb___pb19___width 1
#define reg_pinmux_rw_gio_pb___pb19___bit 19
#define reg_pinmux_rw_gio_pb___pb20___lsb 20
#define reg_pinmux_rw_gio_pb___pb20___width 1
#define reg_pinmux_rw_gio_pb___pb20___bit 20
#define reg_pinmux_rw_gio_pb___pb21___lsb 21
#define reg_pinmux_rw_gio_pb___pb21___width 1
#define reg_pinmux_rw_gio_pb___pb21___bit 21
#define reg_pinmux_rw_gio_pb___pb22___lsb 22
#define reg_pinmux_rw_gio_pb___pb22___width 1
#define reg_pinmux_rw_gio_pb___pb22___bit 22
#define reg_pinmux_rw_gio_pb___pb23___lsb 23
#define reg_pinmux_rw_gio_pb___pb23___width 1
#define reg_pinmux_rw_gio_pb___pb23___bit 23
#define reg_pinmux_rw_gio_pb___pb24___lsb 24
#define reg_pinmux_rw_gio_pb___pb24___width 1
#define reg_pinmux_rw_gio_pb___pb24___bit 24
#define reg_pinmux_rw_gio_pb___pb25___lsb 25
#define reg_pinmux_rw_gio_pb___pb25___width 1
#define reg_pinmux_rw_gio_pb___pb25___bit 25
#define reg_pinmux_rw_gio_pb___pb26___lsb 26
#define reg_pinmux_rw_gio_pb___pb26___width 1
#define reg_pinmux_rw_gio_pb___pb26___bit 26
#define reg_pinmux_rw_gio_pb___pb27___lsb 27
#define reg_pinmux_rw_gio_pb___pb27___width 1
#define reg_pinmux_rw_gio_pb___pb27___bit 27
#define reg_pinmux_rw_gio_pb___pb28___lsb 28
#define reg_pinmux_rw_gio_pb___pb28___width 1
#define reg_pinmux_rw_gio_pb___pb28___bit 28
#define reg_pinmux_rw_gio_pb___pb29___lsb 29
#define reg_pinmux_rw_gio_pb___pb29___width 1
#define reg_pinmux_rw_gio_pb___pb29___bit 29
#define reg_pinmux_rw_gio_pb___pb30___lsb 30
#define reg_pinmux_rw_gio_pb___pb30___width 1
#define reg_pinmux_rw_gio_pb___pb30___bit 30
#define reg_pinmux_rw_gio_pb___pb31___lsb 31
#define reg_pinmux_rw_gio_pb___pb31___width 1
#define reg_pinmux_rw_gio_pb___pb31___bit 31
#define reg_pinmux_rw_gio_pb_offset 8

/* Register rw_gio_pc, scope pinmux, type rw */
#define reg_pinmux_rw_gio_pc___pc0___lsb 0
#define reg_pinmux_rw_gio_pc___pc0___width 1
#define reg_pinmux_rw_gio_pc___pc0___bit 0
#define reg_pinmux_rw_gio_pc___pc1___lsb 1
#define reg_pinmux_rw_gio_pc___pc1___width 1
#define reg_pinmux_rw_gio_pc___pc1___bit 1
#define reg_pinmux_rw_gio_pc___pc2___lsb 2
#define reg_pinmux_rw_gio_pc___pc2___width 1
#define reg_pinmux_rw_gio_pc___pc2___bit 2
#define reg_pinmux_rw_gio_pc___pc3___lsb 3
#define reg_pinmux_rw_gio_pc___pc3___width 1
#define reg_pinmux_rw_gio_pc___pc3___bit 3
#define reg_pinmux_rw_gio_pc___pc4___lsb 4
#define reg_pinmux_rw_gio_pc___pc4___width 1
#define reg_pinmux_rw_gio_pc___pc4___bit 4
#define reg_pinmux_rw_gio_pc___pc5___lsb 5
#define reg_pinmux_rw_gio_pc___pc5___width 1
#define reg_pinmux_rw_gio_pc___pc5___bit 5
#define reg_pinmux_rw_gio_pc___pc6___lsb 6
#define reg_pinmux_rw_gio_pc___pc6___width 1
#define reg_pinmux_rw_gio_pc___pc6___bit 6
#define reg_pinmux_rw_gio_pc___pc7___lsb 7
#define reg_pinmux_rw_gio_pc___pc7___width 1
#define reg_pinmux_rw_gio_pc___pc7___bit 7
#define reg_pinmux_rw_gio_pc___pc8___lsb 8
#define reg_pinmux_rw_gio_pc___pc8___width 1
#define reg_pinmux_rw_gio_pc___pc8___bit 8
#define reg_pinmux_rw_gio_pc___pc9___lsb 9
#define reg_pinmux_rw_gio_pc___pc9___width 1
#define reg_pinmux_rw_gio_pc___pc9___bit 9
#define reg_pinmux_rw_gio_pc___pc10___lsb 10
#define reg_pinmux_rw_gio_pc___pc10___width 1
#define reg_pinmux_rw_gio_pc___pc10___bit 10
#define reg_pinmux_rw_gio_pc___pc11___lsb 11
#define reg_pinmux_rw_gio_pc___pc11___width 1
#define reg_pinmux_rw_gio_pc___pc11___bit 11
#define reg_pinmux_rw_gio_pc___pc12___lsb 12
#define reg_pinmux_rw_gio_pc___pc12___width 1
#define reg_pinmux_rw_gio_pc___pc12___bit 12
#define reg_pinmux_rw_gio_pc___pc13___lsb 13
#define reg_pinmux_rw_gio_pc___pc13___width 1
#define reg_pinmux_rw_gio_pc___pc13___bit 13
#define reg_pinmux_rw_gio_pc___pc14___lsb 14
#define reg_pinmux_rw_gio_pc___pc14___width 1
#define reg_pinmux_rw_gio_pc___pc14___bit 14
#define reg_pinmux_rw_gio_pc___pc15___lsb 15
#define reg_pinmux_rw_gio_pc___pc15___width 1
#define reg_pinmux_rw_gio_pc___pc15___bit 15
#define reg_pinmux_rw_gio_pc_offset 12

/* Register rw_iop_pa, scope pinmux, type rw */
#define reg_pinmux_rw_iop_pa___pa0___lsb 0
#define reg_pinmux_rw_iop_pa___pa0___width 1
#define reg_pinmux_rw_iop_pa___pa0___bit 0
#define reg_pinmux_rw_iop_pa___pa1___lsb 1
#define reg_pinmux_rw_iop_pa___pa1___width 1
#define reg_pinmux_rw_iop_pa___pa1___bit 1
#define reg_pinmux_rw_iop_pa___pa2___lsb 2
#define reg_pinmux_rw_iop_pa___pa2___width 1
#define reg_pinmux_rw_iop_pa___pa2___bit 2
#define reg_pinmux_rw_iop_pa___pa3___lsb 3
#define reg_pinmux_rw_iop_pa___pa3___width 1
#define reg_pinmux_rw_iop_pa___pa3___bit 3
#define reg_pinmux_rw_iop_pa___pa4___lsb 4
#define reg_pinmux_rw_iop_pa___pa4___width 1
#define reg_pinmux_rw_iop_pa___pa4___bit 4
#define reg_pinmux_rw_iop_pa___pa5___lsb 5
#define reg_pinmux_rw_iop_pa___pa5___width 1
#define reg_pinmux_rw_iop_pa___pa5___bit 5
#define reg_pinmux_rw_iop_pa___pa6___lsb 6
#define reg_pinmux_rw_iop_pa___pa6___width 1
#define reg_pinmux_rw_iop_pa___pa6___bit 6
#define reg_pinmux_rw_iop_pa___pa7___lsb 7
#define reg_pinmux_rw_iop_pa___pa7___width 1
#define reg_pinmux_rw_iop_pa___pa7___bit 7
#define reg_pinmux_rw_iop_pa___pa8___lsb 8
#define reg_pinmux_rw_iop_pa___pa8___width 1
#define reg_pinmux_rw_iop_pa___pa8___bit 8
#define reg_pinmux_rw_iop_pa___pa9___lsb 9
#define reg_pinmux_rw_iop_pa___pa9___width 1
#define reg_pinmux_rw_iop_pa___pa9___bit 9
#define reg_pinmux_rw_iop_pa___pa10___lsb 10
#define reg_pinmux_rw_iop_pa___pa10___width 1
#define reg_pinmux_rw_iop_pa___pa10___bit 10
#define reg_pinmux_rw_iop_pa___pa11___lsb 11
#define reg_pinmux_rw_iop_pa___pa11___width 1
#define reg_pinmux_rw_iop_pa___pa11___bit 11
#define reg_pinmux_rw_iop_pa___pa12___lsb 12
#define reg_pinmux_rw_iop_pa___pa12___width 1
#define reg_pinmux_rw_iop_pa___pa12___bit 12
#define reg_pinmux_rw_iop_pa___pa13___lsb 13
#define reg_pinmux_rw_iop_pa___pa13___width 1
#define reg_pinmux_rw_iop_pa___pa13___bit 13
#define reg_pinmux_rw_iop_pa___pa14___lsb 14
#define reg_pinmux_rw_iop_pa___pa14___width 1
#define reg_pinmux_rw_iop_pa___pa14___bit 14
#define reg_pinmux_rw_iop_pa___pa15___lsb 15
#define reg_pinmux_rw_iop_pa___pa15___width 1
#define reg_pinmux_rw_iop_pa___pa15___bit 15
#define reg_pinmux_rw_iop_pa___pa16___lsb 16
#define reg_pinmux_rw_iop_pa___pa16___width 1
#define reg_pinmux_rw_iop_pa___pa16___bit 16
#define reg_pinmux_rw_iop_pa___pa17___lsb 17
#define reg_pinmux_rw_iop_pa___pa17___width 1
#define reg_pinmux_rw_iop_pa___pa17___bit 17
#define reg_pinmux_rw_iop_pa___pa18___lsb 18
#define reg_pinmux_rw_iop_pa___pa18___width 1
#define reg_pinmux_rw_iop_pa___pa18___bit 18
#define reg_pinmux_rw_iop_pa___pa19___lsb 19
#define reg_pinmux_rw_iop_pa___pa19___width 1
#define reg_pinmux_rw_iop_pa___pa19___bit 19
#define reg_pinmux_rw_iop_pa___pa20___lsb 20
#define reg_pinmux_rw_iop_pa___pa20___width 1
#define reg_pinmux_rw_iop_pa___pa20___bit 20
#define reg_pinmux_rw_iop_pa___pa21___lsb 21
#define reg_pinmux_rw_iop_pa___pa21___width 1
#define reg_pinmux_rw_iop_pa___pa21___bit 21
#define reg_pinmux_rw_iop_pa___pa22___lsb 22
#define reg_pinmux_rw_iop_pa___pa22___width 1
#define reg_pinmux_rw_iop_pa___pa22___bit 22
#define reg_pinmux_rw_iop_pa___pa23___lsb 23
#define reg_pinmux_rw_iop_pa___pa23___width 1
#define reg_pinmux_rw_iop_pa___pa23___bit 23
#define reg_pinmux_rw_iop_pa___pa24___lsb 24
#define reg_pinmux_rw_iop_pa___pa24___width 1
#define reg_pinmux_rw_iop_pa___pa24___bit 24
#define reg_pinmux_rw_iop_pa___pa25___lsb 25
#define reg_pinmux_rw_iop_pa___pa25___width 1
#define reg_pinmux_rw_iop_pa___pa25___bit 25
#define reg_pinmux_rw_iop_pa___pa26___lsb 26
#define reg_pinmux_rw_iop_pa___pa26___width 1
#define reg_pinmux_rw_iop_pa___pa26___bit 26
#define reg_pinmux_rw_iop_pa___pa27___lsb 27
#define reg_pinmux_rw_iop_pa___pa27___width 1
#define reg_pinmux_rw_iop_pa___pa27___bit 27
#define reg_pinmux_rw_iop_pa___pa28___lsb 28
#define reg_pinmux_rw_iop_pa___pa28___width 1
#define reg_pinmux_rw_iop_pa___pa28___bit 28
#define reg_pinmux_rw_iop_pa___pa29___lsb 29
#define reg_pinmux_rw_iop_pa___pa29___width 1
#define reg_pinmux_rw_iop_pa___pa29___bit 29
#define reg_pinmux_rw_iop_pa___pa30___lsb 30
#define reg_pinmux_rw_iop_pa___pa30___width 1
#define reg_pinmux_rw_iop_pa___pa30___bit 30
#define reg_pinmux_rw_iop_pa___pa31___lsb 31
#define reg_pinmux_rw_iop_pa___pa31___width 1
#define reg_pinmux_rw_iop_pa___pa31___bit 31
#define reg_pinmux_rw_iop_pa_offset 16

/* Register rw_iop_pb, scope pinmux, type rw */
#define reg_pinmux_rw_iop_pb___pb0___lsb 0
#define reg_pinmux_rw_iop_pb___pb0___width 1
#define reg_pinmux_rw_iop_pb___pb0___bit 0
#define reg_pinmux_rw_iop_pb___pb1___lsb 1
#define reg_pinmux_rw_iop_pb___pb1___width 1
#define reg_pinmux_rw_iop_pb___pb1___bit 1
#define reg_pinmux_rw_iop_pb___pb2___lsb 2
#define reg_pinmux_rw_iop_pb___pb2___width 1
#define reg_pinmux_rw_iop_pb___pb2___bit 2
#define reg_pinmux_rw_iop_pb___pb3___lsb 3
#define reg_pinmux_rw_iop_pb___pb3___width 1
#define reg_pinmux_rw_iop_pb___pb3___bit 3
#define reg_pinmux_rw_iop_pb___pb4___lsb 4
#define reg_pinmux_rw_iop_pb___pb4___width 1
#define reg_pinmux_rw_iop_pb___pb4___bit 4
#define reg_pinmux_rw_iop_pb___pb5___lsb 5
#define reg_pinmux_rw_iop_pb___pb5___width 1
#define reg_pinmux_rw_iop_pb___pb5___bit 5
#define reg_pinmux_rw_iop_pb___pb6___lsb 6
#define reg_pinmux_rw_iop_pb___pb6___width 1
#define reg_pinmux_rw_iop_pb___pb6___bit 6
#define reg_pinmux_rw_iop_pb___pb7___lsb 7
#define reg_pinmux_rw_iop_pb___pb7___width 1
#define reg_pinmux_rw_iop_pb___pb7___bit 7
#define reg_pinmux_rw_iop_pb_offset 20

/* Register rw_iop_pio, scope pinmux, type rw */
#define reg_pinmux_rw_iop_pio___d0___lsb 0
#define reg_pinmux_rw_iop_pio___d0___width 1
#define reg_pinmux_rw_iop_pio___d0___bit 0
#define reg_pinmux_rw_iop_pio___d1___lsb 1
#define reg_pinmux_rw_iop_pio___d1___width 1
#define reg_pinmux_rw_iop_pio___d1___bit 1
#define reg_pinmux_rw_iop_pio___d2___lsb 2
#define reg_pinmux_rw_iop_pio___d2___width 1
#define reg_pinmux_rw_iop_pio___d2___bit 2
#define reg_pinmux_rw_iop_pio___d3___lsb 3
#define reg_pinmux_rw_iop_pio___d3___width 1
#define reg_pinmux_rw_iop_pio___d3___bit 3
#define reg_pinmux_rw_iop_pio___d4___lsb 4
#define reg_pinmux_rw_iop_pio___d4___width 1
#define reg_pinmux_rw_iop_pio___d4___bit 4
#define reg_pinmux_rw_iop_pio___d5___lsb 5
#define reg_pinmux_rw_iop_pio___d5___width 1
#define reg_pinmux_rw_iop_pio___d5___bit 5
#define reg_pinmux_rw_iop_pio___d6___lsb 6
#define reg_pinmux_rw_iop_pio___d6___width 1
#define reg_pinmux_rw_iop_pio___d6___bit 6
#define reg_pinmux_rw_iop_pio___d7___lsb 7
#define reg_pinmux_rw_iop_pio___d7___width 1
#define reg_pinmux_rw_iop_pio___d7___bit 7
#define reg_pinmux_rw_iop_pio___rd_n___lsb 8
#define reg_pinmux_rw_iop_pio___rd_n___width 1
#define reg_pinmux_rw_iop_pio___rd_n___bit 8
#define reg_pinmux_rw_iop_pio___wr_n___lsb 9
#define reg_pinmux_rw_iop_pio___wr_n___width 1
#define reg_pinmux_rw_iop_pio___wr_n___bit 9
#define reg_pinmux_rw_iop_pio___a0___lsb 10
#define reg_pinmux_rw_iop_pio___a0___width 1
#define reg_pinmux_rw_iop_pio___a0___bit 10
#define reg_pinmux_rw_iop_pio___a1___lsb 11
#define reg_pinmux_rw_iop_pio___a1___width 1
#define reg_pinmux_rw_iop_pio___a1___bit 11
#define reg_pinmux_rw_iop_pio___ce0_n___lsb 12
#define reg_pinmux_rw_iop_pio___ce0_n___width 1
#define reg_pinmux_rw_iop_pio___ce0_n___bit 12
#define reg_pinmux_rw_iop_pio___ce1_n___lsb 13
#define reg_pinmux_rw_iop_pio___ce1_n___width 1
#define reg_pinmux_rw_iop_pio___ce1_n___bit 13
#define reg_pinmux_rw_iop_pio___ce2_n___lsb 14
#define reg_pinmux_rw_iop_pio___ce2_n___width 1
#define reg_pinmux_rw_iop_pio___ce2_n___bit 14
#define reg_pinmux_rw_iop_pio___rdy___lsb 15
#define reg_pinmux_rw_iop_pio___rdy___width 1
#define reg_pinmux_rw_iop_pio___rdy___bit 15
#define reg_pinmux_rw_iop_pio_offset 24

/* Register rw_iop_usb, scope pinmux, type rw */
#define reg_pinmux_rw_iop_usb___usb0___lsb 0
#define reg_pinmux_rw_iop_usb___usb0___width 1
#define reg_pinmux_rw_iop_usb___usb0___bit 0
#define reg_pinmux_rw_iop_usb_offset 28


/* Constants */
#define regk_pinmux_no                            0x00000000
#define regk_pinmux_rw_gio_pa_default             0x00000000
#define regk_pinmux_rw_gio_pb_default             0x00000000
#define regk_pinmux_rw_gio_pc_default             0x00000000
#define regk_pinmux_rw_hwprot_default             0x00000000
#define regk_pinmux_rw_iop_pa_default             0x00000000
#define regk_pinmux_rw_iop_pb_default             0x00000000
#define regk_pinmux_rw_iop_pio_default            0x00000000
#define regk_pinmux_rw_iop_usb_default            0x00000001
#define regk_pinmux_yes                           0x00000001
#endif /* __pinmux_defs_asm_h */
