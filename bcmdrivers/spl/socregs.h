/*
 * Copyright (C) 2013, Broadcom Corporation. All Rights Reserved.
 * 
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
 * OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */
#ifndef _SOC_REGS_H
#define _SOC_REGS_H

#define CRMU_SPL_CLK_SWITCH_TIMEOUT 0x0301c048
#define CRMU_SPL_CLK_SWITCH_TIMEOUT_BASE 0x048
#define CRMU_SPL_CLK_SWITCH_TIMEOUT_OFFSET 0x0301c048
#define CRMU_SPL_CLK_SWITCH_TIMEOUT__CRMU_CLK_MUX_TOUT_COUNT_L 7
#define CRMU_SPL_CLK_SWITCH_TIMEOUT__CRMU_CLK_MUX_TOUT_COUNT_R 0
#define CRMU_SPL_CLK_SWITCH_TIMEOUT__CRMU_CLK_MUX_TOUT_COUNT_WIDTH 8
#define CRMU_SPL_CLK_SWITCH_TIMEOUT__CRMU_CLK_MUX_TOUT_COUNT_RESETVALUE 0xff
#define CRMU_SPL_CLK_SWITCH_TIMEOUT__RESERVED_L 31
#define CRMU_SPL_CLK_SWITCH_TIMEOUT__RESERVED_R 8
#define CRMU_SPL_CLK_SWITCH_TIMEOUT_WIDTH 8
#define CRMU_SPL_CLK_SWITCH_TIMEOUT__WIDTH 8
#define CRMU_SPL_CLK_SWITCH_TIMEOUT_ALL_L 7
#define CRMU_SPL_CLK_SWITCH_TIMEOUT_ALL_R 0
#define CRMU_SPL_CLK_SWITCH_TIMEOUT__ALL_L 7
#define CRMU_SPL_CLK_SWITCH_TIMEOUT__ALL_R 0
#define CRMU_SPL_CLK_SWITCH_TIMEOUT_DATAMASK 0x000000ff
#define CRMU_SPL_CLK_SWITCH_TIMEOUT_RESETVALUE 0xff
#define OTP_FEATURE_DISABLE_CTRL0__OTP_FEATURE_SPL_SH_EN_L 28
#define OTP_FEATURE_DISABLE_CTRL0__OTP_FEATURE_SPL_SH_EN_R 19
#define OTP_FEATURE_DISABLE_CTRL0__OTP_FEATURE_SPL_SH_EN_WIDTH 10
#define OTP_FEATURE_DISABLE_CTRL0__OTP_FEATURE_SPL_SH_EN_RESETVALUE 0x0
#define OTP_OVERRIDE_DATA2__OVERRIDE_OTP_SPL_SH_EN_L 20
#define OTP_OVERRIDE_DATA2__OVERRIDE_OTP_SPL_SH_EN_R 11
#define OTP_OVERRIDE_DATA2__OVERRIDE_OTP_SPL_SH_EN_WIDTH 10
#define OTP_OVERRIDE_DATA2__OVERRIDE_OTP_SPL_SH_EN_RESETVALUE 0x0
#define CRMU_MCU_EVENT_STATUS__MCU_SPL_FREQ_EVENT 25
#define CRMU_MCU_EVENT_STATUS__MCU_SPL_FREQ_EVENT_WIDTH 1
#define CRMU_MCU_EVENT_STATUS__MCU_SPL_FREQ_EVENT_RESETVALUE 0x0
#define CRMU_MCU_EVENT_STATUS__MCU_SPL_PVT_EVENT 24
#define CRMU_MCU_EVENT_STATUS__MCU_SPL_PVT_EVENT_WIDTH 1
#define CRMU_MCU_EVENT_STATUS__MCU_SPL_PVT_EVENT_RESETVALUE 0x0
#define CRMU_MCU_EVENT_STATUS__MCU_SPL_RST_EVENT 23
#define CRMU_MCU_EVENT_STATUS__MCU_SPL_RST_EVENT_WIDTH 1
#define CRMU_MCU_EVENT_STATUS__MCU_SPL_RST_EVENT_RESETVALUE 0x0
#define CRMU_MCU_EVENT_STATUS__MCU_SPL_WDOG_EVENT 22
#define CRMU_MCU_EVENT_STATUS__MCU_SPL_WDOG_EVENT_WIDTH 1
#define CRMU_MCU_EVENT_STATUS__MCU_SPL_WDOG_EVENT_RESETVALUE 0x0
#define CRMU_MCU_EVENT_CLEAR__MCU_SPL_FREQ_EVENT_CLR 25
#define CRMU_MCU_EVENT_CLEAR__MCU_SPL_FREQ_EVENT_CLR_WIDTH 1
#define CRMU_MCU_EVENT_CLEAR__MCU_SPL_FREQ_EVENT_CLR_RESETVALUE 0x0
#define CRMU_MCU_EVENT_CLEAR__MCU_SPL_PVT_EVENT_CLR 24
#define CRMU_MCU_EVENT_CLEAR__MCU_SPL_PVT_EVENT_CLR_WIDTH 1
#define CRMU_MCU_EVENT_CLEAR__MCU_SPL_PVT_EVENT_CLR_RESETVALUE 0x0
#define CRMU_MCU_EVENT_CLEAR__MCU_SPL_RST_EVENT_CLR 23
#define CRMU_MCU_EVENT_CLEAR__MCU_SPL_RST_EVENT_CLR_WIDTH 1
#define CRMU_MCU_EVENT_CLEAR__MCU_SPL_RST_EVENT_CLR_RESETVALUE 0x0
#define CRMU_MCU_EVENT_CLEAR__MCU_SPL_WDOG_EVENT_CLR 22
#define CRMU_MCU_EVENT_CLEAR__MCU_SPL_WDOG_EVENT_CLR_WIDTH 1
#define CRMU_MCU_EVENT_CLEAR__MCU_SPL_WDOG_EVENT_CLR_RESETVALUE 0x0
#define CRMU_MCU_EVENT_MASK__MCU_SPL_FREQ_EVENT_MASK 25
#define CRMU_MCU_EVENT_MASK__MCU_SPL_FREQ_EVENT_MASK_WIDTH 1
#define CRMU_MCU_EVENT_MASK__MCU_SPL_FREQ_EVENT_MASK_RESETVALUE 0x1
#define CRMU_MCU_EVENT_MASK__MCU_SPL_PVT_EVENT_MASK 24
#define CRMU_MCU_EVENT_MASK__MCU_SPL_PVT_EVENT_MASK_WIDTH 1
#define CRMU_MCU_EVENT_MASK__MCU_SPL_PVT_EVENT_MASK_RESETVALUE 0x1
#define CRMU_MCU_EVENT_MASK__MCU_SPL_RST_EVENT_MASK 23
#define CRMU_MCU_EVENT_MASK__MCU_SPL_RST_EVENT_MASK_WIDTH 1
#define CRMU_MCU_EVENT_MASK__MCU_SPL_RST_EVENT_MASK_RESETVALUE 0x1
#define CRMU_MCU_EVENT_MASK__MCU_SPL_WDOG_EVENT_MASK 22
#define CRMU_MCU_EVENT_MASK__MCU_SPL_WDOG_EVENT_MASK_WIDTH 1
#define CRMU_MCU_EVENT_MASK__MCU_SPL_WDOG_EVENT_MASK_RESETVALUE 0x1
#define CRMU_IPROC_INTR_STATUS__IPROC_SPL_FREQ_INTR 5
#define CRMU_IPROC_INTR_STATUS__IPROC_SPL_FREQ_INTR_WIDTH 1
#define CRMU_IPROC_INTR_STATUS__IPROC_SPL_FREQ_INTR_RESETVALUE 0x0
#define CRMU_IPROC_INTR_STATUS__IPROC_SPL_PVT_INTR 4
#define CRMU_IPROC_INTR_STATUS__IPROC_SPL_PVT_INTR_WIDTH 1
#define CRMU_IPROC_INTR_STATUS__IPROC_SPL_PVT_INTR_RESETVALUE 0x0
#define CRMU_IPROC_INTR_STATUS__IPROC_SPL_RST_INTR 3
#define CRMU_IPROC_INTR_STATUS__IPROC_SPL_RST_INTR_WIDTH 1
#define CRMU_IPROC_INTR_STATUS__IPROC_SPL_RST_INTR_RESETVALUE 0x0
#define CRMU_IPROC_INTR_STATUS__IPROC_SPL_WDOG_INTR 2
#define CRMU_IPROC_INTR_STATUS__IPROC_SPL_WDOG_INTR_WIDTH 1
#define CRMU_IPROC_INTR_STATUS__IPROC_SPL_WDOG_INTR_RESETVALUE 0x0
#define CRMU_IPROC_INTR_MASK__IPROC_SPL_FREQ_INTR_MASK 5
#define CRMU_IPROC_INTR_MASK__IPROC_SPL_FREQ_INTR_MASK_WIDTH 1
#define CRMU_IPROC_INTR_MASK__IPROC_SPL_FREQ_INTR_MASK_RESETVALUE 0x1
#define CRMU_IPROC_INTR_MASK__IPROC_SPL_PVT_INTR_MASK 4
#define CRMU_IPROC_INTR_MASK__IPROC_SPL_PVT_INTR_MASK_WIDTH 1
#define CRMU_IPROC_INTR_MASK__IPROC_SPL_PVT_INTR_MASK_RESETVALUE 0x1
#define CRMU_IPROC_INTR_MASK__IPROC_SPL_RST_INTR_MASK 3
#define CRMU_IPROC_INTR_MASK__IPROC_SPL_RST_INTR_MASK_WIDTH 1
#define CRMU_IPROC_INTR_MASK__IPROC_SPL_RST_INTR_MASK_RESETVALUE 0x1
#define CRMU_IPROC_INTR_MASK__IPROC_SPL_WDOG_INTR_MASK 2
#define CRMU_IPROC_INTR_MASK__IPROC_SPL_WDOG_INTR_MASK_WIDTH 1
#define CRMU_IPROC_INTR_MASK__IPROC_SPL_WDOG_INTR_MASK_RESETVALUE 0x1
#define CRMU_SPL_RESET_CONTROL 0x03024098
#define CRMU_SPL_RESET_CONTROL_BASE 0x098
#define CRMU_SPL_RESET_CONTROL_OFFSET 0x03024098
#define CRMU_SPL_RESET_CONTROL__SPL_RST_N 0
#define CRMU_SPL_RESET_CONTROL__SPL_RST_N_WIDTH 1
#define CRMU_SPL_RESET_CONTROL__SPL_RST_N_RESETVALUE 0x0
#define CRMU_SPL_RESET_CONTROL__RESERVED_L 31
#define CRMU_SPL_RESET_CONTROL__RESERVED_R 1
#define CRMU_SPL_RESET_CONTROL_WIDTH 1
#define CRMU_SPL_RESET_CONTROL__WIDTH 1
#define CRMU_SPL_RESET_CONTROL_ALL_L 0
#define CRMU_SPL_RESET_CONTROL_ALL_R 0
#define CRMU_SPL_RESET_CONTROL__ALL_L 0
#define CRMU_SPL_RESET_CONTROL__ALL_R 0
#define CRMU_SPL_RESET_CONTROL_DATAMASK 0x00000001
#define CRMU_SPL_RESET_CONTROL_RESETVALUE 0x0
#define CRMU_SPL_EVENT_LOG 0x0302409c
#define CRMU_SPL_EVENT_LOG_BASE 0x09c
#define CRMU_SPL_EVENT_LOG_OFFSET 0x0302409c
#define CRMU_SPL_EVENT_LOG__SPL_EVENT_LOG_CLEAR 31
#define CRMU_SPL_EVENT_LOG__SPL_EVENT_LOG_CLEAR_WIDTH 1
#define CRMU_SPL_EVENT_LOG__SPL_EVENT_LOG_CLEAR_RESETVALUE 0x0
#define CRMU_SPL_EVENT_LOG__SPL_HIGH_FREQ_EVENT_LOG_L 18
#define CRMU_SPL_EVENT_LOG__SPL_HIGH_FREQ_EVENT_LOG_R 16
#define CRMU_SPL_EVENT_LOG__SPL_HIGH_FREQ_EVENT_LOG_WIDTH 3
#define CRMU_SPL_EVENT_LOG__SPL_HIGH_FREQ_EVENT_LOG_RESETVALUE 0x0
#define CRMU_SPL_EVENT_LOG__SPL_LOW_FREQ_EVENT_LOG_L 10
#define CRMU_SPL_EVENT_LOG__SPL_LOW_FREQ_EVENT_LOG_R 8
#define CRMU_SPL_EVENT_LOG__SPL_LOW_FREQ_EVENT_LOG_WIDTH 3
#define CRMU_SPL_EVENT_LOG__SPL_LOW_FREQ_EVENT_LOG_RESETVALUE 0x0
#define CRMU_SPL_EVENT_LOG__SPL_RESET_EVENT_LOG_L 3
#define CRMU_SPL_EVENT_LOG__SPL_RESET_EVENT_LOG_R 0
#define CRMU_SPL_EVENT_LOG__SPL_RESET_EVENT_LOG_WIDTH 4
#define CRMU_SPL_EVENT_LOG__SPL_RESET_EVENT_LOG_RESETVALUE 0x0
#define CRMU_SPL_EVENT_LOG__RESERVED_0_L 30
#define CRMU_SPL_EVENT_LOG__RESERVED_0_R 19
#define CRMU_SPL_EVENT_LOG__RESERVED_1_L 15
#define CRMU_SPL_EVENT_LOG__RESERVED_1_R 11
#define CRMU_SPL_EVENT_LOG__RESERVED_2_L 7
#define CRMU_SPL_EVENT_LOG__RESERVED_2_R 4
#define CRMU_SPL_EVENT_LOG__RESERVED_L 30
#define CRMU_SPL_EVENT_LOG__RESERVED_R 19
#define CRMU_SPL_EVENT_LOG_WIDTH 32
#define CRMU_SPL_EVENT_LOG__WIDTH 32
#define CRMU_SPL_EVENT_LOG_ALL_L 31
#define CRMU_SPL_EVENT_LOG_ALL_R 0
#define CRMU_SPL_EVENT_LOG__ALL_L 31
#define CRMU_SPL_EVENT_LOG__ALL_R 0
#define CRMU_SPL_EVENT_LOG_DATAMASK 0x8007070f
#define CRMU_SPL_EVENT_LOG_RESETVALUE 0x0
#define CRMU_SPL_SPACE 0x0b
#define SPL_WDOG 0x03025000
#define SPL_WDOG_BASE 0x000
#define SPL_WDOG_OFFSET 0x03025000
#define SPL_WDOG__SPL_WDOG_VAL_L 31
#define SPL_WDOG__SPL_WDOG_VAL_R 0
#define SPL_WDOG__SPL_WDOG_VAL_WIDTH 32
#define SPL_WDOG__SPL_WDOG_VAL_RESETVALUE 0x00000000
#define SPL_WDOG_WIDTH 32
#define SPL_WDOG__WIDTH 32
#define SPL_WDOG_ALL_L 31
#define SPL_WDOG_ALL_R 0
#define SPL_WDOG__ALL_L 31
#define SPL_WDOG__ALL_R 0
#define SPL_WDOG_DATAMASK 0xffffffff
#define SPL_WDOG_RESETVALUE 0x0
#define SPL_CALIB_0 0x03025004
#define SPL_CALIB_0_BASE 0x004
#define SPL_CALIB_0_OFFSET 0x03025004
#define SPL_CALIB_0__reserved_L 31
#define SPL_CALIB_0__reserved_R 30
#define SPL_CALIB_0__reserved_WIDTH 2
#define SPL_CALIB_0__reserved_RESETVALUE 0x0
#define SPL_CALIB_0__calib_0_L 29
#define SPL_CALIB_0__calib_0_R 0
#define SPL_CALIB_0__calib_0_WIDTH 30
#define SPL_CALIB_0__calib_0_RESETVALUE 0x3fffffff
#define SPL_CALIB_0_WIDTH 32
#define SPL_CALIB_0__WIDTH 32
#define SPL_CALIB_0_ALL_L 31
#define SPL_CALIB_0_ALL_R 0
#define SPL_CALIB_0__ALL_L 31
#define SPL_CALIB_0__ALL_R 0
#define SPL_CALIB_0_DATAMASK 0xffffffff
#define SPL_CALIB_0_RESETVALUE 0x3fffffff
#define SPL_CALIB_1 0x03025008
#define SPL_CALIB_1_BASE 0x008
#define SPL_CALIB_1_OFFSET 0x03025008
#define SPL_CALIB_1__reserved_L 31
#define SPL_CALIB_1__reserved_R 30
#define SPL_CALIB_1__reserved_WIDTH 2
#define SPL_CALIB_1__reserved_RESETVALUE 0x0
#define SPL_CALIB_1__calib_1_L 29
#define SPL_CALIB_1__calib_1_R 0
#define SPL_CALIB_1__calib_1_WIDTH 30
#define SPL_CALIB_1__calib_1_RESETVALUE 0x3fffffff
#define SPL_CALIB_1_WIDTH 32
#define SPL_CALIB_1__WIDTH 32
#define SPL_CALIB_1_ALL_L 31
#define SPL_CALIB_1_ALL_R 0
#define SPL_CALIB_1__ALL_L 31
#define SPL_CALIB_1__ALL_R 0
#define SPL_CALIB_1_DATAMASK 0xffffffff
#define SPL_CALIB_1_RESETVALUE 0x3fffffff
#define SPL_CALIB_2 0x0302500c
#define SPL_CALIB_2_BASE 0x00c
#define SPL_CALIB_2_OFFSET 0x0302500c
#define SPL_CALIB_2__reserved_L 31
#define SPL_CALIB_2__reserved_R 15
#define SPL_CALIB_2__reserved_WIDTH 17
#define SPL_CALIB_2__reserved_RESETVALUE 0x0
#define SPL_CALIB_2__calib_2_L 14
#define SPL_CALIB_2__calib_2_R 0
#define SPL_CALIB_2__calib_2_WIDTH 15
#define SPL_CALIB_2__calib_2_RESETVALUE 0x7fff
#define SPL_CALIB_2_WIDTH 32
#define SPL_CALIB_2__WIDTH 32
#define SPL_CALIB_2_ALL_L 31
#define SPL_CALIB_2_ALL_R 0
#define SPL_CALIB_2__ALL_L 31
#define SPL_CALIB_2__ALL_R 0
#define SPL_CALIB_2_DATAMASK 0xffffffff
#define SPL_CALIB_2_RESETVALUE 0x7fff
#define SPL_FREQ_MON_EN_0 0x03025010
#define SPL_FREQ_MON_EN_0_BASE 0x010
#define SPL_FREQ_MON_EN_0_OFFSET 0x03025010
#define SPL_FREQ_MON_EN_0__reserved_L 31
#define SPL_FREQ_MON_EN_0__reserved_R 17
#define SPL_FREQ_MON_EN_0__reserved_WIDTH 15
#define SPL_FREQ_MON_EN_0__reserved_RESETVALUE 0x0
#define SPL_FREQ_MON_EN_0__high_freq_mon_en_0 16
#define SPL_FREQ_MON_EN_0__high_freq_mon_en_0_WIDTH 1
#define SPL_FREQ_MON_EN_0__high_freq_mon_en_0_RESETVALUE 0x0
#define SPL_FREQ_MON_EN_0__low_freq_mon_en_0 0
#define SPL_FREQ_MON_EN_0__low_freq_mon_en_0_WIDTH 1
#define SPL_FREQ_MON_EN_0__low_freq_mon_en_0_RESETVALUE 0x0
#define SPL_FREQ_MON_EN_0__RESERVED_L 15
#define SPL_FREQ_MON_EN_0__RESERVED_R 1
#define SPL_FREQ_MON_EN_0_WIDTH 32
#define SPL_FREQ_MON_EN_0__WIDTH 32
#define SPL_FREQ_MON_EN_0_ALL_L 31
#define SPL_FREQ_MON_EN_0_ALL_R 0
#define SPL_FREQ_MON_EN_0__ALL_L 31
#define SPL_FREQ_MON_EN_0__ALL_R 0
#define SPL_FREQ_MON_EN_0_DATAMASK 0xffff0001
#define SPL_FREQ_MON_EN_0_RESETVALUE 0x0
#define SPL_MONITOR_POINT_0 0x03025014
#define SPL_MONITOR_POINT_0_BASE 0x014
#define SPL_MONITOR_POINT_0_OFFSET 0x03025014
#define SPL_MONITOR_POINT_0__reserved_L 31
#define SPL_MONITOR_POINT_0__reserved_R 16
#define SPL_MONITOR_POINT_0__reserved_WIDTH 16
#define SPL_MONITOR_POINT_0__reserved_RESETVALUE 0x0000
#define SPL_MONITOR_POINT_0__MONITOR_POINT_0_L 15
#define SPL_MONITOR_POINT_0__MONITOR_POINT_0_R 0
#define SPL_MONITOR_POINT_0__MONITOR_POINT_0_WIDTH 16
#define SPL_MONITOR_POINT_0__MONITOR_POINT_0_RESETVALUE 0x0400
#define SPL_MONITOR_POINT_0_WIDTH 32
#define SPL_MONITOR_POINT_0__WIDTH 32
#define SPL_MONITOR_POINT_0_ALL_L 31
#define SPL_MONITOR_POINT_0_ALL_R 0
#define SPL_MONITOR_POINT_0__ALL_L 31
#define SPL_MONITOR_POINT_0__ALL_R 0
#define SPL_MONITOR_POINT_0_DATAMASK 0xffffffff
#define SPL_MONITOR_POINT_0_RESETVALUE 0x400
#define SPL_LOW_THRESH_0 0x03025018
#define SPL_LOW_THRESH_0_BASE 0x018
#define SPL_LOW_THRESH_0_OFFSET 0x03025018
#define SPL_LOW_THRESH_0__reserved_L 31
#define SPL_LOW_THRESH_0__reserved_R 16
#define SPL_LOW_THRESH_0__reserved_WIDTH 16
#define SPL_LOW_THRESH_0__reserved_RESETVALUE 0x0000
#define SPL_LOW_THRESH_0__LOW_THRESH_0_L 15
#define SPL_LOW_THRESH_0__LOW_THRESH_0_R 0
#define SPL_LOW_THRESH_0__LOW_THRESH_0_WIDTH 16
#define SPL_LOW_THRESH_0__LOW_THRESH_0_RESETVALUE 0x00a2
#define SPL_LOW_THRESH_0_WIDTH 32
#define SPL_LOW_THRESH_0__WIDTH 32
#define SPL_LOW_THRESH_0_ALL_L 31
#define SPL_LOW_THRESH_0_ALL_R 0
#define SPL_LOW_THRESH_0__ALL_L 31
#define SPL_LOW_THRESH_0__ALL_R 0
#define SPL_LOW_THRESH_0_DATAMASK 0xffffffff
#define SPL_LOW_THRESH_0_RESETVALUE 0xa2
#define SPL_HIGH_THRESH_0 0x0302501c
#define SPL_HIGH_THRESH_0_BASE 0x01c
#define SPL_HIGH_THRESH_0_OFFSET 0x0302501c
#define SPL_HIGH_THRESH_0__reserved_L 31
#define SPL_HIGH_THRESH_0__reserved_R 16
#define SPL_HIGH_THRESH_0__reserved_WIDTH 16
#define SPL_HIGH_THRESH_0__reserved_RESETVALUE 0x0000
#define SPL_HIGH_THRESH_0__HIGH_THRESH_0_L 15
#define SPL_HIGH_THRESH_0__HIGH_THRESH_0_R 0
#define SPL_HIGH_THRESH_0__HIGH_THRESH_0_WIDTH 16
#define SPL_HIGH_THRESH_0__HIGH_THRESH_0_RESETVALUE 0x00b3
#define SPL_HIGH_THRESH_0_WIDTH 32
#define SPL_HIGH_THRESH_0__WIDTH 32
#define SPL_HIGH_THRESH_0_ALL_L 31
#define SPL_HIGH_THRESH_0_ALL_R 0
#define SPL_HIGH_THRESH_0__ALL_L 31
#define SPL_HIGH_THRESH_0__ALL_R 0
#define SPL_HIGH_THRESH_0_DATAMASK 0xffffffff
#define SPL_HIGH_THRESH_0_RESETVALUE 0xb3
#define SPL_FREQ_MON_EN_1 0x03025020
#define SPL_FREQ_MON_EN_1_BASE 0x020
#define SPL_FREQ_MON_EN_1_OFFSET 0x03025020
#define SPL_FREQ_MON_EN_1__reserved_L 31
#define SPL_FREQ_MON_EN_1__reserved_R 17
#define SPL_FREQ_MON_EN_1__reserved_WIDTH 15
#define SPL_FREQ_MON_EN_1__reserved_RESETVALUE 0x0
#define SPL_FREQ_MON_EN_1__high_freq_mon_en_1 16
#define SPL_FREQ_MON_EN_1__high_freq_mon_en_1_WIDTH 1
#define SPL_FREQ_MON_EN_1__high_freq_mon_en_1_RESETVALUE 0x0
#define SPL_FREQ_MON_EN_1__low_freq_mon_en_1 0
#define SPL_FREQ_MON_EN_1__low_freq_mon_en_1_WIDTH 1
#define SPL_FREQ_MON_EN_1__low_freq_mon_en_1_RESETVALUE 0x0
#define SPL_FREQ_MON_EN_1__RESERVED_L 15
#define SPL_FREQ_MON_EN_1__RESERVED_R 1
#define SPL_FREQ_MON_EN_1_WIDTH 32
#define SPL_FREQ_MON_EN_1__WIDTH 32
#define SPL_FREQ_MON_EN_1_ALL_L 31
#define SPL_FREQ_MON_EN_1_ALL_R 0
#define SPL_FREQ_MON_EN_1__ALL_L 31
#define SPL_FREQ_MON_EN_1__ALL_R 0
#define SPL_FREQ_MON_EN_1_DATAMASK 0xffff0001
#define SPL_FREQ_MON_EN_1_RESETVALUE 0x0
#define SPL_MONITOR_POINT_1 0x03025024
#define SPL_MONITOR_POINT_1_BASE 0x024
#define SPL_MONITOR_POINT_1_OFFSET 0x03025024
#define SPL_MONITOR_POINT_1__reserved_L 31
#define SPL_MONITOR_POINT_1__reserved_R 16
#define SPL_MONITOR_POINT_1__reserved_WIDTH 16
#define SPL_MONITOR_POINT_1__reserved_RESETVALUE 0x0000
#define SPL_MONITOR_POINT_1__MONITOR_POINT_1_L 15
#define SPL_MONITOR_POINT_1__MONITOR_POINT_1_R 0
#define SPL_MONITOR_POINT_1__MONITOR_POINT_1_WIDTH 16
#define SPL_MONITOR_POINT_1__MONITOR_POINT_1_RESETVALUE 0x0400
#define SPL_MONITOR_POINT_1_WIDTH 32
#define SPL_MONITOR_POINT_1__WIDTH 32
#define SPL_MONITOR_POINT_1_ALL_L 31
#define SPL_MONITOR_POINT_1_ALL_R 0
#define SPL_MONITOR_POINT_1__ALL_L 31
#define SPL_MONITOR_POINT_1__ALL_R 0
#define SPL_MONITOR_POINT_1_DATAMASK 0xffffffff
#define SPL_MONITOR_POINT_1_RESETVALUE 0x400
#define SPL_LOW_THRESH_1 0x03025028
#define SPL_LOW_THRESH_1_BASE 0x028
#define SPL_LOW_THRESH_1_OFFSET 0x03025028
#define SPL_LOW_THRESH_1__reserved_L 31
#define SPL_LOW_THRESH_1__reserved_R 16
#define SPL_LOW_THRESH_1__reserved_WIDTH 16
#define SPL_LOW_THRESH_1__reserved_RESETVALUE 0x0000
#define SPL_LOW_THRESH_1__LOW_THRESH_1_L 15
#define SPL_LOW_THRESH_1__LOW_THRESH_1_R 0
#define SPL_LOW_THRESH_1__LOW_THRESH_1_WIDTH 16
#define SPL_LOW_THRESH_1__LOW_THRESH_1_RESETVALUE 0x0677
#define SPL_LOW_THRESH_1_WIDTH 32
#define SPL_LOW_THRESH_1__WIDTH 32
#define SPL_LOW_THRESH_1_ALL_L 31
#define SPL_LOW_THRESH_1_ALL_R 0
#define SPL_LOW_THRESH_1__ALL_L 31
#define SPL_LOW_THRESH_1__ALL_R 0
#define SPL_LOW_THRESH_1_DATAMASK 0xffffffff
#define SPL_LOW_THRESH_1_RESETVALUE 0x677
#define SPL_HIGH_THRESH_1 0x0302502c
#define SPL_HIGH_THRESH_1_BASE 0x02c
#define SPL_HIGH_THRESH_1_OFFSET 0x0302502c
#define SPL_HIGH_THRESH_1__reserved_L 31
#define SPL_HIGH_THRESH_1__reserved_R 16
#define SPL_HIGH_THRESH_1__reserved_WIDTH 16
#define SPL_HIGH_THRESH_1__reserved_RESETVALUE 0x0000
#define SPL_HIGH_THRESH_1__HIGH_THRESH_1_L 15
#define SPL_HIGH_THRESH_1__HIGH_THRESH_1_R 0
#define SPL_HIGH_THRESH_1__HIGH_THRESH_1_WIDTH 16
#define SPL_HIGH_THRESH_1__HIGH_THRESH_1_RESETVALUE 0x06e0
#define SPL_HIGH_THRESH_1_WIDTH 32
#define SPL_HIGH_THRESH_1__WIDTH 32
#define SPL_HIGH_THRESH_1_ALL_L 31
#define SPL_HIGH_THRESH_1_ALL_R 0
#define SPL_HIGH_THRESH_1__ALL_L 31
#define SPL_HIGH_THRESH_1__ALL_R 0
#define SPL_HIGH_THRESH_1_DATAMASK 0xffffffff
#define SPL_HIGH_THRESH_1_RESETVALUE 0x6e0
#define SPL_FREQ_MON_EN_2 0x03025030
#define SPL_FREQ_MON_EN_2_BASE 0x030
#define SPL_FREQ_MON_EN_2_OFFSET 0x03025030
#define SPL_FREQ_MON_EN_2__reserved_L 31
#define SPL_FREQ_MON_EN_2__reserved_R 17
#define SPL_FREQ_MON_EN_2__reserved_WIDTH 15
#define SPL_FREQ_MON_EN_2__reserved_RESETVALUE 0x0
#define SPL_FREQ_MON_EN_2__high_freq_mon_en_2 16
#define SPL_FREQ_MON_EN_2__high_freq_mon_en_2_WIDTH 1
#define SPL_FREQ_MON_EN_2__high_freq_mon_en_2_RESETVALUE 0x0
#define SPL_FREQ_MON_EN_2__low_freq_mon_en_2 0
#define SPL_FREQ_MON_EN_2__low_freq_mon_en_2_WIDTH 1
#define SPL_FREQ_MON_EN_2__low_freq_mon_en_2_RESETVALUE 0x0
#define SPL_FREQ_MON_EN_2__RESERVED_L 15
#define SPL_FREQ_MON_EN_2__RESERVED_R 1
#define SPL_FREQ_MON_EN_2_WIDTH 32
#define SPL_FREQ_MON_EN_2__WIDTH 32
#define SPL_FREQ_MON_EN_2_ALL_L 31
#define SPL_FREQ_MON_EN_2_ALL_R 0
#define SPL_FREQ_MON_EN_2__ALL_L 31
#define SPL_FREQ_MON_EN_2__ALL_R 0
#define SPL_FREQ_MON_EN_2_DATAMASK 0xffff0001
#define SPL_FREQ_MON_EN_2_RESETVALUE 0x0
#define SPL_MONITOR_POINT_2 0x03025034
#define SPL_MONITOR_POINT_2_BASE 0x034
#define SPL_MONITOR_POINT_2_OFFSET 0x03025034
#define SPL_MONITOR_POINT_2__reserved_L 31
#define SPL_MONITOR_POINT_2__reserved_R 16
#define SPL_MONITOR_POINT_2__reserved_WIDTH 16
#define SPL_MONITOR_POINT_2__reserved_RESETVALUE 0x0000
#define SPL_MONITOR_POINT_2__MONITOR_POINT_2_L 15
#define SPL_MONITOR_POINT_2__MONITOR_POINT_2_R 0
#define SPL_MONITOR_POINT_2__MONITOR_POINT_2_WIDTH 16
#define SPL_MONITOR_POINT_2__MONITOR_POINT_2_RESETVALUE 0x0400
#define SPL_MONITOR_POINT_2_WIDTH 32
#define SPL_MONITOR_POINT_2__WIDTH 32
#define SPL_MONITOR_POINT_2_ALL_L 31
#define SPL_MONITOR_POINT_2_ALL_R 0
#define SPL_MONITOR_POINT_2__ALL_L 31
#define SPL_MONITOR_POINT_2__ALL_R 0
#define SPL_MONITOR_POINT_2_DATAMASK 0xffffffff
#define SPL_MONITOR_POINT_2_RESETVALUE 0x400
#define SPL_LOW_THRESH_2 0x03025038
#define SPL_LOW_THRESH_2_BASE 0x038
#define SPL_LOW_THRESH_2_OFFSET 0x03025038
#define SPL_LOW_THRESH_2__reserved_L 31
#define SPL_LOW_THRESH_2__reserved_R 16
#define SPL_LOW_THRESH_2__reserved_WIDTH 16
#define SPL_LOW_THRESH_2__reserved_RESETVALUE 0x0000
#define SPL_LOW_THRESH_2__LOW_THRESH_2_L 15
#define SPL_LOW_THRESH_2__LOW_THRESH_2_R 0
#define SPL_LOW_THRESH_2__LOW_THRESH_2_WIDTH 16
#define SPL_LOW_THRESH_2__LOW_THRESH_2_RESETVALUE 0x006a
#define SPL_LOW_THRESH_2_WIDTH 32
#define SPL_LOW_THRESH_2__WIDTH 32
#define SPL_LOW_THRESH_2_ALL_L 31
#define SPL_LOW_THRESH_2_ALL_R 0
#define SPL_LOW_THRESH_2__ALL_L 31
#define SPL_LOW_THRESH_2__ALL_R 0
#define SPL_LOW_THRESH_2_DATAMASK 0xffffffff
#define SPL_LOW_THRESH_2_RESETVALUE 0x6a
#define SPL_HIGH_THRESH_2 0x0302503c
#define SPL_HIGH_THRESH_2_BASE 0x03c
#define SPL_HIGH_THRESH_2_OFFSET 0x0302503c
#define SPL_HIGH_THRESH_2__reserved_L 31
#define SPL_HIGH_THRESH_2__reserved_R 16
#define SPL_HIGH_THRESH_2__reserved_WIDTH 16
#define SPL_HIGH_THRESH_2__reserved_RESETVALUE 0x0000
#define SPL_HIGH_THRESH_2__HIGH_THRESH_2_L 15
#define SPL_HIGH_THRESH_2__HIGH_THRESH_2_R 0
#define SPL_HIGH_THRESH_2__HIGH_THRESH_2_WIDTH 16
#define SPL_HIGH_THRESH_2__HIGH_THRESH_2_RESETVALUE 0x0076
#define SPL_HIGH_THRESH_2_WIDTH 32
#define SPL_HIGH_THRESH_2__WIDTH 32
#define SPL_HIGH_THRESH_2_ALL_L 31
#define SPL_HIGH_THRESH_2_ALL_R 0
#define SPL_HIGH_THRESH_2__ALL_L 31
#define SPL_HIGH_THRESH_2__ALL_R 0
#define SPL_HIGH_THRESH_2_DATAMASK 0xffffffff
#define SPL_HIGH_THRESH_2_RESETVALUE 0x76
#define SPL_RST_MON_EN_0 0x03025040
#define SPL_RST_MON_EN_0_BASE 0x040
#define SPL_RST_MON_EN_0_OFFSET 0x03025040
#define SPL_RST_MON_EN_0__reserved_L 31
#define SPL_RST_MON_EN_0__reserved_R 1
#define SPL_RST_MON_EN_0__reserved_WIDTH 31
#define SPL_RST_MON_EN_0__reserved_RESETVALUE 0x0
#define SPL_RST_MON_EN_0__rst_mon_en_0 0
#define SPL_RST_MON_EN_0__rst_mon_en_0_WIDTH 1
#define SPL_RST_MON_EN_0__rst_mon_en_0_RESETVALUE 0x0
#define SPL_RST_MON_EN_0_WIDTH 32
#define SPL_RST_MON_EN_0__WIDTH 32
#define SPL_RST_MON_EN_0_ALL_L 31
#define SPL_RST_MON_EN_0_ALL_R 0
#define SPL_RST_MON_EN_0__ALL_L 31
#define SPL_RST_MON_EN_0__ALL_R 0
#define SPL_RST_MON_EN_0_DATAMASK 0xffffffff
#define SPL_RST_MON_EN_0_RESETVALUE 0x0
#define SPL_RST_CNT_THRESH_0 0x03025044
#define SPL_RST_CNT_THRESH_0_BASE 0x044
#define SPL_RST_CNT_THRESH_0_OFFSET 0x03025044
#define SPL_RST_CNT_THRESH_0__reserved_L 31
#define SPL_RST_CNT_THRESH_0__reserved_R 8
#define SPL_RST_CNT_THRESH_0__reserved_WIDTH 24
#define SPL_RST_CNT_THRESH_0__reserved_RESETVALUE 0x000000
#define SPL_RST_CNT_THRESH_0__rst_cnt_thresh_0_L 7
#define SPL_RST_CNT_THRESH_0__rst_cnt_thresh_0_R 0
#define SPL_RST_CNT_THRESH_0__rst_cnt_thresh_0_WIDTH 8
#define SPL_RST_CNT_THRESH_0__rst_cnt_thresh_0_RESETVALUE 0x0a
#define SPL_RST_CNT_THRESH_0_WIDTH 32
#define SPL_RST_CNT_THRESH_0__WIDTH 32
#define SPL_RST_CNT_THRESH_0_ALL_L 31
#define SPL_RST_CNT_THRESH_0_ALL_R 0
#define SPL_RST_CNT_THRESH_0__ALL_L 31
#define SPL_RST_CNT_THRESH_0__ALL_R 0
#define SPL_RST_CNT_THRESH_0_DATAMASK 0xffffffff
#define SPL_RST_CNT_THRESH_0_RESETVALUE 0xa
#define SPL_WIN_CNT_THRESH_0 0x03025048
#define SPL_WIN_CNT_THRESH_0_BASE 0x048
#define SPL_WIN_CNT_THRESH_0_OFFSET 0x03025048
#define SPL_WIN_CNT_THRESH_0__win_cnt_thresh_0_L 31
#define SPL_WIN_CNT_THRESH_0__win_cnt_thresh_0_R 0
#define SPL_WIN_CNT_THRESH_0__win_cnt_thresh_0_WIDTH 32
#define SPL_WIN_CNT_THRESH_0__win_cnt_thresh_0_RESETVALUE 0x7fffffff
#define SPL_WIN_CNT_THRESH_0_WIDTH 32
#define SPL_WIN_CNT_THRESH_0__WIDTH 32
#define SPL_WIN_CNT_THRESH_0_ALL_L 31
#define SPL_WIN_CNT_THRESH_0_ALL_R 0
#define SPL_WIN_CNT_THRESH_0__ALL_L 31
#define SPL_WIN_CNT_THRESH_0__ALL_R 0
#define SPL_WIN_CNT_THRESH_0_DATAMASK 0xffffffff
#define SPL_WIN_CNT_THRESH_0_RESETVALUE 0x7fffffff
#define SPL_RST_CNT_VAL_0 0x0302504c
#define SPL_RST_CNT_VAL_0_BASE 0x04c
#define SPL_RST_CNT_VAL_0_OFFSET 0x0302504c
#define SPL_RST_CNT_VAL_0__reserved_L 31
#define SPL_RST_CNT_VAL_0__reserved_R 8
#define SPL_RST_CNT_VAL_0__reserved_WIDTH 24
#define SPL_RST_CNT_VAL_0__reserved_RESETVALUE 0x000000
#define SPL_RST_CNT_VAL_0__rst_cnt_val_0_L 7
#define SPL_RST_CNT_VAL_0__rst_cnt_val_0_R 0
#define SPL_RST_CNT_VAL_0__rst_cnt_val_0_WIDTH 8
#define SPL_RST_CNT_VAL_0__rst_cnt_val_0_RESETVALUE 0x00
#define SPL_RST_CNT_VAL_0_WIDTH 32
#define SPL_RST_CNT_VAL_0__WIDTH 32
#define SPL_RST_CNT_VAL_0_ALL_L 31
#define SPL_RST_CNT_VAL_0_ALL_R 0
#define SPL_RST_CNT_VAL_0__ALL_L 31
#define SPL_RST_CNT_VAL_0__ALL_R 0
#define SPL_RST_CNT_VAL_0_DATAMASK 0xffffffff
#define SPL_RST_CNT_VAL_0_RESETVALUE 0x0
#define SPL_WIN_CNT_VAL_0 0x03025050
#define SPL_WIN_CNT_VAL_0_BASE 0x050
#define SPL_WIN_CNT_VAL_0_OFFSET 0x03025050
#define SPL_WIN_CNT_VAL_0__win_cnt_val_0_L 31
#define SPL_WIN_CNT_VAL_0__win_cnt_val_0_R 0
#define SPL_WIN_CNT_VAL_0__win_cnt_val_0_WIDTH 32
#define SPL_WIN_CNT_VAL_0__win_cnt_val_0_RESETVALUE 0x00000000
#define SPL_WIN_CNT_VAL_0_WIDTH 32
#define SPL_WIN_CNT_VAL_0__WIDTH 32
#define SPL_WIN_CNT_VAL_0_ALL_L 31
#define SPL_WIN_CNT_VAL_0_ALL_R 0
#define SPL_WIN_CNT_VAL_0__ALL_L 31
#define SPL_WIN_CNT_VAL_0__ALL_R 0
#define SPL_WIN_CNT_VAL_0_DATAMASK 0xffffffff
#define SPL_WIN_CNT_VAL_0_RESETVALUE 0x0
#define SPL_RST_MON_EN_1 0x03025054
#define SPL_RST_MON_EN_1_BASE 0x054
#define SPL_RST_MON_EN_1_OFFSET 0x03025054
#define SPL_RST_MON_EN_1__reserved_L 31
#define SPL_RST_MON_EN_1__reserved_R 1
#define SPL_RST_MON_EN_1__reserved_WIDTH 31
#define SPL_RST_MON_EN_1__reserved_RESETVALUE 0x0
#define SPL_RST_MON_EN_1__rst_mon_en_1 0
#define SPL_RST_MON_EN_1__rst_mon_en_1_WIDTH 1
#define SPL_RST_MON_EN_1__rst_mon_en_1_RESETVALUE 0x0
#define SPL_RST_MON_EN_1_WIDTH 32
#define SPL_RST_MON_EN_1__WIDTH 32
#define SPL_RST_MON_EN_1_ALL_L 31
#define SPL_RST_MON_EN_1_ALL_R 0
#define SPL_RST_MON_EN_1__ALL_L 31
#define SPL_RST_MON_EN_1__ALL_R 0
#define SPL_RST_MON_EN_1_DATAMASK 0xffffffff
#define SPL_RST_MON_EN_1_RESETVALUE 0x0
#define SPL_RST_CNT_THRESH_1 0x03025058
#define SPL_RST_CNT_THRESH_1_BASE 0x058
#define SPL_RST_CNT_THRESH_1_OFFSET 0x03025058
#define SPL_RST_CNT_THRESH_1__reserved_L 31
#define SPL_RST_CNT_THRESH_1__reserved_R 8
#define SPL_RST_CNT_THRESH_1__reserved_WIDTH 24
#define SPL_RST_CNT_THRESH_1__reserved_RESETVALUE 0x000000
#define SPL_RST_CNT_THRESH_1__rst_cnt_thresh_1_L 7
#define SPL_RST_CNT_THRESH_1__rst_cnt_thresh_1_R 0
#define SPL_RST_CNT_THRESH_1__rst_cnt_thresh_1_WIDTH 8
#define SPL_RST_CNT_THRESH_1__rst_cnt_thresh_1_RESETVALUE 0x14
#define SPL_RST_CNT_THRESH_1_WIDTH 32
#define SPL_RST_CNT_THRESH_1__WIDTH 32
#define SPL_RST_CNT_THRESH_1_ALL_L 31
#define SPL_RST_CNT_THRESH_1_ALL_R 0
#define SPL_RST_CNT_THRESH_1__ALL_L 31
#define SPL_RST_CNT_THRESH_1__ALL_R 0
#define SPL_RST_CNT_THRESH_1_DATAMASK 0xffffffff
#define SPL_RST_CNT_THRESH_1_RESETVALUE 0x14
#define SPL_WIN_CNT_THRESH_1 0x0302505c
#define SPL_WIN_CNT_THRESH_1_BASE 0x05c
#define SPL_WIN_CNT_THRESH_1_OFFSET 0x0302505c
#define SPL_WIN_CNT_THRESH_1__win_cnt_thresh_1_L 31
#define SPL_WIN_CNT_THRESH_1__win_cnt_thresh_1_R 0
#define SPL_WIN_CNT_THRESH_1__win_cnt_thresh_1_WIDTH 32
#define SPL_WIN_CNT_THRESH_1__win_cnt_thresh_1_RESETVALUE 0x7fffffff
#define SPL_WIN_CNT_THRESH_1_WIDTH 32
#define SPL_WIN_CNT_THRESH_1__WIDTH 32
#define SPL_WIN_CNT_THRESH_1_ALL_L 31
#define SPL_WIN_CNT_THRESH_1_ALL_R 0
#define SPL_WIN_CNT_THRESH_1__ALL_L 31
#define SPL_WIN_CNT_THRESH_1__ALL_R 0
#define SPL_WIN_CNT_THRESH_1_DATAMASK 0xffffffff
#define SPL_WIN_CNT_THRESH_1_RESETVALUE 0x7fffffff
#define SPL_RST_CNT_VAL_1 0x03025060
#define SPL_RST_CNT_VAL_1_BASE 0x060
#define SPL_RST_CNT_VAL_1_OFFSET 0x03025060
#define SPL_RST_CNT_VAL_1__reserved_L 31
#define SPL_RST_CNT_VAL_1__reserved_R 8
#define SPL_RST_CNT_VAL_1__reserved_WIDTH 24
#define SPL_RST_CNT_VAL_1__reserved_RESETVALUE 0x000000
#define SPL_RST_CNT_VAL_1__rst_cnt_val_1_L 7
#define SPL_RST_CNT_VAL_1__rst_cnt_val_1_R 0
#define SPL_RST_CNT_VAL_1__rst_cnt_val_1_WIDTH 8
#define SPL_RST_CNT_VAL_1__rst_cnt_val_1_RESETVALUE 0x00
#define SPL_RST_CNT_VAL_1_WIDTH 32
#define SPL_RST_CNT_VAL_1__WIDTH 32
#define SPL_RST_CNT_VAL_1_ALL_L 31
#define SPL_RST_CNT_VAL_1_ALL_R 0
#define SPL_RST_CNT_VAL_1__ALL_L 31
#define SPL_RST_CNT_VAL_1__ALL_R 0
#define SPL_RST_CNT_VAL_1_DATAMASK 0xffffffff
#define SPL_RST_CNT_VAL_1_RESETVALUE 0x0
#define SPL_WIN_CNT_VAL_1 0x03025064
#define SPL_WIN_CNT_VAL_1_BASE 0x064
#define SPL_WIN_CNT_VAL_1_OFFSET 0x03025064
#define SPL_WIN_CNT_VAL_1__win_cnt_val_1_L 31
#define SPL_WIN_CNT_VAL_1__win_cnt_val_1_R 0
#define SPL_WIN_CNT_VAL_1__win_cnt_val_1_WIDTH 32
#define SPL_WIN_CNT_VAL_1__win_cnt_val_1_RESETVALUE 0x00000000
#define SPL_WIN_CNT_VAL_1_WIDTH 32
#define SPL_WIN_CNT_VAL_1__WIDTH 32
#define SPL_WIN_CNT_VAL_1_ALL_L 31
#define SPL_WIN_CNT_VAL_1_ALL_R 0
#define SPL_WIN_CNT_VAL_1__ALL_L 31
#define SPL_WIN_CNT_VAL_1__ALL_R 0
#define SPL_WIN_CNT_VAL_1_DATAMASK 0xffffffff
#define SPL_WIN_CNT_VAL_1_RESETVALUE 0x0
#define SPL_RST_MON_EN_2 0x03025068
#define SPL_RST_MON_EN_2_BASE 0x068
#define SPL_RST_MON_EN_2_OFFSET 0x03025068
#define SPL_RST_MON_EN_2__reserved_L 31
#define SPL_RST_MON_EN_2__reserved_R 1
#define SPL_RST_MON_EN_2__reserved_WIDTH 31
#define SPL_RST_MON_EN_2__reserved_RESETVALUE 0x0
#define SPL_RST_MON_EN_2__rst_mon_en_2 0
#define SPL_RST_MON_EN_2__rst_mon_en_2_WIDTH 1
#define SPL_RST_MON_EN_2__rst_mon_en_2_RESETVALUE 0x0
#define SPL_RST_MON_EN_2_WIDTH 32
#define SPL_RST_MON_EN_2__WIDTH 32
#define SPL_RST_MON_EN_2_ALL_L 31
#define SPL_RST_MON_EN_2_ALL_R 0
#define SPL_RST_MON_EN_2__ALL_L 31
#define SPL_RST_MON_EN_2__ALL_R 0
#define SPL_RST_MON_EN_2_DATAMASK 0xffffffff
#define SPL_RST_MON_EN_2_RESETVALUE 0x0
#define SPL_RST_CNT_THRESH_2 0x0302506c
#define SPL_RST_CNT_THRESH_2_BASE 0x06c
#define SPL_RST_CNT_THRESH_2_OFFSET 0x0302506c
#define SPL_RST_CNT_THRESH_2__reserved_L 31
#define SPL_RST_CNT_THRESH_2__reserved_R 8
#define SPL_RST_CNT_THRESH_2__reserved_WIDTH 24
#define SPL_RST_CNT_THRESH_2__reserved_RESETVALUE 0x000000
#define SPL_RST_CNT_THRESH_2__rst_cnt_thresh_2_L 7
#define SPL_RST_CNT_THRESH_2__rst_cnt_thresh_2_R 0
#define SPL_RST_CNT_THRESH_2__rst_cnt_thresh_2_WIDTH 8
#define SPL_RST_CNT_THRESH_2__rst_cnt_thresh_2_RESETVALUE 0x32
#define SPL_RST_CNT_THRESH_2_WIDTH 32
#define SPL_RST_CNT_THRESH_2__WIDTH 32
#define SPL_RST_CNT_THRESH_2_ALL_L 31
#define SPL_RST_CNT_THRESH_2_ALL_R 0
#define SPL_RST_CNT_THRESH_2__ALL_L 31
#define SPL_RST_CNT_THRESH_2__ALL_R 0
#define SPL_RST_CNT_THRESH_2_DATAMASK 0xffffffff
#define SPL_RST_CNT_THRESH_2_RESETVALUE 0x32
#define SPL_WIN_CNT_THRESH_2 0x03025070
#define SPL_WIN_CNT_THRESH_2_BASE 0x070
#define SPL_WIN_CNT_THRESH_2_OFFSET 0x03025070
#define SPL_WIN_CNT_THRESH_2__win_cnt_thresh_2_L 31
#define SPL_WIN_CNT_THRESH_2__win_cnt_thresh_2_R 0
#define SPL_WIN_CNT_THRESH_2__win_cnt_thresh_2_WIDTH 32
#define SPL_WIN_CNT_THRESH_2__win_cnt_thresh_2_RESETVALUE 0x7fffffff
#define SPL_WIN_CNT_THRESH_2_WIDTH 32
#define SPL_WIN_CNT_THRESH_2__WIDTH 32
#define SPL_WIN_CNT_THRESH_2_ALL_L 31
#define SPL_WIN_CNT_THRESH_2_ALL_R 0
#define SPL_WIN_CNT_THRESH_2__ALL_L 31
#define SPL_WIN_CNT_THRESH_2__ALL_R 0
#define SPL_WIN_CNT_THRESH_2_DATAMASK 0xffffffff
#define SPL_WIN_CNT_THRESH_2_RESETVALUE 0x7fffffff
#define SPL_RST_CNT_VAL_2 0x03025074
#define SPL_RST_CNT_VAL_2_BASE 0x074
#define SPL_RST_CNT_VAL_2_OFFSET 0x03025074
#define SPL_RST_CNT_VAL_2__reserved_L 31
#define SPL_RST_CNT_VAL_2__reserved_R 8
#define SPL_RST_CNT_VAL_2__reserved_WIDTH 24
#define SPL_RST_CNT_VAL_2__reserved_RESETVALUE 0x000000
#define SPL_RST_CNT_VAL_2__rst_cnt_val_2_L 7
#define SPL_RST_CNT_VAL_2__rst_cnt_val_2_R 0
#define SPL_RST_CNT_VAL_2__rst_cnt_val_2_WIDTH 8
#define SPL_RST_CNT_VAL_2__rst_cnt_val_2_RESETVALUE 0x00
#define SPL_RST_CNT_VAL_2_WIDTH 32
#define SPL_RST_CNT_VAL_2__WIDTH 32
#define SPL_RST_CNT_VAL_2_ALL_L 31
#define SPL_RST_CNT_VAL_2_ALL_R 0
#define SPL_RST_CNT_VAL_2__ALL_L 31
#define SPL_RST_CNT_VAL_2__ALL_R 0
#define SPL_RST_CNT_VAL_2_DATAMASK 0xffffffff
#define SPL_RST_CNT_VAL_2_RESETVALUE 0x0
#define SPL_WIN_CNT_VAL_2 0x03025078
#define SPL_WIN_CNT_VAL_2_BASE 0x078
#define SPL_WIN_CNT_VAL_2_OFFSET 0x03025078
#define SPL_WIN_CNT_VAL_2__win_cnt_val_2_L 31
#define SPL_WIN_CNT_VAL_2__win_cnt_val_2_R 0
#define SPL_WIN_CNT_VAL_2__win_cnt_val_2_WIDTH 32
#define SPL_WIN_CNT_VAL_2__win_cnt_val_2_RESETVALUE 0x00000000
#define SPL_WIN_CNT_VAL_2_WIDTH 32
#define SPL_WIN_CNT_VAL_2__WIDTH 32
#define SPL_WIN_CNT_VAL_2_ALL_L 31
#define SPL_WIN_CNT_VAL_2_ALL_R 0
#define SPL_WIN_CNT_VAL_2__ALL_L 31
#define SPL_WIN_CNT_VAL_2__ALL_R 0
#define SPL_WIN_CNT_VAL_2_DATAMASK 0xffffffff
#define SPL_WIN_CNT_VAL_2_RESETVALUE 0x0
#define SPL_RST_MON_EN_3 0x0302507c
#define SPL_RST_MON_EN_3_BASE 0x07c
#define SPL_RST_MON_EN_3_OFFSET 0x0302507c
#define SPL_RST_MON_EN_3__reserved_L 31
#define SPL_RST_MON_EN_3__reserved_R 1
#define SPL_RST_MON_EN_3__reserved_WIDTH 31
#define SPL_RST_MON_EN_3__reserved_RESETVALUE 0x0
#define SPL_RST_MON_EN_3__rst_mon_en_3 0
#define SPL_RST_MON_EN_3__rst_mon_en_3_WIDTH 1
#define SPL_RST_MON_EN_3__rst_mon_en_3_RESETVALUE 0x0
#define SPL_RST_MON_EN_3_WIDTH 32
#define SPL_RST_MON_EN_3__WIDTH 32
#define SPL_RST_MON_EN_3_ALL_L 31
#define SPL_RST_MON_EN_3_ALL_R 0
#define SPL_RST_MON_EN_3__ALL_L 31
#define SPL_RST_MON_EN_3__ALL_R 0
#define SPL_RST_MON_EN_3_DATAMASK 0xffffffff
#define SPL_RST_MON_EN_3_RESETVALUE 0x0
#define SPL_RST_CNT_THRESH_3 0x03025080
#define SPL_RST_CNT_THRESH_3_BASE 0x080
#define SPL_RST_CNT_THRESH_3_OFFSET 0x03025080
#define SPL_RST_CNT_THRESH_3__reserved_L 31
#define SPL_RST_CNT_THRESH_3__reserved_R 8
#define SPL_RST_CNT_THRESH_3__reserved_WIDTH 24
#define SPL_RST_CNT_THRESH_3__reserved_RESETVALUE 0x000000
#define SPL_RST_CNT_THRESH_3__rst_cnt_thresh_3_L 7
#define SPL_RST_CNT_THRESH_3__rst_cnt_thresh_3_R 0
#define SPL_RST_CNT_THRESH_3__rst_cnt_thresh_3_WIDTH 8
#define SPL_RST_CNT_THRESH_3__rst_cnt_thresh_3_RESETVALUE 0x64
#define SPL_RST_CNT_THRESH_3_WIDTH 32
#define SPL_RST_CNT_THRESH_3__WIDTH 32
#define SPL_RST_CNT_THRESH_3_ALL_L 31
#define SPL_RST_CNT_THRESH_3_ALL_R 0
#define SPL_RST_CNT_THRESH_3__ALL_L 31
#define SPL_RST_CNT_THRESH_3__ALL_R 0
#define SPL_RST_CNT_THRESH_3_DATAMASK 0xffffffff
#define SPL_RST_CNT_THRESH_3_RESETVALUE 0x64
#define SPL_WIN_CNT_THRESH_3 0x03025084
#define SPL_WIN_CNT_THRESH_3_BASE 0x084
#define SPL_WIN_CNT_THRESH_3_OFFSET 0x03025084
#define SPL_WIN_CNT_THRESH_3__win_cnt_thresh_3_L 31
#define SPL_WIN_CNT_THRESH_3__win_cnt_thresh_3_R 0
#define SPL_WIN_CNT_THRESH_3__win_cnt_thresh_3_WIDTH 32
#define SPL_WIN_CNT_THRESH_3__win_cnt_thresh_3_RESETVALUE 0x7fffffff
#define SPL_WIN_CNT_THRESH_3_WIDTH 32
#define SPL_WIN_CNT_THRESH_3__WIDTH 32
#define SPL_WIN_CNT_THRESH_3_ALL_L 31
#define SPL_WIN_CNT_THRESH_3_ALL_R 0
#define SPL_WIN_CNT_THRESH_3__ALL_L 31
#define SPL_WIN_CNT_THRESH_3__ALL_R 0
#define SPL_WIN_CNT_THRESH_3_DATAMASK 0xffffffff
#define SPL_WIN_CNT_THRESH_3_RESETVALUE 0x7fffffff
#define SPL_RST_CNT_VAL_3 0x03025088
#define SPL_RST_CNT_VAL_3_BASE 0x088
#define SPL_RST_CNT_VAL_3_OFFSET 0x03025088
#define SPL_RST_CNT_VAL_3__reserved_L 31
#define SPL_RST_CNT_VAL_3__reserved_R 8
#define SPL_RST_CNT_VAL_3__reserved_WIDTH 24
#define SPL_RST_CNT_VAL_3__reserved_RESETVALUE 0x000000
#define SPL_RST_CNT_VAL_3__rst_cnt_val_3_L 7
#define SPL_RST_CNT_VAL_3__rst_cnt_val_3_R 0
#define SPL_RST_CNT_VAL_3__rst_cnt_val_3_WIDTH 8
#define SPL_RST_CNT_VAL_3__rst_cnt_val_3_RESETVALUE 0x00
#define SPL_RST_CNT_VAL_3_WIDTH 32
#define SPL_RST_CNT_VAL_3__WIDTH 32
#define SPL_RST_CNT_VAL_3_ALL_L 31
#define SPL_RST_CNT_VAL_3_ALL_R 0
#define SPL_RST_CNT_VAL_3__ALL_L 31
#define SPL_RST_CNT_VAL_3__ALL_R 0
#define SPL_RST_CNT_VAL_3_DATAMASK 0xffffffff
#define SPL_RST_CNT_VAL_3_RESETVALUE 0x0
#define SPL_WIN_CNT_VAL_3 0x0302508c
#define SPL_WIN_CNT_VAL_3_BASE 0x08c
#define SPL_WIN_CNT_VAL_3_OFFSET 0x0302508c
#define SPL_WIN_CNT_VAL_3__win_cnt_val_3_L 31
#define SPL_WIN_CNT_VAL_3__win_cnt_val_3_R 0
#define SPL_WIN_CNT_VAL_3__win_cnt_val_3_WIDTH 32
#define SPL_WIN_CNT_VAL_3__win_cnt_val_3_RESETVALUE 0x00000000
#define SPL_WIN_CNT_VAL_3_WIDTH 32
#define SPL_WIN_CNT_VAL_3__WIDTH 32
#define SPL_WIN_CNT_VAL_3_ALL_L 31
#define SPL_WIN_CNT_VAL_3_ALL_R 0
#define SPL_WIN_CNT_VAL_3__ALL_L 31
#define SPL_WIN_CNT_VAL_3__ALL_R 0
#define SPL_WIN_CNT_VAL_3_DATAMASK 0xffffffff
#define SPL_WIN_CNT_VAL_3_RESETVALUE 0x0
#define OSC_EN 0x03025090
#define OSC_EN_BASE 0x090
#define OSC_EN_OFFSET 0x03025090
#define OSC_EN__reserved_L 31
#define OSC_EN__reserved_R 1
#define OSC_EN__reserved_WIDTH 31
#define OSC_EN__reserved_RESETVALUE 0x0
#define OSC_EN__osc_out_en 0
#define OSC_EN__osc_out_en_WIDTH 1
#define OSC_EN__osc_out_en_RESETVALUE 0x1
#define OSC_EN_WIDTH 32
#define OSC_EN__WIDTH 32
#define OSC_EN_ALL_L 31
#define OSC_EN_ALL_R 0
#define OSC_EN__ALL_L 31
#define OSC_EN__ALL_R 0
#define OSC_EN_DATAMASK 0xffffffff
#define OSC_EN_RESETVALUE 0x1
#define M2MC_BLIT_CTRL_REG__BLOCK_AUTO_SPLIT_FIFO 17
#define M2MC_BLIT_CTRL_REG__BLOCK_AUTO_SPLIT_FIFO_WIDTH 1
#define M2MC_BLIT_CTRL_REG__BLOCK_AUTO_SPLIT_FIFO_RESETVALUE 0x0
#define DSI4_TXPKT1_C__DISPLAY_NO_L 9
#define DSI4_TXPKT1_C__DISPLAY_NO_R 8
#define DSI4_TXPKT1_C__DISPLAY_NO_WIDTH 2
#define DSI4_TXPKT1_C__DISPLAY_NO_RESETVALUE 0x0
#define DSI4_TXPKT2_C__DISPLAY_NO_L 9
#define DSI4_TXPKT2_C__DISPLAY_NO_R 8
#define DSI4_TXPKT2_C__DISPLAY_NO_WIDTH 2
#define DSI4_TXPKT2_C__DISPLAY_NO_RESETVALUE 0x0
#define DDR_DENALI_CTL_166__BANK_SPLIT_EN 0
#define DDR_DENALI_CTL_166__BANK_SPLIT_EN_WIDTH 1
#define DDR_DENALI_CTL_166__BANK_SPLIT_EN_RESETVALUE 0x0
#define DDR_DENALI_CTL_167__W2R_SPLIT_EN 16
#define DDR_DENALI_CTL_167__W2R_SPLIT_EN_WIDTH 1
#define DDR_DENALI_CTL_167__W2R_SPLIT_EN_RESETVALUE 0x0
#define DDR_PHY_CONTROL_REGS_DRAM_CONFIG__SPLIT_DQ_BUS 26
#define DDR_PHY_CONTROL_REGS_DRAM_CONFIG__SPLIT_DQ_BUS_WIDTH 1
#define DDR_PHY_CONTROL_REGS_DRAM_CONFIG__SPLIT_DQ_BUS_RESETVALUE 0x0
#define CHIP_CONFIG_OTP__CRMU_OTP_SPL_CALIB_INP2_L 344
#define CHIP_CONFIG_OTP__CRMU_OTP_SPL_CALIB_INP2_R 330
#define CHIP_CONFIG_OTP__CRMU_OTP_SPL_CALIB_INP2_WIDTH 15
#define CHIP_CONFIG_OTP__CRMU_OTP_SPL_CALIB_INP2_RESETVALUE 0x7fff
#define CHIP_CONFIG_OTP__CRMU_OTP_SPL_CALIB_INP1_L 329
#define CHIP_CONFIG_OTP__CRMU_OTP_SPL_CALIB_INP1_R 300
#define CHIP_CONFIG_OTP__CRMU_OTP_SPL_CALIB_INP1_WIDTH 30
#define CHIP_CONFIG_OTP__CRMU_OTP_SPL_CALIB_INP1_RESETVALUE 0x3fffffff
#define CHIP_CONFIG_OTP__CRMU_OTP_SPL_CALIB_INP0_L 299
#define CHIP_CONFIG_OTP__CRMU_OTP_SPL_CALIB_INP0_R 270
#define CHIP_CONFIG_OTP__CRMU_OTP_SPL_CALIB_INP0_WIDTH 30
#define CHIP_CONFIG_OTP__CRMU_OTP_SPL_CALIB_INP0_RESETVALUE 0x3fffffff
#define CHIP_CONFIG_OTP__CRMU_OTP_SPL_SH_EN_CLKAON_L 69
#define CHIP_CONFIG_OTP__CRMU_OTP_SPL_SH_EN_CLKAON_R 60
#define CHIP_CONFIG_OTP__CRMU_OTP_SPL_SH_EN_CLKAON_WIDTH 10
#define CHIP_CONFIG_OTP__CRMU_OTP_SPL_SH_EN_CLKAON_RESETVALUE 0x0
#define CHIP_INTR1__SPL_FMON 8
#define CHIP_INTR1__SPL_FMON_WIDTH 1
#define CHIP_INTR1__SPL_PVTMON 7
#define CHIP_INTR1__SPL_PVTMON_WIDTH 1
#define CHIP_INTR1__SPL_RSTMON 6
#define CHIP_INTR1__SPL_RSTMON_WIDTH 1
#define CHIP_INTR1__SPL_WDOG 5
#define CHIP_INTR1__SPL_WDOG_WIDTH 1
#endif//_SOC_REGS_H