/*
 * Copyright 2016 Broadcom Corporation.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef DDR40_H__
#define DDR40_H__
typedef unsigned int uint32;
typedef unsigned short uint16;
typedef int int32;
typedef short int16;

#define BCM_DDR3_SUPPORT (1)
/**
 * m = memory, c = core, r = register, f = field, d = data.
 */
#if !defined(GET_FIELD) && !defined(SET_FIELD)
#define BRCM_ALIGN(c,r,f)   c##_##r##_##f##_ALIGN
#define BRCM_BITS(c,r,f)    c##_##r##_##f##_BITS
#define BRCM_MASK(c,r,f)    c##_##r##_##f##_MASK
#define BRCM_SHIFT(c,r,f)   c##_##r##_##f##_SHIFT

#define GET_FIELD(m,c,r,f) \
	((((m) & BRCM_MASK(c,r,f)) >> BRCM_SHIFT(c,r,f)) << BRCM_ALIGN(c,r,f))

#define SET_FIELD(m,c,r,f,d) \
	((m) = (((m) & ~BRCM_MASK(c,r,f)) | ((((d) >> BRCM_ALIGN(c,r,f)) << \
	 BRCM_SHIFT(c,r,f)) & BRCM_MASK(c,r,f))) \
	)

#define SET_TYPE_FIELD(m,c,r,f,d) SET_FIELD(m,c,r,f,c##_##d)
#define SET_NAME_FIELD(m,c,r,f,d) SET_FIELD(m,c,r,f,c##_##r##_##f##_##d)
#define SET_VALUE_FIELD(m,c,r,f,d) SET_FIELD(m,c,r,f,d)

#endif /* GET & SET */

/****************************************************************************
 * Core Enums.
 ***************************************************************************/
/****************************************************************************
 * DDR40_PHY_DDR40_PHY_CONTROL_REGS
 ***************************************************************************/

/* Address & Control revision register */
#define READ_DDR40_PHY_CONTROL_REGS_REVISIONr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000000, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_REVISIONr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000000, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_REVISIONr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000000, (_val), (_mask))

/* PHY clock power management control register */
#define READ_DDR40_PHY_CONTROL_REGS_CLK_PM_CTRLr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000004, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_CLK_PM_CTRLr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000004, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_CLK_PM_CTRLr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000004, (_val), (_mask))

/* PHY PLL status register */
#define READ_DDR40_PHY_CONTROL_REGS_PLL_STATUSr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000010, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_PLL_STATUSr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000010, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_PLL_STATUSr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000010, (_val), (_mask))

/* PHY PLL configuration register */
#define READ_DDR40_PHY_CONTROL_REGS_PLL_CONFIGr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000014, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_PLL_CONFIGr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000014, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_PLL_CONFIGr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000014, (_val), (_mask))

/* PHY PLL control register */
#define READ_DDR40_PHY_CONTROL_REGS_PLL_CONTROLr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000018, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_PLL_CONTROLr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000018, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_PLL_CONTROLr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000018, (_val), (_mask))

/* PHY PLL dividers control register */
#define READ_DDR40_PHY_CONTROL_REGS_PLL_DIVIDERSr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000001c, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_PLL_DIVIDERSr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000001c, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_PLL_DIVIDERSr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000001c, (_val), (_mask))

/* Aux Control register */
#define READ_DDR40_PHY_CONTROL_REGS_AUX_CONTROLr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000020, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_AUX_CONTROLr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000020, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_AUX_CONTROLr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000020, (_val), (_mask))

/* Address & Control coarse VDL static override control register */
#define READ_DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTLr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000030, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTLr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000030, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTLr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000030, (_val), (_mask))

/* Address & Control fine VDL static override control register */
#define READ_DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTLr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000034, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTLr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000034, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTLr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000034, (_val), (_mask))

/* Idle mode SSTL pad control register */
#define READ_DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROLr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000038, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROLr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000038, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROLr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000038, (_val), (_mask))

/* PVT Compensation control and status register */
#define READ_DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTLr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000003c, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTLr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000003c, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTLr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000003c, (_val), (_mask))

/* SSTL pad drive characteristics control register */
#define READ_DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTLr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000040, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTLr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000040, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTLr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000040, (_val), (_mask))

/* PHY Auto Init rd_data_dly result register */
#define READ_DDR40_PHY_CONTROL_REGS_VDL_RD_DATA_DLY_STATUSr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000044, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_VDL_RD_DATA_DLY_STATUSr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000044, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_VDL_RD_DATA_DLY_STATUSr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000044, (_val), (_mask))

/* PHY VDL calibration control register */
#define READ_DDR40_PHY_CONTROL_REGS_VDL_CALIBRATEr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000048, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_VDL_CALIBRATEr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000048, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_VDL_CALIBRATEr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000048, (_val), (_mask))

/* PHY VDL calibration status register */
#define READ_DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUSr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000004c, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUSr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000004c, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUSr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000004c, (_val), (_mask))

/* PHY DQ VDL calibration status register */
#define READ_DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUSr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000050, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUSr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000050, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUSr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000050, (_val), (_mask))

/* PHY Write Channel VDL calibration status register */
#define READ_DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUSr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000054, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUSr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000054, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUSr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000054, (_val), (_mask))

/* PHY Read Enable VDL calibration status register */
#define READ_DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUSr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000058, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUSr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000058, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUSr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000058, (_val), (_mask))

/* Virtual VTT Control and Status register */
#define READ_DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROLr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000005c, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROLr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000005c, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROLr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000005c, (_val), (_mask))

/* Virtual VTT Control and Status register */
#define READ_DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_STATUSr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000060, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_STATUSr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000060, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_STATUSr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000060, (_val), (_mask))

/* Virtual VTT Connections register */
#define READ_DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONNECTIONSr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000064, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONNECTIONSr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000064, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONNECTIONSr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000064, (_val), (_mask))

/* Virtual VTT Override register */
#define READ_DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_OVERRIDEr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000068, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_OVERRIDEr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000068, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_OVERRIDEr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000068, (_val), (_mask))

/* VREF DAC Control register */
#define READ_DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROLr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000006c, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROLr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000006c, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROLr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000006c, (_val), (_mask))

/* PhyBist Control Register */
#define READ_DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRLr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000070, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRLr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000070, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRLr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000070, (_val), (_mask))

/* PhyBist Seed Register */
#define READ_DDR40_PHY_CONTROL_REGS_PHYBIST_SEEDr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000074, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_PHYBIST_SEEDr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000074, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_PHYBIST_SEEDr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000074, (_val), (_mask))

/* PhyBist General Status Register */
#define READ_DDR40_PHY_CONTROL_REGS_PHYBIST_STATUSr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000078, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_PHYBIST_STATUSr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000078, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_PHYBIST_STATUSr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000078, (_val), (_mask))

/* PhyBist Per-Bit Control Pad Status Register */
#define READ_DDR40_PHY_CONTROL_REGS_PHYBIST_CTL_STATUSr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000007c, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_PHYBIST_CTL_STATUSr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000007c, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_PHYBIST_CTL_STATUSr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000007c, (_val), (_mask))

/* PhyBist Per-Bit DQ Pad Status Register */
#define READ_DDR40_PHY_CONTROL_REGS_PHYBIST_DQ_STATUSr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000080, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_PHYBIST_DQ_STATUSr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000080, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_PHYBIST_DQ_STATUSr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000080, (_val), (_mask))

/* PhyBist Per-Bit DM and CK Pad Status Register */
#define READ_DDR40_PHY_CONTROL_REGS_PHYBIST_MISC_STATUSr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000084, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_PHYBIST_MISC_STATUSr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000084, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_PHYBIST_MISC_STATUSr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000084, (_val), (_mask))

/* DRAM Command Register */
#define READ_DDR40_PHY_CONTROL_REGS_COMMAND_REGr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000090, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_COMMAND_REGr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000090, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_COMMAND_REGr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000090, (_val), (_mask))

/* Mode Register 0 */
#define READ_DDR40_PHY_CONTROL_REGS_MODE_REG0r(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000094, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_MODE_REG0r(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000094, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_MODE_REG0r(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000094, (_val), (_mask))

/* Mode Register 1 */
#define READ_DDR40_PHY_CONTROL_REGS_MODE_REG1r(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000098, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_MODE_REG1r(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000098, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_MODE_REG1r(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000098, (_val), (_mask))

/* Mode Register 2 */
#define READ_DDR40_PHY_CONTROL_REGS_MODE_REG2r(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000009c, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_MODE_REG2r(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000009c, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_MODE_REG2r(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000009c, (_val), (_mask))

/* Mode Register 3 */
#define READ_DDR40_PHY_CONTROL_REGS_MODE_REG3r(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000000a0, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_MODE_REG3r(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000000a0, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_MODE_REG3r(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000000a0, (_val), (_mask))

/* Standby Control register */
#define READ_DDR40_PHY_CONTROL_REGS_STANDBY_CONTROLr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000000a4, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_STANDBY_CONTROLr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000000a4, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_STANDBY_CONTROLr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000000a4, (_val), (_mask))

/* Strap Control register */
#define READ_DDR40_PHY_CONTROL_REGS_STRAP_CONTROLr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000000b0, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_STRAP_CONTROLr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000000b0, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_STRAP_CONTROLr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000000b0, (_val), (_mask))

/* Strap Control register */
#define READ_DDR40_PHY_CONTROL_REGS_STRAP_CONTROL2r(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000000b4, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_STRAP_CONTROL2r(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000000b4, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_STRAP_CONTROL2r(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000000b4, (_val), (_mask))

/* Strap Status register */
#define READ_DDR40_PHY_CONTROL_REGS_STRAP_STATUSr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000000b8, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_STRAP_STATUSr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000000b8, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_STRAP_STATUSr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000000b8, (_val), (_mask))

/* Strap Status register */
#define READ_DDR40_PHY_CONTROL_REGS_STRAP_STATUS2r(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000000bc, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_STRAP_STATUS2r(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000000bc, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_STRAP_STATUS2r(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000000bc, (_val), (_mask))

/* Freeze-on-error enable register */
#define READ_DDR40_PHY_CONTROL_REGS_DEBUG_FREEZE_ENABLEr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000000c0, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_DEBUG_FREEZE_ENABLEr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000000c0, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_DEBUG_FREEZE_ENABLEr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000000c0, (_val), (_mask))

/* Datapth Loopback control register */
#define READ_DDR40_PHY_CONTROL_REGS_DATAPATH_LOOPBACKr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000000c4, (_val))
#define WRITE_DDR40_PHY_CONTROL_REGS_DATAPATH_LOOPBACKr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000000c4, (_val))
#define MODIFY_DDR40_PHY_CONTROL_REGS_DATAPATH_LOOPBACKr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000000c4, (_val), (_mask))


/****************************************************************************
 * DDR40_PHY_DDR40_PHY_WORD_LANE_0
 ***************************************************************************/

/* Read Enable Byte VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_ENr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000200, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_ENr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000200, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_ENr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000200, (_val), (_mask))

/* Write Byte VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000204, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000204, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000204, (_val), (_mask))

/* Read Byte DQSP VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000208, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000208, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000208, (_val), (_mask))

/* Read Byte DQSN VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000020c, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000020c, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000020c, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000210, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000210, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000210, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000214, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000214, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000214, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000218, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000218, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000218, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000021c, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000021c, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000021c, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000220, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000220, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000220, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000224, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000224, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000224, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000228, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000228, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000228, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000022c, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000022c, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000022c, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000230, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000230, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000230, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000234, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000234, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000234, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000238, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000238, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000238, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000023c, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000023c, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000023c, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000240, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000240, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000240, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000244, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000244, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000244, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000248, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000248, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000248, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000024c, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000024c, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000024c, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000250, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000250, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000250, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000254, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000254, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000254, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000258, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000258, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000258, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000025c, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000025c, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000025c, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000260, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000260, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000260, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000264, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000264, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000264, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000268, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000268, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000268, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000026c, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000026c, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000026c, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000270, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000270, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000270, (_val), (_mask))

/* Read Enable Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_ENr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000274, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_ENr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000274, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_ENr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000274, (_val), (_mask))

/* Write Byte VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000002a4, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000002a4, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000002a4, (_val), (_mask))

/* Read Byte DQSP VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000002a8, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000002a8, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000002a8, (_val), (_mask))

/* Read Byte DQSN VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000002ac, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000002ac, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000002ac, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000002b0, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000002b0, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000002b0, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000002b4, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000002b4, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000002b4, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000002b8, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000002b8, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000002b8, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000002bc, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000002bc, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000002bc, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000002c0, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000002c0, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000002c0, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000002c4, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000002c4, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000002c4, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000002c8, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000002c8, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000002c8, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000002cc, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000002cc, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000002cc, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000002d0, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000002d0, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000002d0, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000002d4, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000002d4, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000002d4, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000002d8, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000002d8, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000002d8, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000002dc, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000002dc, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000002dc, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000002e0, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000002e0, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000002e0, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000002e4, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000002e4, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000002e4, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000002e8, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000002e8, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000002e8, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000002ec, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000002ec, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000002ec, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000002f0, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000002f0, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000002f0, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000002f4, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000002f4, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000002f4, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000002f8, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000002f8, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000002f8, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000002fc, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000002fc, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000002fc, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000300, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000300, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000300, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000304, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000304, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000304, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000308, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000308, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000308, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000030c, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000030c, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000030c, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000310, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000310, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000310, (_val), (_mask))

/* Read Enable Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_ENr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000314, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_ENr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000314, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_ENr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000314, (_val), (_mask))

/* Read DQSP VDL dynamic override control register */
#define READ_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000328, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000328, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000328, (_val), (_mask))

/* Read DQSN VDL dynamic override control register */
#define READ_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000032c, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000032c, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000032c, (_val), (_mask))

/* Read DQ-P VDL dynamic override control register */
#define READ_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000330, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000330, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000330, (_val), (_mask))

/* Read DQ-N VDL dynamic override control register */
#define READ_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000334, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000334, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000334, (_val), (_mask))

/* Write DQ Byte VDL dynamic override control register */
#define READ_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000338, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000338, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000338, (_val), (_mask))

/* Write DQ Bit VDL dynamic override control register */
#define READ_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000033c, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000033c, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000033c, (_val), (_mask))

/* Read DQSP VDL dynamic override control register */
#define READ_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000348, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000348, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000348, (_val), (_mask))

/* Read DQSN VDL dynamic override control register */
#define READ_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000034c, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000034c, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000034c, (_val), (_mask))

/* Read DQ-P VDL dynamic override control register */
#define READ_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000350, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000350, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000350, (_val), (_mask))

/* Read DQ-N VDL dynamic override control register */
#define READ_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000354, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000354, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000354, (_val), (_mask))

/* Write DQ Byte VDL dynamic override control register */
#define READ_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000358, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000358, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000358, (_val), (_mask))

/* Write DQ Bit VDL dynamic override control register */
#define READ_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000035c, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000035c, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000035c, (_val), (_mask))

/* Word Lane read channel control register */
#define READ_DDR40_PHY_WORD_LANE_0_READ_DATA_DLYr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000360, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_READ_DATA_DLYr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000360, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_READ_DATA_DLYr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000360, (_val), (_mask))

/* Word Lane read channel control register */
#define READ_DDR40_PHY_WORD_LANE_0_READ_CONTROLr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000364, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_READ_CONTROLr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000364, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_READ_CONTROLr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000364, (_val), (_mask))

/* Read fifo data register, first data */
#define READ_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_0r(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000370, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_0r(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000370, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_0r(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000370, (_val), (_mask))

/* Read fifo data register, second data */
#define READ_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_1r(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000374, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_1r(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000374, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_1r(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000374, (_val), (_mask))

/* Read fifo data register, third data */
#define READ_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_2r(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000378, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_2r(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000378, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_2r(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000378, (_val), (_mask))

/* Read fifo data register, fourth data */
#define READ_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_3r(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000037c, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_3r(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000037c, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_3r(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000037c, (_val), (_mask))

/* Read fifo data register, first data */
#define READ_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_0r(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000380, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_0r(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000380, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_0r(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000380, (_val), (_mask))

/* Read fifo data register, second data */
#define READ_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_1r(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000384, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_1r(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000384, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_1r(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000384, (_val), (_mask))

/* Read fifo data register, third data */
#define READ_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_2r(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000388, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_2r(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000388, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_2r(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000388, (_val), (_mask))

/* Read fifo data register, fourth data */
#define READ_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_3r(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000038c, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_3r(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000038c, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_3r(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000038c, (_val), (_mask))

/* Read fifo status register */
#define READ_DDR40_PHY_WORD_LANE_0_READ_FIFO_STATUSr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000390, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_READ_FIFO_STATUSr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000390, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_READ_FIFO_STATUSr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000390, (_val), (_mask))

/* Read fifo status clear register */
#define READ_DDR40_PHY_WORD_LANE_0_READ_FIFO_CLEARr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000394, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_READ_FIFO_CLEARr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000394, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_READ_FIFO_CLEARr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000394, (_val), (_mask))

/* Idle mode SSTL pad control register */
#define READ_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROLr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000003a0, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROLr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000003a0, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROLr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000003a0, (_val), (_mask))

/* SSTL pad drive characteristics control register */
#define READ_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTLr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000003a4, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTLr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000003a4, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTLr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000003a4, (_val), (_mask))

/* Clock pad disable register */
#define READ_DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLEr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000003a8, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLEr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000003a8, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLEr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000003a8, (_val), (_mask))

/* Write cycle preamble control register */
#define READ_DDR40_PHY_WORD_LANE_0_WR_PREAMBLE_MODEr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000003ac, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_WR_PREAMBLE_MODEr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000003ac, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_WR_PREAMBLE_MODEr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000003ac, (_val), (_mask))

/* PHYBIST mode VDL step select adjustment register */
#define READ_DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000003b0, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000003b0, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000003b0, (_val), (_mask))


/****************************************************************************
 * DDR40_PHY_DDR40_PHY_WORD_LANE_1
 ***************************************************************************/

/* Read Enable Byte VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_ENr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000400, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_ENr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000400, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_ENr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000400, (_val), (_mask))

/* Write Byte VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000404, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000404, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000404, (_val), (_mask))

/* Read Byte DQSP VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000408, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000408, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000408, (_val), (_mask))

/* Read Byte DQSN VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000040c, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000040c, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000040c, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000410, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000410, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000410, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000414, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000414, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000414, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000418, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000418, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000418, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000041c, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000041c, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000041c, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000420, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000420, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000420, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000424, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000424, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000424, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000428, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000428, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000428, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000042c, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000042c, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000042c, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000430, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000430, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000430, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000434, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000434, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000434, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000438, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000438, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000438, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000043c, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000043c, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000043c, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000440, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000440, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000440, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000444, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000444, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000444, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000448, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000448, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000448, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000044c, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000044c, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000044c, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000450, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000450, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000450, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000454, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000454, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000454, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000458, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000458, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000458, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000045c, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000045c, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000045c, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000460, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000460, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000460, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000464, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000464, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000464, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000468, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000468, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000468, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000046c, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000046c, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000046c, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000470, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000470, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000470, (_val), (_mask))

/* Read Enable Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_ENr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000474, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_ENr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000474, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_ENr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000474, (_val), (_mask))

/* Write Byte VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000004a4, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000004a4, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000004a4, (_val), (_mask))

/* Read Byte DQSP VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000004a8, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000004a8, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000004a8, (_val), (_mask))

/* Read Byte DQSN VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000004ac, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000004ac, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000004ac, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000004b0, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000004b0, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000004b0, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000004b4, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000004b4, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000004b4, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000004b8, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000004b8, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000004b8, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000004bc, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000004bc, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000004bc, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000004c0, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000004c0, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000004c0, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000004c4, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000004c4, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000004c4, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000004c8, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000004c8, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000004c8, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000004cc, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000004cc, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000004cc, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000004d0, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000004d0, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000004d0, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000004d4, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000004d4, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000004d4, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000004d8, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000004d8, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000004d8, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000004dc, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000004dc, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000004dc, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000004e0, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000004e0, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000004e0, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000004e4, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000004e4, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000004e4, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000004e8, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000004e8, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000004e8, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000004ec, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000004ec, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000004ec, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000004f0, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000004f0, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000004f0, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000004f4, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000004f4, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000004f4, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000004f8, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000004f8, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000004f8, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000004fc, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000004fc, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000004fc, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000500, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000500, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000500, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000504, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000504, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000504, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000508, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000508, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000508, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000050c, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000050c, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000050c, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000510, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000510, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000510, (_val), (_mask))

/* Read Enable Bit VDL static override control register */
#define READ_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_ENr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000514, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_ENr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000514, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_ENr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000514, (_val), (_mask))

/* Read DQSP VDL dynamic override control register */
#define READ_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000528, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000528, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000528, (_val), (_mask))

/* Read DQSN VDL dynamic override control register */
#define READ_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000052c, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000052c, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000052c, (_val), (_mask))

/* Read DQ-P VDL dynamic override control register */
#define READ_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000530, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000530, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000530, (_val), (_mask))

/* Read DQ-N VDL dynamic override control register */
#define READ_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000534, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000534, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000534, (_val), (_mask))

/* Write DQ Byte VDL dynamic override control register */
#define READ_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000538, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000538, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000538, (_val), (_mask))

/* Write DQ Bit VDL dynamic override control register */
#define READ_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000053c, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000053c, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000053c, (_val), (_mask))

/* Read DQSP VDL dynamic override control register */
#define READ_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000548, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000548, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000548, (_val), (_mask))

/* Read DQSN VDL dynamic override control register */
#define READ_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000054c, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000054c, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000054c, (_val), (_mask))

/* Read DQ-P VDL dynamic override control register */
#define READ_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000550, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000550, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000550, (_val), (_mask))

/* Read DQ-N VDL dynamic override control register */
#define READ_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000554, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000554, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000554, (_val), (_mask))

/* Write DQ Byte VDL dynamic override control register */
#define READ_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000558, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000558, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000558, (_val), (_mask))

/* Write DQ Bit VDL dynamic override control register */
#define READ_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000055c, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000055c, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000055c, (_val), (_mask))

/* Word Lane read channel control register */
#define READ_DDR40_PHY_WORD_LANE_1_READ_DATA_DLYr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000560, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_READ_DATA_DLYr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000560, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_READ_DATA_DLYr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000560, (_val), (_mask))

/* Word Lane read channel control register */
#define READ_DDR40_PHY_WORD_LANE_1_READ_CONTROLr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000564, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_READ_CONTROLr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000564, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_READ_CONTROLr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000564, (_val), (_mask))

/* Read fifo data register, first data */
#define READ_DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_0r(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000570, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_0r(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000570, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_0r(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000570, (_val), (_mask))

/* Read fifo data register, second data */
#define READ_DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_1r(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000574, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_1r(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000574, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_1r(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000574, (_val), (_mask))

/* Read fifo data register, third data */
#define READ_DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_2r(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000578, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_2r(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000578, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_2r(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000578, (_val), (_mask))

/* Read fifo data register, fourth data */
#define READ_DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_3r(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000057c, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_3r(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000057c, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_3r(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000057c, (_val), (_mask))

/* Read fifo data register, first data */
#define READ_DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_0r(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000580, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_0r(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000580, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_0r(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000580, (_val), (_mask))

/* Read fifo data register, second data */
#define READ_DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_1r(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000584, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_1r(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000584, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_1r(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000584, (_val), (_mask))

/* Read fifo data register, third data */
#define READ_DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_2r(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000588, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_2r(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000588, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_2r(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000588, (_val), (_mask))

/* Read fifo data register, fourth data */
#define READ_DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_3r(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000058c, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_3r(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000058c, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_3r(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000058c, (_val), (_mask))

/* Read fifo status register */
#define READ_DDR40_PHY_WORD_LANE_1_READ_FIFO_STATUSr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000590, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_READ_FIFO_STATUSr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000590, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_READ_FIFO_STATUSr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000590, (_val), (_mask))

/* Read fifo status clear register */
#define READ_DDR40_PHY_WORD_LANE_1_READ_FIFO_CLEARr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000594, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_READ_FIFO_CLEARr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000594, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_READ_FIFO_CLEARr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000594, (_val), (_mask))

/* Idle mode SSTL pad control register */
#define READ_DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROLr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000005a0, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROLr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000005a0, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROLr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000005a0, (_val), (_mask))

/* SSTL pad drive characteristics control register */
#define READ_DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTLr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000005a4, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTLr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000005a4, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTLr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000005a4, (_val), (_mask))

/* Clock pad disable register */
#define READ_DDR40_PHY_WORD_LANE_1_CLOCK_PAD_DISABLEr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000005a8, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_CLOCK_PAD_DISABLEr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000005a8, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_CLOCK_PAD_DISABLEr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000005a8, (_val), (_mask))

/* Write cycle preamble control register */
#define READ_DDR40_PHY_WORD_LANE_1_WR_PREAMBLE_MODEr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000005ac, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_WR_PREAMBLE_MODEr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000005ac, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_WR_PREAMBLE_MODEr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000005ac, (_val), (_mask))

/* PHYBIST mode VDL step select adjustment register */
#define READ_DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000005b0, (_val))
#define WRITE_DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000005b0, (_val))
#define MODIFY_DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000005b0, (_val), (_mask))


/****************************************************************************
 * DDR40_PHY_DDR40_PHY_ECC_LANE
 ***************************************************************************/

/* Read Enable Byte VDL static override control register */
#define READ_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_ENr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000600, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_ENr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000600, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_ENr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000600, (_val), (_mask))

/* Write Byte VDL static override control register */
#define READ_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000604, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000604, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000604, (_val), (_mask))

/* Read Byte DQSP VDL static override control register */
#define READ_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000608, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000608, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000608, (_val), (_mask))

/* Read Byte DQSN VDL static override control register */
#define READ_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000060c, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000060c, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000060c, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000610, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000610, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000610, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000614, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000614, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000614, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000618, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000618, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000618, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000061c, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000061c, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000061c, (_val), (_mask))

/* Write Bit VDL static override control register */
#define READ_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000630, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000630, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000630, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000634, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000634, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000634, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000638, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000638, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000638, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000063c, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000063c, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000063c, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000640, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000640, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000640, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000644, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000644, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000644, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000648, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000648, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000648, (_val), (_mask))

/* Read DQSP Bit VDL static override control register */
#define READ_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000064c, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000064c, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000064c, (_val), (_mask))

/* Read DQSN Bit VDL static override control register */
#define READ_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000650, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000650, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000650, (_val), (_mask))

/* Read Enable Bit VDL static override control register */
#define READ_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_ENr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000674, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_ENr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000674, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_ENr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000674, (_val), (_mask))

/* Read DQSP VDL dynamic override control register */
#define READ_DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000728, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000728, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000728, (_val), (_mask))

/* Read DQSN VDL dynamic override control register */
#define READ_DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000072c, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000072c, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000072c, (_val), (_mask))

/* Read DQ-P VDL dynamic override control register */
#define READ_DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_Pr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000730, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_Pr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000730, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_Pr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000730, (_val), (_mask))

/* Read DQ-N VDL dynamic override control register */
#define READ_DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_Nr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000734, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_Nr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000734, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_Nr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000734, (_val), (_mask))

/* Write DQ Byte VDL dynamic override control register */
#define READ_DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000738, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000738, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000738, (_val), (_mask))

/* Write DQ Bit VDL dynamic override control register */
#define READ_DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_Wr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000073c, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_Wr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000073c, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_Wr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000073c, (_val), (_mask))

/* Word Lane read channel control register */
#define READ_DDR40_PHY_ECC_LANE_READ_DATA_DLYr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000760, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_READ_DATA_DLYr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000760, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_READ_DATA_DLYr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000760, (_val), (_mask))

/* Word Lane read channel control register */
#define READ_DDR40_PHY_ECC_LANE_READ_CONTROLr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000764, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_READ_CONTROLr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000764, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_READ_CONTROLr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000764, (_val), (_mask))

/* Read fifo data register, first data */
#define READ_DDR40_PHY_ECC_LANE_READ_FIFO_DATA_0r(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000770, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_READ_FIFO_DATA_0r(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000770, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_READ_FIFO_DATA_0r(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000770, (_val), (_mask))

/* Read fifo data register, second data */
#define READ_DDR40_PHY_ECC_LANE_READ_FIFO_DATA_1r(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000774, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_READ_FIFO_DATA_1r(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000774, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_READ_FIFO_DATA_1r(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000774, (_val), (_mask))

/* Read fifo data register, third data */
#define READ_DDR40_PHY_ECC_LANE_READ_FIFO_DATA_2r(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000778, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_READ_FIFO_DATA_2r(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000778, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_READ_FIFO_DATA_2r(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000778, (_val), (_mask))

/* Read fifo data register, fourth data */
#define READ_DDR40_PHY_ECC_LANE_READ_FIFO_DATA_3r(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x0000077c, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_READ_FIFO_DATA_3r(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x0000077c, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_READ_FIFO_DATA_3r(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x0000077c, (_val), (_mask))

/* Read fifo status register */
#define READ_DDR40_PHY_ECC_LANE_READ_FIFO_STATUSr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000790, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_READ_FIFO_STATUSr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000790, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_READ_FIFO_STATUSr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000790, (_val), (_mask))

/* Read fifo status clear register */
#define READ_DDR40_PHY_ECC_LANE_READ_FIFO_CLEARr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x00000794, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_READ_FIFO_CLEARr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x00000794, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_READ_FIFO_CLEARr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x00000794, (_val), (_mask))

/* Idle mode SSTL pad control register */
#define READ_DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROLr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000007a0, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROLr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000007a0, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROLr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000007a0, (_val), (_mask))

/* SSTL pad drive characteristics control register */
#define READ_DDR40_PHY_ECC_LANE_DRIVE_PAD_CTLr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000007a4, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_DRIVE_PAD_CTLr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000007a4, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_DRIVE_PAD_CTLr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000007a4, (_val), (_mask))

/* Clock pad disable register */
#define READ_DDR40_PHY_ECC_LANE_CLOCK_PAD_DISABLEr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000007a8, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_CLOCK_PAD_DISABLEr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000007a8, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_CLOCK_PAD_DISABLEr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000007a8, (_val), (_mask))

/* Write cycle preamble control register */
#define READ_DDR40_PHY_ECC_LANE_WR_PREAMBLE_MODEr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000007ac, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_WR_PREAMBLE_MODEr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000007ac, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_WR_PREAMBLE_MODEr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000007ac, (_val), (_mask))

/* PHYBIST mode VDL step select adjustment register */
#define READ_DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJr(_unit, _pc, _val) \
             DDR40_REG_READ((_unit), (_pc), 0x00, 0x000007b0, (_val))
#define WRITE_DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJr(_unit, _pc, _val) \
             DDR40_REG_WRITE((_unit), (_pc), 0x00, 0x000007b0, (_val))
#define MODIFY_DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJr(_unit, _pc, _val, _mask) \
             DDR40_REG_MODIFY((_unit), (_pc), 0x00, 0x000007b0, (_val), (_mask))


/****************************************************************************
 * DDR40_PHY_DDR40_PHY_CONTROL_REGS
 ***************************************************************************/
/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: REVISION
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: REVISION :: reserved0 [31:23] */
#define DDR40_PHY_CONTROL_REGS_REVISION_RESERVED0_MASK             0xff800000
#define DDR40_PHY_CONTROL_REGS_REVISION_RESERVED0_ALIGN            0
#define DDR40_PHY_CONTROL_REGS_REVISION_RESERVED0_BITS             9
#define DDR40_PHY_CONTROL_REGS_REVISION_RESERVED0_SHIFT            23

/* DDR40_PHY_CONTROL_REGS :: REVISION :: TECHNOLOGY [22:20] */
#define DDR40_PHY_CONTROL_REGS_REVISION_TECHNOLOGY_MASK            0x00700000
#define DDR40_PHY_CONTROL_REGS_REVISION_TECHNOLOGY_ALIGN           0
#define DDR40_PHY_CONTROL_REGS_REVISION_TECHNOLOGY_BITS            3
#define DDR40_PHY_CONTROL_REGS_REVISION_TECHNOLOGY_SHIFT           20

/* DDR40_PHY_CONTROL_REGS :: REVISION :: WB [19:19] */
#define DDR40_PHY_CONTROL_REGS_REVISION_WB_MASK                    0x00080000
#define DDR40_PHY_CONTROL_REGS_REVISION_WB_ALIGN                   0
#define DDR40_PHY_CONTROL_REGS_REVISION_WB_BITS                    1
#define DDR40_PHY_CONTROL_REGS_REVISION_WB_SHIFT                   19

/* DDR40_PHY_CONTROL_REGS :: REVISION :: BITS [18:16] */
#define DDR40_PHY_CONTROL_REGS_REVISION_BITS_MASK                  0x00070000
#define DDR40_PHY_CONTROL_REGS_REVISION_BITS_ALIGN                 0
#define DDR40_PHY_CONTROL_REGS_REVISION_BITS_BITS                  3
#define DDR40_PHY_CONTROL_REGS_REVISION_BITS_SHIFT                 16

/* DDR40_PHY_CONTROL_REGS :: REVISION :: MAJOR [15:08] */
#define DDR40_PHY_CONTROL_REGS_REVISION_MAJOR_MASK                 0x0000ff00
#define DDR40_PHY_CONTROL_REGS_REVISION_MAJOR_ALIGN                0
#define DDR40_PHY_CONTROL_REGS_REVISION_MAJOR_BITS                 8
#define DDR40_PHY_CONTROL_REGS_REVISION_MAJOR_SHIFT                8

/* DDR40_PHY_CONTROL_REGS :: REVISION :: MINOR [07:00] */
#define DDR40_PHY_CONTROL_REGS_REVISION_MINOR_MASK                 0x000000ff
#define DDR40_PHY_CONTROL_REGS_REVISION_MINOR_ALIGN                0
#define DDR40_PHY_CONTROL_REGS_REVISION_MINOR_BITS                 8
#define DDR40_PHY_CONTROL_REGS_REVISION_MINOR_SHIFT                0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: CLK_PM_CTRL
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: CLK_PM_CTRL :: reserved0 [31:01] */
#define DDR40_PHY_CONTROL_REGS_CLK_PM_CTRL_RESERVED0_MASK          0xfffffffe
#define DDR40_PHY_CONTROL_REGS_CLK_PM_CTRL_RESERVED0_ALIGN         0
#define DDR40_PHY_CONTROL_REGS_CLK_PM_CTRL_RESERVED0_BITS          31
#define DDR40_PHY_CONTROL_REGS_CLK_PM_CTRL_RESERVED0_SHIFT         1

/* DDR40_PHY_CONTROL_REGS :: CLK_PM_CTRL :: DIS_DDR_CLK [00:00] */
#define DDR40_PHY_CONTROL_REGS_CLK_PM_CTRL_DIS_DDR_CLK_MASK        0x00000001
#define DDR40_PHY_CONTROL_REGS_CLK_PM_CTRL_DIS_DDR_CLK_ALIGN       0
#define DDR40_PHY_CONTROL_REGS_CLK_PM_CTRL_DIS_DDR_CLK_BITS        1
#define DDR40_PHY_CONTROL_REGS_CLK_PM_CTRL_DIS_DDR_CLK_SHIFT       0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: PLL_STATUS
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: PLL_STATUS :: reserved0 [31:27] */
#define DDR40_PHY_CONTROL_REGS_PLL_STATUS_RESERVED0_MASK           0xf8000000
#define DDR40_PHY_CONTROL_REGS_PLL_STATUS_RESERVED0_ALIGN          0
#define DDR40_PHY_CONTROL_REGS_PLL_STATUS_RESERVED0_BITS           5
#define DDR40_PHY_CONTROL_REGS_PLL_STATUS_RESERVED0_SHIFT          27

/* DDR40_PHY_CONTROL_REGS :: PLL_STATUS :: LOCK_LOST [26:26] */
#define DDR40_PHY_CONTROL_REGS_PLL_STATUS_LOCK_LOST_MASK           0x04000000
#define DDR40_PHY_CONTROL_REGS_PLL_STATUS_LOCK_LOST_ALIGN          0
#define DDR40_PHY_CONTROL_REGS_PLL_STATUS_LOCK_LOST_BITS           1
#define DDR40_PHY_CONTROL_REGS_PLL_STATUS_LOCK_LOST_SHIFT          26

/* DDR40_PHY_CONTROL_REGS :: PLL_STATUS :: DDR_MHZ [25:14] */
#define DDR40_PHY_CONTROL_REGS_PLL_STATUS_DDR_MHZ_MASK             0x03ffc000
#define DDR40_PHY_CONTROL_REGS_PLL_STATUS_DDR_MHZ_ALIGN            0
#define DDR40_PHY_CONTROL_REGS_PLL_STATUS_DDR_MHZ_BITS             12
#define DDR40_PHY_CONTROL_REGS_PLL_STATUS_DDR_MHZ_SHIFT            14

/* DDR40_PHY_CONTROL_REGS :: PLL_STATUS :: CLOCKING_4X [13:13] */
#define DDR40_PHY_CONTROL_REGS_PLL_STATUS_CLOCKING_4X_MASK         0x00002000
#define DDR40_PHY_CONTROL_REGS_PLL_STATUS_CLOCKING_4X_ALIGN        0
#define DDR40_PHY_CONTROL_REGS_PLL_STATUS_CLOCKING_4X_BITS         1
#define DDR40_PHY_CONTROL_REGS_PLL_STATUS_CLOCKING_4X_SHIFT        13

/* DDR40_PHY_CONTROL_REGS :: PLL_STATUS :: STATUS [12:01] */
#define DDR40_PHY_CONTROL_REGS_PLL_STATUS_STATUS_MASK              0x00001ffe
#define DDR40_PHY_CONTROL_REGS_PLL_STATUS_STATUS_ALIGN             0
#define DDR40_PHY_CONTROL_REGS_PLL_STATUS_STATUS_BITS              12
#define DDR40_PHY_CONTROL_REGS_PLL_STATUS_STATUS_SHIFT             1

/* DDR40_PHY_CONTROL_REGS :: PLL_STATUS :: LOCK [00:00] */
#define DDR40_PHY_CONTROL_REGS_PLL_STATUS_LOCK_MASK                0x00000001
#define DDR40_PHY_CONTROL_REGS_PLL_STATUS_LOCK_ALIGN               0
#define DDR40_PHY_CONTROL_REGS_PLL_STATUS_LOCK_BITS                1
#define DDR40_PHY_CONTROL_REGS_PLL_STATUS_LOCK_SHIFT               0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: PLL_CONFIG
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: PLL_CONFIG :: reserved0 [31:07] */
#define DDR40_PHY_CONTROL_REGS_PLL_CONFIG_RESERVED0_MASK           0xffffff80
#define DDR40_PHY_CONTROL_REGS_PLL_CONFIG_RESERVED0_ALIGN          0
#define DDR40_PHY_CONTROL_REGS_PLL_CONFIG_RESERVED0_BITS           25
#define DDR40_PHY_CONTROL_REGS_PLL_CONFIG_RESERVED0_SHIFT          7

/* DDR40_PHY_CONTROL_REGS :: PLL_CONFIG :: LP40_PLL_POST_RESET [06:06] */
#define DDR40_PHY_CONTROL_REGS_PLL_CONFIG_LP40_PLL_POST_RESET_MASK 0x00000040
#define DDR40_PHY_CONTROL_REGS_PLL_CONFIG_LP40_PLL_POST_RESET_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_PLL_CONFIG_LP40_PLL_POST_RESET_BITS 1
#define DDR40_PHY_CONTROL_REGS_PLL_CONFIG_LP40_PLL_POST_RESET_SHIFT 6

/* DDR40_PHY_CONTROL_REGS :: PLL_CONFIG :: RESET_POST_DIV [05:05] */
#define DDR40_PHY_CONTROL_REGS_PLL_CONFIG_RESET_POST_DIV_MASK      0x00000020
#define DDR40_PHY_CONTROL_REGS_PLL_CONFIG_RESET_POST_DIV_ALIGN     0
#define DDR40_PHY_CONTROL_REGS_PLL_CONFIG_RESET_POST_DIV_BITS      1
#define DDR40_PHY_CONTROL_REGS_PLL_CONFIG_RESET_POST_DIV_SHIFT     5

/* DDR40_PHY_CONTROL_REGS :: PLL_CONFIG :: LDO_CTRL [04:03] */
#define DDR40_PHY_CONTROL_REGS_PLL_CONFIG_LDO_CTRL_MASK            0x00000018
#define DDR40_PHY_CONTROL_REGS_PLL_CONFIG_LDO_CTRL_ALIGN           0
#define DDR40_PHY_CONTROL_REGS_PLL_CONFIG_LDO_CTRL_BITS            2
#define DDR40_PHY_CONTROL_REGS_PLL_CONFIG_LDO_CTRL_SHIFT           3

/* DDR40_PHY_CONTROL_REGS :: PLL_CONFIG :: reserved1 [02:02] */
#define DDR40_PHY_CONTROL_REGS_PLL_CONFIG_RESERVED1_MASK           0x00000004
#define DDR40_PHY_CONTROL_REGS_PLL_CONFIG_RESERVED1_ALIGN          0
#define DDR40_PHY_CONTROL_REGS_PLL_CONFIG_RESERVED1_BITS           1
#define DDR40_PHY_CONTROL_REGS_PLL_CONFIG_RESERVED1_SHIFT          2

/* DDR40_PHY_CONTROL_REGS :: PLL_CONFIG :: RESET [01:01] */
#define DDR40_PHY_CONTROL_REGS_PLL_CONFIG_RESET_MASK               0x00000002
#define DDR40_PHY_CONTROL_REGS_PLL_CONFIG_RESET_ALIGN              0
#define DDR40_PHY_CONTROL_REGS_PLL_CONFIG_RESET_BITS               1
#define DDR40_PHY_CONTROL_REGS_PLL_CONFIG_RESET_SHIFT              1

/* DDR40_PHY_CONTROL_REGS :: PLL_CONFIG :: PWRDN [00:00] */
#define DDR40_PHY_CONTROL_REGS_PLL_CONFIG_PWRDN_MASK               0x00000001
#define DDR40_PHY_CONTROL_REGS_PLL_CONFIG_PWRDN_ALIGN              0
#define DDR40_PHY_CONTROL_REGS_PLL_CONFIG_PWRDN_BITS               1
#define DDR40_PHY_CONTROL_REGS_PLL_CONFIG_PWRDN_SHIFT              0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: PLL_CONTROL
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: PLL_CONTROL :: reserved0 [31:31] */
#define DDR40_PHY_CONTROL_REGS_PLL_CONTROL_RESERVED0_MASK          0x80000000
#define DDR40_PHY_CONTROL_REGS_PLL_CONTROL_RESERVED0_ALIGN         0
#define DDR40_PHY_CONTROL_REGS_PLL_CONTROL_RESERVED0_BITS          1
#define DDR40_PHY_CONTROL_REGS_PLL_CONTROL_RESERVED0_SHIFT         31

/* DDR40_PHY_CONTROL_REGS :: PLL_CONTROL :: i_kp [30:27] */
#define DDR40_PHY_CONTROL_REGS_PLL_CONTROL_I_KP_MASK               0x78000000
#define DDR40_PHY_CONTROL_REGS_PLL_CONTROL_I_KP_ALIGN              0
#define DDR40_PHY_CONTROL_REGS_PLL_CONTROL_I_KP_BITS               4
#define DDR40_PHY_CONTROL_REGS_PLL_CONTROL_I_KP_SHIFT              27

/* DDR40_PHY_CONTROL_REGS :: PLL_CONTROL :: i_ki [26:24] */
#define DDR40_PHY_CONTROL_REGS_PLL_CONTROL_I_KI_MASK               0x07000000
#define DDR40_PHY_CONTROL_REGS_PLL_CONTROL_I_KI_ALIGN              0
#define DDR40_PHY_CONTROL_REGS_PLL_CONTROL_I_KI_BITS               3
#define DDR40_PHY_CONTROL_REGS_PLL_CONTROL_I_KI_SHIFT              24

/* DDR40_PHY_CONTROL_REGS :: PLL_CONTROL :: i_ka [23:21] */
#define DDR40_PHY_CONTROL_REGS_PLL_CONTROL_I_KA_MASK               0x00e00000
#define DDR40_PHY_CONTROL_REGS_PLL_CONTROL_I_KA_ALIGN              0
#define DDR40_PHY_CONTROL_REGS_PLL_CONTROL_I_KA_BITS               3
#define DDR40_PHY_CONTROL_REGS_PLL_CONTROL_I_KA_SHIFT              21

/* DDR40_PHY_CONTROL_REGS :: PLL_CONTROL :: PLL_CONTROL [20:00] */
#define DDR40_PHY_CONTROL_REGS_PLL_CONTROL_PLL_CONTROL_MASK        0x001fffff
#define DDR40_PHY_CONTROL_REGS_PLL_CONTROL_PLL_CONTROL_ALIGN       0
#define DDR40_PHY_CONTROL_REGS_PLL_CONTROL_PLL_CONTROL_BITS        21
#define DDR40_PHY_CONTROL_REGS_PLL_CONTROL_PLL_CONTROL_SHIFT       0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: PLL_DIVIDERS
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: PLL_DIVIDERS :: reserved0 [31:16] */
#define DDR40_PHY_CONTROL_REGS_PLL_DIVIDERS_RESERVED0_MASK         0xffff0000
#define DDR40_PHY_CONTROL_REGS_PLL_DIVIDERS_RESERVED0_ALIGN        0
#define DDR40_PHY_CONTROL_REGS_PLL_DIVIDERS_RESERVED0_BITS         16
#define DDR40_PHY_CONTROL_REGS_PLL_DIVIDERS_RESERVED0_SHIFT        16

/* DDR40_PHY_CONTROL_REGS :: PLL_DIVIDERS :: NDIV_40LP_HI [15:15] */
#define DDR40_PHY_CONTROL_REGS_PLL_DIVIDERS_NDIV_40LP_HI_MASK      0x00008000
#define DDR40_PHY_CONTROL_REGS_PLL_DIVIDERS_NDIV_40LP_HI_ALIGN     0
#define DDR40_PHY_CONTROL_REGS_PLL_DIVIDERS_NDIV_40LP_HI_BITS      1
#define DDR40_PHY_CONTROL_REGS_PLL_DIVIDERS_NDIV_40LP_HI_SHIFT     15

/* DDR40_PHY_CONTROL_REGS :: PLL_DIVIDERS :: NDIV_40LP_LO [14:14] */
#define DDR40_PHY_CONTROL_REGS_PLL_DIVIDERS_NDIV_40LP_LO_MASK      0x00004000
#define DDR40_PHY_CONTROL_REGS_PLL_DIVIDERS_NDIV_40LP_LO_ALIGN     0
#define DDR40_PHY_CONTROL_REGS_PLL_DIVIDERS_NDIV_40LP_LO_BITS      1
#define DDR40_PHY_CONTROL_REGS_PLL_DIVIDERS_NDIV_40LP_LO_SHIFT     14

/* DDR40_PHY_CONTROL_REGS :: PLL_DIVIDERS :: POST_DIV [13:11] */
#define DDR40_PHY_CONTROL_REGS_PLL_DIVIDERS_POST_DIV_MASK          0x00003800
#define DDR40_PHY_CONTROL_REGS_PLL_DIVIDERS_POST_DIV_ALIGN         0
#define DDR40_PHY_CONTROL_REGS_PLL_DIVIDERS_POST_DIV_BITS          3
#define DDR40_PHY_CONTROL_REGS_PLL_DIVIDERS_POST_DIV_SHIFT         11

/* DDR40_PHY_CONTROL_REGS :: PLL_DIVIDERS :: PDIV [10:08] */
#define DDR40_PHY_CONTROL_REGS_PLL_DIVIDERS_PDIV_MASK              0x00000700
#define DDR40_PHY_CONTROL_REGS_PLL_DIVIDERS_PDIV_ALIGN             0
#define DDR40_PHY_CONTROL_REGS_PLL_DIVIDERS_PDIV_BITS              3
#define DDR40_PHY_CONTROL_REGS_PLL_DIVIDERS_PDIV_SHIFT             8

/* DDR40_PHY_CONTROL_REGS :: PLL_DIVIDERS :: NDIV [07:00] */
#define DDR40_PHY_CONTROL_REGS_PLL_DIVIDERS_NDIV_MASK              0x000000ff
#define DDR40_PHY_CONTROL_REGS_PLL_DIVIDERS_NDIV_ALIGN             0
#define DDR40_PHY_CONTROL_REGS_PLL_DIVIDERS_NDIV_BITS              8
#define DDR40_PHY_CONTROL_REGS_PLL_DIVIDERS_NDIV_SHIFT             0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: AUX_CONTROL
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: AUX_CONTROL :: reserved0 [31:10] */
#define DDR40_PHY_CONTROL_REGS_AUX_CONTROL_RESERVED0_MASK          0xfffffc00
#define DDR40_PHY_CONTROL_REGS_AUX_CONTROL_RESERVED0_ALIGN         0
#define DDR40_PHY_CONTROL_REGS_AUX_CONTROL_RESERVED0_BITS          22
#define DDR40_PHY_CONTROL_REGS_AUX_CONTROL_RESERVED0_SHIFT         10

/* DDR40_PHY_CONTROL_REGS :: AUX_CONTROL :: is_cs [09:07] */
#define DDR40_PHY_CONTROL_REGS_AUX_CONTROL_IS_CS_MASK              0x00000380
#define DDR40_PHY_CONTROL_REGS_AUX_CONTROL_IS_CS_ALIGN             0
#define DDR40_PHY_CONTROL_REGS_AUX_CONTROL_IS_CS_BITS              3
#define DDR40_PHY_CONTROL_REGS_AUX_CONTROL_IS_CS_SHIFT             7

/* DDR40_PHY_CONTROL_REGS :: AUX_CONTROL :: is_ad [06:04] */
#define DDR40_PHY_CONTROL_REGS_AUX_CONTROL_IS_AD_MASK              0x00000070
#define DDR40_PHY_CONTROL_REGS_AUX_CONTROL_IS_AD_ALIGN             0
#define DDR40_PHY_CONTROL_REGS_AUX_CONTROL_IS_AD_BITS              3
#define DDR40_PHY_CONTROL_REGS_AUX_CONTROL_IS_AD_SHIFT             4

/* DDR40_PHY_CONTROL_REGS :: AUX_CONTROL :: is_odt [03:01] */
#define DDR40_PHY_CONTROL_REGS_AUX_CONTROL_IS_ODT_MASK             0x0000000e
#define DDR40_PHY_CONTROL_REGS_AUX_CONTROL_IS_ODT_ALIGN            0
#define DDR40_PHY_CONTROL_REGS_AUX_CONTROL_IS_ODT_BITS             3
#define DDR40_PHY_CONTROL_REGS_AUX_CONTROL_IS_ODT_SHIFT            1

/* DDR40_PHY_CONTROL_REGS :: AUX_CONTROL :: override [00:00] */
#define DDR40_PHY_CONTROL_REGS_AUX_CONTROL_OVERRIDE_MASK           0x00000001
#define DDR40_PHY_CONTROL_REGS_AUX_CONTROL_OVERRIDE_ALIGN          0
#define DDR40_PHY_CONTROL_REGS_AUX_CONTROL_OVERRIDE_BITS           1
#define DDR40_PHY_CONTROL_REGS_AUX_CONTROL_OVERRIDE_SHIFT          0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: VDL_OVRIDE_BYTE_CTL
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: VDL_OVRIDE_BYTE_CTL :: busy [31:31] */
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTL_BUSY_MASK       0x80000000
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTL_BUSY_ALIGN      0
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTL_BUSY_BITS       1
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTL_BUSY_SHIFT      31

/* DDR40_PHY_CONTROL_REGS :: VDL_OVRIDE_BYTE_CTL :: reserved0 [30:17] */
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTL_RESERVED0_MASK  0x7ffe0000
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTL_RESERVED0_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTL_RESERVED0_BITS  14
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTL_RESERVED0_SHIFT 17

/* DDR40_PHY_CONTROL_REGS :: VDL_OVRIDE_BYTE_CTL :: ovr_en [16:16] */
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTL_OVR_EN_MASK     0x00010000
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTL_OVR_EN_ALIGN    0
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTL_OVR_EN_BITS     1
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTL_OVR_EN_SHIFT    16

/* DDR40_PHY_CONTROL_REGS :: VDL_OVRIDE_BYTE_CTL :: reserved1 [15:09] */
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTL_RESERVED1_MASK  0x0000fe00
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTL_RESERVED1_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTL_RESERVED1_BITS  7
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTL_RESERVED1_SHIFT 9

/* DDR40_PHY_CONTROL_REGS :: VDL_OVRIDE_BYTE_CTL :: byte_sel [08:08] */
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTL_BYTE_SEL_MASK   0x00000100
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTL_BYTE_SEL_ALIGN  0
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTL_BYTE_SEL_BITS   1
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTL_BYTE_SEL_SHIFT  8

/* DDR40_PHY_CONTROL_REGS :: VDL_OVRIDE_BYTE_CTL :: reserved2 [07:06] */
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTL_RESERVED2_MASK  0x000000c0
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTL_RESERVED2_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTL_RESERVED2_BITS  2
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTL_RESERVED2_SHIFT 6

/* DDR40_PHY_CONTROL_REGS :: VDL_OVRIDE_BYTE_CTL :: ovr_step [05:00] */
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTL_OVR_STEP_MASK   0x0000003f
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTL_OVR_STEP_ALIGN  0
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTL_OVR_STEP_BITS   6
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BYTE_CTL_OVR_STEP_SHIFT  0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: VDL_OVRIDE_BIT_CTL
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: VDL_OVRIDE_BIT_CTL :: busy [31:31] */
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTL_BUSY_MASK        0x80000000
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTL_BUSY_ALIGN       0
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTL_BUSY_BITS        1
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTL_BUSY_SHIFT       31

/* DDR40_PHY_CONTROL_REGS :: VDL_OVRIDE_BIT_CTL :: reserved0 [30:17] */
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTL_RESERVED0_MASK   0x7ffe0000
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTL_RESERVED0_ALIGN  0
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTL_RESERVED0_BITS   14
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTL_RESERVED0_SHIFT  17

/* DDR40_PHY_CONTROL_REGS :: VDL_OVRIDE_BIT_CTL :: ovr_en [16:16] */
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTL_OVR_EN_MASK      0x00010000
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTL_OVR_EN_ALIGN     0
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTL_OVR_EN_BITS      1
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTL_OVR_EN_SHIFT     16

/* DDR40_PHY_CONTROL_REGS :: VDL_OVRIDE_BIT_CTL :: reserved1 [15:09] */
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTL_RESERVED1_MASK   0x0000fe00
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTL_RESERVED1_ALIGN  0
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTL_RESERVED1_BITS   7
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTL_RESERVED1_SHIFT  9

/* DDR40_PHY_CONTROL_REGS :: VDL_OVRIDE_BIT_CTL :: byte_sel [08:08] */
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTL_BYTE_SEL_MASK    0x00000100
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTL_BYTE_SEL_ALIGN   0
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTL_BYTE_SEL_BITS    1
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTL_BYTE_SEL_SHIFT   8

/* DDR40_PHY_CONTROL_REGS :: VDL_OVRIDE_BIT_CTL :: reserved2 [07:06] */
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTL_RESERVED2_MASK   0x000000c0
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTL_RESERVED2_ALIGN  0
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTL_RESERVED2_BITS   2
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTL_RESERVED2_SHIFT  6

/* DDR40_PHY_CONTROL_REGS :: VDL_OVRIDE_BIT_CTL :: ovr_step [05:00] */
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTL_OVR_STEP_MASK    0x0000003f
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTL_OVR_STEP_ALIGN   0
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTL_OVR_STEP_BITS    6
#define DDR40_PHY_CONTROL_REGS_VDL_OVRIDE_BIT_CTL_OVR_STEP_SHIFT   0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: IDLE_PAD_CONTROL
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: IDLE_PAD_CONTROL :: idle [31:31] */
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_IDLE_MASK          0x80000000
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_IDLE_ALIGN         0
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_IDLE_BITS          1
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_IDLE_SHIFT         31

/* DDR40_PHY_CONTROL_REGS :: IDLE_PAD_CONTROL :: reserved0 [30:09] */
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_RESERVED0_MASK     0x7ffffe00
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_RESERVED0_ALIGN    0
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_RESERVED0_BITS     22
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_RESERVED0_SHIFT    9

/* DDR40_PHY_CONTROL_REGS :: IDLE_PAD_CONTROL :: rxenb [08:08] */
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_RXENB_MASK         0x00000100
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_RXENB_ALIGN        0
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_RXENB_BITS         1
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_RXENB_SHIFT        8

/* DDR40_PHY_CONTROL_REGS :: IDLE_PAD_CONTROL :: reserved1 [07:07] */
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_RESERVED1_MASK     0x00000080
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_RESERVED1_ALIGN    0
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_RESERVED1_BITS     1
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_RESERVED1_SHIFT    7

/* DDR40_PHY_CONTROL_REGS :: IDLE_PAD_CONTROL :: ctl_iddq [06:06] */
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_CTL_IDDQ_MASK      0x00000040
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_CTL_IDDQ_ALIGN     0
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_CTL_IDDQ_BITS      1
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_CTL_IDDQ_SHIFT     6

/* DDR40_PHY_CONTROL_REGS :: IDLE_PAD_CONTROL :: ctl_reb [05:05] */
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_CTL_REB_MASK       0x00000020
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_CTL_REB_ALIGN      0
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_CTL_REB_BITS       1
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_CTL_REB_SHIFT      5

/* DDR40_PHY_CONTROL_REGS :: IDLE_PAD_CONTROL :: ctl_oeb [04:04] */
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_CTL_OEB_MASK       0x00000010
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_CTL_OEB_ALIGN      0
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_CTL_OEB_BITS       1
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_CTL_OEB_SHIFT      4

/* DDR40_PHY_CONTROL_REGS :: IDLE_PAD_CONTROL :: reserved2 [03:03] */
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_RESERVED2_MASK     0x00000008
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_RESERVED2_ALIGN    0
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_RESERVED2_BITS     1
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_RESERVED2_SHIFT    3

/* DDR40_PHY_CONTROL_REGS :: IDLE_PAD_CONTROL :: cke_iddq [02:02] */
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_CKE_IDDQ_MASK      0x00000004
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_CKE_IDDQ_ALIGN     0
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_CKE_IDDQ_BITS      1
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_CKE_IDDQ_SHIFT     2

/* DDR40_PHY_CONTROL_REGS :: IDLE_PAD_CONTROL :: cke_reb [01:01] */
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_CKE_REB_MASK       0x00000002
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_CKE_REB_ALIGN      0
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_CKE_REB_BITS       1
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_CKE_REB_SHIFT      1

/* DDR40_PHY_CONTROL_REGS :: IDLE_PAD_CONTROL :: cke_oeb [00:00] */
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_CKE_OEB_MASK       0x00000001
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_CKE_OEB_ALIGN      0
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_CKE_OEB_BITS       1
#define DDR40_PHY_CONTROL_REGS_IDLE_PAD_CONTROL_CKE_OEB_SHIFT      0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: ZQ_PVT_COMP_CTL
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: ZQ_PVT_COMP_CTL :: reserved0 [31:26] */
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_RESERVED0_MASK      0xfc000000
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_RESERVED0_ALIGN     0
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_RESERVED0_BITS      6
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_RESERVED0_SHIFT     26

/* DDR40_PHY_CONTROL_REGS :: ZQ_PVT_COMP_CTL :: update_mode [25:25] */
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_UPDATE_MODE_MASK    0x02000000
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_UPDATE_MODE_ALIGN   0
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_UPDATE_MODE_BITS    1
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_UPDATE_MODE_SHIFT   25

/* DDR40_PHY_CONTROL_REGS :: ZQ_PVT_COMP_CTL :: pd_done [24:24] */
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_PD_DONE_MASK        0x01000000
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_PD_DONE_ALIGN       0
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_PD_DONE_BITS        1
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_PD_DONE_SHIFT       24

/* DDR40_PHY_CONTROL_REGS :: ZQ_PVT_COMP_CTL :: nd_done [23:23] */
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_ND_DONE_MASK        0x00800000
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_ND_DONE_ALIGN       0
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_ND_DONE_BITS        1
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_ND_DONE_SHIFT       23

/* DDR40_PHY_CONTROL_REGS :: ZQ_PVT_COMP_CTL :: sample_done [22:22] */
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_SAMPLE_DONE_MASK    0x00400000
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_SAMPLE_DONE_ALIGN   0
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_SAMPLE_DONE_BITS    1
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_SAMPLE_DONE_SHIFT   22

/* DDR40_PHY_CONTROL_REGS :: ZQ_PVT_COMP_CTL :: auto_sample_en [21:21] */
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_AUTO_SAMPLE_EN_MASK 0x00200000
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_AUTO_SAMPLE_EN_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_AUTO_SAMPLE_EN_BITS 1
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_AUTO_SAMPLE_EN_SHIFT 21

/* DDR40_PHY_CONTROL_REGS :: ZQ_PVT_COMP_CTL :: sample_en [20:20] */
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_SAMPLE_EN_MASK      0x00100000
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_SAMPLE_EN_ALIGN     0
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_SAMPLE_EN_BITS      1
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_SAMPLE_EN_SHIFT     20

/* DDR40_PHY_CONTROL_REGS :: ZQ_PVT_COMP_CTL :: addr_ovr_en [19:19] */
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_ADDR_OVR_EN_MASK    0x00080000
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_ADDR_OVR_EN_ALIGN   0
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_ADDR_OVR_EN_BITS    1
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_ADDR_OVR_EN_SHIFT   19

/* DDR40_PHY_CONTROL_REGS :: ZQ_PVT_COMP_CTL :: dq_ovr_en [18:18] */
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_DQ_OVR_EN_MASK      0x00040000
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_DQ_OVR_EN_ALIGN     0
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_DQ_OVR_EN_BITS      1
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_DQ_OVR_EN_SHIFT     18

/* DDR40_PHY_CONTROL_REGS :: ZQ_PVT_COMP_CTL :: pd_comp [17:15] */
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_PD_COMP_MASK        0x00038000
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_PD_COMP_ALIGN       0
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_PD_COMP_BITS        3
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_PD_COMP_SHIFT       15

/* DDR40_PHY_CONTROL_REGS :: ZQ_PVT_COMP_CTL :: nd_comp [14:12] */
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_ND_COMP_MASK        0x00007000
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_ND_COMP_ALIGN       0
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_ND_COMP_BITS        3
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_ND_COMP_SHIFT       12

/* DDR40_PHY_CONTROL_REGS :: ZQ_PVT_COMP_CTL :: addr_pd_override_val [11:09] */
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_ADDR_PD_OVERRIDE_VAL_MASK 0x00000e00
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_ADDR_PD_OVERRIDE_VAL_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_ADDR_PD_OVERRIDE_VAL_BITS 3
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_ADDR_PD_OVERRIDE_VAL_SHIFT 9

/* DDR40_PHY_CONTROL_REGS :: ZQ_PVT_COMP_CTL :: addr_nd_override_val [08:06] */
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_ADDR_ND_OVERRIDE_VAL_MASK 0x000001c0
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_ADDR_ND_OVERRIDE_VAL_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_ADDR_ND_OVERRIDE_VAL_BITS 3
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_ADDR_ND_OVERRIDE_VAL_SHIFT 6

/* DDR40_PHY_CONTROL_REGS :: ZQ_PVT_COMP_CTL :: dq_pd_override_val [05:03] */
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_DQ_PD_OVERRIDE_VAL_MASK 0x00000038
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_DQ_PD_OVERRIDE_VAL_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_DQ_PD_OVERRIDE_VAL_BITS 3
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_DQ_PD_OVERRIDE_VAL_SHIFT 3

/* DDR40_PHY_CONTROL_REGS :: ZQ_PVT_COMP_CTL :: dq_nd_override_val [02:00] */
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_DQ_ND_OVERRIDE_VAL_MASK 0x00000007
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_DQ_ND_OVERRIDE_VAL_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_DQ_ND_OVERRIDE_VAL_BITS 3
#define DDR40_PHY_CONTROL_REGS_ZQ_PVT_COMP_CTL_DQ_ND_OVERRIDE_VAL_SHIFT 0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: DRIVE_PAD_CTL
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: DRIVE_PAD_CTL :: reserved0 [31:14] */
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_RESERVED0_MASK        0xffffc000
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_RESERVED0_ALIGN       0
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_RESERVED0_BITS        18
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_RESERVED0_SHIFT       14

/* DDR40_PHY_CONTROL_REGS :: DRIVE_PAD_CTL :: auto_oeb [13:13] */
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_AUTO_OEB_MASK         0x00002000
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_AUTO_OEB_ALIGN        0
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_AUTO_OEB_BITS         1
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_AUTO_OEB_SHIFT        13

/* DDR40_PHY_CONTROL_REGS :: DRIVE_PAD_CTL :: iddq_a15 [12:12] */
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_IDDQ_A15_MASK         0x00001000
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_IDDQ_A15_ALIGN        0
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_IDDQ_A15_BITS         1
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_IDDQ_A15_SHIFT        12

/* DDR40_PHY_CONTROL_REGS :: DRIVE_PAD_CTL :: iddq_a14 [11:11] */
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_IDDQ_A14_MASK         0x00000800
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_IDDQ_A14_ALIGN        0
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_IDDQ_A14_BITS         1
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_IDDQ_A14_SHIFT        11

/* DDR40_PHY_CONTROL_REGS :: DRIVE_PAD_CTL :: iddq_a13 [10:10] */
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_IDDQ_A13_MASK         0x00000400
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_IDDQ_A13_ALIGN        0
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_IDDQ_A13_BITS         1
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_IDDQ_A13_SHIFT        10

/* DDR40_PHY_CONTROL_REGS :: DRIVE_PAD_CTL :: iddq_aux [09:07] */
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_IDDQ_AUX_MASK         0x00000380
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_IDDQ_AUX_ALIGN        0
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_IDDQ_AUX_BITS         3
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_IDDQ_AUX_SHIFT        7

/* DDR40_PHY_CONTROL_REGS :: DRIVE_PAD_CTL :: half_strength [06:06] */
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_HALF_STRENGTH_MASK    0x00000040
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_HALF_STRENGTH_ALIGN   0
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_HALF_STRENGTH_BITS    1
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_HALF_STRENGTH_SHIFT   6

/* DDR40_PHY_CONTROL_REGS :: DRIVE_PAD_CTL :: gddr_symmetry [05:05] */
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_GDDR_SYMMETRY_MASK    0x00000020
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_GDDR_SYMMETRY_ALIGN   0
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_GDDR_SYMMETRY_BITS    1
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_GDDR_SYMMETRY_SHIFT   5

/* DDR40_PHY_CONTROL_REGS :: DRIVE_PAD_CTL :: vddo_volts [04:03] */
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_VDDO_VOLTS_MASK       0x00000018
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_VDDO_VOLTS_ALIGN      0
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_VDDO_VOLTS_BITS       2
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_VDDO_VOLTS_SHIFT      3

/* DDR40_PHY_CONTROL_REGS :: DRIVE_PAD_CTL :: rt60b [02:02] */
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_RT60B_MASK            0x00000004
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_RT60B_ALIGN           0
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_RT60B_BITS            1
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_RT60B_SHIFT           2

/* DDR40_PHY_CONTROL_REGS :: DRIVE_PAD_CTL :: rt120b_g [01:01] */
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_RT120B_G_MASK         0x00000002
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_RT120B_G_ALIGN        0
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_RT120B_G_BITS         1
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_RT120B_G_SHIFT        1

/* DDR40_PHY_CONTROL_REGS :: DRIVE_PAD_CTL :: g_ddr [00:00] */
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_G_DDR_MASK            0x00000001
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_G_DDR_ALIGN           0
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_G_DDR_BITS            1
#define DDR40_PHY_CONTROL_REGS_DRIVE_PAD_CTL_G_DDR_SHIFT           0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: VDL_RD_DATA_DLY_STATUS
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: VDL_RD_DATA_DLY_STATUS :: reserved0 [31:12] */
#define DDR40_PHY_CONTROL_REGS_VDL_RD_DATA_DLY_STATUS_RESERVED0_MASK 0xfffff000
#define DDR40_PHY_CONTROL_REGS_VDL_RD_DATA_DLY_STATUS_RESERVED0_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_RD_DATA_DLY_STATUS_RESERVED0_BITS 20
#define DDR40_PHY_CONTROL_REGS_VDL_RD_DATA_DLY_STATUS_RESERVED0_SHIFT 12

/* DDR40_PHY_CONTROL_REGS :: VDL_RD_DATA_DLY_STATUS :: auto_init_state [11:06] */
#define DDR40_PHY_CONTROL_REGS_VDL_RD_DATA_DLY_STATUS_AUTO_INIT_STATE_MASK 0x00000fc0
#define DDR40_PHY_CONTROL_REGS_VDL_RD_DATA_DLY_STATUS_AUTO_INIT_STATE_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_RD_DATA_DLY_STATUS_AUTO_INIT_STATE_BITS 6
#define DDR40_PHY_CONTROL_REGS_VDL_RD_DATA_DLY_STATUS_AUTO_INIT_STATE_SHIFT 6

/* DDR40_PHY_CONTROL_REGS :: VDL_RD_DATA_DLY_STATUS :: rd_data_dly_max [05:03] */
#define DDR40_PHY_CONTROL_REGS_VDL_RD_DATA_DLY_STATUS_RD_DATA_DLY_MAX_MASK 0x00000038
#define DDR40_PHY_CONTROL_REGS_VDL_RD_DATA_DLY_STATUS_RD_DATA_DLY_MAX_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_RD_DATA_DLY_STATUS_RD_DATA_DLY_MAX_BITS 3
#define DDR40_PHY_CONTROL_REGS_VDL_RD_DATA_DLY_STATUS_RD_DATA_DLY_MAX_SHIFT 3

/* DDR40_PHY_CONTROL_REGS :: VDL_RD_DATA_DLY_STATUS :: rd_data_dly_min [02:00] */
#define DDR40_PHY_CONTROL_REGS_VDL_RD_DATA_DLY_STATUS_RD_DATA_DLY_MIN_MASK 0x00000007
#define DDR40_PHY_CONTROL_REGS_VDL_RD_DATA_DLY_STATUS_RD_DATA_DLY_MIN_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_RD_DATA_DLY_STATUS_RD_DATA_DLY_MIN_BITS 3
#define DDR40_PHY_CONTROL_REGS_VDL_RD_DATA_DLY_STATUS_RD_DATA_DLY_MIN_SHIFT 0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: VDL_CALIBRATE
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: VDL_CALIBRATE :: reserved0 [31:30] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_RESERVED0_MASK        0xc0000000
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_RESERVED0_ALIGN       0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_RESERVED0_BITS        2
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_RESERVED0_SHIFT       30

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIBRATE :: single_cycle [29:29] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_SINGLE_CYCLE_MASK     0x20000000
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_SINGLE_CYCLE_ALIGN    0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_SINGLE_CYCLE_BITS     1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_SINGLE_CYCLE_SHIFT    29

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIBRATE :: use_straps [28:28] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_USE_STRAPS_MASK       0x10000000
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_USE_STRAPS_ALIGN      0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_USE_STRAPS_BITS       1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_USE_STRAPS_SHIFT      28

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIBRATE :: auto_init [27:27] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_AUTO_INIT_MASK        0x08000000
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_AUTO_INIT_ALIGN       0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_AUTO_INIT_BITS        1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_AUTO_INIT_SHIFT       27

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIBRATE :: skip_rst [26:26] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_SKIP_RST_MASK         0x04000000
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_SKIP_RST_ALIGN        0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_SKIP_RST_BITS         1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_SKIP_RST_SHIFT        26

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIBRATE :: exit_in_sr [25:25] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_EXIT_IN_SR_MASK       0x02000000
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_EXIT_IN_SR_ALIGN      0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_EXIT_IN_SR_BITS       1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_EXIT_IN_SR_SHIFT      25

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIBRATE :: rd_dly_cal [24:24] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_RD_DLY_CAL_MASK       0x01000000
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_RD_DLY_CAL_ALIGN      0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_RD_DLY_CAL_BITS       1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_RD_DLY_CAL_SHIFT      24

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIBRATE :: bit_refresh [23:23] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_BIT_REFRESH_MASK      0x00800000
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_BIT_REFRESH_ALIGN     0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_BIT_REFRESH_BITS      1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_BIT_REFRESH_SHIFT     23

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIBRATE :: set_wr_dq [22:22] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_SET_WR_DQ_MASK        0x00400000
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_SET_WR_DQ_ALIGN       0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_SET_WR_DQ_BITS        1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_SET_WR_DQ_SHIFT       22

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIBRATE :: dq0_only [21:21] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_DQ0_ONLY_MASK         0x00200000
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_DQ0_ONLY_ALIGN        0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_DQ0_ONLY_BITS         1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_DQ0_ONLY_SHIFT        21

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIBRATE :: set_mr_mpr [20:20] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_SET_MR_MPR_MASK       0x00100000
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_SET_MR_MPR_ALIGN      0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_SET_MR_MPR_BITS       1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_SET_MR_MPR_SHIFT      20

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIBRATE :: bit_cal [19:19] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_BIT_CAL_MASK          0x00080000
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_BIT_CAL_ALIGN         0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_BIT_CAL_BITS          1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_BIT_CAL_SHIFT         19

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIBRATE :: rd_en_cal [18:18] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_RD_EN_CAL_MASK        0x00040000
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_RD_EN_CAL_ALIGN       0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_RD_EN_CAL_BITS        1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_RD_EN_CAL_SHIFT       18

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIBRATE :: calib_bit_offset [17:12] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_BIT_OFFSET_MASK 0x0003f000
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_BIT_OFFSET_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_BIT_OFFSET_BITS 6
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_BIT_OFFSET_SHIFT 12

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIBRATE :: calib_dqs_clocks [11:11] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_DQS_CLOCKS_MASK 0x00000800
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_DQS_CLOCKS_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_DQS_CLOCKS_BITS 1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_DQS_CLOCKS_SHIFT 11

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIBRATE :: calib_dqs_pair [10:10] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_DQS_PAIR_MASK   0x00000400
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_DQS_PAIR_ALIGN  0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_DQS_PAIR_BITS   1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_DQS_PAIR_SHIFT  10

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIBRATE :: calib_steps [09:09] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_STEPS_MASK      0x00000200
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_STEPS_ALIGN     0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_STEPS_BITS      1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_STEPS_SHIFT     9

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIBRATE :: calib_auto [08:08] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_AUTO_MASK       0x00000100
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_AUTO_ALIGN      0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_AUTO_BITS       1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_AUTO_SHIFT      8

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIBRATE :: calib_ftm [07:07] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_FTM_MASK        0x00000080
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_FTM_ALIGN       0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_FTM_BITS        1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_FTM_SHIFT       7

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIBRATE :: calib_phybist [06:06] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_PHYBIST_MASK    0x00000040
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_PHYBIST_ALIGN   0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_PHYBIST_BITS    1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_PHYBIST_SHIFT   6

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIBRATE :: calib_byte [05:05] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_BYTE_MASK       0x00000020
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_BYTE_ALIGN      0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_BYTE_BITS       1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_BYTE_SHIFT      5

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIBRATE :: calib_clocks [04:04] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_CLOCKS_MASK     0x00000010
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_CLOCKS_ALIGN    0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_CLOCKS_BITS     1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_CLOCKS_SHIFT    4

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIBRATE :: calib_test [03:03] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_TEST_MASK       0x00000008
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_TEST_ALIGN      0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_TEST_BITS       1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_TEST_SHIFT      3

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIBRATE :: calib_always [02:02] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_ALWAYS_MASK     0x00000004
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_ALWAYS_ALIGN    0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_ALWAYS_BITS     1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_ALWAYS_SHIFT    2

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIBRATE :: calib_once [01:01] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_ONCE_MASK       0x00000002
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_ONCE_ALIGN      0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_ONCE_BITS       1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_ONCE_SHIFT      1

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIBRATE :: calib_fast [00:00] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_FAST_MASK       0x00000001
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_FAST_ALIGN      0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_FAST_BITS       1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIBRATE_CALIB_FAST_SHIFT      0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: VDL_CALIB_STATUS
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: VDL_CALIB_STATUS :: reserved0 [31:30] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_RESERVED0_MASK     0xc0000000
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_RESERVED0_ALIGN    0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_RESERVED0_BITS     2
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_RESERVED0_SHIFT    30

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIB_STATUS :: auto_init_fail [29:29] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_AUTO_INIT_FAIL_MASK 0x20000000
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_AUTO_INIT_FAIL_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_AUTO_INIT_FAIL_BITS 1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_AUTO_INIT_FAIL_SHIFT 29

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIB_STATUS :: auto_init_done [28:28] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_AUTO_INIT_DONE_MASK 0x10000000
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_AUTO_INIT_DONE_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_AUTO_INIT_DONE_BITS 1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_AUTO_INIT_DONE_SHIFT 28

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIB_STATUS :: calib_rd_data_dly_error [27:27] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_RD_DATA_DLY_ERROR_MASK 0x08000000
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_RD_DATA_DLY_ERROR_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_RD_DATA_DLY_ERROR_BITS 1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_RD_DATA_DLY_ERROR_SHIFT 27

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIB_STATUS :: calib_read_en_error [26:23] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_READ_EN_ERROR_MASK 0x07800000
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_READ_EN_ERROR_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_READ_EN_ERROR_BITS 4
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_READ_EN_ERROR_SHIFT 23

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIB_STATUS :: calib_byte_error [22:19] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_BYTE_ERROR_MASK 0x00780000
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_BYTE_ERROR_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_BYTE_ERROR_BITS 4
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_BYTE_ERROR_SHIFT 19

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIB_STATUS :: calib_byte_sel [18:18] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_BYTE_SEL_MASK 0x00040000
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_BYTE_SEL_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_BYTE_SEL_BITS 1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_BYTE_SEL_SHIFT 18

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIB_STATUS :: calib_bit_offset [17:12] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_BIT_OFFSET_MASK 0x0003f000
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_BIT_OFFSET_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_BIT_OFFSET_BITS 6
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_BIT_OFFSET_SHIFT 12

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIB_STATUS :: calib_total [11:02] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_TOTAL_MASK   0x00000ffc
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_TOTAL_ALIGN  0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_TOTAL_BITS   10
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_TOTAL_SHIFT  2

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIB_STATUS :: calib_lock [01:01] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_LOCK_MASK    0x00000002
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_LOCK_ALIGN   0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_LOCK_BITS    1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_LOCK_SHIFT   1

/* DDR40_PHY_CONTROL_REGS :: VDL_CALIB_STATUS :: calib_idle [00:00] */
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_IDLE_MASK    0x00000001
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_IDLE_ALIGN   0
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_IDLE_BITS    1
#define DDR40_PHY_CONTROL_REGS_VDL_CALIB_STATUS_CALIB_IDLE_SHIFT   0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: VDL_DQ_CALIB_STATUS
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: VDL_DQ_CALIB_STATUS :: reserved0 [31:26] */
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_RESERVED0_MASK  0xfc000000
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_RESERVED0_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_RESERVED0_BITS  6
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_RESERVED0_SHIFT 26

/* DDR40_PHY_CONTROL_REGS :: VDL_DQ_CALIB_STATUS :: dqs_calib_total [25:16] */
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_DQS_CALIB_TOTAL_MASK 0x03ff0000
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_DQS_CALIB_TOTAL_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_DQS_CALIB_TOTAL_BITS 10
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_DQS_CALIB_TOTAL_SHIFT 16

/* DDR40_PHY_CONTROL_REGS :: VDL_DQ_CALIB_STATUS :: reserved1 [15:14] */
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_RESERVED1_MASK  0x0000c000
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_RESERVED1_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_RESERVED1_BITS  2
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_RESERVED1_SHIFT 14

/* DDR40_PHY_CONTROL_REGS :: VDL_DQ_CALIB_STATUS :: dq_calib_total [13:04] */
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_DQ_CALIB_TOTAL_MASK 0x00003ff0
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_DQ_CALIB_TOTAL_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_DQ_CALIB_TOTAL_BITS 10
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_DQ_CALIB_TOTAL_SHIFT 4

/* DDR40_PHY_CONTROL_REGS :: VDL_DQ_CALIB_STATUS :: dqs_calib_clocks [03:03] */
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_DQS_CALIB_CLOCKS_MASK 0x00000008
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_DQS_CALIB_CLOCKS_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_DQS_CALIB_CLOCKS_BITS 1
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_DQS_CALIB_CLOCKS_SHIFT 3

/* DDR40_PHY_CONTROL_REGS :: VDL_DQ_CALIB_STATUS :: dqs_calib_mode [02:02] */
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_DQS_CALIB_MODE_MASK 0x00000004
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_DQS_CALIB_MODE_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_DQS_CALIB_MODE_BITS 1
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_DQS_CALIB_MODE_SHIFT 2

/* DDR40_PHY_CONTROL_REGS :: VDL_DQ_CALIB_STATUS :: dqs_calib_lock [01:01] */
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_DQS_CALIB_LOCK_MASK 0x00000002
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_DQS_CALIB_LOCK_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_DQS_CALIB_LOCK_BITS 1
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_DQS_CALIB_LOCK_SHIFT 1

/* DDR40_PHY_CONTROL_REGS :: VDL_DQ_CALIB_STATUS :: dq_calib_lock [00:00] */
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_DQ_CALIB_LOCK_MASK 0x00000001
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_DQ_CALIB_LOCK_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_DQ_CALIB_LOCK_BITS 1
#define DDR40_PHY_CONTROL_REGS_VDL_DQ_CALIB_STATUS_DQ_CALIB_LOCK_SHIFT 0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: VDL_WR_CHAN_CALIB_STATUS
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: VDL_WR_CHAN_CALIB_STATUS :: reserved0 [31:22] */
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_RESERVED0_MASK 0xffc00000
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_RESERVED0_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_RESERVED0_BITS 10
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_RESERVED0_SHIFT 22

/* DDR40_PHY_CONTROL_REGS :: VDL_WR_CHAN_CALIB_STATUS :: wr_chan_calib_bit_offset [21:16] */
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_WR_CHAN_CALIB_BIT_OFFSET_MASK 0x003f0000
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_WR_CHAN_CALIB_BIT_OFFSET_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_WR_CHAN_CALIB_BIT_OFFSET_BITS 6
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_WR_CHAN_CALIB_BIT_OFFSET_SHIFT 16

/* DDR40_PHY_CONTROL_REGS :: VDL_WR_CHAN_CALIB_STATUS :: reserved1 [15:14] */
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_RESERVED1_MASK 0x0000c000
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_RESERVED1_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_RESERVED1_BITS 2
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_RESERVED1_SHIFT 14

/* DDR40_PHY_CONTROL_REGS :: VDL_WR_CHAN_CALIB_STATUS :: wr_chan_calib_total [13:04] */
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_WR_CHAN_CALIB_TOTAL_MASK 0x00003ff0
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_WR_CHAN_CALIB_TOTAL_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_WR_CHAN_CALIB_TOTAL_BITS 10
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_WR_CHAN_CALIB_TOTAL_SHIFT 4

/* DDR40_PHY_CONTROL_REGS :: VDL_WR_CHAN_CALIB_STATUS :: reserved2 [03:03] */
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_RESERVED2_MASK 0x00000008
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_RESERVED2_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_RESERVED2_BITS 1
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_RESERVED2_SHIFT 3

/* DDR40_PHY_CONTROL_REGS :: VDL_WR_CHAN_CALIB_STATUS :: wr_chan_calib_clocks [02:02] */
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_WR_CHAN_CALIB_CLOCKS_MASK 0x00000004
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_WR_CHAN_CALIB_CLOCKS_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_WR_CHAN_CALIB_CLOCKS_BITS 1
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_WR_CHAN_CALIB_CLOCKS_SHIFT 2

/* DDR40_PHY_CONTROL_REGS :: VDL_WR_CHAN_CALIB_STATUS :: wr_chan_calib_byte_sel [01:01] */
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_WR_CHAN_CALIB_BYTE_SEL_MASK 0x00000002
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_WR_CHAN_CALIB_BYTE_SEL_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_WR_CHAN_CALIB_BYTE_SEL_BITS 1
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_WR_CHAN_CALIB_BYTE_SEL_SHIFT 1

/* DDR40_PHY_CONTROL_REGS :: VDL_WR_CHAN_CALIB_STATUS :: wr_chan_calib_lock [00:00] */
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_WR_CHAN_CALIB_LOCK_MASK 0x00000001
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_WR_CHAN_CALIB_LOCK_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_WR_CHAN_CALIB_LOCK_BITS 1
#define DDR40_PHY_CONTROL_REGS_VDL_WR_CHAN_CALIB_STATUS_WR_CHAN_CALIB_LOCK_SHIFT 0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: VDL_RD_EN_CALIB_STATUS
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: VDL_RD_EN_CALIB_STATUS :: reserved0 [31:22] */
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RESERVED0_MASK 0xffc00000
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RESERVED0_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RESERVED0_BITS 10
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RESERVED0_SHIFT 22

/* DDR40_PHY_CONTROL_REGS :: VDL_RD_EN_CALIB_STATUS :: rd_en_calib_bit_offset [21:16] */
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RD_EN_CALIB_BIT_OFFSET_MASK 0x003f0000
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RD_EN_CALIB_BIT_OFFSET_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RD_EN_CALIB_BIT_OFFSET_BITS 6
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RD_EN_CALIB_BIT_OFFSET_SHIFT 16

/* DDR40_PHY_CONTROL_REGS :: VDL_RD_EN_CALIB_STATUS :: reserved1 [15:14] */
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RESERVED1_MASK 0x0000c000
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RESERVED1_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RESERVED1_BITS 2
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RESERVED1_SHIFT 14

/* DDR40_PHY_CONTROL_REGS :: VDL_RD_EN_CALIB_STATUS :: rd_en_calib_total [13:04] */
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RD_EN_CALIB_TOTAL_MASK 0x00003ff0
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RD_EN_CALIB_TOTAL_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RD_EN_CALIB_TOTAL_BITS 10
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RD_EN_CALIB_TOTAL_SHIFT 4

/* DDR40_PHY_CONTROL_REGS :: VDL_RD_EN_CALIB_STATUS :: reserved2 [03:03] */
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RESERVED2_MASK 0x00000008
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RESERVED2_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RESERVED2_BITS 1
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RESERVED2_SHIFT 3

/* DDR40_PHY_CONTROL_REGS :: VDL_RD_EN_CALIB_STATUS :: rd_en_calib_clocks [02:02] */
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RD_EN_CALIB_CLOCKS_MASK 0x00000004
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RD_EN_CALIB_CLOCKS_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RD_EN_CALIB_CLOCKS_BITS 1
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RD_EN_CALIB_CLOCKS_SHIFT 2

/* DDR40_PHY_CONTROL_REGS :: VDL_RD_EN_CALIB_STATUS :: rd_en_calib_byte_sel [01:01] */
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RD_EN_CALIB_BYTE_SEL_MASK 0x00000002
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RD_EN_CALIB_BYTE_SEL_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RD_EN_CALIB_BYTE_SEL_BITS 1
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RD_EN_CALIB_BYTE_SEL_SHIFT 1

/* DDR40_PHY_CONTROL_REGS :: VDL_RD_EN_CALIB_STATUS :: rd_en_calib_lock [00:00] */
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RD_EN_CALIB_LOCK_MASK 0x00000001
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RD_EN_CALIB_LOCK_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RD_EN_CALIB_LOCK_BITS 1
#define DDR40_PHY_CONTROL_REGS_VDL_RD_EN_CALIB_STATUS_RD_EN_CALIB_LOCK_SHIFT 0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: VIRTUAL_VTT_CONTROL
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: VIRTUAL_VTT_CONTROL :: reserved0 [31:06] */
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROL_RESERVED0_MASK  0xffffffc0
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROL_RESERVED0_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROL_RESERVED0_BITS  26
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROL_RESERVED0_SHIFT 6

/* DDR40_PHY_CONTROL_REGS :: VIRTUAL_VTT_CONTROL :: low_vtt [05:05] */
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROL_LOW_VTT_MASK    0x00000020
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROL_LOW_VTT_ALIGN   0
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROL_LOW_VTT_BITS    1
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROL_LOW_VTT_SHIFT   5

/* DDR40_PHY_CONTROL_REGS :: VIRTUAL_VTT_CONTROL :: high_vtt [04:04] */
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROL_HIGH_VTT_MASK   0x00000010
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROL_HIGH_VTT_ALIGN  0
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROL_HIGH_VTT_BITS   1
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROL_HIGH_VTT_SHIFT  4

/* DDR40_PHY_CONTROL_REGS :: VIRTUAL_VTT_CONTROL :: error_reset [03:03] */
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROL_ERROR_RESET_MASK 0x00000008
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROL_ERROR_RESET_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROL_ERROR_RESET_BITS 1
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROL_ERROR_RESET_SHIFT 3

/* DDR40_PHY_CONTROL_REGS :: VIRTUAL_VTT_CONTROL :: enable_ctl_idle [02:02] */
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROL_ENABLE_CTL_IDLE_MASK 0x00000004
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROL_ENABLE_CTL_IDLE_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROL_ENABLE_CTL_IDLE_BITS 1
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROL_ENABLE_CTL_IDLE_SHIFT 2

/* DDR40_PHY_CONTROL_REGS :: VIRTUAL_VTT_CONTROL :: enable_cs_idle [01:01] */
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROL_ENABLE_CS_IDLE_MASK 0x00000002
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROL_ENABLE_CS_IDLE_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROL_ENABLE_CS_IDLE_BITS 1
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROL_ENABLE_CS_IDLE_SHIFT 1

/* DDR40_PHY_CONTROL_REGS :: VIRTUAL_VTT_CONTROL :: enable_cke_idle [00:00] */
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROL_ENABLE_CKE_IDLE_MASK 0x00000001
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROL_ENABLE_CKE_IDLE_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROL_ENABLE_CKE_IDLE_BITS 1
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONTROL_ENABLE_CKE_IDLE_SHIFT 0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: VIRTUAL_VTT_STATUS
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: VIRTUAL_VTT_STATUS :: reserved0 [31:19] */
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_STATUS_RESERVED0_MASK   0xfff80000
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_STATUS_RESERVED0_ALIGN  0
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_STATUS_RESERVED0_BITS   13
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_STATUS_RESERVED0_SHIFT  19

/* DDR40_PHY_CONTROL_REGS :: VIRTUAL_VTT_STATUS :: error [18:03] */
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_STATUS_ERROR_MASK       0x0007fff8
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_STATUS_ERROR_ALIGN      0
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_STATUS_ERROR_BITS       16
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_STATUS_ERROR_SHIFT      3

/* DDR40_PHY_CONTROL_REGS :: VIRTUAL_VTT_STATUS :: error_low [02:02] */
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_STATUS_ERROR_LOW_MASK   0x00000004
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_STATUS_ERROR_LOW_ALIGN  0
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_STATUS_ERROR_LOW_BITS   1
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_STATUS_ERROR_LOW_SHIFT  2

/* DDR40_PHY_CONTROL_REGS :: VIRTUAL_VTT_STATUS :: error_high [01:01] */
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_STATUS_ERROR_HIGH_MASK  0x00000002
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_STATUS_ERROR_HIGH_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_STATUS_ERROR_HIGH_BITS  1
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_STATUS_ERROR_HIGH_SHIFT 1

/* DDR40_PHY_CONTROL_REGS :: VIRTUAL_VTT_STATUS :: ready [00:00] */
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_STATUS_READY_MASK       0x00000001
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_STATUS_READY_ALIGN      0
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_STATUS_READY_BITS       1
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_STATUS_READY_SHIFT      0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: VIRTUAL_VTT_CONNECTIONS
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: VIRTUAL_VTT_CONNECTIONS :: reserved0 [31:27] */
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONNECTIONS_RESERVED0_MASK 0xf8000000
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONNECTIONS_RESERVED0_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONNECTIONS_RESERVED0_BITS 5
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONNECTIONS_RESERVED0_SHIFT 27

/* DDR40_PHY_CONTROL_REGS :: VIRTUAL_VTT_CONNECTIONS :: mask [26:00] */
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONNECTIONS_MASK_MASK   0x07ffffff
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONNECTIONS_MASK_ALIGN  0
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONNECTIONS_MASK_BITS   27
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_CONNECTIONS_MASK_SHIFT  0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: VIRTUAL_VTT_OVERRIDE
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: VIRTUAL_VTT_OVERRIDE :: reserved0 [31:27] */
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_OVERRIDE_RESERVED0_MASK 0xf8000000
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_OVERRIDE_RESERVED0_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_OVERRIDE_RESERVED0_BITS 5
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_OVERRIDE_RESERVED0_SHIFT 27

/* DDR40_PHY_CONTROL_REGS :: VIRTUAL_VTT_OVERRIDE :: mask [26:00] */
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_OVERRIDE_MASK_MASK      0x07ffffff
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_OVERRIDE_MASK_ALIGN     0
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_OVERRIDE_MASK_BITS      27
#define DDR40_PHY_CONTROL_REGS_VIRTUAL_VTT_OVERRIDE_MASK_SHIFT     0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: VREF_DAC_CONTROL
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: VREF_DAC_CONTROL :: reserved0 [31:21] */
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_RESERVED0_MASK     0xffe00000
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_RESERVED0_ALIGN    0
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_RESERVED0_BITS     11
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_RESERVED0_SHIFT    21

/* DDR40_PHY_CONTROL_REGS :: VREF_DAC_CONTROL :: LDO_CK1_GT_INT [20:20] */
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_LDO_CK1_GT_INT_MASK 0x00100000
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_LDO_CK1_GT_INT_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_LDO_CK1_GT_INT_BITS 1
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_LDO_CK1_GT_INT_SHIFT 20

/* DDR40_PHY_CONTROL_REGS :: VREF_DAC_CONTROL :: LDO_CK0_GT_INT [19:19] */
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_LDO_CK0_GT_INT_MASK 0x00080000
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_LDO_CK0_GT_INT_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_LDO_CK0_GT_INT_BITS 1
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_LDO_CK0_GT_INT_SHIFT 19

/* DDR40_PHY_CONTROL_REGS :: VREF_DAC_CONTROL :: LDO_GT_INT [18:18] */
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_LDO_GT_INT_MASK    0x00040000
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_LDO_GT_INT_ALIGN   0
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_LDO_GT_INT_BITS    1
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_LDO_GT_INT_SHIFT   18

/* DDR40_PHY_CONTROL_REGS :: VREF_DAC_CONTROL :: EXT_GT_INT [17:17] */
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_EXT_GT_INT_MASK    0x00020000
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_EXT_GT_INT_ALIGN   0
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_EXT_GT_INT_BITS    1
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_EXT_GT_INT_SHIFT   17

/* DDR40_PHY_CONTROL_REGS :: VREF_DAC_CONTROL :: LDO_TESTOUT_MUX_CTL [16:15] */
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_LDO_TESTOUT_MUX_CTL_MASK 0x00018000
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_LDO_TESTOUT_MUX_CTL_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_LDO_TESTOUT_MUX_CTL_BITS 2
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_LDO_TESTOUT_MUX_CTL_SHIFT 15

/* DDR40_PHY_CONTROL_REGS :: VREF_DAC_CONTROL :: TEST [14:14] */
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_TEST_MASK          0x00004000
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_TEST_ALIGN         0
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_TEST_BITS          1
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_TEST_SHIFT         14

/* DDR40_PHY_CONTROL_REGS :: VREF_DAC_CONTROL :: PDN1 [13:13] */
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_PDN1_MASK          0x00002000
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_PDN1_ALIGN         0
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_PDN1_BITS          1
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_PDN1_SHIFT         13

/* DDR40_PHY_CONTROL_REGS :: VREF_DAC_CONTROL :: PDN0 [12:12] */
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_PDN0_MASK          0x00001000
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_PDN0_ALIGN         0
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_PDN0_BITS          1
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_PDN0_SHIFT         12

/* DDR40_PHY_CONTROL_REGS :: VREF_DAC_CONTROL :: DAC1 [11:06] */
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_DAC1_MASK          0x00000fc0
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_DAC1_ALIGN         0
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_DAC1_BITS          6
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_DAC1_SHIFT         6

/* DDR40_PHY_CONTROL_REGS :: VREF_DAC_CONTROL :: DAC0 [05:00] */
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_DAC0_MASK          0x0000003f
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_DAC0_ALIGN         0
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_DAC0_BITS          6
#define DDR40_PHY_CONTROL_REGS_VREF_DAC_CONTROL_DAC0_SHIFT         0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: PHYBIST_CNTRL
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: PHYBIST_CNTRL :: reserved0 [31:14] */
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_RESERVED0_MASK        0xffffc000
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_RESERVED0_ALIGN       0
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_RESERVED0_BITS        18
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_RESERVED0_SHIFT       14

/* DDR40_PHY_CONTROL_REGS :: PHYBIST_CNTRL :: force_error_sel [13:08] */
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_FORCE_ERROR_SEL_MASK  0x00003f00
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_FORCE_ERROR_SEL_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_FORCE_ERROR_SEL_BITS  6
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_FORCE_ERROR_SEL_SHIFT 8

/* DDR40_PHY_CONTROL_REGS :: PHYBIST_CNTRL :: reserved1 [07:05] */
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_RESERVED1_MASK        0x000000e0
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_RESERVED1_ALIGN       0
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_RESERVED1_BITS        3
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_RESERVED1_SHIFT       5

/* DDR40_PHY_CONTROL_REGS :: PHYBIST_CNTRL :: bench_mode [04:04] */
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_BENCH_MODE_MASK       0x00000010
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_BENCH_MODE_ALIGN      0
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_BENCH_MODE_BITS       1
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_BENCH_MODE_SHIFT      4

/* DDR40_PHY_CONTROL_REGS :: PHYBIST_CNTRL :: force_dat_error [03:03] */
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_FORCE_DAT_ERROR_MASK  0x00000008
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_FORCE_DAT_ERROR_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_FORCE_DAT_ERROR_BITS  1
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_FORCE_DAT_ERROR_SHIFT 3

/* DDR40_PHY_CONTROL_REGS :: PHYBIST_CNTRL :: force_ctl_error [02:02] */
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_FORCE_CTL_ERROR_MASK  0x00000004
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_FORCE_CTL_ERROR_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_FORCE_CTL_ERROR_BITS  1
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_FORCE_CTL_ERROR_SHIFT 2

/* DDR40_PHY_CONTROL_REGS :: PHYBIST_CNTRL :: int_loopback [01:01] */
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_INT_LOOPBACK_MASK     0x00000002
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_INT_LOOPBACK_ALIGN    0
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_INT_LOOPBACK_BITS     1
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_INT_LOOPBACK_SHIFT    1

/* DDR40_PHY_CONTROL_REGS :: PHYBIST_CNTRL :: enable [00:00] */
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_ENABLE_MASK           0x00000001
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_ENABLE_ALIGN          0
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_ENABLE_BITS           1
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CNTRL_ENABLE_SHIFT          0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: PHYBIST_SEED
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: PHYBIST_SEED :: seed [31:00] */
#define DDR40_PHY_CONTROL_REGS_PHYBIST_SEED_SEED_MASK              0xffffffff
#define DDR40_PHY_CONTROL_REGS_PHYBIST_SEED_SEED_ALIGN             0
#define DDR40_PHY_CONTROL_REGS_PHYBIST_SEED_SEED_BITS              32
#define DDR40_PHY_CONTROL_REGS_PHYBIST_SEED_SEED_SHIFT             0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: PHYBIST_STATUS
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: PHYBIST_STATUS :: reserved0 [31:04] */
#define DDR40_PHY_CONTROL_REGS_PHYBIST_STATUS_RESERVED0_MASK       0xfffffff0
#define DDR40_PHY_CONTROL_REGS_PHYBIST_STATUS_RESERVED0_ALIGN      0
#define DDR40_PHY_CONTROL_REGS_PHYBIST_STATUS_RESERVED0_BITS       28
#define DDR40_PHY_CONTROL_REGS_PHYBIST_STATUS_RESERVED0_SHIFT      4

/* DDR40_PHY_CONTROL_REGS :: PHYBIST_STATUS :: dat_pass [03:03] */
#define DDR40_PHY_CONTROL_REGS_PHYBIST_STATUS_DAT_PASS_MASK        0x00000008
#define DDR40_PHY_CONTROL_REGS_PHYBIST_STATUS_DAT_PASS_ALIGN       0
#define DDR40_PHY_CONTROL_REGS_PHYBIST_STATUS_DAT_PASS_BITS        1
#define DDR40_PHY_CONTROL_REGS_PHYBIST_STATUS_DAT_PASS_SHIFT       3

/* DDR40_PHY_CONTROL_REGS :: PHYBIST_STATUS :: ctl_pass [02:02] */
#define DDR40_PHY_CONTROL_REGS_PHYBIST_STATUS_CTL_PASS_MASK        0x00000004
#define DDR40_PHY_CONTROL_REGS_PHYBIST_STATUS_CTL_PASS_ALIGN       0
#define DDR40_PHY_CONTROL_REGS_PHYBIST_STATUS_CTL_PASS_BITS        1
#define DDR40_PHY_CONTROL_REGS_PHYBIST_STATUS_CTL_PASS_SHIFT       2

/* DDR40_PHY_CONTROL_REGS :: PHYBIST_STATUS :: dat_done [01:01] */
#define DDR40_PHY_CONTROL_REGS_PHYBIST_STATUS_DAT_DONE_MASK        0x00000002
#define DDR40_PHY_CONTROL_REGS_PHYBIST_STATUS_DAT_DONE_ALIGN       0
#define DDR40_PHY_CONTROL_REGS_PHYBIST_STATUS_DAT_DONE_BITS        1
#define DDR40_PHY_CONTROL_REGS_PHYBIST_STATUS_DAT_DONE_SHIFT       1

/* DDR40_PHY_CONTROL_REGS :: PHYBIST_STATUS :: ctl_done [00:00] */
#define DDR40_PHY_CONTROL_REGS_PHYBIST_STATUS_CTL_DONE_MASK        0x00000001
#define DDR40_PHY_CONTROL_REGS_PHYBIST_STATUS_CTL_DONE_ALIGN       0
#define DDR40_PHY_CONTROL_REGS_PHYBIST_STATUS_CTL_DONE_BITS        1
#define DDR40_PHY_CONTROL_REGS_PHYBIST_STATUS_CTL_DONE_SHIFT       0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: PHYBIST_CTL_STATUS
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: PHYBIST_CTL_STATUS :: reserved0 [31:27] */
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CTL_STATUS_RESERVED0_MASK   0xf8000000
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CTL_STATUS_RESERVED0_ALIGN  0
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CTL_STATUS_RESERVED0_BITS   5
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CTL_STATUS_RESERVED0_SHIFT  27

/* DDR40_PHY_CONTROL_REGS :: PHYBIST_CTL_STATUS :: ctl_errors [26:00] */
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CTL_STATUS_CTL_ERRORS_MASK  0x07ffffff
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CTL_STATUS_CTL_ERRORS_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CTL_STATUS_CTL_ERRORS_BITS  27
#define DDR40_PHY_CONTROL_REGS_PHYBIST_CTL_STATUS_CTL_ERRORS_SHIFT 0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: PHYBIST_DQ_STATUS
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: PHYBIST_DQ_STATUS :: dat_errors [31:00] */
#define DDR40_PHY_CONTROL_REGS_PHYBIST_DQ_STATUS_DAT_ERRORS_MASK   0xffffffff
#define DDR40_PHY_CONTROL_REGS_PHYBIST_DQ_STATUS_DAT_ERRORS_ALIGN  0
#define DDR40_PHY_CONTROL_REGS_PHYBIST_DQ_STATUS_DAT_ERRORS_BITS   32
#define DDR40_PHY_CONTROL_REGS_PHYBIST_DQ_STATUS_DAT_ERRORS_SHIFT  0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: PHYBIST_MISC_STATUS
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: PHYBIST_MISC_STATUS :: reserved0 [31:08] */
#define DDR40_PHY_CONTROL_REGS_PHYBIST_MISC_STATUS_RESERVED0_MASK  0xffffff00
#define DDR40_PHY_CONTROL_REGS_PHYBIST_MISC_STATUS_RESERVED0_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_PHYBIST_MISC_STATUS_RESERVED0_BITS  24
#define DDR40_PHY_CONTROL_REGS_PHYBIST_MISC_STATUS_RESERVED0_SHIFT 8

/* DDR40_PHY_CONTROL_REGS :: PHYBIST_MISC_STATUS :: ck_errors [07:04] */
#define DDR40_PHY_CONTROL_REGS_PHYBIST_MISC_STATUS_CK_ERRORS_MASK  0x000000f0
#define DDR40_PHY_CONTROL_REGS_PHYBIST_MISC_STATUS_CK_ERRORS_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_PHYBIST_MISC_STATUS_CK_ERRORS_BITS  4
#define DDR40_PHY_CONTROL_REGS_PHYBIST_MISC_STATUS_CK_ERRORS_SHIFT 4

/* DDR40_PHY_CONTROL_REGS :: PHYBIST_MISC_STATUS :: dm_errors [03:00] */
#define DDR40_PHY_CONTROL_REGS_PHYBIST_MISC_STATUS_DM_ERRORS_MASK  0x0000000f
#define DDR40_PHY_CONTROL_REGS_PHYBIST_MISC_STATUS_DM_ERRORS_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_PHYBIST_MISC_STATUS_DM_ERRORS_BITS  4
#define DDR40_PHY_CONTROL_REGS_PHYBIST_MISC_STATUS_DM_ERRORS_SHIFT 0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: COMMAND_REG
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: COMMAND_REG :: reserved0 [31:29] */
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_RESERVED0_MASK          0xe0000000
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_RESERVED0_ALIGN         0
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_RESERVED0_BITS          3
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_RESERVED0_SHIFT         29

/* DDR40_PHY_CONTROL_REGS :: COMMAND_REG :: mpr_mode [28:28] */
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_MPR_MODE_MASK           0x10000000
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_MPR_MODE_ALIGN          0
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_MPR_MODE_BITS           1
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_MPR_MODE_SHIFT          28

/* DDR40_PHY_CONTROL_REGS :: COMMAND_REG :: reserved1 [27:25] */
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_RESERVED1_MASK          0x0e000000
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_RESERVED1_ALIGN         0
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_RESERVED1_BITS          3
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_RESERVED1_SHIFT         25

/* DDR40_PHY_CONTROL_REGS :: COMMAND_REG :: aux [24:22] */
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_AUX_MASK                0x01c00000
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_AUX_ALIGN               0
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_AUX_BITS                3
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_AUX_SHIFT               22

/* DDR40_PHY_CONTROL_REGS :: COMMAND_REG :: we [21:21] */
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_WE_MASK                 0x00200000
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_WE_ALIGN                0
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_WE_BITS                 1
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_WE_SHIFT                21

/* DDR40_PHY_CONTROL_REGS :: COMMAND_REG :: cas [20:20] */
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_CAS_MASK                0x00100000
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_CAS_ALIGN               0
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_CAS_BITS                1
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_CAS_SHIFT               20

/* DDR40_PHY_CONTROL_REGS :: COMMAND_REG :: ras [19:19] */
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_RAS_MASK                0x00080000
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_RAS_ALIGN               0
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_RAS_BITS                1
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_RAS_SHIFT               19

/* DDR40_PHY_CONTROL_REGS :: COMMAND_REG :: ba [18:16] */
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_BA_MASK                 0x00070000
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_BA_ALIGN                0
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_BA_BITS                 3
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_BA_SHIFT                16

/* DDR40_PHY_CONTROL_REGS :: COMMAND_REG :: ad [15:00] */
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_AD_MASK                 0x0000ffff
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_AD_ALIGN                0
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_AD_BITS                 16
#define DDR40_PHY_CONTROL_REGS_COMMAND_REG_AD_SHIFT                0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: MODE_REG0
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: MODE_REG0 :: reserved0 [31:17] */
#define DDR40_PHY_CONTROL_REGS_MODE_REG0_RESERVED0_MASK            0xfffe0000
#define DDR40_PHY_CONTROL_REGS_MODE_REG0_RESERVED0_ALIGN           0
#define DDR40_PHY_CONTROL_REGS_MODE_REG0_RESERVED0_BITS            15
#define DDR40_PHY_CONTROL_REGS_MODE_REG0_RESERVED0_SHIFT           17

/* DDR40_PHY_CONTROL_REGS :: MODE_REG0 :: valid [16:16] */
#define DDR40_PHY_CONTROL_REGS_MODE_REG0_VALID_MASK                0x00010000
#define DDR40_PHY_CONTROL_REGS_MODE_REG0_VALID_ALIGN               0
#define DDR40_PHY_CONTROL_REGS_MODE_REG0_VALID_BITS                1
#define DDR40_PHY_CONTROL_REGS_MODE_REG0_VALID_SHIFT               16

/* DDR40_PHY_CONTROL_REGS :: MODE_REG0 :: ad [15:00] */
#define DDR40_PHY_CONTROL_REGS_MODE_REG0_AD_MASK                   0x0000ffff
#define DDR40_PHY_CONTROL_REGS_MODE_REG0_AD_ALIGN                  0
#define DDR40_PHY_CONTROL_REGS_MODE_REG0_AD_BITS                   16
#define DDR40_PHY_CONTROL_REGS_MODE_REG0_AD_SHIFT                  0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: MODE_REG1
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: MODE_REG1 :: reserved0 [31:17] */
#define DDR40_PHY_CONTROL_REGS_MODE_REG1_RESERVED0_MASK            0xfffe0000
#define DDR40_PHY_CONTROL_REGS_MODE_REG1_RESERVED0_ALIGN           0
#define DDR40_PHY_CONTROL_REGS_MODE_REG1_RESERVED0_BITS            15
#define DDR40_PHY_CONTROL_REGS_MODE_REG1_RESERVED0_SHIFT           17

/* DDR40_PHY_CONTROL_REGS :: MODE_REG1 :: valid [16:16] */
#define DDR40_PHY_CONTROL_REGS_MODE_REG1_VALID_MASK                0x00010000
#define DDR40_PHY_CONTROL_REGS_MODE_REG1_VALID_ALIGN               0
#define DDR40_PHY_CONTROL_REGS_MODE_REG1_VALID_BITS                1
#define DDR40_PHY_CONTROL_REGS_MODE_REG1_VALID_SHIFT               16

/* DDR40_PHY_CONTROL_REGS :: MODE_REG1 :: ad [15:00] */
#define DDR40_PHY_CONTROL_REGS_MODE_REG1_AD_MASK                   0x0000ffff
#define DDR40_PHY_CONTROL_REGS_MODE_REG1_AD_ALIGN                  0
#define DDR40_PHY_CONTROL_REGS_MODE_REG1_AD_BITS                   16
#define DDR40_PHY_CONTROL_REGS_MODE_REG1_AD_SHIFT                  0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: MODE_REG2
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: MODE_REG2 :: reserved0 [31:17] */
#define DDR40_PHY_CONTROL_REGS_MODE_REG2_RESERVED0_MASK            0xfffe0000
#define DDR40_PHY_CONTROL_REGS_MODE_REG2_RESERVED0_ALIGN           0
#define DDR40_PHY_CONTROL_REGS_MODE_REG2_RESERVED0_BITS            15
#define DDR40_PHY_CONTROL_REGS_MODE_REG2_RESERVED0_SHIFT           17

/* DDR40_PHY_CONTROL_REGS :: MODE_REG2 :: valid [16:16] */
#define DDR40_PHY_CONTROL_REGS_MODE_REG2_VALID_MASK                0x00010000
#define DDR40_PHY_CONTROL_REGS_MODE_REG2_VALID_ALIGN               0
#define DDR40_PHY_CONTROL_REGS_MODE_REG2_VALID_BITS                1
#define DDR40_PHY_CONTROL_REGS_MODE_REG2_VALID_SHIFT               16

/* DDR40_PHY_CONTROL_REGS :: MODE_REG2 :: ad [15:00] */
#define DDR40_PHY_CONTROL_REGS_MODE_REG2_AD_MASK                   0x0000ffff
#define DDR40_PHY_CONTROL_REGS_MODE_REG2_AD_ALIGN                  0
#define DDR40_PHY_CONTROL_REGS_MODE_REG2_AD_BITS                   16
#define DDR40_PHY_CONTROL_REGS_MODE_REG2_AD_SHIFT                  0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: MODE_REG3
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: MODE_REG3 :: reserved0 [31:17] */
#define DDR40_PHY_CONTROL_REGS_MODE_REG3_RESERVED0_MASK            0xfffe0000
#define DDR40_PHY_CONTROL_REGS_MODE_REG3_RESERVED0_ALIGN           0
#define DDR40_PHY_CONTROL_REGS_MODE_REG3_RESERVED0_BITS            15
#define DDR40_PHY_CONTROL_REGS_MODE_REG3_RESERVED0_SHIFT           17

/* DDR40_PHY_CONTROL_REGS :: MODE_REG3 :: valid [16:16] */
#define DDR40_PHY_CONTROL_REGS_MODE_REG3_VALID_MASK                0x00010000
#define DDR40_PHY_CONTROL_REGS_MODE_REG3_VALID_ALIGN               0
#define DDR40_PHY_CONTROL_REGS_MODE_REG3_VALID_BITS                1
#define DDR40_PHY_CONTROL_REGS_MODE_REG3_VALID_SHIFT               16

/* DDR40_PHY_CONTROL_REGS :: MODE_REG3 :: ad [15:00] */
#define DDR40_PHY_CONTROL_REGS_MODE_REG3_AD_MASK                   0x0000ffff
#define DDR40_PHY_CONTROL_REGS_MODE_REG3_AD_ALIGN                  0
#define DDR40_PHY_CONTROL_REGS_MODE_REG3_AD_BITS                   16
#define DDR40_PHY_CONTROL_REGS_MODE_REG3_AD_SHIFT                  0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: STANDBY_CONTROL
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: STANDBY_CONTROL :: reserved0 [31:19] */
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_RESERVED0_MASK      0xfff80000
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_RESERVED0_ALIGN     0
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_RESERVED0_BITS      13
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_RESERVED0_SHIFT     19

/* DDR40_PHY_CONTROL_REGS :: STANDBY_CONTROL :: standby_ready [18:18] */
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_STANDBY_READY_MASK  0x00040000
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_STANDBY_READY_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_STANDBY_READY_BITS  1
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_STANDBY_READY_SHIFT 18

/* DDR40_PHY_CONTROL_REGS :: STANDBY_CONTROL :: standby_exit_pin_en [17:17] */
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_STANDBY_EXIT_PIN_EN_MASK 0x00020000
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_STANDBY_EXIT_PIN_EN_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_STANDBY_EXIT_PIN_EN_BITS 1
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_STANDBY_EXIT_PIN_EN_SHIFT 17

/* DDR40_PHY_CONTROL_REGS :: STANDBY_CONTROL :: standby_active [16:16] */
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_STANDBY_ACTIVE_MASK 0x00010000
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_STANDBY_ACTIVE_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_STANDBY_ACTIVE_BITS 1
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_STANDBY_ACTIVE_SHIFT 16

/* DDR40_PHY_CONTROL_REGS :: STANDBY_CONTROL :: armed [15:15] */
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_ARMED_MASK          0x00008000
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_ARMED_ALIGN         0
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_ARMED_BITS          1
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_ARMED_SHIFT         15

/* DDR40_PHY_CONTROL_REGS :: STANDBY_CONTROL :: warmstart [14:14] */
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_WARMSTART_MASK      0x00004000
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_WARMSTART_ALIGN     0
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_WARMSTART_BITS      1
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_WARMSTART_SHIFT     14

/* DDR40_PHY_CONTROL_REGS :: STANDBY_CONTROL :: pwrdown_ldo_volts [13:12] */
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_PWRDOWN_LDO_VOLTS_MASK 0x00003000
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_PWRDOWN_LDO_VOLTS_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_PWRDOWN_LDO_VOLTS_BITS 2
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_PWRDOWN_LDO_VOLTS_SHIFT 12

/* DDR40_PHY_CONTROL_REGS :: STANDBY_CONTROL :: pwrdown_skip_mrs [11:11] */
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_PWRDOWN_SKIP_MRS_MASK 0x00000800
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_PWRDOWN_SKIP_MRS_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_PWRDOWN_SKIP_MRS_BITS 1
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_PWRDOWN_SKIP_MRS_SHIFT 11

/* DDR40_PHY_CONTROL_REGS :: STANDBY_CONTROL :: pwrdown_rst_n [10:10] */
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_PWRDOWN_RST_N_MASK  0x00000400
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_PWRDOWN_RST_N_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_PWRDOWN_RST_N_BITS  1
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_PWRDOWN_RST_N_SHIFT 10

/* DDR40_PHY_CONTROL_REGS :: STANDBY_CONTROL :: pwrdown_cke [09:09] */
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_PWRDOWN_CKE_MASK    0x00000200
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_PWRDOWN_CKE_ALIGN   0
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_PWRDOWN_CKE_BITS    1
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_PWRDOWN_CKE_SHIFT   9

/* DDR40_PHY_CONTROL_REGS :: STANDBY_CONTROL :: ldo_volts [08:07] */
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_LDO_VOLTS_MASK      0x00000180
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_LDO_VOLTS_ALIGN     0
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_LDO_VOLTS_BITS      2
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_LDO_VOLTS_SHIFT     7

/* DDR40_PHY_CONTROL_REGS :: STANDBY_CONTROL :: skip_mrs [06:06] */
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_SKIP_MRS_MASK       0x00000040
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_SKIP_MRS_ALIGN      0
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_SKIP_MRS_BITS       1
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_SKIP_MRS_SHIFT      6

/* DDR40_PHY_CONTROL_REGS :: STANDBY_CONTROL :: rst_n [05:05] */
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_RST_N_MASK          0x00000020
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_RST_N_ALIGN         0
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_RST_N_BITS          1
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_RST_N_SHIFT         5

/* DDR40_PHY_CONTROL_REGS :: STANDBY_CONTROL :: cke [04:04] */
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_CKE_MASK            0x00000010
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_CKE_ALIGN           0
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_CKE_BITS            1
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_CKE_SHIFT           4

/* DDR40_PHY_CONTROL_REGS :: STANDBY_CONTROL :: standby [03:00] */
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_STANDBY_MASK        0x0000000f
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_STANDBY_ALIGN       0
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_STANDBY_BITS        4
#define DDR40_PHY_CONTROL_REGS_STANDBY_CONTROL_STANDBY_SHIFT       0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: STRAP_CONTROL
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: STRAP_CONTROL :: reserved0 [31:28] */
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_RESERVED0_MASK        0xf0000000
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_RESERVED0_ALIGN       0
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_RESERVED0_BITS        4
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_RESERVED0_SHIFT       28

/* DDR40_PHY_CONTROL_REGS :: STRAP_CONTROL :: mhz [27:16] */
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_MHZ_MASK              0x0fff0000
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_MHZ_ALIGN             0
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_MHZ_BITS              12
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_MHZ_SHIFT             16

/* DDR40_PHY_CONTROL_REGS :: STRAP_CONTROL :: ad_width [15:14] */
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_AD_WIDTH_MASK         0x0000c000
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_AD_WIDTH_ALIGN        0
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_AD_WIDTH_BITS         2
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_AD_WIDTH_SHIFT        14

/* DDR40_PHY_CONTROL_REGS :: STRAP_CONTROL :: dual_rank [13:13] */
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_DUAL_RANK_MASK        0x00002000
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_DUAL_RANK_ALIGN       0
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_DUAL_RANK_BITS        1
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_DUAL_RANK_SHIFT       13

/* DDR40_PHY_CONTROL_REGS :: STRAP_CONTROL :: bus16 [12:12] */
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_BUS16_MASK            0x00001000
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_BUS16_ALIGN           0
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_BUS16_BITS            1
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_BUS16_SHIFT           12

/* DDR40_PHY_CONTROL_REGS :: STRAP_CONTROL :: bus8 [11:11] */
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_BUS8_MASK             0x00000800
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_BUS8_ALIGN            0
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_BUS8_BITS             1
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_BUS8_SHIFT            11

/* DDR40_PHY_CONTROL_REGS :: STRAP_CONTROL :: chip_width [10:10] */
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_CHIP_WIDTH_MASK       0x00000400
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_CHIP_WIDTH_ALIGN      0
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_CHIP_WIDTH_BITS       1
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_CHIP_WIDTH_SHIFT      10

/* DDR40_PHY_CONTROL_REGS :: STRAP_CONTROL :: vddq [09:08] */
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_VDDQ_MASK             0x00000300
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_VDDQ_ALIGN            0
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_VDDQ_BITS             2
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_VDDQ_SHIFT            8

/* DDR40_PHY_CONTROL_REGS :: STRAP_CONTROL :: chip_size [07:06] */
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_CHIP_SIZE_MASK        0x000000c0
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_CHIP_SIZE_ALIGN       0
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_CHIP_SIZE_BITS        2
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_CHIP_SIZE_SHIFT       6

/* DDR40_PHY_CONTROL_REGS :: STRAP_CONTROL :: jedec_type [05:01] */
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_JEDEC_TYPE_MASK       0x0000003e
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_JEDEC_TYPE_ALIGN      0
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_JEDEC_TYPE_BITS       5
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_JEDEC_TYPE_SHIFT      1

/* DDR40_PHY_CONTROL_REGS :: STRAP_CONTROL :: straps_valid [00:00] */
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_STRAPS_VALID_MASK     0x00000001
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_STRAPS_VALID_ALIGN    0
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_STRAPS_VALID_BITS     1
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL_STRAPS_VALID_SHIFT    0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: STRAP_CONTROL2
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: STRAP_CONTROL2 :: reserved0 [31:21] */
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL2_RESERVED0_MASK       0xffe00000
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL2_RESERVED0_ALIGN      0
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL2_RESERVED0_BITS       11
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL2_RESERVED0_SHIFT      21

/* DDR40_PHY_CONTROL_REGS :: STRAP_CONTROL2 :: ddr3 [20:20] */
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL2_DDR3_MASK            0x00100000
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL2_DDR3_ALIGN           0
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL2_DDR3_BITS            1
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL2_DDR3_SHIFT           20

/* DDR40_PHY_CONTROL_REGS :: STRAP_CONTROL2 :: al [19:17] */
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL2_AL_MASK              0x000e0000
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL2_AL_ALIGN             0
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL2_AL_BITS              3
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL2_AL_SHIFT             17

/* DDR40_PHY_CONTROL_REGS :: STRAP_CONTROL2 :: wr [16:12] */
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL2_WR_MASK              0x0001f000
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL2_WR_ALIGN             0
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL2_WR_BITS              5
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL2_WR_SHIFT             12

/* DDR40_PHY_CONTROL_REGS :: STRAP_CONTROL2 :: cwl [11:07] */
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL2_CWL_MASK             0x00000f80
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL2_CWL_ALIGN            0
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL2_CWL_BITS             5
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL2_CWL_SHIFT            7

/* DDR40_PHY_CONTROL_REGS :: STRAP_CONTROL2 :: cl [06:00] */
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL2_CL_MASK              0x0000007f
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL2_CL_ALIGN             0
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL2_CL_BITS              7
#define DDR40_PHY_CONTROL_REGS_STRAP_CONTROL2_CL_SHIFT             0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: STRAP_STATUS
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: STRAP_STATUS :: reserved0 [31:30] */
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_RESERVED0_MASK         0xc0000000
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_RESERVED0_ALIGN        0
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_RESERVED0_BITS         2
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_RESERVED0_SHIFT        30

/* DDR40_PHY_CONTROL_REGS :: STRAP_STATUS :: from_reg [29:29] */
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_FROM_REG_MASK          0x20000000
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_FROM_REG_ALIGN         0
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_FROM_REG_BITS          1
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_FROM_REG_SHIFT         29

/* DDR40_PHY_CONTROL_REGS :: STRAP_STATUS :: from_memc [28:28] */
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_FROM_MEMC_MASK         0x10000000
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_FROM_MEMC_ALIGN        0
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_FROM_MEMC_BITS         1
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_FROM_MEMC_SHIFT        28

/* DDR40_PHY_CONTROL_REGS :: STRAP_STATUS :: mhz [27:16] */
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_MHZ_MASK               0x0fff0000
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_MHZ_ALIGN              0
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_MHZ_BITS               12
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_MHZ_SHIFT              16

/* DDR40_PHY_CONTROL_REGS :: STRAP_STATUS :: ad_width [15:14] */
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_AD_WIDTH_MASK          0x0000c000
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_AD_WIDTH_ALIGN         0
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_AD_WIDTH_BITS          2
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_AD_WIDTH_SHIFT         14

/* DDR40_PHY_CONTROL_REGS :: STRAP_STATUS :: dual_rank [13:13] */
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_DUAL_RANK_MASK         0x00002000
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_DUAL_RANK_ALIGN        0
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_DUAL_RANK_BITS         1
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_DUAL_RANK_SHIFT        13

/* DDR40_PHY_CONTROL_REGS :: STRAP_STATUS :: bus16 [12:12] */
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_BUS16_MASK             0x00001000
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_BUS16_ALIGN            0
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_BUS16_BITS             1
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_BUS16_SHIFT            12

/* DDR40_PHY_CONTROL_REGS :: STRAP_STATUS :: bus8 [11:11] */
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_BUS8_MASK              0x00000800
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_BUS8_ALIGN             0
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_BUS8_BITS              1
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_BUS8_SHIFT             11

/* DDR40_PHY_CONTROL_REGS :: STRAP_STATUS :: chip_width [10:10] */
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_CHIP_WIDTH_MASK        0x00000400
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_CHIP_WIDTH_ALIGN       0
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_CHIP_WIDTH_BITS        1
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_CHIP_WIDTH_SHIFT       10

/* DDR40_PHY_CONTROL_REGS :: STRAP_STATUS :: vddq [09:08] */
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_VDDQ_MASK              0x00000300
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_VDDQ_ALIGN             0
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_VDDQ_BITS              2
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_VDDQ_SHIFT             8

/* DDR40_PHY_CONTROL_REGS :: STRAP_STATUS :: chip_size [07:06] */
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_CHIP_SIZE_MASK         0x000000c0
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_CHIP_SIZE_ALIGN        0
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_CHIP_SIZE_BITS         2
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_CHIP_SIZE_SHIFT        6

/* DDR40_PHY_CONTROL_REGS :: STRAP_STATUS :: jedec_type [05:01] */
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_JEDEC_TYPE_MASK        0x0000003e
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_JEDEC_TYPE_ALIGN       0
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_JEDEC_TYPE_BITS        5
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_JEDEC_TYPE_SHIFT       1

/* DDR40_PHY_CONTROL_REGS :: STRAP_STATUS :: straps_valid [00:00] */
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_STRAPS_VALID_MASK      0x00000001
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_STRAPS_VALID_ALIGN     0
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_STRAPS_VALID_BITS      1
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS_STRAPS_VALID_SHIFT     0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: STRAP_STATUS2
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: STRAP_STATUS2 :: reserved0 [31:21] */
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS2_RESERVED0_MASK        0xffe00000
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS2_RESERVED0_ALIGN       0
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS2_RESERVED0_BITS        11
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS2_RESERVED0_SHIFT       21

/* DDR40_PHY_CONTROL_REGS :: STRAP_STATUS2 :: ddr3 [20:20] */
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS2_DDR3_MASK             0x00100000
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS2_DDR3_ALIGN            0
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS2_DDR3_BITS             1
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS2_DDR3_SHIFT            20

/* DDR40_PHY_CONTROL_REGS :: STRAP_STATUS2 :: al [19:17] */
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS2_AL_MASK               0x000e0000
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS2_AL_ALIGN              0
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS2_AL_BITS               3
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS2_AL_SHIFT              17

/* DDR40_PHY_CONTROL_REGS :: STRAP_STATUS2 :: wr [16:12] */
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS2_WR_MASK               0x0001f000
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS2_WR_ALIGN              0
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS2_WR_BITS               5
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS2_WR_SHIFT              12

/* DDR40_PHY_CONTROL_REGS :: STRAP_STATUS2 :: cwl [11:07] */
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS2_CWL_MASK              0x00000f80
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS2_CWL_ALIGN             0
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS2_CWL_BITS              5
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS2_CWL_SHIFT             7

/* DDR40_PHY_CONTROL_REGS :: STRAP_STATUS2 :: cl [06:00] */
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS2_CL_MASK               0x0000007f
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS2_CL_ALIGN              0
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS2_CL_BITS               7
#define DDR40_PHY_CONTROL_REGS_STRAP_STATUS2_CL_SHIFT              0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: DEBUG_FREEZE_ENABLE
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: DEBUG_FREEZE_ENABLE :: reserved0 [31:04] */
#define DDR40_PHY_CONTROL_REGS_DEBUG_FREEZE_ENABLE_RESERVED0_MASK  0xfffffff0
#define DDR40_PHY_CONTROL_REGS_DEBUG_FREEZE_ENABLE_RESERVED0_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_DEBUG_FREEZE_ENABLE_RESERVED0_BITS  28
#define DDR40_PHY_CONTROL_REGS_DEBUG_FREEZE_ENABLE_RESERVED0_SHIFT 4

/* DDR40_PHY_CONTROL_REGS :: DEBUG_FREEZE_ENABLE :: wl1_bl1 [03:03] */
#define DDR40_PHY_CONTROL_REGS_DEBUG_FREEZE_ENABLE_WL1_BL1_MASK    0x00000008
#define DDR40_PHY_CONTROL_REGS_DEBUG_FREEZE_ENABLE_WL1_BL1_ALIGN   0
#define DDR40_PHY_CONTROL_REGS_DEBUG_FREEZE_ENABLE_WL1_BL1_BITS    1
#define DDR40_PHY_CONTROL_REGS_DEBUG_FREEZE_ENABLE_WL1_BL1_SHIFT   3

/* DDR40_PHY_CONTROL_REGS :: DEBUG_FREEZE_ENABLE :: wl1_bl0 [02:02] */
#define DDR40_PHY_CONTROL_REGS_DEBUG_FREEZE_ENABLE_WL1_BL0_MASK    0x00000004
#define DDR40_PHY_CONTROL_REGS_DEBUG_FREEZE_ENABLE_WL1_BL0_ALIGN   0
#define DDR40_PHY_CONTROL_REGS_DEBUG_FREEZE_ENABLE_WL1_BL0_BITS    1
#define DDR40_PHY_CONTROL_REGS_DEBUG_FREEZE_ENABLE_WL1_BL0_SHIFT   2

/* DDR40_PHY_CONTROL_REGS :: DEBUG_FREEZE_ENABLE :: wl0_bl1 [01:01] */
#define DDR40_PHY_CONTROL_REGS_DEBUG_FREEZE_ENABLE_WL0_BL1_MASK    0x00000002
#define DDR40_PHY_CONTROL_REGS_DEBUG_FREEZE_ENABLE_WL0_BL1_ALIGN   0
#define DDR40_PHY_CONTROL_REGS_DEBUG_FREEZE_ENABLE_WL0_BL1_BITS    1
#define DDR40_PHY_CONTROL_REGS_DEBUG_FREEZE_ENABLE_WL0_BL1_SHIFT   1

/* DDR40_PHY_CONTROL_REGS :: DEBUG_FREEZE_ENABLE :: wl0_bl0 [00:00] */
#define DDR40_PHY_CONTROL_REGS_DEBUG_FREEZE_ENABLE_WL0_BL0_MASK    0x00000001
#define DDR40_PHY_CONTROL_REGS_DEBUG_FREEZE_ENABLE_WL0_BL0_ALIGN   0
#define DDR40_PHY_CONTROL_REGS_DEBUG_FREEZE_ENABLE_WL0_BL0_BITS    1
#define DDR40_PHY_CONTROL_REGS_DEBUG_FREEZE_ENABLE_WL0_BL0_SHIFT   0


/****************************************************************************
 * DDR40_PHY_CONTROL_REGS :: DATAPATH_LOOPBACK
 ***************************************************************************/
/* DDR40_PHY_CONTROL_REGS :: DATAPATH_LOOPBACK :: reserved0 [31:03] */
#define DDR40_PHY_CONTROL_REGS_DATAPATH_LOOPBACK_RESERVED0_MASK    0xfffffff8
#define DDR40_PHY_CONTROL_REGS_DATAPATH_LOOPBACK_RESERVED0_ALIGN   0
#define DDR40_PHY_CONTROL_REGS_DATAPATH_LOOPBACK_RESERVED0_BITS    29
#define DDR40_PHY_CONTROL_REGS_DATAPATH_LOOPBACK_RESERVED0_SHIFT   3

/* DDR40_PHY_CONTROL_REGS :: DATAPATH_LOOPBACK :: xor_dm_rd_en [02:02] */
#define DDR40_PHY_CONTROL_REGS_DATAPATH_LOOPBACK_XOR_DM_RD_EN_MASK 0x00000004
#define DDR40_PHY_CONTROL_REGS_DATAPATH_LOOPBACK_XOR_DM_RD_EN_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_DATAPATH_LOOPBACK_XOR_DM_RD_EN_BITS 1
#define DDR40_PHY_CONTROL_REGS_DATAPATH_LOOPBACK_XOR_DM_RD_EN_SHIFT 2

/* DDR40_PHY_CONTROL_REGS :: DATAPATH_LOOPBACK :: use_addr_ctl [01:01] */
#define DDR40_PHY_CONTROL_REGS_DATAPATH_LOOPBACK_USE_ADDR_CTL_MASK 0x00000002
#define DDR40_PHY_CONTROL_REGS_DATAPATH_LOOPBACK_USE_ADDR_CTL_ALIGN 0
#define DDR40_PHY_CONTROL_REGS_DATAPATH_LOOPBACK_USE_ADDR_CTL_BITS 1
#define DDR40_PHY_CONTROL_REGS_DATAPATH_LOOPBACK_USE_ADDR_CTL_SHIFT 1

/* DDR40_PHY_CONTROL_REGS :: DATAPATH_LOOPBACK :: enable [00:00] */
#define DDR40_PHY_CONTROL_REGS_DATAPATH_LOOPBACK_ENABLE_MASK       0x00000001
#define DDR40_PHY_CONTROL_REGS_DATAPATH_LOOPBACK_ENABLE_ALIGN      0
#define DDR40_PHY_CONTROL_REGS_DATAPATH_LOOPBACK_ENABLE_BITS       1
#define DDR40_PHY_CONTROL_REGS_DATAPATH_LOOPBACK_ENABLE_SHIFT      0


/****************************************************************************
 * DDR40_PHY_DDR40_PHY_WORD_LANE_0
 ***************************************************************************/
/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE_RD_EN
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE_RD_EN :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_BUSY_MASK      0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_BUSY_ALIGN     0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_BUSY_BITS      1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_BUSY_SHIFT     31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE_RD_EN :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE_RD_EN :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE_RD_EN :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_OVR_EN_MASK    0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_OVR_EN_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_OVR_EN_BITS    1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_OVR_EN_SHIFT   16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE_RD_EN :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE_RD_EN :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_BYTE_SEL_MASK  0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_BYTE_SEL_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE_RD_EN :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE_RD_EN :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_OVR_STEP_MASK  0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_OVR_STEP_BITS  6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_BUSY_MASK         0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_BUSY_ALIGN        0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_BUSY_BITS         1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_BUSY_SHIFT        31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_RESERVED0_MASK    0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_RESERVED0_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_RESERVED0_BITS    13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_RESERVED0_SHIFT   18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_OVR_FORCE_MASK    0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_OVR_FORCE_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_OVR_FORCE_BITS    1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_OVR_FORCE_SHIFT   17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_OVR_EN_MASK       0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_OVR_EN_ALIGN      0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_OVR_EN_BITS       1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_OVR_EN_SHIFT      16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_RESERVED1_MASK    0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_RESERVED1_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_RESERVED1_BITS    7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_RESERVED1_SHIFT   9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_BYTE_SEL_MASK     0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_BYTE_SEL_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_BYTE_SEL_BITS     1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_BYTE_SEL_SHIFT    8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_RESERVED2_MASK    0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_RESERVED2_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_RESERVED2_BITS    2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_RESERVED2_SHIFT   6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_OVR_STEP_MASK     0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_OVR_STEP_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_OVR_STEP_BITS     6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_OVR_STEP_SHIFT    0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_BUSY_MASK       0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_BUSY_ALIGN      0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_BUSY_BITS       1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_BUSY_SHIFT      31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_RESERVED0_MASK  0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_RESERVED0_BITS  13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_OVR_FORCE_MASK  0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_OVR_FORCE_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_OVR_EN_MASK     0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_OVR_EN_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_OVR_EN_BITS     1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_OVR_EN_SHIFT    16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_RESERVED1_MASK  0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_RESERVED1_BITS  7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_BYTE_SEL_MASK   0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_BYTE_SEL_ALIGN  0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_BYTE_SEL_BITS   1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_BYTE_SEL_SHIFT  8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_RESERVED2_MASK  0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_RESERVED2_BITS  2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_OVR_STEP_MASK   0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_OVR_STEP_ALIGN  0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_OVR_STEP_BITS   6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_OVR_STEP_SHIFT  0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_BUSY_MASK       0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_BUSY_ALIGN      0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_BUSY_BITS       1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_BUSY_SHIFT      31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_RESERVED0_MASK  0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_RESERVED0_BITS  13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_OVR_FORCE_MASK  0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_OVR_FORCE_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_OVR_EN_MASK     0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_OVR_EN_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_OVR_EN_BITS     1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_OVR_EN_SHIFT    16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_RESERVED1_MASK  0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_RESERVED1_BITS  7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_BYTE_SEL_MASK   0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_BYTE_SEL_ALIGN  0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_BYTE_SEL_BITS   1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_BYTE_SEL_SHIFT  8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_RESERVED2_MASK  0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_RESERVED2_BITS  2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_OVR_STEP_MASK   0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_OVR_STEP_ALIGN  0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_OVR_STEP_BITS   6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_OVR_STEP_SHIFT  0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_DM_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_DM_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_BUSY_MASK      0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_BUSY_ALIGN     0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_BUSY_BITS      1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_BUSY_SHIFT     31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_DM_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_DM_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_DM_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_OVR_EN_MASK    0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_OVR_EN_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_OVR_EN_BITS    1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_OVR_EN_SHIFT   16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_DM_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_DM_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_BYTE_SEL_MASK  0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_BYTE_SEL_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_DM_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_DM_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_OVR_STEP_MASK  0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_OVR_STEP_BITS  6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT_RD_EN
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT_RD_EN :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_BUSY_MASK 0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_BUSY_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT_RD_EN :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT_RD_EN :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT_RD_EN :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT_RD_EN :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT_RD_EN :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT_RD_EN :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT_RD_EN :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_BUSY_MASK         0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_BUSY_ALIGN        0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_BUSY_BITS         1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_BUSY_SHIFT        31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_RESERVED0_MASK    0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_RESERVED0_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_RESERVED0_BITS    13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_RESERVED0_SHIFT   18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_OVR_FORCE_MASK    0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_OVR_FORCE_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_OVR_FORCE_BITS    1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_OVR_FORCE_SHIFT   17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_OVR_EN_MASK       0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_OVR_EN_ALIGN      0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_OVR_EN_BITS       1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_OVR_EN_SHIFT      16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_RESERVED1_MASK    0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_RESERVED1_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_RESERVED1_BITS    7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_RESERVED1_SHIFT   9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_BYTE_SEL_MASK     0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_BYTE_SEL_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_BYTE_SEL_BITS     1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_BYTE_SEL_SHIFT    8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_RESERVED2_MASK    0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_RESERVED2_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_RESERVED2_BITS    2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_RESERVED2_SHIFT   6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_OVR_STEP_MASK     0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_OVR_STEP_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_OVR_STEP_BITS     6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_OVR_STEP_SHIFT    0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_BUSY_MASK       0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_BUSY_ALIGN      0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_BUSY_BITS       1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_BUSY_SHIFT      31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_RESERVED0_MASK  0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_RESERVED0_BITS  13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_OVR_FORCE_MASK  0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_OVR_FORCE_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_OVR_EN_MASK     0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_OVR_EN_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_OVR_EN_BITS     1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_OVR_EN_SHIFT    16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_RESERVED1_MASK  0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_RESERVED1_BITS  7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_BYTE_SEL_MASK   0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_BYTE_SEL_ALIGN  0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_BYTE_SEL_BITS   1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_BYTE_SEL_SHIFT  8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_RESERVED2_MASK  0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_RESERVED2_BITS  2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_OVR_STEP_MASK   0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_OVR_STEP_ALIGN  0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_OVR_STEP_BITS   6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_OVR_STEP_SHIFT  0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_BUSY_MASK       0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_BUSY_ALIGN      0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_BUSY_BITS       1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_BUSY_SHIFT      31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_RESERVED0_MASK  0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_RESERVED0_BITS  13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_OVR_FORCE_MASK  0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_OVR_FORCE_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_OVR_EN_MASK     0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_OVR_EN_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_OVR_EN_BITS     1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_OVR_EN_SHIFT    16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_RESERVED1_MASK  0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_RESERVED1_BITS  7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_BYTE_SEL_MASK   0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_BYTE_SEL_ALIGN  0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_BYTE_SEL_BITS   1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_BYTE_SEL_SHIFT  8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_RESERVED2_MASK  0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_RESERVED2_BITS  2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_OVR_STEP_MASK   0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_OVR_STEP_ALIGN  0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_OVR_STEP_BITS   6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_OVR_STEP_SHIFT  0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_DM_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_DM_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_BUSY_MASK      0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_BUSY_ALIGN     0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_BUSY_BITS      1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_BUSY_SHIFT     31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_DM_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_DM_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_DM_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_OVR_EN_MASK    0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_OVR_EN_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_OVR_EN_BITS    1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_OVR_EN_SHIFT   16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_DM_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_DM_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_BYTE_SEL_MASK  0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_BYTE_SEL_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_DM_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_DM_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_OVR_STEP_MASK  0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_OVR_STEP_BITS  6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT_RD_EN
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT_RD_EN :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_BUSY_MASK 0x80000000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_BUSY_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT_RD_EN :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT_RD_EN :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT_RD_EN :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT_RD_EN :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT_RD_EN :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT_RD_EN :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT_RD_EN :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_R_P :: reserved0 [31:17] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_RESERVED0_MASK 0xfffe0000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_RESERVED0_BITS 15
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_RESERVED0_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_R_N :: reserved0 [31:17] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_RESERVED0_MASK 0xfffe0000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_RESERVED0_BITS 15
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_RESERVED0_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_P :: reserved0 [31:25] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_RESERVED0_MASK 0xfe000000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_RESERVED0_BITS 7
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_RESERVED0_SHIFT 25

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_P :: dm_ovr_en [24:24] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_DM_OVR_EN_MASK 0x01000000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_DM_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_DM_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_DM_OVR_EN_SHIFT 24

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_P :: ovr_en [23:16] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_OVR_EN_MASK 0x00ff0000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_OVR_EN_BITS 8
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_N :: reserved0 [31:25] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_RESERVED0_MASK 0xfe000000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_RESERVED0_BITS 7
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_RESERVED0_SHIFT 25

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_N :: dm_ovr_en [24:24] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_DM_OVR_EN_MASK 0x01000000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_DM_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_DM_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_DM_OVR_EN_SHIFT 24

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_N :: ovr_en [23:16] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_OVR_EN_MASK 0x00ff0000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_OVR_EN_BITS 8
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_W :: reserved0 [31:17] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_RESERVED0_MASK 0xfffe0000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_RESERVED0_BITS 15
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_RESERVED0_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_OVR_EN_MASK   0x00010000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_OVR_EN_ALIGN  0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_OVR_EN_BITS   1
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_OVR_EN_SHIFT  16

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_W :: reserved0 [31:25] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_RESERVED0_MASK 0xfe000000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_RESERVED0_BITS 7
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_RESERVED0_SHIFT 25

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_W :: dm_ovr_en [24:24] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_DM_OVR_EN_MASK 0x01000000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_DM_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_DM_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_DM_OVR_EN_SHIFT 24

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_W :: ovr_en [23:16] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_OVR_EN_MASK 0x00ff0000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_OVR_EN_BITS 8
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_R_P :: reserved0 [31:17] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_RESERVED0_MASK 0xfffe0000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_RESERVED0_BITS 15
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_RESERVED0_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_R_N :: reserved0 [31:17] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_RESERVED0_MASK 0xfffe0000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_RESERVED0_BITS 15
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_RESERVED0_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_P :: reserved0 [31:25] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_RESERVED0_MASK 0xfe000000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_RESERVED0_BITS 7
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_RESERVED0_SHIFT 25

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_P :: dm_ovr_en [24:24] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_DM_OVR_EN_MASK 0x01000000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_DM_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_DM_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_DM_OVR_EN_SHIFT 24

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_P :: ovr_en [23:16] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_OVR_EN_MASK 0x00ff0000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_OVR_EN_BITS 8
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_N :: reserved0 [31:25] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_RESERVED0_MASK 0xfe000000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_RESERVED0_BITS 7
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_RESERVED0_SHIFT 25

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_N :: dm_ovr_en [24:24] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_DM_OVR_EN_MASK 0x01000000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_DM_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_DM_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_DM_OVR_EN_SHIFT 24

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_N :: ovr_en [23:16] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_OVR_EN_MASK 0x00ff0000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_OVR_EN_BITS 8
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_W :: reserved0 [31:17] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_RESERVED0_MASK 0xfffe0000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_RESERVED0_BITS 15
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_RESERVED0_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_OVR_EN_MASK   0x00010000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_OVR_EN_ALIGN  0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_OVR_EN_BITS   1
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_OVR_EN_SHIFT  16

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_W :: reserved0 [31:25] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_RESERVED0_MASK 0xfe000000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_RESERVED0_BITS 7
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_RESERVED0_SHIFT 25

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_W :: dm_ovr_en [24:24] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_DM_OVR_EN_MASK 0x01000000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_DM_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_DM_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_DM_OVR_EN_SHIFT 24

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_W :: ovr_en [23:16] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_OVR_EN_MASK 0x00ff0000
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_OVR_EN_BITS 8
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: READ_DATA_DLY
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: READ_DATA_DLY :: reserved0 [31:03] */
#define DDR40_PHY_WORD_LANE_0_READ_DATA_DLY_RESERVED0_MASK         0xfffffff8
#define DDR40_PHY_WORD_LANE_0_READ_DATA_DLY_RESERVED0_ALIGN        0
#define DDR40_PHY_WORD_LANE_0_READ_DATA_DLY_RESERVED0_BITS         29
#define DDR40_PHY_WORD_LANE_0_READ_DATA_DLY_RESERVED0_SHIFT        3

/* DDR40_PHY_WORD_LANE_0 :: READ_DATA_DLY :: rd_data_dly [02:00] */
#define DDR40_PHY_WORD_LANE_0_READ_DATA_DLY_RD_DATA_DLY_MASK       0x00000007
#define DDR40_PHY_WORD_LANE_0_READ_DATA_DLY_RD_DATA_DLY_ALIGN      0
#define DDR40_PHY_WORD_LANE_0_READ_DATA_DLY_RD_DATA_DLY_BITS       3
#define DDR40_PHY_WORD_LANE_0_READ_DATA_DLY_RD_DATA_DLY_SHIFT      0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: READ_CONTROL
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: READ_CONTROL :: reserved0 [31:03] */
#define DDR40_PHY_WORD_LANE_0_READ_CONTROL_RESERVED0_MASK          0xfffffff8
#define DDR40_PHY_WORD_LANE_0_READ_CONTROL_RESERVED0_ALIGN         0
#define DDR40_PHY_WORD_LANE_0_READ_CONTROL_RESERVED0_BITS          29
#define DDR40_PHY_WORD_LANE_0_READ_CONTROL_RESERVED0_SHIFT         3

/* DDR40_PHY_WORD_LANE_0 :: READ_CONTROL :: dq_odt_enable [02:02] */
#define DDR40_PHY_WORD_LANE_0_READ_CONTROL_DQ_ODT_ENABLE_MASK      0x00000004
#define DDR40_PHY_WORD_LANE_0_READ_CONTROL_DQ_ODT_ENABLE_ALIGN     0
#define DDR40_PHY_WORD_LANE_0_READ_CONTROL_DQ_ODT_ENABLE_BITS      1
#define DDR40_PHY_WORD_LANE_0_READ_CONTROL_DQ_ODT_ENABLE_SHIFT     2

/* DDR40_PHY_WORD_LANE_0 :: READ_CONTROL :: dq_odt_te_adj [01:01] */
#define DDR40_PHY_WORD_LANE_0_READ_CONTROL_DQ_ODT_TE_ADJ_MASK      0x00000002
#define DDR40_PHY_WORD_LANE_0_READ_CONTROL_DQ_ODT_TE_ADJ_ALIGN     0
#define DDR40_PHY_WORD_LANE_0_READ_CONTROL_DQ_ODT_TE_ADJ_BITS      1
#define DDR40_PHY_WORD_LANE_0_READ_CONTROL_DQ_ODT_TE_ADJ_SHIFT     1

/* DDR40_PHY_WORD_LANE_0 :: READ_CONTROL :: dq_odt_le_adj [00:00] */
#define DDR40_PHY_WORD_LANE_0_READ_CONTROL_DQ_ODT_LE_ADJ_MASK      0x00000001
#define DDR40_PHY_WORD_LANE_0_READ_CONTROL_DQ_ODT_LE_ADJ_ALIGN     0
#define DDR40_PHY_WORD_LANE_0_READ_CONTROL_DQ_ODT_LE_ADJ_BITS      1
#define DDR40_PHY_WORD_LANE_0_READ_CONTROL_DQ_ODT_LE_ADJ_SHIFT     0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL0_0
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL0_0 :: reserved0 [31:16] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_0_RESERVED0_MASK  0xffff0000
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_0_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_0_RESERVED0_BITS  16
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_0_RESERVED0_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL0_0 :: data_p [15:08] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_0_DATA_P_MASK     0x0000ff00
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_0_DATA_P_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_0_DATA_P_BITS     8
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_0_DATA_P_SHIFT    8

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL0_0 :: data_n [07:00] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_0_DATA_N_MASK     0x000000ff
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_0_DATA_N_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_0_DATA_N_BITS     8
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_0_DATA_N_SHIFT    0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL0_1
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL0_1 :: reserved0 [31:16] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_1_RESERVED0_MASK  0xffff0000
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_1_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_1_RESERVED0_BITS  16
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_1_RESERVED0_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL0_1 :: data_p [15:08] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_1_DATA_P_MASK     0x0000ff00
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_1_DATA_P_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_1_DATA_P_BITS     8
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_1_DATA_P_SHIFT    8

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL0_1 :: data_n [07:00] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_1_DATA_N_MASK     0x000000ff
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_1_DATA_N_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_1_DATA_N_BITS     8
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_1_DATA_N_SHIFT    0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL0_2
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL0_2 :: reserved0 [31:16] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_2_RESERVED0_MASK  0xffff0000
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_2_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_2_RESERVED0_BITS  16
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_2_RESERVED0_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL0_2 :: data_p [15:08] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_2_DATA_P_MASK     0x0000ff00
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_2_DATA_P_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_2_DATA_P_BITS     8
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_2_DATA_P_SHIFT    8

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL0_2 :: data_n [07:00] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_2_DATA_N_MASK     0x000000ff
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_2_DATA_N_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_2_DATA_N_BITS     8
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_2_DATA_N_SHIFT    0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL0_3
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL0_3 :: reserved0 [31:16] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_3_RESERVED0_MASK  0xffff0000
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_3_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_3_RESERVED0_BITS  16
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_3_RESERVED0_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL0_3 :: data_p [15:08] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_3_DATA_P_MASK     0x0000ff00
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_3_DATA_P_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_3_DATA_P_BITS     8
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_3_DATA_P_SHIFT    8

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL0_3 :: data_n [07:00] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_3_DATA_N_MASK     0x000000ff
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_3_DATA_N_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_3_DATA_N_BITS     8
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_3_DATA_N_SHIFT    0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL1_0
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL1_0 :: reserved0 [31:16] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_0_RESERVED0_MASK  0xffff0000
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_0_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_0_RESERVED0_BITS  16
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_0_RESERVED0_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL1_0 :: data_p [15:08] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_0_DATA_P_MASK     0x0000ff00
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_0_DATA_P_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_0_DATA_P_BITS     8
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_0_DATA_P_SHIFT    8

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL1_0 :: data_n [07:00] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_0_DATA_N_MASK     0x000000ff
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_0_DATA_N_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_0_DATA_N_BITS     8
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_0_DATA_N_SHIFT    0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL1_1
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL1_1 :: reserved0 [31:16] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_1_RESERVED0_MASK  0xffff0000
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_1_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_1_RESERVED0_BITS  16
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_1_RESERVED0_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL1_1 :: data_p [15:08] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_1_DATA_P_MASK     0x0000ff00
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_1_DATA_P_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_1_DATA_P_BITS     8
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_1_DATA_P_SHIFT    8

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL1_1 :: data_n [07:00] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_1_DATA_N_MASK     0x000000ff
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_1_DATA_N_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_1_DATA_N_BITS     8
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_1_DATA_N_SHIFT    0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL1_2
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL1_2 :: reserved0 [31:16] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_2_RESERVED0_MASK  0xffff0000
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_2_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_2_RESERVED0_BITS  16
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_2_RESERVED0_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL1_2 :: data_p [15:08] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_2_DATA_P_MASK     0x0000ff00
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_2_DATA_P_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_2_DATA_P_BITS     8
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_2_DATA_P_SHIFT    8

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL1_2 :: data_n [07:00] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_2_DATA_N_MASK     0x000000ff
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_2_DATA_N_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_2_DATA_N_BITS     8
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_2_DATA_N_SHIFT    0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL1_3
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL1_3 :: reserved0 [31:16] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_3_RESERVED0_MASK  0xffff0000
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_3_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_3_RESERVED0_BITS  16
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_3_RESERVED0_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL1_3 :: data_p [15:08] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_3_DATA_P_MASK     0x0000ff00
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_3_DATA_P_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_3_DATA_P_BITS     8
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_3_DATA_P_SHIFT    8

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL1_3 :: data_n [07:00] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_3_DATA_N_MASK     0x000000ff
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_3_DATA_N_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_3_DATA_N_BITS     8
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_3_DATA_N_SHIFT    0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: READ_FIFO_STATUS
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_STATUS :: reserved0 [31:08] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_STATUS_RESERVED0_MASK      0xffffff00
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_STATUS_RESERVED0_ALIGN     0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_STATUS_RESERVED0_BITS      24
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_STATUS_RESERVED0_SHIFT     8

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_STATUS :: status1 [07:04] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_STATUS_STATUS1_MASK        0x000000f0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_STATUS_STATUS1_ALIGN       0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_STATUS_STATUS1_BITS        4
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_STATUS_STATUS1_SHIFT       4

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_STATUS :: status0 [03:00] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_STATUS_STATUS0_MASK        0x0000000f
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_STATUS_STATUS0_ALIGN       0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_STATUS_STATUS0_BITS        4
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_STATUS_STATUS0_SHIFT       0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: READ_FIFO_CLEAR
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_CLEAR :: reserved0 [31:01] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_CLEAR_RESERVED0_MASK       0xfffffffe
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_CLEAR_RESERVED0_ALIGN      0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_CLEAR_RESERVED0_BITS       31
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_CLEAR_RESERVED0_SHIFT      1

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_CLEAR :: clear [00:00] */
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_CLEAR_CLEAR_MASK           0x00000001
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_CLEAR_CLEAR_ALIGN          0
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_CLEAR_CLEAR_BITS           1
#define DDR40_PHY_WORD_LANE_0_READ_FIFO_CLEAR_CLEAR_SHIFT          0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: idle [31:31] */
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_IDLE_MASK           0x80000000
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_IDLE_ALIGN          0
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_IDLE_BITS           1
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_IDLE_SHIFT          31

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: reserved0 [30:24] */
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_RESERVED0_MASK      0x7f000000
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_RESERVED0_ALIGN     0
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_RESERVED0_BITS      7
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_RESERVED0_SHIFT     24

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: auto_dq_rxenb_mode [23:22] */
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_AUTO_DQ_RXENB_MODE_MASK 0x00c00000
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_AUTO_DQ_RXENB_MODE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_AUTO_DQ_RXENB_MODE_BITS 2
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_AUTO_DQ_RXENB_MODE_SHIFT 22

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: auto_dq_iddq_mode [21:20] */
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_AUTO_DQ_IDDQ_MODE_MASK 0x00300000
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_AUTO_DQ_IDDQ_MODE_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_AUTO_DQ_IDDQ_MODE_BITS 2
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_AUTO_DQ_IDDQ_MODE_SHIFT 20

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: dq_rxenb [19:19] */
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQ_RXENB_MASK       0x00080000
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQ_RXENB_ALIGN      0
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQ_RXENB_BITS       1
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQ_RXENB_SHIFT      19

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: dq_iddq [18:18] */
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQ_IDDQ_MASK        0x00040000
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQ_IDDQ_ALIGN       0
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQ_IDDQ_BITS        1
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQ_IDDQ_SHIFT       18

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: dq_reb [17:17] */
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQ_REB_MASK         0x00020000
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQ_REB_ALIGN        0
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQ_REB_BITS         1
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQ_REB_SHIFT        17

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: dq_oeb [16:16] */
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQ_OEB_MASK         0x00010000
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQ_OEB_ALIGN        0
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQ_OEB_BITS         1
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQ_OEB_SHIFT        16

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: read_enb_rxenb [15:15] */
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_READ_ENB_RXENB_MASK 0x00008000
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_READ_ENB_RXENB_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_READ_ENB_RXENB_BITS 1
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_READ_ENB_RXENB_SHIFT 15

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: read_enb_iddq [14:14] */
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_READ_ENB_IDDQ_MASK  0x00004000
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_READ_ENB_IDDQ_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_READ_ENB_IDDQ_BITS  1
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_READ_ENB_IDDQ_SHIFT 14

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: read_enb_reb [13:13] */
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_READ_ENB_REB_MASK   0x00002000
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_READ_ENB_REB_ALIGN  0
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_READ_ENB_REB_BITS   1
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_READ_ENB_REB_SHIFT  13

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: read_enb_oeb [12:12] */
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_READ_ENB_OEB_MASK   0x00001000
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_READ_ENB_OEB_ALIGN  0
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_READ_ENB_OEB_BITS   1
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_READ_ENB_OEB_SHIFT  12

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: dqs_rxenb [11:11] */
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQS_RXENB_MASK      0x00000800
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQS_RXENB_ALIGN     0
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQS_RXENB_BITS      1
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQS_RXENB_SHIFT     11

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: dqs_iddq [10:10] */
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQS_IDDQ_MASK       0x00000400
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQS_IDDQ_ALIGN      0
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQS_IDDQ_BITS       1
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQS_IDDQ_SHIFT      10

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: dqs_reb [09:09] */
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQS_REB_MASK        0x00000200
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQS_REB_ALIGN       0
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQS_REB_BITS        1
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQS_REB_SHIFT       9

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: dqs_oeb [08:08] */
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQS_OEB_MASK        0x00000100
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQS_OEB_ALIGN       0
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQS_OEB_BITS        1
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_DQS_OEB_SHIFT       8

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: clk1_rxenb [07:07] */
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK1_RXENB_MASK     0x00000080
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK1_RXENB_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK1_RXENB_BITS     1
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK1_RXENB_SHIFT    7

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: clk1_iddq [06:06] */
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK1_IDDQ_MASK      0x00000040
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK1_IDDQ_ALIGN     0
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK1_IDDQ_BITS      1
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK1_IDDQ_SHIFT     6

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: clk1_reb [05:05] */
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK1_REB_MASK       0x00000020
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK1_REB_ALIGN      0
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK1_REB_BITS       1
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK1_REB_SHIFT      5

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: clk1_oeb [04:04] */
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK1_OEB_MASK       0x00000010
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK1_OEB_ALIGN      0
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK1_OEB_BITS       1
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK1_OEB_SHIFT      4

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: clk0_rxenb [03:03] */
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK0_RXENB_MASK     0x00000008
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK0_RXENB_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK0_RXENB_BITS     1
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK0_RXENB_SHIFT    3

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: clk0_iddq [02:02] */
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK0_IDDQ_MASK      0x00000004
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK0_IDDQ_ALIGN     0
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK0_IDDQ_BITS      1
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK0_IDDQ_SHIFT     2

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: clk0_reb [01:01] */
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK0_REB_MASK       0x00000002
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK0_REB_ALIGN      0
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK0_REB_BITS       1
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK0_REB_SHIFT      1

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: clk0_oeb [00:00] */
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK0_OEB_MASK       0x00000001
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK0_OEB_ALIGN      0
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK0_OEB_BITS       1
#define DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_CLK0_OEB_SHIFT      0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: DRIVE_PAD_CTL
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: DRIVE_PAD_CTL :: reserved0 [31:12] */
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_RESERVED0_MASK         0xfffff000
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_RESERVED0_ALIGN        0
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_RESERVED0_BITS         20
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_RESERVED0_SHIFT        12

/* DDR40_PHY_WORD_LANE_0 :: DRIVE_PAD_CTL :: no_dqs_rd [11:11] */
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_NO_DQS_RD_MASK         0x00000800
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_NO_DQS_RD_ALIGN        0
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_NO_DQS_RD_BITS         1
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_NO_DQS_RD_SHIFT        11

/* DDR40_PHY_WORD_LANE_0 :: DRIVE_PAD_CTL :: dqs_always_on [10:10] */
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_DQS_ALWAYS_ON_MASK     0x00000400
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_DQS_ALWAYS_ON_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_DQS_ALWAYS_ON_BITS     1
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_DQS_ALWAYS_ON_SHIFT    10

/* DDR40_PHY_WORD_LANE_0 :: DRIVE_PAD_CTL :: dqs_tx_dis [09:09] */
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_DQS_TX_DIS_MASK        0x00000200
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_DQS_TX_DIS_ALIGN       0
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_DQS_TX_DIS_BITS        1
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_DQS_TX_DIS_SHIFT       9

/* DDR40_PHY_WORD_LANE_0 :: DRIVE_PAD_CTL :: half_strength_ck [08:08] */
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_HALF_STRENGTH_CK_MASK  0x00000100
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_HALF_STRENGTH_CK_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_HALF_STRENGTH_CK_BITS  1
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_HALF_STRENGTH_CK_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: DRIVE_PAD_CTL :: half_strength [07:07] */
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_HALF_STRENGTH_MASK     0x00000080
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_HALF_STRENGTH_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_HALF_STRENGTH_BITS     1
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_HALF_STRENGTH_SHIFT    7

/* DDR40_PHY_WORD_LANE_0 :: DRIVE_PAD_CTL :: rdqs_en [06:06] */
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_RDQS_EN_MASK           0x00000040
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_RDQS_EN_ALIGN          0
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_RDQS_EN_BITS           1
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_RDQS_EN_SHIFT          6

/* DDR40_PHY_WORD_LANE_0 :: DRIVE_PAD_CTL :: gddr_symmetry [05:05] */
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_GDDR_SYMMETRY_MASK     0x00000020
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_GDDR_SYMMETRY_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_GDDR_SYMMETRY_BITS     1
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_GDDR_SYMMETRY_SHIFT    5

/* DDR40_PHY_WORD_LANE_0 :: DRIVE_PAD_CTL :: vddo_volts [04:03] */
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_VDDO_VOLTS_MASK        0x00000018
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_VDDO_VOLTS_ALIGN       0
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_VDDO_VOLTS_BITS        2
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_VDDO_VOLTS_SHIFT       3

/* DDR40_PHY_WORD_LANE_0 :: DRIVE_PAD_CTL :: rt60b [02:02] */
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_RT60B_MASK             0x00000004
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_RT60B_ALIGN            0
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_RT60B_BITS             1
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_RT60B_SHIFT            2

/* DDR40_PHY_WORD_LANE_0 :: DRIVE_PAD_CTL :: rt120b_g [01:01] */
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_RT120B_G_MASK          0x00000002
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_RT120B_G_ALIGN         0
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_RT120B_G_BITS          1
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_RT120B_G_SHIFT         1

/* DDR40_PHY_WORD_LANE_0 :: DRIVE_PAD_CTL :: g_ddr [00:00] */
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_G_DDR_MASK             0x00000001
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_G_DDR_ALIGN            0
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_G_DDR_BITS             1
#define DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_G_DDR_SHIFT            0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: CLOCK_PAD_DISABLE
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: CLOCK_PAD_DISABLE :: reserved0 [31:03] */
#define DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_RESERVED0_MASK     0xfffffff8
#define DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_RESERVED0_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_RESERVED0_BITS     29
#define DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_RESERVED0_SHIFT    3

/* DDR40_PHY_WORD_LANE_0 :: CLOCK_PAD_DISABLE :: dm_pad_dis [02:02] */
#define DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_DM_PAD_DIS_MASK    0x00000004
#define DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_DM_PAD_DIS_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_DM_PAD_DIS_BITS    1
#define DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_DM_PAD_DIS_SHIFT   2

/* DDR40_PHY_WORD_LANE_0 :: CLOCK_PAD_DISABLE :: clk1_pad_dis [01:01] */
#define DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_CLK1_PAD_DIS_MASK  0x00000002
#define DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_CLK1_PAD_DIS_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_CLK1_PAD_DIS_BITS  1
#define DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_CLK1_PAD_DIS_SHIFT 1

/* DDR40_PHY_WORD_LANE_0 :: CLOCK_PAD_DISABLE :: clk0_pad_dis [00:00] */
#define DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_CLK0_PAD_DIS_MASK  0x00000001
#define DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_CLK0_PAD_DIS_ALIGN 0
#define DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_CLK0_PAD_DIS_BITS  1
#define DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_CLK0_PAD_DIS_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: WR_PREAMBLE_MODE
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: WR_PREAMBLE_MODE :: reserved0 [31:02] */
#define DDR40_PHY_WORD_LANE_0_WR_PREAMBLE_MODE_RESERVED0_MASK      0xfffffffc
#define DDR40_PHY_WORD_LANE_0_WR_PREAMBLE_MODE_RESERVED0_ALIGN     0
#define DDR40_PHY_WORD_LANE_0_WR_PREAMBLE_MODE_RESERVED0_BITS      30
#define DDR40_PHY_WORD_LANE_0_WR_PREAMBLE_MODE_RESERVED0_SHIFT     2

/* DDR40_PHY_WORD_LANE_0 :: WR_PREAMBLE_MODE :: long [01:01] */
#define DDR40_PHY_WORD_LANE_0_WR_PREAMBLE_MODE_LONG_MASK           0x00000002
#define DDR40_PHY_WORD_LANE_0_WR_PREAMBLE_MODE_LONG_ALIGN          0
#define DDR40_PHY_WORD_LANE_0_WR_PREAMBLE_MODE_LONG_BITS           1
#define DDR40_PHY_WORD_LANE_0_WR_PREAMBLE_MODE_LONG_SHIFT          1

/* DDR40_PHY_WORD_LANE_0 :: WR_PREAMBLE_MODE :: mode [00:00] */
#define DDR40_PHY_WORD_LANE_0_WR_PREAMBLE_MODE_MODE_MASK           0x00000001
#define DDR40_PHY_WORD_LANE_0_WR_PREAMBLE_MODE_MODE_ALIGN          0
#define DDR40_PHY_WORD_LANE_0_WR_PREAMBLE_MODE_MODE_BITS           1
#define DDR40_PHY_WORD_LANE_0_WR_PREAMBLE_MODE_MODE_SHIFT          0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_0 :: PHYBIST_VDL_ADJ
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: PHYBIST_VDL_ADJ :: reserved0 [31:29] */
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_RESERVED0_MASK       0xe0000000
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_RESERVED0_ALIGN      0
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_RESERVED0_BITS       3
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_RESERVED0_SHIFT      29

/* DDR40_PHY_WORD_LANE_0 :: PHYBIST_VDL_ADJ :: dq1_vdl_adj [28:24] */
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_DQ1_VDL_ADJ_MASK     0x1f000000
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_DQ1_VDL_ADJ_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_DQ1_VDL_ADJ_BITS     5
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_DQ1_VDL_ADJ_SHIFT    24

/* DDR40_PHY_WORD_LANE_0 :: PHYBIST_VDL_ADJ :: reserved1 [23:21] */
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_RESERVED1_MASK       0x00e00000
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_RESERVED1_ALIGN      0
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_RESERVED1_BITS       3
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_RESERVED1_SHIFT      21

/* DDR40_PHY_WORD_LANE_0 :: PHYBIST_VDL_ADJ :: dq0_vdl_adj [20:16] */
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_DQ0_VDL_ADJ_MASK     0x001f0000
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_DQ0_VDL_ADJ_ALIGN    0
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_DQ0_VDL_ADJ_BITS     5
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_DQ0_VDL_ADJ_SHIFT    16

/* DDR40_PHY_WORD_LANE_0 :: PHYBIST_VDL_ADJ :: reserved2 [15:13] */
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_RESERVED2_MASK       0x0000e000
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_RESERVED2_ALIGN      0
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_RESERVED2_BITS       3
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_RESERVED2_SHIFT      13

/* DDR40_PHY_WORD_LANE_0 :: PHYBIST_VDL_ADJ :: dqs1_vdl_adj [12:08] */
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_DQS1_VDL_ADJ_MASK    0x00001f00
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_DQS1_VDL_ADJ_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_DQS1_VDL_ADJ_BITS    5
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_DQS1_VDL_ADJ_SHIFT   8

/* DDR40_PHY_WORD_LANE_0 :: PHYBIST_VDL_ADJ :: reserved3 [07:05] */
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_RESERVED3_MASK       0x000000e0
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_RESERVED3_ALIGN      0
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_RESERVED3_BITS       3
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_RESERVED3_SHIFT      5

/* DDR40_PHY_WORD_LANE_0 :: PHYBIST_VDL_ADJ :: dqs0_vdl_adj [04:00] */
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_DQS0_VDL_ADJ_MASK    0x0000001f
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_DQS0_VDL_ADJ_ALIGN   0
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_DQS0_VDL_ADJ_BITS    5
#define DDR40_PHY_WORD_LANE_0_PHYBIST_VDL_ADJ_DQS0_VDL_ADJ_SHIFT   0


/****************************************************************************
 * DDR40_PHY_DDR40_PHY_WORD_LANE_1
 ***************************************************************************/
/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE_RD_EN
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE_RD_EN :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_BUSY_MASK      0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_BUSY_ALIGN     0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_BUSY_BITS      1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_BUSY_SHIFT     31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE_RD_EN :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE_RD_EN :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE_RD_EN :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_OVR_EN_MASK    0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_OVR_EN_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_OVR_EN_BITS    1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_OVR_EN_SHIFT   16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE_RD_EN :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE_RD_EN :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_BYTE_SEL_MASK  0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_BYTE_SEL_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE_RD_EN :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE_RD_EN :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_OVR_STEP_MASK  0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_OVR_STEP_BITS  6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE_RD_EN_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_BUSY_MASK         0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_BUSY_ALIGN        0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_BUSY_BITS         1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_BUSY_SHIFT        31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_RESERVED0_MASK    0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_RESERVED0_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_RESERVED0_BITS    13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_RESERVED0_SHIFT   18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_OVR_FORCE_MASK    0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_OVR_FORCE_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_OVR_FORCE_BITS    1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_OVR_FORCE_SHIFT   17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_OVR_EN_MASK       0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_OVR_EN_ALIGN      0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_OVR_EN_BITS       1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_OVR_EN_SHIFT      16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_RESERVED1_MASK    0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_RESERVED1_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_RESERVED1_BITS    7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_RESERVED1_SHIFT   9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_BYTE_SEL_MASK     0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_BYTE_SEL_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_BYTE_SEL_BITS     1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_BYTE_SEL_SHIFT    8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_RESERVED2_MASK    0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_RESERVED2_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_RESERVED2_BITS    2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_RESERVED2_SHIFT   6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_OVR_STEP_MASK     0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_OVR_STEP_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_OVR_STEP_BITS     6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_W_OVR_STEP_SHIFT    0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_BUSY_MASK       0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_BUSY_ALIGN      0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_BUSY_BITS       1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_BUSY_SHIFT      31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_RESERVED0_MASK  0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_RESERVED0_BITS  13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_OVR_FORCE_MASK  0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_OVR_FORCE_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_OVR_EN_MASK     0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_OVR_EN_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_OVR_EN_BITS     1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_OVR_EN_SHIFT    16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_RESERVED1_MASK  0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_RESERVED1_BITS  7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_BYTE_SEL_MASK   0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_BYTE_SEL_ALIGN  0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_BYTE_SEL_BITS   1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_BYTE_SEL_SHIFT  8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_RESERVED2_MASK  0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_RESERVED2_BITS  2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_OVR_STEP_MASK   0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_OVR_STEP_ALIGN  0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_OVR_STEP_BITS   6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_P_OVR_STEP_SHIFT  0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_BUSY_MASK       0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_BUSY_ALIGN      0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_BUSY_BITS       1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_BUSY_SHIFT      31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_RESERVED0_MASK  0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_RESERVED0_BITS  13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_OVR_FORCE_MASK  0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_OVR_FORCE_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_OVR_EN_MASK     0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_OVR_EN_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_OVR_EN_BITS     1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_OVR_EN_SHIFT    16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_RESERVED1_MASK  0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_RESERVED1_BITS  7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_BYTE_SEL_MASK   0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_BYTE_SEL_ALIGN  0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_BYTE_SEL_BITS   1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_BYTE_SEL_SHIFT  8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_RESERVED2_MASK  0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_RESERVED2_BITS  2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_OVR_STEP_MASK   0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_OVR_STEP_ALIGN  0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_OVR_STEP_BITS   6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_R_N_OVR_STEP_SHIFT  0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT0_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT0_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT0_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT0_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT0_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT0_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT0_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT0_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT0_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT1_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT1_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT1_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT1_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT1_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT1_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT1_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT1_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT1_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT2_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT2_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT2_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT2_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT2_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT2_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT2_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT2_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT2_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT3_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT3_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT3_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT3_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT3_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT3_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT3_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT3_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT3_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT4_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT4_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT4_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT4_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT4_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT4_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT4_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT4_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT4_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT5_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT5_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT5_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT5_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT5_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT5_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT5_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT5_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT5_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT6_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT6_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT6_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT6_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT6_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT6_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT6_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT6_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT6_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT7_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT7_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT7_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT7_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT7_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT7_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT7_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT7_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT7_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_DM_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_DM_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_BUSY_MASK      0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_BUSY_ALIGN     0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_BUSY_BITS      1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_BUSY_SHIFT     31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_DM_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_DM_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_DM_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_OVR_EN_MASK    0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_OVR_EN_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_OVR_EN_BITS    1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_OVR_EN_SHIFT   16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_DM_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_DM_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_BYTE_SEL_MASK  0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_BYTE_SEL_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_DM_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_DM_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_OVR_STEP_MASK  0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_OVR_STEP_BITS  6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_DM_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT0_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT0_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT0_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT0_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT0_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT0_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT0_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT0_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT0_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT0_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT0_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT0_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT0_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT0_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT0_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT0_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT0_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT0_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT0_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT1_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT1_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT1_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT1_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT1_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT1_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT1_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT1_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT1_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT1_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT1_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT1_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT1_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT1_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT1_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT1_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT1_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT1_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT1_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT2_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT2_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT2_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT2_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT2_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT2_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT2_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT2_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT2_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT2_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT2_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT2_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT2_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT2_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT2_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT2_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT2_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT2_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT2_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT3_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT3_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT3_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT3_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT3_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT3_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT3_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT3_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT3_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT3_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT3_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT3_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT3_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT3_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT3_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT3_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT3_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT3_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT3_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT4_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT4_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT4_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT4_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT4_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT4_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT4_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT4_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT4_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT4_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT4_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT4_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT4_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT4_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT4_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT4_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT4_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT4_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT4_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT5_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT5_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT5_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT5_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT5_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT5_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT5_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT5_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT5_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT5_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT5_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT5_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT5_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT5_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT5_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT5_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT5_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT5_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT5_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT6_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT6_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT6_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT6_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT6_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT6_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT6_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT6_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT6_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT6_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT6_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT6_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT6_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT6_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT6_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT6_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT6_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT6_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT6_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT7_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT7_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT7_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT7_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT7_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT7_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT7_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT7_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT7_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT7_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT7_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT7_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT7_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT7_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT7_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT7_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT7_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT7_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT7_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT_RD_EN
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT_RD_EN :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_BUSY_MASK 0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_BUSY_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT_RD_EN :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT_RD_EN :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT_RD_EN :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT_RD_EN :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT_RD_EN :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT_RD_EN :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE0_BIT_RD_EN :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE0_BIT_RD_EN_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_BUSY_MASK         0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_BUSY_ALIGN        0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_BUSY_BITS         1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_BUSY_SHIFT        31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_RESERVED0_MASK    0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_RESERVED0_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_RESERVED0_BITS    13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_RESERVED0_SHIFT   18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_OVR_FORCE_MASK    0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_OVR_FORCE_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_OVR_FORCE_BITS    1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_OVR_FORCE_SHIFT   17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_OVR_EN_MASK       0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_OVR_EN_ALIGN      0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_OVR_EN_BITS       1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_OVR_EN_SHIFT      16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_RESERVED1_MASK    0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_RESERVED1_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_RESERVED1_BITS    7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_RESERVED1_SHIFT   9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_BYTE_SEL_MASK     0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_BYTE_SEL_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_BYTE_SEL_BITS     1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_BYTE_SEL_SHIFT    8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_RESERVED2_MASK    0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_RESERVED2_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_RESERVED2_BITS    2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_RESERVED2_SHIFT   6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_OVR_STEP_MASK     0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_OVR_STEP_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_OVR_STEP_BITS     6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_W_OVR_STEP_SHIFT    0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_BUSY_MASK       0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_BUSY_ALIGN      0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_BUSY_BITS       1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_BUSY_SHIFT      31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_RESERVED0_MASK  0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_RESERVED0_BITS  13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_OVR_FORCE_MASK  0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_OVR_FORCE_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_OVR_EN_MASK     0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_OVR_EN_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_OVR_EN_BITS     1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_OVR_EN_SHIFT    16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_RESERVED1_MASK  0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_RESERVED1_BITS  7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_BYTE_SEL_MASK   0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_BYTE_SEL_ALIGN  0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_BYTE_SEL_BITS   1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_BYTE_SEL_SHIFT  8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_RESERVED2_MASK  0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_RESERVED2_BITS  2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_OVR_STEP_MASK   0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_OVR_STEP_ALIGN  0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_OVR_STEP_BITS   6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_P_OVR_STEP_SHIFT  0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_BUSY_MASK       0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_BUSY_ALIGN      0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_BUSY_BITS       1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_BUSY_SHIFT      31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_RESERVED0_MASK  0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_RESERVED0_BITS  13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_OVR_FORCE_MASK  0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_OVR_FORCE_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_OVR_EN_MASK     0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_OVR_EN_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_OVR_EN_BITS     1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_OVR_EN_SHIFT    16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_RESERVED1_MASK  0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_RESERVED1_BITS  7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_BYTE_SEL_MASK   0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_BYTE_SEL_ALIGN  0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_BYTE_SEL_BITS   1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_BYTE_SEL_SHIFT  8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_RESERVED2_MASK  0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_RESERVED2_BITS  2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_OVR_STEP_MASK   0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_OVR_STEP_ALIGN  0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_OVR_STEP_BITS   6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_R_N_OVR_STEP_SHIFT  0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT0_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT0_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT0_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT0_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT0_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT0_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT0_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT0_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT0_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT1_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT1_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT1_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT1_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT1_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT1_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT1_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT1_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT1_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT2_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT2_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT2_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT2_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT2_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT2_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT2_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT2_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT2_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT3_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT3_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT3_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT3_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT3_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT3_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT3_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT3_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT3_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT4_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT4_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT4_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT4_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT4_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT4_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT4_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT4_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT4_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT5_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT5_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT5_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT5_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT5_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT5_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT5_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT5_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT5_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT6_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT6_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT6_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT6_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT6_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT6_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT6_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT6_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT6_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT7_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT7_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_BUSY_MASK    0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_BUSY_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_BUSY_BITS    1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_BUSY_SHIFT   31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT7_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT7_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT7_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_OVR_EN_MASK  0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_OVR_EN_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT7_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT7_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT7_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT7_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_DM_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_DM_W :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_BUSY_MASK      0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_BUSY_ALIGN     0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_BUSY_BITS      1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_BUSY_SHIFT     31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_DM_W :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_DM_W :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_DM_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_OVR_EN_MASK    0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_OVR_EN_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_OVR_EN_BITS    1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_OVR_EN_SHIFT   16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_DM_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_DM_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_BYTE_SEL_MASK  0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_BYTE_SEL_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_DM_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_DM_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_OVR_STEP_MASK  0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_OVR_STEP_BITS  6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_DM_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT0_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT0_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT0_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT0_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT0_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT0_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT0_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT0_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT0_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT0_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT0_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT0_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT0_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT0_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT0_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT0_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT0_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT0_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT0_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT1_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT1_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT1_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT1_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT1_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT1_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT1_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT1_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT1_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT1_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT1_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT1_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT1_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT1_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT1_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT1_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT1_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT1_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT1_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT2_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT2_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT2_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT2_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT2_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT2_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT2_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT2_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT2_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT2_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT2_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT2_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT2_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT2_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT2_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT2_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT2_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT2_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT2_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT3_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT3_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT3_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT3_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT3_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT3_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT3_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT3_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT3_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT3_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT3_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT3_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT3_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT3_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT3_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT3_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT3_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT3_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT3_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT4_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT4_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT4_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT4_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT4_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT4_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT4_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT4_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT4_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT4_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT4_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT4_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT4_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT4_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT4_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT4_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT4_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT4_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT4_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT5_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT5_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT5_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT5_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT5_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT5_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT5_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT5_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT5_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT5_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT5_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT5_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT5_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT5_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT5_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT5_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT5_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT5_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT5_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT6_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT6_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT6_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT6_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT6_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT6_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT6_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT6_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT6_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT6_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT6_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT6_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT6_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT6_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT6_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT6_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT6_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT6_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT6_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT7_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT7_R_P :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT7_R_P :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT7_R_P :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT7_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT7_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT7_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT7_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT7_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT7_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT7_R_N :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_BUSY_MASK  0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_BUSY_BITS  1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT7_R_N :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT7_R_N :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT7_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT7_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT7_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT7_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT7_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT7_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT_RD_EN
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT_RD_EN :: busy [31:31] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_BUSY_MASK 0x80000000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_BUSY_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_BUSY_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_BUSY_SHIFT 31

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT_RD_EN :: reserved0 [30:18] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_RESERVED0_BITS 13
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_RESERVED0_SHIFT 18

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT_RD_EN :: ovr_force [17:17] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_OVR_FORCE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_OVR_FORCE_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_OVR_FORCE_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT_RD_EN :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT_RD_EN :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT_RD_EN :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT_RD_EN :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: VDL_OVRIDE_BYTE1_BIT_RD_EN :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_VDL_OVRIDE_BYTE1_BIT_RD_EN_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_R_P :: reserved0 [31:17] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_P_RESERVED0_MASK 0xfffe0000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_P_RESERVED0_BITS 15
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_P_RESERVED0_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_R_N :: reserved0 [31:17] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_N_RESERVED0_MASK 0xfffe0000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_N_RESERVED0_BITS 15
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_N_RESERVED0_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_P :: reserved0 [31:25] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_RESERVED0_MASK 0xfe000000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_RESERVED0_BITS 7
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_RESERVED0_SHIFT 25

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_P :: dm_ovr_en [24:24] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_DM_OVR_EN_MASK 0x01000000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_DM_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_DM_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_DM_OVR_EN_SHIFT 24

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_P :: ovr_en [23:16] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_OVR_EN_MASK 0x00ff0000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_OVR_EN_BITS 8
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_N :: reserved0 [31:25] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_RESERVED0_MASK 0xfe000000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_RESERVED0_BITS 7
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_RESERVED0_SHIFT 25

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_N :: dm_ovr_en [24:24] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_DM_OVR_EN_MASK 0x01000000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_DM_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_DM_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_DM_OVR_EN_SHIFT 24

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_N :: ovr_en [23:16] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_OVR_EN_MASK 0x00ff0000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_OVR_EN_BITS 8
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_W :: reserved0 [31:17] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_W_RESERVED0_MASK 0xfffe0000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_W_RESERVED0_BITS 15
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_W_RESERVED0_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_W_OVR_EN_MASK   0x00010000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_W_OVR_EN_ALIGN  0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_W_OVR_EN_BITS   1
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_W_OVR_EN_SHIFT  16

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_BIT_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_BIT_W :: reserved0 [31:25] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_W_RESERVED0_MASK 0xfe000000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_W_RESERVED0_BITS 7
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_W_RESERVED0_SHIFT 25

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_BIT_W :: dm_ovr_en [24:24] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_W_DM_OVR_EN_MASK 0x01000000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_W_DM_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_W_DM_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_W_DM_OVR_EN_SHIFT 24

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_BIT_W :: ovr_en [23:16] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_W_OVR_EN_MASK 0x00ff0000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_W_OVR_EN_BITS 8
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_BIT_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_BIT_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_BIT_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE0_BIT_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE0_BIT_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_R_P :: reserved0 [31:17] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_P_RESERVED0_MASK 0xfffe0000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_P_RESERVED0_BITS 15
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_P_RESERVED0_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_R_P :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_P_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_P_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_R_N :: reserved0 [31:17] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_N_RESERVED0_MASK 0xfffe0000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_N_RESERVED0_BITS 15
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_N_RESERVED0_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_R_N :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_N_OVR_EN_MASK 0x00010000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_N_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_P
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_P :: reserved0 [31:25] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_RESERVED0_MASK 0xfe000000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_RESERVED0_BITS 7
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_RESERVED0_SHIFT 25

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_P :: dm_ovr_en [24:24] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_DM_OVR_EN_MASK 0x01000000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_DM_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_DM_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_DM_OVR_EN_SHIFT 24

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_P :: ovr_en [23:16] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_OVR_EN_MASK 0x00ff0000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_OVR_EN_BITS 8
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_P :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_P :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_P :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_P :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_N
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_N :: reserved0 [31:25] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_RESERVED0_MASK 0xfe000000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_RESERVED0_BITS 7
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_RESERVED0_SHIFT 25

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_N :: dm_ovr_en [24:24] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_DM_OVR_EN_MASK 0x01000000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_DM_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_DM_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_DM_OVR_EN_SHIFT 24

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_N :: ovr_en [23:16] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_OVR_EN_MASK 0x00ff0000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_OVR_EN_BITS 8
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_N :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_N :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_N :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_N :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_W :: reserved0 [31:17] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_W_RESERVED0_MASK 0xfffe0000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_W_RESERVED0_BITS 15
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_W_RESERVED0_SHIFT 17

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_W :: ovr_en [16:16] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_W_OVR_EN_MASK   0x00010000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_W_OVR_EN_ALIGN  0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_W_OVR_EN_BITS   1
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_W_OVR_EN_SHIFT  16

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_BIT_W
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_BIT_W :: reserved0 [31:25] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_W_RESERVED0_MASK 0xfe000000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_W_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_W_RESERVED0_BITS 7
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_W_RESERVED0_SHIFT 25

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_BIT_W :: dm_ovr_en [24:24] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_W_DM_OVR_EN_MASK 0x01000000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_W_DM_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_W_DM_OVR_EN_BITS 1
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_W_DM_OVR_EN_SHIFT 24

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_BIT_W :: ovr_en [23:16] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_W_OVR_EN_MASK 0x00ff0000
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_W_OVR_EN_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_W_OVR_EN_BITS 8
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_W_OVR_EN_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_BIT_W :: reserved1 [15:09] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_W_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_W_RESERVED1_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_W_RESERVED1_BITS 7
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_W_RESERVED1_SHIFT 9

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_BIT_W :: byte_sel [08:08] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_W_BYTE_SEL_BITS 1
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_BIT_W :: reserved2 [07:06] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_W_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_W_RESERVED2_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_W_RESERVED2_BITS 2
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_W_RESERVED2_SHIFT 6

/* DDR40_PHY_WORD_LANE_1 :: DYN_VDL_OVRIDE_BYTE1_BIT_W :: ovr_step [05:00] */
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_W_OVR_STEP_BITS 6
#define DDR40_PHY_WORD_LANE_1_DYN_VDL_OVRIDE_BYTE1_BIT_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: READ_DATA_DLY
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: READ_DATA_DLY :: reserved0 [31:03] */
#define DDR40_PHY_WORD_LANE_1_READ_DATA_DLY_RESERVED0_MASK         0xfffffff8
#define DDR40_PHY_WORD_LANE_1_READ_DATA_DLY_RESERVED0_ALIGN        0
#define DDR40_PHY_WORD_LANE_1_READ_DATA_DLY_RESERVED0_BITS         29
#define DDR40_PHY_WORD_LANE_1_READ_DATA_DLY_RESERVED0_SHIFT        3

/* DDR40_PHY_WORD_LANE_1 :: READ_DATA_DLY :: rd_data_dly [02:00] */
#define DDR40_PHY_WORD_LANE_1_READ_DATA_DLY_RD_DATA_DLY_MASK       0x00000007
#define DDR40_PHY_WORD_LANE_1_READ_DATA_DLY_RD_DATA_DLY_ALIGN      0
#define DDR40_PHY_WORD_LANE_1_READ_DATA_DLY_RD_DATA_DLY_BITS       3
#define DDR40_PHY_WORD_LANE_1_READ_DATA_DLY_RD_DATA_DLY_SHIFT      0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: READ_CONTROL
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: READ_CONTROL :: reserved0 [31:03] */
#define DDR40_PHY_WORD_LANE_1_READ_CONTROL_RESERVED0_MASK          0xfffffff8
#define DDR40_PHY_WORD_LANE_1_READ_CONTROL_RESERVED0_ALIGN         0
#define DDR40_PHY_WORD_LANE_1_READ_CONTROL_RESERVED0_BITS          29
#define DDR40_PHY_WORD_LANE_1_READ_CONTROL_RESERVED0_SHIFT         3

/* DDR40_PHY_WORD_LANE_1 :: READ_CONTROL :: dq_odt_enable [02:02] */
#define DDR40_PHY_WORD_LANE_1_READ_CONTROL_DQ_ODT_ENABLE_MASK      0x00000004
#define DDR40_PHY_WORD_LANE_1_READ_CONTROL_DQ_ODT_ENABLE_ALIGN     0
#define DDR40_PHY_WORD_LANE_1_READ_CONTROL_DQ_ODT_ENABLE_BITS      1
#define DDR40_PHY_WORD_LANE_1_READ_CONTROL_DQ_ODT_ENABLE_SHIFT     2

/* DDR40_PHY_WORD_LANE_1 :: READ_CONTROL :: dq_odt_te_adj [01:01] */
#define DDR40_PHY_WORD_LANE_1_READ_CONTROL_DQ_ODT_TE_ADJ_MASK      0x00000002
#define DDR40_PHY_WORD_LANE_1_READ_CONTROL_DQ_ODT_TE_ADJ_ALIGN     0
#define DDR40_PHY_WORD_LANE_1_READ_CONTROL_DQ_ODT_TE_ADJ_BITS      1
#define DDR40_PHY_WORD_LANE_1_READ_CONTROL_DQ_ODT_TE_ADJ_SHIFT     1

/* DDR40_PHY_WORD_LANE_1 :: READ_CONTROL :: dq_odt_le_adj [00:00] */
#define DDR40_PHY_WORD_LANE_1_READ_CONTROL_DQ_ODT_LE_ADJ_MASK      0x00000001
#define DDR40_PHY_WORD_LANE_1_READ_CONTROL_DQ_ODT_LE_ADJ_ALIGN     0
#define DDR40_PHY_WORD_LANE_1_READ_CONTROL_DQ_ODT_LE_ADJ_BITS      1
#define DDR40_PHY_WORD_LANE_1_READ_CONTROL_DQ_ODT_LE_ADJ_SHIFT     0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL0_0
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL0_0 :: reserved0 [31:16] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_0_RESERVED0_MASK  0xffff0000
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_0_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_0_RESERVED0_BITS  16
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_0_RESERVED0_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL0_0 :: data_p [15:08] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_0_DATA_P_MASK     0x0000ff00
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_0_DATA_P_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_0_DATA_P_BITS     8
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_0_DATA_P_SHIFT    8

/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL0_0 :: data_n [07:00] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_0_DATA_N_MASK     0x000000ff
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_0_DATA_N_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_0_DATA_N_BITS     8
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_0_DATA_N_SHIFT    0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL0_1
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL0_1 :: reserved0 [31:16] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_1_RESERVED0_MASK  0xffff0000
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_1_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_1_RESERVED0_BITS  16
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_1_RESERVED0_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL0_1 :: data_p [15:08] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_1_DATA_P_MASK     0x0000ff00
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_1_DATA_P_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_1_DATA_P_BITS     8
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_1_DATA_P_SHIFT    8

/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL0_1 :: data_n [07:00] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_1_DATA_N_MASK     0x000000ff
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_1_DATA_N_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_1_DATA_N_BITS     8
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_1_DATA_N_SHIFT    0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL0_2
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL0_2 :: reserved0 [31:16] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_2_RESERVED0_MASK  0xffff0000
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_2_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_2_RESERVED0_BITS  16
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_2_RESERVED0_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL0_2 :: data_p [15:08] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_2_DATA_P_MASK     0x0000ff00
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_2_DATA_P_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_2_DATA_P_BITS     8
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_2_DATA_P_SHIFT    8

/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL0_2 :: data_n [07:00] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_2_DATA_N_MASK     0x000000ff
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_2_DATA_N_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_2_DATA_N_BITS     8
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_2_DATA_N_SHIFT    0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL0_3
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL0_3 :: reserved0 [31:16] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_3_RESERVED0_MASK  0xffff0000
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_3_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_3_RESERVED0_BITS  16
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_3_RESERVED0_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL0_3 :: data_p [15:08] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_3_DATA_P_MASK     0x0000ff00
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_3_DATA_P_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_3_DATA_P_BITS     8
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_3_DATA_P_SHIFT    8

/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL0_3 :: data_n [07:00] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_3_DATA_N_MASK     0x000000ff
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_3_DATA_N_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_3_DATA_N_BITS     8
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL0_3_DATA_N_SHIFT    0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL1_0
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL1_0 :: reserved0 [31:16] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_0_RESERVED0_MASK  0xffff0000
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_0_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_0_RESERVED0_BITS  16
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_0_RESERVED0_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL1_0 :: data_p [15:08] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_0_DATA_P_MASK     0x0000ff00
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_0_DATA_P_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_0_DATA_P_BITS     8
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_0_DATA_P_SHIFT    8

/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL1_0 :: data_n [07:00] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_0_DATA_N_MASK     0x000000ff
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_0_DATA_N_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_0_DATA_N_BITS     8
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_0_DATA_N_SHIFT    0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL1_1
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL1_1 :: reserved0 [31:16] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_1_RESERVED0_MASK  0xffff0000
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_1_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_1_RESERVED0_BITS  16
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_1_RESERVED0_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL1_1 :: data_p [15:08] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_1_DATA_P_MASK     0x0000ff00
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_1_DATA_P_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_1_DATA_P_BITS     8
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_1_DATA_P_SHIFT    8

/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL1_1 :: data_n [07:00] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_1_DATA_N_MASK     0x000000ff
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_1_DATA_N_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_1_DATA_N_BITS     8
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_1_DATA_N_SHIFT    0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL1_2
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL1_2 :: reserved0 [31:16] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_2_RESERVED0_MASK  0xffff0000
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_2_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_2_RESERVED0_BITS  16
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_2_RESERVED0_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL1_2 :: data_p [15:08] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_2_DATA_P_MASK     0x0000ff00
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_2_DATA_P_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_2_DATA_P_BITS     8
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_2_DATA_P_SHIFT    8

/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL1_2 :: data_n [07:00] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_2_DATA_N_MASK     0x000000ff
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_2_DATA_N_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_2_DATA_N_BITS     8
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_2_DATA_N_SHIFT    0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL1_3
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL1_3 :: reserved0 [31:16] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_3_RESERVED0_MASK  0xffff0000
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_3_RESERVED0_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_3_RESERVED0_BITS  16
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_3_RESERVED0_SHIFT 16

/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL1_3 :: data_p [15:08] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_3_DATA_P_MASK     0x0000ff00
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_3_DATA_P_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_3_DATA_P_BITS     8
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_3_DATA_P_SHIFT    8

/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_DATA_BL1_3 :: data_n [07:00] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_3_DATA_N_MASK     0x000000ff
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_3_DATA_N_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_3_DATA_N_BITS     8
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_DATA_BL1_3_DATA_N_SHIFT    0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: READ_FIFO_STATUS
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_STATUS :: reserved0 [31:08] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_STATUS_RESERVED0_MASK      0xffffff00
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_STATUS_RESERVED0_ALIGN     0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_STATUS_RESERVED0_BITS      24
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_STATUS_RESERVED0_SHIFT     8

/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_STATUS :: status1 [07:04] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_STATUS_STATUS1_MASK        0x000000f0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_STATUS_STATUS1_ALIGN       0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_STATUS_STATUS1_BITS        4
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_STATUS_STATUS1_SHIFT       4

/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_STATUS :: status0 [03:00] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_STATUS_STATUS0_MASK        0x0000000f
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_STATUS_STATUS0_ALIGN       0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_STATUS_STATUS0_BITS        4
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_STATUS_STATUS0_SHIFT       0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: READ_FIFO_CLEAR
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_CLEAR :: reserved0 [31:01] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_CLEAR_RESERVED0_MASK       0xfffffffe
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_CLEAR_RESERVED0_ALIGN      0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_CLEAR_RESERVED0_BITS       31
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_CLEAR_RESERVED0_SHIFT      1

/* DDR40_PHY_WORD_LANE_1 :: READ_FIFO_CLEAR :: clear [00:00] */
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_CLEAR_CLEAR_MASK           0x00000001
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_CLEAR_CLEAR_ALIGN          0
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_CLEAR_CLEAR_BITS           1
#define DDR40_PHY_WORD_LANE_1_READ_FIFO_CLEAR_CLEAR_SHIFT          0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: IDLE_PAD_CONTROL
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: IDLE_PAD_CONTROL :: idle [31:31] */
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_IDLE_MASK           0x80000000
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_IDLE_ALIGN          0
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_IDLE_BITS           1
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_IDLE_SHIFT          31

/* DDR40_PHY_WORD_LANE_1 :: IDLE_PAD_CONTROL :: reserved0 [30:24] */
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_RESERVED0_MASK      0x7f000000
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_RESERVED0_ALIGN     0
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_RESERVED0_BITS      7
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_RESERVED0_SHIFT     24

/* DDR40_PHY_WORD_LANE_1 :: IDLE_PAD_CONTROL :: auto_dq_rxenb_mode [23:22] */
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_AUTO_DQ_RXENB_MODE_MASK 0x00c00000
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_AUTO_DQ_RXENB_MODE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_AUTO_DQ_RXENB_MODE_BITS 2
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_AUTO_DQ_RXENB_MODE_SHIFT 22

/* DDR40_PHY_WORD_LANE_1 :: IDLE_PAD_CONTROL :: auto_dq_iddq_mode [21:20] */
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_AUTO_DQ_IDDQ_MODE_MASK 0x00300000
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_AUTO_DQ_IDDQ_MODE_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_AUTO_DQ_IDDQ_MODE_BITS 2
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_AUTO_DQ_IDDQ_MODE_SHIFT 20

/* DDR40_PHY_WORD_LANE_1 :: IDLE_PAD_CONTROL :: dq_rxenb [19:19] */
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQ_RXENB_MASK       0x00080000
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQ_RXENB_ALIGN      0
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQ_RXENB_BITS       1
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQ_RXENB_SHIFT      19

/* DDR40_PHY_WORD_LANE_1 :: IDLE_PAD_CONTROL :: dq_iddq [18:18] */
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQ_IDDQ_MASK        0x00040000
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQ_IDDQ_ALIGN       0
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQ_IDDQ_BITS        1
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQ_IDDQ_SHIFT       18

/* DDR40_PHY_WORD_LANE_1 :: IDLE_PAD_CONTROL :: dq_reb [17:17] */
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQ_REB_MASK         0x00020000
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQ_REB_ALIGN        0
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQ_REB_BITS         1
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQ_REB_SHIFT        17

/* DDR40_PHY_WORD_LANE_1 :: IDLE_PAD_CONTROL :: dq_oeb [16:16] */
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQ_OEB_MASK         0x00010000
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQ_OEB_ALIGN        0
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQ_OEB_BITS         1
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQ_OEB_SHIFT        16

/* DDR40_PHY_WORD_LANE_1 :: IDLE_PAD_CONTROL :: read_enb_rxenb [15:15] */
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_READ_ENB_RXENB_MASK 0x00008000
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_READ_ENB_RXENB_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_READ_ENB_RXENB_BITS 1
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_READ_ENB_RXENB_SHIFT 15

/* DDR40_PHY_WORD_LANE_1 :: IDLE_PAD_CONTROL :: read_enb_iddq [14:14] */
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_READ_ENB_IDDQ_MASK  0x00004000
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_READ_ENB_IDDQ_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_READ_ENB_IDDQ_BITS  1
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_READ_ENB_IDDQ_SHIFT 14

/* DDR40_PHY_WORD_LANE_1 :: IDLE_PAD_CONTROL :: read_enb_reb [13:13] */
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_READ_ENB_REB_MASK   0x00002000
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_READ_ENB_REB_ALIGN  0
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_READ_ENB_REB_BITS   1
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_READ_ENB_REB_SHIFT  13

/* DDR40_PHY_WORD_LANE_1 :: IDLE_PAD_CONTROL :: read_enb_oeb [12:12] */
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_READ_ENB_OEB_MASK   0x00001000
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_READ_ENB_OEB_ALIGN  0
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_READ_ENB_OEB_BITS   1
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_READ_ENB_OEB_SHIFT  12

/* DDR40_PHY_WORD_LANE_1 :: IDLE_PAD_CONTROL :: dqs_rxenb [11:11] */
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQS_RXENB_MASK      0x00000800
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQS_RXENB_ALIGN     0
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQS_RXENB_BITS      1
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQS_RXENB_SHIFT     11

/* DDR40_PHY_WORD_LANE_1 :: IDLE_PAD_CONTROL :: dqs_iddq [10:10] */
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQS_IDDQ_MASK       0x00000400
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQS_IDDQ_ALIGN      0
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQS_IDDQ_BITS       1
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQS_IDDQ_SHIFT      10

/* DDR40_PHY_WORD_LANE_1 :: IDLE_PAD_CONTROL :: dqs_reb [09:09] */
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQS_REB_MASK        0x00000200
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQS_REB_ALIGN       0
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQS_REB_BITS        1
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQS_REB_SHIFT       9

/* DDR40_PHY_WORD_LANE_1 :: IDLE_PAD_CONTROL :: dqs_oeb [08:08] */
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQS_OEB_MASK        0x00000100
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQS_OEB_ALIGN       0
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQS_OEB_BITS        1
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_DQS_OEB_SHIFT       8

/* DDR40_PHY_WORD_LANE_1 :: IDLE_PAD_CONTROL :: clk1_rxenb [07:07] */
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK1_RXENB_MASK     0x00000080
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK1_RXENB_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK1_RXENB_BITS     1
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK1_RXENB_SHIFT    7

/* DDR40_PHY_WORD_LANE_1 :: IDLE_PAD_CONTROL :: clk1_iddq [06:06] */
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK1_IDDQ_MASK      0x00000040
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK1_IDDQ_ALIGN     0
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK1_IDDQ_BITS      1
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK1_IDDQ_SHIFT     6

/* DDR40_PHY_WORD_LANE_1 :: IDLE_PAD_CONTROL :: clk1_reb [05:05] */
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK1_REB_MASK       0x00000020
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK1_REB_ALIGN      0
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK1_REB_BITS       1
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK1_REB_SHIFT      5

/* DDR40_PHY_WORD_LANE_1 :: IDLE_PAD_CONTROL :: clk1_oeb [04:04] */
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK1_OEB_MASK       0x00000010
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK1_OEB_ALIGN      0
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK1_OEB_BITS       1
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK1_OEB_SHIFT      4

/* DDR40_PHY_WORD_LANE_1 :: IDLE_PAD_CONTROL :: clk0_rxenb [03:03] */
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK0_RXENB_MASK     0x00000008
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK0_RXENB_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK0_RXENB_BITS     1
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK0_RXENB_SHIFT    3

/* DDR40_PHY_WORD_LANE_1 :: IDLE_PAD_CONTROL :: clk0_iddq [02:02] */
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK0_IDDQ_MASK      0x00000004
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK0_IDDQ_ALIGN     0
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK0_IDDQ_BITS      1
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK0_IDDQ_SHIFT     2

/* DDR40_PHY_WORD_LANE_1 :: IDLE_PAD_CONTROL :: clk0_reb [01:01] */
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK0_REB_MASK       0x00000002
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK0_REB_ALIGN      0
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK0_REB_BITS       1
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK0_REB_SHIFT      1

/* DDR40_PHY_WORD_LANE_1 :: IDLE_PAD_CONTROL :: clk0_oeb [00:00] */
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK0_OEB_MASK       0x00000001
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK0_OEB_ALIGN      0
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK0_OEB_BITS       1
#define DDR40_PHY_WORD_LANE_1_IDLE_PAD_CONTROL_CLK0_OEB_SHIFT      0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: DRIVE_PAD_CTL
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: DRIVE_PAD_CTL :: reserved0 [31:12] */
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_RESERVED0_MASK         0xfffff000
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_RESERVED0_ALIGN        0
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_RESERVED0_BITS         20
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_RESERVED0_SHIFT        12

/* DDR40_PHY_WORD_LANE_1 :: DRIVE_PAD_CTL :: no_dqs_rd [11:11] */
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_NO_DQS_RD_MASK         0x00000800
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_NO_DQS_RD_ALIGN        0
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_NO_DQS_RD_BITS         1
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_NO_DQS_RD_SHIFT        11

/* DDR40_PHY_WORD_LANE_1 :: DRIVE_PAD_CTL :: dqs_always_on [10:10] */
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_DQS_ALWAYS_ON_MASK     0x00000400
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_DQS_ALWAYS_ON_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_DQS_ALWAYS_ON_BITS     1
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_DQS_ALWAYS_ON_SHIFT    10

/* DDR40_PHY_WORD_LANE_1 :: DRIVE_PAD_CTL :: dqs_tx_dis [09:09] */
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_DQS_TX_DIS_MASK        0x00000200
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_DQS_TX_DIS_ALIGN       0
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_DQS_TX_DIS_BITS        1
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_DQS_TX_DIS_SHIFT       9

/* DDR40_PHY_WORD_LANE_1 :: DRIVE_PAD_CTL :: half_strength_ck [08:08] */
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_HALF_STRENGTH_CK_MASK  0x00000100
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_HALF_STRENGTH_CK_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_HALF_STRENGTH_CK_BITS  1
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_HALF_STRENGTH_CK_SHIFT 8

/* DDR40_PHY_WORD_LANE_1 :: DRIVE_PAD_CTL :: half_strength [07:07] */
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_HALF_STRENGTH_MASK     0x00000080
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_HALF_STRENGTH_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_HALF_STRENGTH_BITS     1
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_HALF_STRENGTH_SHIFT    7

/* DDR40_PHY_WORD_LANE_1 :: DRIVE_PAD_CTL :: rdqs_en [06:06] */
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_RDQS_EN_MASK           0x00000040
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_RDQS_EN_ALIGN          0
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_RDQS_EN_BITS           1
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_RDQS_EN_SHIFT          6

/* DDR40_PHY_WORD_LANE_1 :: DRIVE_PAD_CTL :: gddr_symmetry [05:05] */
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_GDDR_SYMMETRY_MASK     0x00000020
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_GDDR_SYMMETRY_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_GDDR_SYMMETRY_BITS     1
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_GDDR_SYMMETRY_SHIFT    5

/* DDR40_PHY_WORD_LANE_1 :: DRIVE_PAD_CTL :: vddo_volts [04:03] */
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_VDDO_VOLTS_MASK        0x00000018
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_VDDO_VOLTS_ALIGN       0
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_VDDO_VOLTS_BITS        2
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_VDDO_VOLTS_SHIFT       3

/* DDR40_PHY_WORD_LANE_1 :: DRIVE_PAD_CTL :: rt60b [02:02] */
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_RT60B_MASK             0x00000004
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_RT60B_ALIGN            0
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_RT60B_BITS             1
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_RT60B_SHIFT            2

/* DDR40_PHY_WORD_LANE_1 :: DRIVE_PAD_CTL :: rt120b_g [01:01] */
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_RT120B_G_MASK          0x00000002
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_RT120B_G_ALIGN         0
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_RT120B_G_BITS          1
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_RT120B_G_SHIFT         1

/* DDR40_PHY_WORD_LANE_1 :: DRIVE_PAD_CTL :: g_ddr [00:00] */
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_G_DDR_MASK             0x00000001
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_G_DDR_ALIGN            0
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_G_DDR_BITS             1
#define DDR40_PHY_WORD_LANE_1_DRIVE_PAD_CTL_G_DDR_SHIFT            0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: CLOCK_PAD_DISABLE
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: CLOCK_PAD_DISABLE :: reserved0 [31:03] */
#define DDR40_PHY_WORD_LANE_1_CLOCK_PAD_DISABLE_RESERVED0_MASK     0xfffffff8
#define DDR40_PHY_WORD_LANE_1_CLOCK_PAD_DISABLE_RESERVED0_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_CLOCK_PAD_DISABLE_RESERVED0_BITS     29
#define DDR40_PHY_WORD_LANE_1_CLOCK_PAD_DISABLE_RESERVED0_SHIFT    3

/* DDR40_PHY_WORD_LANE_1 :: CLOCK_PAD_DISABLE :: dm_pad_dis [02:02] */
#define DDR40_PHY_WORD_LANE_1_CLOCK_PAD_DISABLE_DM_PAD_DIS_MASK    0x00000004
#define DDR40_PHY_WORD_LANE_1_CLOCK_PAD_DISABLE_DM_PAD_DIS_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_CLOCK_PAD_DISABLE_DM_PAD_DIS_BITS    1
#define DDR40_PHY_WORD_LANE_1_CLOCK_PAD_DISABLE_DM_PAD_DIS_SHIFT   2

/* DDR40_PHY_WORD_LANE_1 :: CLOCK_PAD_DISABLE :: clk1_pad_dis [01:01] */
#define DDR40_PHY_WORD_LANE_1_CLOCK_PAD_DISABLE_CLK1_PAD_DIS_MASK  0x00000002
#define DDR40_PHY_WORD_LANE_1_CLOCK_PAD_DISABLE_CLK1_PAD_DIS_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_CLOCK_PAD_DISABLE_CLK1_PAD_DIS_BITS  1
#define DDR40_PHY_WORD_LANE_1_CLOCK_PAD_DISABLE_CLK1_PAD_DIS_SHIFT 1

/* DDR40_PHY_WORD_LANE_1 :: CLOCK_PAD_DISABLE :: clk0_pad_dis [00:00] */
#define DDR40_PHY_WORD_LANE_1_CLOCK_PAD_DISABLE_CLK0_PAD_DIS_MASK  0x00000001
#define DDR40_PHY_WORD_LANE_1_CLOCK_PAD_DISABLE_CLK0_PAD_DIS_ALIGN 0
#define DDR40_PHY_WORD_LANE_1_CLOCK_PAD_DISABLE_CLK0_PAD_DIS_BITS  1
#define DDR40_PHY_WORD_LANE_1_CLOCK_PAD_DISABLE_CLK0_PAD_DIS_SHIFT 0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: WR_PREAMBLE_MODE
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: WR_PREAMBLE_MODE :: reserved0 [31:02] */
#define DDR40_PHY_WORD_LANE_1_WR_PREAMBLE_MODE_RESERVED0_MASK      0xfffffffc
#define DDR40_PHY_WORD_LANE_1_WR_PREAMBLE_MODE_RESERVED0_ALIGN     0
#define DDR40_PHY_WORD_LANE_1_WR_PREAMBLE_MODE_RESERVED0_BITS      30
#define DDR40_PHY_WORD_LANE_1_WR_PREAMBLE_MODE_RESERVED0_SHIFT     2

/* DDR40_PHY_WORD_LANE_1 :: WR_PREAMBLE_MODE :: long [01:01] */
#define DDR40_PHY_WORD_LANE_1_WR_PREAMBLE_MODE_LONG_MASK           0x00000002
#define DDR40_PHY_WORD_LANE_1_WR_PREAMBLE_MODE_LONG_ALIGN          0
#define DDR40_PHY_WORD_LANE_1_WR_PREAMBLE_MODE_LONG_BITS           1
#define DDR40_PHY_WORD_LANE_1_WR_PREAMBLE_MODE_LONG_SHIFT          1

/* DDR40_PHY_WORD_LANE_1 :: WR_PREAMBLE_MODE :: mode [00:00] */
#define DDR40_PHY_WORD_LANE_1_WR_PREAMBLE_MODE_MODE_MASK           0x00000001
#define DDR40_PHY_WORD_LANE_1_WR_PREAMBLE_MODE_MODE_ALIGN          0
#define DDR40_PHY_WORD_LANE_1_WR_PREAMBLE_MODE_MODE_BITS           1
#define DDR40_PHY_WORD_LANE_1_WR_PREAMBLE_MODE_MODE_SHIFT          0


/****************************************************************************
 * DDR40_PHY_WORD_LANE_1 :: PHYBIST_VDL_ADJ
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_1 :: PHYBIST_VDL_ADJ :: reserved0 [31:29] */
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_RESERVED0_MASK       0xe0000000
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_RESERVED0_ALIGN      0
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_RESERVED0_BITS       3
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_RESERVED0_SHIFT      29

/* DDR40_PHY_WORD_LANE_1 :: PHYBIST_VDL_ADJ :: dq1_vdl_adj [28:24] */
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_DQ1_VDL_ADJ_MASK     0x1f000000
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_DQ1_VDL_ADJ_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_DQ1_VDL_ADJ_BITS     5
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_DQ1_VDL_ADJ_SHIFT    24

/* DDR40_PHY_WORD_LANE_1 :: PHYBIST_VDL_ADJ :: reserved1 [23:21] */
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_RESERVED1_MASK       0x00e00000
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_RESERVED1_ALIGN      0
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_RESERVED1_BITS       3
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_RESERVED1_SHIFT      21

/* DDR40_PHY_WORD_LANE_1 :: PHYBIST_VDL_ADJ :: dq0_vdl_adj [20:16] */
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_DQ0_VDL_ADJ_MASK     0x001f0000
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_DQ0_VDL_ADJ_ALIGN    0
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_DQ0_VDL_ADJ_BITS     5
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_DQ0_VDL_ADJ_SHIFT    16

/* DDR40_PHY_WORD_LANE_1 :: PHYBIST_VDL_ADJ :: reserved2 [15:13] */
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_RESERVED2_MASK       0x0000e000
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_RESERVED2_ALIGN      0
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_RESERVED2_BITS       3
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_RESERVED2_SHIFT      13

/* DDR40_PHY_WORD_LANE_1 :: PHYBIST_VDL_ADJ :: dqs1_vdl_adj [12:08] */
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_DQS1_VDL_ADJ_MASK    0x00001f00
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_DQS1_VDL_ADJ_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_DQS1_VDL_ADJ_BITS    5
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_DQS1_VDL_ADJ_SHIFT   8

/* DDR40_PHY_WORD_LANE_1 :: PHYBIST_VDL_ADJ :: reserved3 [07:05] */
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_RESERVED3_MASK       0x000000e0
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_RESERVED3_ALIGN      0
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_RESERVED3_BITS       3
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_RESERVED3_SHIFT      5

/* DDR40_PHY_WORD_LANE_1 :: PHYBIST_VDL_ADJ :: dqs0_vdl_adj [04:00] */
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_DQS0_VDL_ADJ_MASK    0x0000001f
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_DQS0_VDL_ADJ_ALIGN   0
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_DQS0_VDL_ADJ_BITS    5
#define DDR40_PHY_WORD_LANE_1_PHYBIST_VDL_ADJ_DQS0_VDL_ADJ_SHIFT   0


/****************************************************************************
 * DDR40_PHY_DDR40_PHY_ECC_LANE
 ***************************************************************************/
/****************************************************************************
 * DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_RD_EN
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_RD_EN :: busy [31:31] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_BUSY_MASK         0x80000000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_BUSY_ALIGN        0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_BUSY_BITS         1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_BUSY_SHIFT        31

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_RD_EN :: reserved0 [30:18] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_RESERVED0_MASK    0x7ffc0000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_RESERVED0_ALIGN   0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_RESERVED0_BITS    13
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_RESERVED0_SHIFT   18

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_RD_EN :: ovr_force [17:17] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_OVR_FORCE_MASK    0x00020000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_OVR_FORCE_ALIGN   0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_OVR_FORCE_BITS    1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_OVR_FORCE_SHIFT   17

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_RD_EN :: ovr_en [16:16] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_OVR_EN_MASK       0x00010000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_OVR_EN_ALIGN      0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_OVR_EN_BITS       1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_OVR_EN_SHIFT      16

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_RD_EN :: reserved1 [15:09] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_RESERVED1_MASK    0x0000fe00
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_RESERVED1_ALIGN   0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_RESERVED1_BITS    7
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_RESERVED1_SHIFT   9

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_RD_EN :: byte_sel [08:08] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_BYTE_SEL_MASK     0x00000100
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_BYTE_SEL_ALIGN    0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_BYTE_SEL_BITS     1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_BYTE_SEL_SHIFT    8

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_RD_EN :: reserved2 [07:06] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_RESERVED2_MASK    0x000000c0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_RESERVED2_ALIGN   0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_RESERVED2_BITS    2
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_RESERVED2_SHIFT   6

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_RD_EN :: ovr_step [05:00] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_OVR_STEP_MASK     0x0000003f
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_OVR_STEP_ALIGN    0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_OVR_STEP_BITS     6
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_RD_EN_OVR_STEP_SHIFT    0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_W
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_W :: busy [31:31] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_BUSY_MASK             0x80000000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_BUSY_ALIGN            0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_BUSY_BITS             1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_BUSY_SHIFT            31

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_W :: reserved0 [30:18] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_RESERVED0_MASK        0x7ffc0000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_RESERVED0_ALIGN       0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_RESERVED0_BITS        13
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_RESERVED0_SHIFT       18

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_W :: ovr_force [17:17] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_OVR_FORCE_MASK        0x00020000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_OVR_FORCE_ALIGN       0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_OVR_FORCE_BITS        1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_OVR_FORCE_SHIFT       17

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_W :: ovr_en [16:16] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_OVR_EN_MASK           0x00010000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_OVR_EN_ALIGN          0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_OVR_EN_BITS           1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_OVR_EN_SHIFT          16

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_W :: reserved1 [15:09] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_RESERVED1_MASK        0x0000fe00
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_RESERVED1_ALIGN       0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_RESERVED1_BITS        7
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_RESERVED1_SHIFT       9

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_W :: byte_sel [08:08] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_BYTE_SEL_MASK         0x00000100
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_BYTE_SEL_ALIGN        0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_BYTE_SEL_BITS         1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_BYTE_SEL_SHIFT        8

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_W :: reserved2 [07:06] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_RESERVED2_MASK        0x000000c0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_RESERVED2_ALIGN       0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_RESERVED2_BITS        2
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_RESERVED2_SHIFT       6

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_W :: ovr_step [05:00] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_OVR_STEP_MASK         0x0000003f
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_OVR_STEP_ALIGN        0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_OVR_STEP_BITS         6
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_W_OVR_STEP_SHIFT        0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_R_P
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_R_P :: busy [31:31] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_BUSY_MASK           0x80000000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_BUSY_ALIGN          0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_BUSY_BITS           1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_BUSY_SHIFT          31

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_R_P :: reserved0 [30:18] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_RESERVED0_MASK      0x7ffc0000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_RESERVED0_ALIGN     0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_RESERVED0_BITS      13
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_RESERVED0_SHIFT     18

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_R_P :: ovr_force [17:17] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_OVR_FORCE_MASK      0x00020000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_OVR_FORCE_ALIGN     0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_OVR_FORCE_BITS      1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_OVR_FORCE_SHIFT     17

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_R_P :: ovr_en [16:16] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_OVR_EN_MASK         0x00010000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_OVR_EN_ALIGN        0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_OVR_EN_BITS         1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_OVR_EN_SHIFT        16

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_R_P :: reserved1 [15:09] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_RESERVED1_MASK      0x0000fe00
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_RESERVED1_ALIGN     0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_RESERVED1_BITS      7
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_RESERVED1_SHIFT     9

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_R_P :: byte_sel [08:08] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_BYTE_SEL_MASK       0x00000100
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_BYTE_SEL_ALIGN      0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_BYTE_SEL_BITS       1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_BYTE_SEL_SHIFT      8

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_R_P :: reserved2 [07:06] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_RESERVED2_MASK      0x000000c0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_RESERVED2_ALIGN     0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_RESERVED2_BITS      2
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_RESERVED2_SHIFT     6

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_R_P :: ovr_step [05:00] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_OVR_STEP_MASK       0x0000003f
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_OVR_STEP_ALIGN      0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_OVR_STEP_BITS       6
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_P_OVR_STEP_SHIFT      0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_R_N
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_R_N :: busy [31:31] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_BUSY_MASK           0x80000000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_BUSY_ALIGN          0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_BUSY_BITS           1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_BUSY_SHIFT          31

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_R_N :: reserved0 [30:18] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_RESERVED0_MASK      0x7ffc0000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_RESERVED0_ALIGN     0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_RESERVED0_BITS      13
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_RESERVED0_SHIFT     18

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_R_N :: ovr_force [17:17] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_OVR_FORCE_MASK      0x00020000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_OVR_FORCE_ALIGN     0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_OVR_FORCE_BITS      1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_OVR_FORCE_SHIFT     17

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_R_N :: ovr_en [16:16] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_OVR_EN_MASK         0x00010000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_OVR_EN_ALIGN        0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_OVR_EN_BITS         1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_OVR_EN_SHIFT        16

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_R_N :: reserved1 [15:09] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_RESERVED1_MASK      0x0000fe00
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_RESERVED1_ALIGN     0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_RESERVED1_BITS      7
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_RESERVED1_SHIFT     9

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_R_N :: byte_sel [08:08] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_BYTE_SEL_MASK       0x00000100
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_BYTE_SEL_ALIGN      0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_BYTE_SEL_BITS       1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_BYTE_SEL_SHIFT      8

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_R_N :: reserved2 [07:06] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_RESERVED2_MASK      0x000000c0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_RESERVED2_ALIGN     0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_RESERVED2_BITS      2
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_RESERVED2_SHIFT     6

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_R_N :: ovr_step [05:00] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_OVR_STEP_MASK       0x0000003f
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_OVR_STEP_ALIGN      0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_OVR_STEP_BITS       6
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_R_N_OVR_STEP_SHIFT      0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT0_W
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT0_W :: busy [31:31] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_BUSY_MASK        0x80000000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_BUSY_ALIGN       0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_BUSY_BITS        1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_BUSY_SHIFT       31

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT0_W :: reserved0 [30:18] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_RESERVED0_MASK   0x7ffc0000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_RESERVED0_ALIGN  0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_RESERVED0_BITS   13
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_RESERVED0_SHIFT  18

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT0_W :: ovr_force [17:17] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_OVR_FORCE_MASK   0x00020000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_OVR_FORCE_ALIGN  0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_OVR_FORCE_BITS   1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_OVR_FORCE_SHIFT  17

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT0_W :: ovr_en [16:16] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_OVR_EN_MASK      0x00010000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_OVR_EN_ALIGN     0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_OVR_EN_BITS      1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_OVR_EN_SHIFT     16

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT0_W :: reserved1 [15:09] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_RESERVED1_MASK   0x0000fe00
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_RESERVED1_ALIGN  0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_RESERVED1_BITS   7
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_RESERVED1_SHIFT  9

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT0_W :: byte_sel [08:08] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_BYTE_SEL_MASK    0x00000100
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_BYTE_SEL_ALIGN   0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_BYTE_SEL_BITS    1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_BYTE_SEL_SHIFT   8

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT0_W :: reserved2 [07:06] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_RESERVED2_MASK   0x000000c0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_RESERVED2_ALIGN  0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_RESERVED2_BITS   2
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_RESERVED2_SHIFT  6

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT0_W :: ovr_step [05:00] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_OVR_STEP_MASK    0x0000003f
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_OVR_STEP_ALIGN   0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_OVR_STEP_BITS    6
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_W_OVR_STEP_SHIFT   0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT1_W
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT1_W :: busy [31:31] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_BUSY_MASK        0x80000000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_BUSY_ALIGN       0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_BUSY_BITS        1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_BUSY_SHIFT       31

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT1_W :: reserved0 [30:18] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_RESERVED0_MASK   0x7ffc0000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_RESERVED0_ALIGN  0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_RESERVED0_BITS   13
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_RESERVED0_SHIFT  18

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT1_W :: ovr_force [17:17] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_OVR_FORCE_MASK   0x00020000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_OVR_FORCE_ALIGN  0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_OVR_FORCE_BITS   1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_OVR_FORCE_SHIFT  17

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT1_W :: ovr_en [16:16] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_OVR_EN_MASK      0x00010000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_OVR_EN_ALIGN     0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_OVR_EN_BITS      1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_OVR_EN_SHIFT     16

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT1_W :: reserved1 [15:09] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_RESERVED1_MASK   0x0000fe00
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_RESERVED1_ALIGN  0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_RESERVED1_BITS   7
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_RESERVED1_SHIFT  9

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT1_W :: byte_sel [08:08] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_BYTE_SEL_MASK    0x00000100
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_BYTE_SEL_ALIGN   0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_BYTE_SEL_BITS    1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_BYTE_SEL_SHIFT   8

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT1_W :: reserved2 [07:06] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_RESERVED2_MASK   0x000000c0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_RESERVED2_ALIGN  0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_RESERVED2_BITS   2
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_RESERVED2_SHIFT  6

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT1_W :: ovr_step [05:00] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_OVR_STEP_MASK    0x0000003f
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_OVR_STEP_ALIGN   0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_OVR_STEP_BITS    6
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_W_OVR_STEP_SHIFT   0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT2_W
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT2_W :: busy [31:31] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_BUSY_MASK        0x80000000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_BUSY_ALIGN       0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_BUSY_BITS        1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_BUSY_SHIFT       31

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT2_W :: reserved0 [30:18] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_RESERVED0_MASK   0x7ffc0000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_RESERVED0_ALIGN  0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_RESERVED0_BITS   13
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_RESERVED0_SHIFT  18

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT2_W :: ovr_force [17:17] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_OVR_FORCE_MASK   0x00020000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_OVR_FORCE_ALIGN  0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_OVR_FORCE_BITS   1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_OVR_FORCE_SHIFT  17

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT2_W :: ovr_en [16:16] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_OVR_EN_MASK      0x00010000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_OVR_EN_ALIGN     0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_OVR_EN_BITS      1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_OVR_EN_SHIFT     16

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT2_W :: reserved1 [15:09] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_RESERVED1_MASK   0x0000fe00
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_RESERVED1_ALIGN  0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_RESERVED1_BITS   7
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_RESERVED1_SHIFT  9

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT2_W :: byte_sel [08:08] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_BYTE_SEL_MASK    0x00000100
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_BYTE_SEL_ALIGN   0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_BYTE_SEL_BITS    1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_BYTE_SEL_SHIFT   8

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT2_W :: reserved2 [07:06] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_RESERVED2_MASK   0x000000c0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_RESERVED2_ALIGN  0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_RESERVED2_BITS   2
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_RESERVED2_SHIFT  6

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT2_W :: ovr_step [05:00] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_OVR_STEP_MASK    0x0000003f
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_OVR_STEP_ALIGN   0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_OVR_STEP_BITS    6
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_W_OVR_STEP_SHIFT   0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT3_W
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT3_W :: busy [31:31] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_BUSY_MASK        0x80000000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_BUSY_ALIGN       0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_BUSY_BITS        1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_BUSY_SHIFT       31

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT3_W :: reserved0 [30:18] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_RESERVED0_MASK   0x7ffc0000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_RESERVED0_ALIGN  0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_RESERVED0_BITS   13
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_RESERVED0_SHIFT  18

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT3_W :: ovr_force [17:17] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_OVR_FORCE_MASK   0x00020000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_OVR_FORCE_ALIGN  0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_OVR_FORCE_BITS   1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_OVR_FORCE_SHIFT  17

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT3_W :: ovr_en [16:16] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_OVR_EN_MASK      0x00010000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_OVR_EN_ALIGN     0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_OVR_EN_BITS      1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_OVR_EN_SHIFT     16

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT3_W :: reserved1 [15:09] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_RESERVED1_MASK   0x0000fe00
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_RESERVED1_ALIGN  0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_RESERVED1_BITS   7
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_RESERVED1_SHIFT  9

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT3_W :: byte_sel [08:08] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_BYTE_SEL_MASK    0x00000100
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_BYTE_SEL_ALIGN   0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_BYTE_SEL_BITS    1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_BYTE_SEL_SHIFT   8

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT3_W :: reserved2 [07:06] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_RESERVED2_MASK   0x000000c0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_RESERVED2_ALIGN  0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_RESERVED2_BITS   2
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_RESERVED2_SHIFT  6

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT3_W :: ovr_step [05:00] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_OVR_STEP_MASK    0x0000003f
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_OVR_STEP_ALIGN   0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_OVR_STEP_BITS    6
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_W_OVR_STEP_SHIFT   0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_DM_W
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_DM_W :: busy [31:31] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_BUSY_MASK          0x80000000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_BUSY_ALIGN         0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_BUSY_BITS          1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_BUSY_SHIFT         31

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_DM_W :: reserved0 [30:18] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_RESERVED0_MASK     0x7ffc0000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_RESERVED0_ALIGN    0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_RESERVED0_BITS     13
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_RESERVED0_SHIFT    18

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_DM_W :: ovr_force [17:17] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_OVR_FORCE_MASK     0x00020000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_OVR_FORCE_ALIGN    0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_OVR_FORCE_BITS     1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_OVR_FORCE_SHIFT    17

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_DM_W :: ovr_en [16:16] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_OVR_EN_MASK        0x00010000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_OVR_EN_ALIGN       0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_OVR_EN_BITS        1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_OVR_EN_SHIFT       16

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_DM_W :: reserved1 [15:09] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_RESERVED1_MASK     0x0000fe00
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_RESERVED1_ALIGN    0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_RESERVED1_BITS     7
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_RESERVED1_SHIFT    9

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_DM_W :: byte_sel [08:08] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_BYTE_SEL_MASK      0x00000100
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_BYTE_SEL_ALIGN     0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_BYTE_SEL_BITS      1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_BYTE_SEL_SHIFT     8

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_DM_W :: reserved2 [07:06] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_RESERVED2_MASK     0x000000c0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_RESERVED2_ALIGN    0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_RESERVED2_BITS     2
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_RESERVED2_SHIFT    6

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_DM_W :: ovr_step [05:00] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_OVR_STEP_MASK      0x0000003f
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_OVR_STEP_ALIGN     0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_OVR_STEP_BITS      6
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_DM_W_OVR_STEP_SHIFT     0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT0_R_P
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT0_R_P :: busy [31:31] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_BUSY_MASK      0x80000000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_BUSY_ALIGN     0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_BUSY_BITS      1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_BUSY_SHIFT     31

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT0_R_P :: reserved0 [30:18] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_RESERVED0_BITS 13
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT0_R_P :: ovr_force [17:17] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT0_R_P :: ovr_en [16:16] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_OVR_EN_MASK    0x00010000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_OVR_EN_ALIGN   0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_OVR_EN_BITS    1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_OVR_EN_SHIFT   16

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT0_R_P :: reserved1 [15:09] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_RESERVED1_BITS 7
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT0_R_P :: byte_sel [08:08] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_BYTE_SEL_MASK  0x00000100
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_BYTE_SEL_BITS  1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT0_R_P :: reserved2 [07:06] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_RESERVED2_BITS 2
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT0_R_P :: ovr_step [05:00] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_OVR_STEP_MASK  0x0000003f
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_OVR_STEP_BITS  6
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT0_R_N
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT0_R_N :: busy [31:31] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_BUSY_MASK      0x80000000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_BUSY_ALIGN     0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_BUSY_BITS      1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_BUSY_SHIFT     31

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT0_R_N :: reserved0 [30:18] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_RESERVED0_BITS 13
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT0_R_N :: ovr_force [17:17] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT0_R_N :: ovr_en [16:16] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_OVR_EN_MASK    0x00010000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_OVR_EN_ALIGN   0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_OVR_EN_BITS    1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_OVR_EN_SHIFT   16

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT0_R_N :: reserved1 [15:09] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_RESERVED1_BITS 7
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT0_R_N :: byte_sel [08:08] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_BYTE_SEL_MASK  0x00000100
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_BYTE_SEL_BITS  1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT0_R_N :: reserved2 [07:06] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_RESERVED2_BITS 2
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT0_R_N :: ovr_step [05:00] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_OVR_STEP_MASK  0x0000003f
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_OVR_STEP_BITS  6
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT0_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT1_R_P
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT1_R_P :: busy [31:31] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_BUSY_MASK      0x80000000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_BUSY_ALIGN     0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_BUSY_BITS      1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_BUSY_SHIFT     31

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT1_R_P :: reserved0 [30:18] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_RESERVED0_BITS 13
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT1_R_P :: ovr_force [17:17] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT1_R_P :: ovr_en [16:16] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_OVR_EN_MASK    0x00010000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_OVR_EN_ALIGN   0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_OVR_EN_BITS    1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_OVR_EN_SHIFT   16

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT1_R_P :: reserved1 [15:09] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_RESERVED1_BITS 7
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT1_R_P :: byte_sel [08:08] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_BYTE_SEL_MASK  0x00000100
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_BYTE_SEL_BITS  1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT1_R_P :: reserved2 [07:06] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_RESERVED2_BITS 2
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT1_R_P :: ovr_step [05:00] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_OVR_STEP_MASK  0x0000003f
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_OVR_STEP_BITS  6
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT1_R_N
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT1_R_N :: busy [31:31] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_BUSY_MASK      0x80000000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_BUSY_ALIGN     0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_BUSY_BITS      1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_BUSY_SHIFT     31

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT1_R_N :: reserved0 [30:18] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_RESERVED0_BITS 13
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT1_R_N :: ovr_force [17:17] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT1_R_N :: ovr_en [16:16] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_OVR_EN_MASK    0x00010000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_OVR_EN_ALIGN   0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_OVR_EN_BITS    1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_OVR_EN_SHIFT   16

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT1_R_N :: reserved1 [15:09] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_RESERVED1_BITS 7
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT1_R_N :: byte_sel [08:08] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_BYTE_SEL_MASK  0x00000100
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_BYTE_SEL_BITS  1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT1_R_N :: reserved2 [07:06] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_RESERVED2_BITS 2
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT1_R_N :: ovr_step [05:00] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_OVR_STEP_MASK  0x0000003f
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_OVR_STEP_BITS  6
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT1_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT2_R_P
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT2_R_P :: busy [31:31] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_BUSY_MASK      0x80000000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_BUSY_ALIGN     0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_BUSY_BITS      1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_BUSY_SHIFT     31

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT2_R_P :: reserved0 [30:18] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_RESERVED0_BITS 13
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT2_R_P :: ovr_force [17:17] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT2_R_P :: ovr_en [16:16] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_OVR_EN_MASK    0x00010000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_OVR_EN_ALIGN   0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_OVR_EN_BITS    1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_OVR_EN_SHIFT   16

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT2_R_P :: reserved1 [15:09] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_RESERVED1_BITS 7
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT2_R_P :: byte_sel [08:08] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_BYTE_SEL_MASK  0x00000100
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_BYTE_SEL_BITS  1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT2_R_P :: reserved2 [07:06] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_RESERVED2_BITS 2
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT2_R_P :: ovr_step [05:00] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_OVR_STEP_MASK  0x0000003f
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_OVR_STEP_BITS  6
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT2_R_N
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT2_R_N :: busy [31:31] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_BUSY_MASK      0x80000000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_BUSY_ALIGN     0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_BUSY_BITS      1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_BUSY_SHIFT     31

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT2_R_N :: reserved0 [30:18] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_RESERVED0_BITS 13
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT2_R_N :: ovr_force [17:17] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT2_R_N :: ovr_en [16:16] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_OVR_EN_MASK    0x00010000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_OVR_EN_ALIGN   0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_OVR_EN_BITS    1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_OVR_EN_SHIFT   16

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT2_R_N :: reserved1 [15:09] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_RESERVED1_BITS 7
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT2_R_N :: byte_sel [08:08] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_BYTE_SEL_MASK  0x00000100
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_BYTE_SEL_BITS  1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT2_R_N :: reserved2 [07:06] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_RESERVED2_BITS 2
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT2_R_N :: ovr_step [05:00] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_OVR_STEP_MASK  0x0000003f
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_OVR_STEP_BITS  6
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT2_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT3_R_P
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT3_R_P :: busy [31:31] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_BUSY_MASK      0x80000000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_BUSY_ALIGN     0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_BUSY_BITS      1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_BUSY_SHIFT     31

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT3_R_P :: reserved0 [30:18] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_RESERVED0_BITS 13
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_RESERVED0_SHIFT 18

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT3_R_P :: ovr_force [17:17] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_OVR_FORCE_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_OVR_FORCE_BITS 1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_OVR_FORCE_SHIFT 17

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT3_R_P :: ovr_en [16:16] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_OVR_EN_MASK    0x00010000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_OVR_EN_ALIGN   0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_OVR_EN_BITS    1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_OVR_EN_SHIFT   16

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT3_R_P :: reserved1 [15:09] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_RESERVED1_BITS 7
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT3_R_P :: byte_sel [08:08] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_BYTE_SEL_MASK  0x00000100
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_BYTE_SEL_BITS  1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT3_R_P :: reserved2 [07:06] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_RESERVED2_BITS 2
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT3_R_P :: ovr_step [05:00] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_OVR_STEP_MASK  0x0000003f
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_OVR_STEP_BITS  6
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT3_R_N
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT3_R_N :: busy [31:31] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_BUSY_MASK      0x80000000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_BUSY_ALIGN     0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_BUSY_BITS      1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_BUSY_SHIFT     31

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT3_R_N :: reserved0 [30:18] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_RESERVED0_BITS 13
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_RESERVED0_SHIFT 18

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT3_R_N :: ovr_force [17:17] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_OVR_FORCE_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_OVR_FORCE_BITS 1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_OVR_FORCE_SHIFT 17

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT3_R_N :: ovr_en [16:16] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_OVR_EN_MASK    0x00010000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_OVR_EN_ALIGN   0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_OVR_EN_BITS    1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_OVR_EN_SHIFT   16

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT3_R_N :: reserved1 [15:09] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_RESERVED1_BITS 7
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT3_R_N :: byte_sel [08:08] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_BYTE_SEL_MASK  0x00000100
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_BYTE_SEL_BITS  1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT3_R_N :: reserved2 [07:06] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_RESERVED2_BITS 2
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT3_R_N :: ovr_step [05:00] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_OVR_STEP_MASK  0x0000003f
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_OVR_STEP_BITS  6
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT3_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT_RD_EN
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT_RD_EN :: busy [31:31] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_BUSY_MASK     0x80000000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_BUSY_ALIGN    0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_BUSY_BITS     1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_BUSY_SHIFT    31

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT_RD_EN :: reserved0 [30:18] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_RESERVED0_MASK 0x7ffc0000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_RESERVED0_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_RESERVED0_BITS 13
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_RESERVED0_SHIFT 18

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT_RD_EN :: ovr_force [17:17] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_OVR_FORCE_MASK 0x00020000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_OVR_FORCE_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_OVR_FORCE_BITS 1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_OVR_FORCE_SHIFT 17

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT_RD_EN :: ovr_en [16:16] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_OVR_EN_MASK   0x00010000
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_OVR_EN_ALIGN  0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_OVR_EN_BITS   1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_OVR_EN_SHIFT  16

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT_RD_EN :: reserved1 [15:09] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_RESERVED1_MASK 0x0000fe00
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_RESERVED1_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_RESERVED1_BITS 7
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_RESERVED1_SHIFT 9

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT_RD_EN :: byte_sel [08:08] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_BYTE_SEL_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_BYTE_SEL_BITS 1
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_BYTE_SEL_SHIFT 8

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT_RD_EN :: reserved2 [07:06] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_RESERVED2_MASK 0x000000c0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_RESERVED2_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_RESERVED2_BITS 2
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_RESERVED2_SHIFT 6

/* DDR40_PHY_ECC_LANE :: VDL_OVRIDE_BYTE_BIT_RD_EN :: ovr_step [05:00] */
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_OVR_STEP_ALIGN 0
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_OVR_STEP_BITS 6
#define DDR40_PHY_ECC_LANE_VDL_OVRIDE_BYTE_BIT_RD_EN_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_R_P
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_R_P :: reserved0 [31:17] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_P_RESERVED0_MASK  0xfffe0000
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_P_RESERVED0_BITS  15
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_P_RESERVED0_SHIFT 17

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_R_P :: ovr_en [16:16] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_P_OVR_EN_MASK     0x00010000
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_P_OVR_EN_ALIGN    0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_P_OVR_EN_BITS     1
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_P_OVR_EN_SHIFT    16

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_R_P :: reserved1 [15:09] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_P_RESERVED1_MASK  0x0000fe00
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_P_RESERVED1_BITS  7
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_P_RESERVED1_SHIFT 9

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_R_P :: byte_sel [08:08] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_P_BYTE_SEL_MASK   0x00000100
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_P_BYTE_SEL_ALIGN  0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_P_BYTE_SEL_BITS   1
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_P_BYTE_SEL_SHIFT  8

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_R_P :: reserved2 [07:06] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_P_RESERVED2_MASK  0x000000c0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_P_RESERVED2_BITS  2
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_P_RESERVED2_SHIFT 6

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_R_P :: ovr_step [05:00] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_P_OVR_STEP_MASK   0x0000003f
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_P_OVR_STEP_ALIGN  0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_P_OVR_STEP_BITS   6
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_P_OVR_STEP_SHIFT  0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_R_N
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_R_N :: reserved0 [31:17] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_N_RESERVED0_MASK  0xfffe0000
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_N_RESERVED0_BITS  15
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_N_RESERVED0_SHIFT 17

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_R_N :: ovr_en [16:16] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_N_OVR_EN_MASK     0x00010000
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_N_OVR_EN_ALIGN    0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_N_OVR_EN_BITS     1
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_N_OVR_EN_SHIFT    16

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_R_N :: reserved1 [15:09] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_N_RESERVED1_MASK  0x0000fe00
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_N_RESERVED1_BITS  7
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_N_RESERVED1_SHIFT 9

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_R_N :: byte_sel [08:08] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_N_BYTE_SEL_MASK   0x00000100
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_N_BYTE_SEL_ALIGN  0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_N_BYTE_SEL_BITS   1
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_N_BYTE_SEL_SHIFT  8

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_R_N :: reserved2 [07:06] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_N_RESERVED2_MASK  0x000000c0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_N_RESERVED2_BITS  2
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_N_RESERVED2_SHIFT 6

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_R_N :: ovr_step [05:00] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_N_OVR_STEP_MASK   0x0000003f
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_N_OVR_STEP_ALIGN  0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_N_OVR_STEP_BITS   6
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_R_N_OVR_STEP_SHIFT  0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_BIT_R_P
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_BIT_R_P :: reserved0 [31:25] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_RESERVED0_MASK 0xfe000000
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_RESERVED0_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_RESERVED0_BITS 7
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_RESERVED0_SHIFT 25

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_BIT_R_P :: dm_ovr_en [24:24] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_DM_OVR_EN_MASK 0x01000000
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_DM_OVR_EN_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_DM_OVR_EN_BITS 1
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_DM_OVR_EN_SHIFT 24

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_BIT_R_P :: reserved1 [23:20] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_RESERVED1_MASK 0x00f00000
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_RESERVED1_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_RESERVED1_BITS 4
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_RESERVED1_SHIFT 20

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_BIT_R_P :: ovr_en [19:16] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_OVR_EN_MASK 0x000f0000
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_OVR_EN_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_OVR_EN_BITS 4
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_OVR_EN_SHIFT 16

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_BIT_R_P :: reserved2 [15:09] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_RESERVED2_MASK 0x0000fe00
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_RESERVED2_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_RESERVED2_BITS 7
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_RESERVED2_SHIFT 9

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_BIT_R_P :: byte_sel [08:08] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_BYTE_SEL_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_BYTE_SEL_BITS 1
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_BYTE_SEL_SHIFT 8

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_BIT_R_P :: reserved3 [07:06] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_RESERVED3_MASK 0x000000c0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_RESERVED3_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_RESERVED3_BITS 2
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_RESERVED3_SHIFT 6

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_BIT_R_P :: ovr_step [05:00] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_OVR_STEP_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_OVR_STEP_BITS 6
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_P_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_BIT_R_N
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_BIT_R_N :: reserved0 [31:25] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_RESERVED0_MASK 0xfe000000
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_RESERVED0_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_RESERVED0_BITS 7
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_RESERVED0_SHIFT 25

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_BIT_R_N :: dm_ovr_en [24:24] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_DM_OVR_EN_MASK 0x01000000
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_DM_OVR_EN_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_DM_OVR_EN_BITS 1
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_DM_OVR_EN_SHIFT 24

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_BIT_R_N :: reserved1 [23:20] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_RESERVED1_MASK 0x00f00000
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_RESERVED1_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_RESERVED1_BITS 4
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_RESERVED1_SHIFT 20

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_BIT_R_N :: ovr_en [19:16] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_OVR_EN_MASK 0x000f0000
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_OVR_EN_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_OVR_EN_BITS 4
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_OVR_EN_SHIFT 16

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_BIT_R_N :: reserved2 [15:09] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_RESERVED2_MASK 0x0000fe00
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_RESERVED2_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_RESERVED2_BITS 7
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_RESERVED2_SHIFT 9

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_BIT_R_N :: byte_sel [08:08] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_BYTE_SEL_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_BYTE_SEL_BITS 1
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_BYTE_SEL_SHIFT 8

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_BIT_R_N :: reserved3 [07:06] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_RESERVED3_MASK 0x000000c0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_RESERVED3_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_RESERVED3_BITS 2
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_RESERVED3_SHIFT 6

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_BIT_R_N :: ovr_step [05:00] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_OVR_STEP_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_OVR_STEP_BITS 6
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_R_N_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_W
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_W :: reserved0 [31:17] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_W_RESERVED0_MASK    0xfffe0000
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_W_RESERVED0_ALIGN   0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_W_RESERVED0_BITS    15
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_W_RESERVED0_SHIFT   17

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_W :: ovr_en [16:16] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_W_OVR_EN_MASK       0x00010000
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_W_OVR_EN_ALIGN      0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_W_OVR_EN_BITS       1
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_W_OVR_EN_SHIFT      16

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_W :: reserved1 [15:09] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_W_RESERVED1_MASK    0x0000fe00
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_W_RESERVED1_ALIGN   0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_W_RESERVED1_BITS    7
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_W_RESERVED1_SHIFT   9

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_W :: byte_sel [08:08] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_W_BYTE_SEL_MASK     0x00000100
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_W_BYTE_SEL_ALIGN    0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_W_BYTE_SEL_BITS     1
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_W_BYTE_SEL_SHIFT    8

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_W :: reserved2 [07:06] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_W_RESERVED2_MASK    0x000000c0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_W_RESERVED2_ALIGN   0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_W_RESERVED2_BITS    2
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_W_RESERVED2_SHIFT   6

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_W :: ovr_step [05:00] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_W_OVR_STEP_MASK     0x0000003f
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_W_OVR_STEP_ALIGN    0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_W_OVR_STEP_BITS     6
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_W_OVR_STEP_SHIFT    0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_BIT_W
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_BIT_W :: reserved0 [31:25] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_RESERVED0_MASK 0xfe000000
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_RESERVED0_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_RESERVED0_BITS 7
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_RESERVED0_SHIFT 25

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_BIT_W :: dm_ovr_en [24:24] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_DM_OVR_EN_MASK 0x01000000
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_DM_OVR_EN_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_DM_OVR_EN_BITS 1
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_DM_OVR_EN_SHIFT 24

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_BIT_W :: reserved1 [23:20] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_RESERVED1_MASK 0x00f00000
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_RESERVED1_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_RESERVED1_BITS 4
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_RESERVED1_SHIFT 20

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_BIT_W :: ovr_en [19:16] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_OVR_EN_MASK   0x000f0000
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_OVR_EN_ALIGN  0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_OVR_EN_BITS   4
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_OVR_EN_SHIFT  16

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_BIT_W :: reserved2 [15:09] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_RESERVED2_MASK 0x0000fe00
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_RESERVED2_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_RESERVED2_BITS 7
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_RESERVED2_SHIFT 9

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_BIT_W :: byte_sel [08:08] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_BYTE_SEL_MASK 0x00000100
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_BYTE_SEL_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_BYTE_SEL_BITS 1
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_BYTE_SEL_SHIFT 8

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_BIT_W :: reserved3 [07:06] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_RESERVED3_MASK 0x000000c0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_RESERVED3_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_RESERVED3_BITS 2
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_RESERVED3_SHIFT 6

/* DDR40_PHY_ECC_LANE :: DYN_VDL_OVRIDE_BYTE_BIT_W :: ovr_step [05:00] */
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_OVR_STEP_MASK 0x0000003f
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_OVR_STEP_ALIGN 0
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_OVR_STEP_BITS 6
#define DDR40_PHY_ECC_LANE_DYN_VDL_OVRIDE_BYTE_BIT_W_OVR_STEP_SHIFT 0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: READ_DATA_DLY
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: READ_DATA_DLY :: reserved0 [31:03] */
#define DDR40_PHY_ECC_LANE_READ_DATA_DLY_RESERVED0_MASK            0xfffffff8
#define DDR40_PHY_ECC_LANE_READ_DATA_DLY_RESERVED0_ALIGN           0
#define DDR40_PHY_ECC_LANE_READ_DATA_DLY_RESERVED0_BITS            29
#define DDR40_PHY_ECC_LANE_READ_DATA_DLY_RESERVED0_SHIFT           3

/* DDR40_PHY_ECC_LANE :: READ_DATA_DLY :: rd_data_dly [02:00] */
#define DDR40_PHY_ECC_LANE_READ_DATA_DLY_RD_DATA_DLY_MASK          0x00000007
#define DDR40_PHY_ECC_LANE_READ_DATA_DLY_RD_DATA_DLY_ALIGN         0
#define DDR40_PHY_ECC_LANE_READ_DATA_DLY_RD_DATA_DLY_BITS          3
#define DDR40_PHY_ECC_LANE_READ_DATA_DLY_RD_DATA_DLY_SHIFT         0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: READ_CONTROL
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: READ_CONTROL :: reserved0 [31:03] */
#define DDR40_PHY_ECC_LANE_READ_CONTROL_RESERVED0_MASK             0xfffffff8
#define DDR40_PHY_ECC_LANE_READ_CONTROL_RESERVED0_ALIGN            0
#define DDR40_PHY_ECC_LANE_READ_CONTROL_RESERVED0_BITS             29
#define DDR40_PHY_ECC_LANE_READ_CONTROL_RESERVED0_SHIFT            3

/* DDR40_PHY_ECC_LANE :: READ_CONTROL :: dq_odt_enable [02:02] */
#define DDR40_PHY_ECC_LANE_READ_CONTROL_DQ_ODT_ENABLE_MASK         0x00000004
#define DDR40_PHY_ECC_LANE_READ_CONTROL_DQ_ODT_ENABLE_ALIGN        0
#define DDR40_PHY_ECC_LANE_READ_CONTROL_DQ_ODT_ENABLE_BITS         1
#define DDR40_PHY_ECC_LANE_READ_CONTROL_DQ_ODT_ENABLE_SHIFT        2

/* DDR40_PHY_ECC_LANE :: READ_CONTROL :: dq_odt_te_adj [01:01] */
#define DDR40_PHY_ECC_LANE_READ_CONTROL_DQ_ODT_TE_ADJ_MASK         0x00000002
#define DDR40_PHY_ECC_LANE_READ_CONTROL_DQ_ODT_TE_ADJ_ALIGN        0
#define DDR40_PHY_ECC_LANE_READ_CONTROL_DQ_ODT_TE_ADJ_BITS         1
#define DDR40_PHY_ECC_LANE_READ_CONTROL_DQ_ODT_TE_ADJ_SHIFT        1

/* DDR40_PHY_ECC_LANE :: READ_CONTROL :: dq_odt_le_adj [00:00] */
#define DDR40_PHY_ECC_LANE_READ_CONTROL_DQ_ODT_LE_ADJ_MASK         0x00000001
#define DDR40_PHY_ECC_LANE_READ_CONTROL_DQ_ODT_LE_ADJ_ALIGN        0
#define DDR40_PHY_ECC_LANE_READ_CONTROL_DQ_ODT_LE_ADJ_BITS         1
#define DDR40_PHY_ECC_LANE_READ_CONTROL_DQ_ODT_LE_ADJ_SHIFT        0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: READ_FIFO_DATA_0
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: READ_FIFO_DATA_0 :: reserved0 [31:12] */
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_0_RESERVED0_MASK         0xfffff000
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_0_RESERVED0_ALIGN        0
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_0_RESERVED0_BITS         20
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_0_RESERVED0_SHIFT        12

/* DDR40_PHY_ECC_LANE :: READ_FIFO_DATA_0 :: data_p [11:08] */
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_0_DATA_P_MASK            0x00000f00
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_0_DATA_P_ALIGN           0
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_0_DATA_P_BITS            4
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_0_DATA_P_SHIFT           8

/* DDR40_PHY_ECC_LANE :: READ_FIFO_DATA_0 :: reserved1 [07:04] */
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_0_RESERVED1_MASK         0x000000f0
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_0_RESERVED1_ALIGN        0
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_0_RESERVED1_BITS         4
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_0_RESERVED1_SHIFT        4

/* DDR40_PHY_ECC_LANE :: READ_FIFO_DATA_0 :: data_n [03:00] */
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_0_DATA_N_MASK            0x0000000f
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_0_DATA_N_ALIGN           0
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_0_DATA_N_BITS            4
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_0_DATA_N_SHIFT           0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: READ_FIFO_DATA_1
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: READ_FIFO_DATA_1 :: reserved0 [31:12] */
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_1_RESERVED0_MASK         0xfffff000
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_1_RESERVED0_ALIGN        0
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_1_RESERVED0_BITS         20
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_1_RESERVED0_SHIFT        12

/* DDR40_PHY_ECC_LANE :: READ_FIFO_DATA_1 :: data_p [11:08] */
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_1_DATA_P_MASK            0x00000f00
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_1_DATA_P_ALIGN           0
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_1_DATA_P_BITS            4
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_1_DATA_P_SHIFT           8

/* DDR40_PHY_ECC_LANE :: READ_FIFO_DATA_1 :: reserved1 [07:04] */
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_1_RESERVED1_MASK         0x000000f0
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_1_RESERVED1_ALIGN        0
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_1_RESERVED1_BITS         4
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_1_RESERVED1_SHIFT        4

/* DDR40_PHY_ECC_LANE :: READ_FIFO_DATA_1 :: data_n [03:00] */
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_1_DATA_N_MASK            0x0000000f
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_1_DATA_N_ALIGN           0
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_1_DATA_N_BITS            4
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_1_DATA_N_SHIFT           0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: READ_FIFO_DATA_2
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: READ_FIFO_DATA_2 :: reserved0 [31:12] */
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_2_RESERVED0_MASK         0xfffff000
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_2_RESERVED0_ALIGN        0
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_2_RESERVED0_BITS         20
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_2_RESERVED0_SHIFT        12

/* DDR40_PHY_ECC_LANE :: READ_FIFO_DATA_2 :: data_p [11:08] */
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_2_DATA_P_MASK            0x00000f00
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_2_DATA_P_ALIGN           0
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_2_DATA_P_BITS            4
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_2_DATA_P_SHIFT           8

/* DDR40_PHY_ECC_LANE :: READ_FIFO_DATA_2 :: reserved1 [07:04] */
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_2_RESERVED1_MASK         0x000000f0
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_2_RESERVED1_ALIGN        0
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_2_RESERVED1_BITS         4
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_2_RESERVED1_SHIFT        4

/* DDR40_PHY_ECC_LANE :: READ_FIFO_DATA_2 :: data_n [03:00] */
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_2_DATA_N_MASK            0x0000000f
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_2_DATA_N_ALIGN           0
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_2_DATA_N_BITS            4
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_2_DATA_N_SHIFT           0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: READ_FIFO_DATA_3
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: READ_FIFO_DATA_3 :: reserved0 [31:12] */
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_3_RESERVED0_MASK         0xfffff000
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_3_RESERVED0_ALIGN        0
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_3_RESERVED0_BITS         20
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_3_RESERVED0_SHIFT        12

/* DDR40_PHY_ECC_LANE :: READ_FIFO_DATA_3 :: data_p [11:08] */
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_3_DATA_P_MASK            0x00000f00
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_3_DATA_P_ALIGN           0
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_3_DATA_P_BITS            4
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_3_DATA_P_SHIFT           8

/* DDR40_PHY_ECC_LANE :: READ_FIFO_DATA_3 :: reserved1 [07:04] */
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_3_RESERVED1_MASK         0x000000f0
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_3_RESERVED1_ALIGN        0
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_3_RESERVED1_BITS         4
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_3_RESERVED1_SHIFT        4

/* DDR40_PHY_ECC_LANE :: READ_FIFO_DATA_3 :: data_n [03:00] */
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_3_DATA_N_MASK            0x0000000f
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_3_DATA_N_ALIGN           0
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_3_DATA_N_BITS            4
#define DDR40_PHY_ECC_LANE_READ_FIFO_DATA_3_DATA_N_SHIFT           0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: READ_FIFO_STATUS
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: READ_FIFO_STATUS :: reserved0 [31:04] */
#define DDR40_PHY_ECC_LANE_READ_FIFO_STATUS_RESERVED0_MASK         0xfffffff0
#define DDR40_PHY_ECC_LANE_READ_FIFO_STATUS_RESERVED0_ALIGN        0
#define DDR40_PHY_ECC_LANE_READ_FIFO_STATUS_RESERVED0_BITS         28
#define DDR40_PHY_ECC_LANE_READ_FIFO_STATUS_RESERVED0_SHIFT        4

/* DDR40_PHY_ECC_LANE :: READ_FIFO_STATUS :: status0 [03:00] */
#define DDR40_PHY_ECC_LANE_READ_FIFO_STATUS_STATUS0_MASK           0x0000000f
#define DDR40_PHY_ECC_LANE_READ_FIFO_STATUS_STATUS0_ALIGN          0
#define DDR40_PHY_ECC_LANE_READ_FIFO_STATUS_STATUS0_BITS           4
#define DDR40_PHY_ECC_LANE_READ_FIFO_STATUS_STATUS0_SHIFT          0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: READ_FIFO_CLEAR
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: READ_FIFO_CLEAR :: reserved0 [31:01] */
#define DDR40_PHY_ECC_LANE_READ_FIFO_CLEAR_RESERVED0_MASK          0xfffffffe
#define DDR40_PHY_ECC_LANE_READ_FIFO_CLEAR_RESERVED0_ALIGN         0
#define DDR40_PHY_ECC_LANE_READ_FIFO_CLEAR_RESERVED0_BITS          31
#define DDR40_PHY_ECC_LANE_READ_FIFO_CLEAR_RESERVED0_SHIFT         1

/* DDR40_PHY_ECC_LANE :: READ_FIFO_CLEAR :: clear [00:00] */
#define DDR40_PHY_ECC_LANE_READ_FIFO_CLEAR_CLEAR_MASK              0x00000001
#define DDR40_PHY_ECC_LANE_READ_FIFO_CLEAR_CLEAR_ALIGN             0
#define DDR40_PHY_ECC_LANE_READ_FIFO_CLEAR_CLEAR_BITS              1
#define DDR40_PHY_ECC_LANE_READ_FIFO_CLEAR_CLEAR_SHIFT             0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: IDLE_PAD_CONTROL
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: IDLE_PAD_CONTROL :: idle [31:31] */
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_IDLE_MASK              0x80000000
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_IDLE_ALIGN             0
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_IDLE_BITS              1
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_IDLE_SHIFT             31

/* DDR40_PHY_ECC_LANE :: IDLE_PAD_CONTROL :: reserved0 [30:24] */
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_RESERVED0_MASK         0x7f000000
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_RESERVED0_ALIGN        0
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_RESERVED0_BITS         7
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_RESERVED0_SHIFT        24

/* DDR40_PHY_ECC_LANE :: IDLE_PAD_CONTROL :: auto_dq_rxenb_mode [23:22] */
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_AUTO_DQ_RXENB_MODE_MASK 0x00c00000
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_AUTO_DQ_RXENB_MODE_ALIGN 0
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_AUTO_DQ_RXENB_MODE_BITS 2
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_AUTO_DQ_RXENB_MODE_SHIFT 22

/* DDR40_PHY_ECC_LANE :: IDLE_PAD_CONTROL :: auto_dq_iddq_mode [21:20] */
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_AUTO_DQ_IDDQ_MODE_MASK 0x00300000
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_AUTO_DQ_IDDQ_MODE_ALIGN 0
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_AUTO_DQ_IDDQ_MODE_BITS 2
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_AUTO_DQ_IDDQ_MODE_SHIFT 20

/* DDR40_PHY_ECC_LANE :: IDLE_PAD_CONTROL :: dq_rxenb [19:19] */
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQ_RXENB_MASK          0x00080000
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQ_RXENB_ALIGN         0
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQ_RXENB_BITS          1
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQ_RXENB_SHIFT         19

/* DDR40_PHY_ECC_LANE :: IDLE_PAD_CONTROL :: dq_iddq [18:18] */
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQ_IDDQ_MASK           0x00040000
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQ_IDDQ_ALIGN          0
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQ_IDDQ_BITS           1
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQ_IDDQ_SHIFT          18

/* DDR40_PHY_ECC_LANE :: IDLE_PAD_CONTROL :: dq_reb [17:17] */
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQ_REB_MASK            0x00020000
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQ_REB_ALIGN           0
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQ_REB_BITS            1
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQ_REB_SHIFT           17

/* DDR40_PHY_ECC_LANE :: IDLE_PAD_CONTROL :: dq_oeb [16:16] */
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQ_OEB_MASK            0x00010000
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQ_OEB_ALIGN           0
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQ_OEB_BITS            1
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQ_OEB_SHIFT           16

/* DDR40_PHY_ECC_LANE :: IDLE_PAD_CONTROL :: read_enb_rxenb [15:15] */
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_READ_ENB_RXENB_MASK    0x00008000
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_READ_ENB_RXENB_ALIGN   0
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_READ_ENB_RXENB_BITS    1
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_READ_ENB_RXENB_SHIFT   15

/* DDR40_PHY_ECC_LANE :: IDLE_PAD_CONTROL :: read_enb_iddq [14:14] */
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_READ_ENB_IDDQ_MASK     0x00004000
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_READ_ENB_IDDQ_ALIGN    0
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_READ_ENB_IDDQ_BITS     1
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_READ_ENB_IDDQ_SHIFT    14

/* DDR40_PHY_ECC_LANE :: IDLE_PAD_CONTROL :: read_enb_reb [13:13] */
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_READ_ENB_REB_MASK      0x00002000
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_READ_ENB_REB_ALIGN     0
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_READ_ENB_REB_BITS      1
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_READ_ENB_REB_SHIFT     13

/* DDR40_PHY_ECC_LANE :: IDLE_PAD_CONTROL :: read_enb_oeb [12:12] */
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_READ_ENB_OEB_MASK      0x00001000
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_READ_ENB_OEB_ALIGN     0
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_READ_ENB_OEB_BITS      1
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_READ_ENB_OEB_SHIFT     12

/* DDR40_PHY_ECC_LANE :: IDLE_PAD_CONTROL :: dqs_rxenb [11:11] */
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQS_RXENB_MASK         0x00000800
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQS_RXENB_ALIGN        0
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQS_RXENB_BITS         1
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQS_RXENB_SHIFT        11

/* DDR40_PHY_ECC_LANE :: IDLE_PAD_CONTROL :: dqs_iddq [10:10] */
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQS_IDDQ_MASK          0x00000400
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQS_IDDQ_ALIGN         0
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQS_IDDQ_BITS          1
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQS_IDDQ_SHIFT         10

/* DDR40_PHY_ECC_LANE :: IDLE_PAD_CONTROL :: dqs_reb [09:09] */
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQS_REB_MASK           0x00000200
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQS_REB_ALIGN          0
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQS_REB_BITS           1
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQS_REB_SHIFT          9

/* DDR40_PHY_ECC_LANE :: IDLE_PAD_CONTROL :: dqs_oeb [08:08] */
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQS_OEB_MASK           0x00000100
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQS_OEB_ALIGN          0
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQS_OEB_BITS           1
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_DQS_OEB_SHIFT          8

/* DDR40_PHY_ECC_LANE :: IDLE_PAD_CONTROL :: reserved1 [07:00] */
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_RESERVED1_MASK         0x000000ff
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_RESERVED1_ALIGN        0
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_RESERVED1_BITS         8
#define DDR40_PHY_ECC_LANE_IDLE_PAD_CONTROL_RESERVED1_SHIFT        0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: DRIVE_PAD_CTL
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: DRIVE_PAD_CTL :: reserved0 [31:12] */
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_RESERVED0_MASK            0xfffff000
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_RESERVED0_ALIGN           0
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_RESERVED0_BITS            20
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_RESERVED0_SHIFT           12

/* DDR40_PHY_ECC_LANE :: DRIVE_PAD_CTL :: no_dqs_rd [11:11] */
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_NO_DQS_RD_MASK            0x00000800
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_NO_DQS_RD_ALIGN           0
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_NO_DQS_RD_BITS            1
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_NO_DQS_RD_SHIFT           11

/* DDR40_PHY_ECC_LANE :: DRIVE_PAD_CTL :: dqs_always_on [10:10] */
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_DQS_ALWAYS_ON_MASK        0x00000400
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_DQS_ALWAYS_ON_ALIGN       0
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_DQS_ALWAYS_ON_BITS        1
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_DQS_ALWAYS_ON_SHIFT       10

/* DDR40_PHY_ECC_LANE :: DRIVE_PAD_CTL :: dqs_tx_dis [09:09] */
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_DQS_TX_DIS_MASK           0x00000200
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_DQS_TX_DIS_ALIGN          0
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_DQS_TX_DIS_BITS           1
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_DQS_TX_DIS_SHIFT          9

/* DDR40_PHY_ECC_LANE :: DRIVE_PAD_CTL :: half_strength_ck [08:08] */
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_HALF_STRENGTH_CK_MASK     0x00000100
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_HALF_STRENGTH_CK_ALIGN    0
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_HALF_STRENGTH_CK_BITS     1
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_HALF_STRENGTH_CK_SHIFT    8

/* DDR40_PHY_ECC_LANE :: DRIVE_PAD_CTL :: half_strength [07:07] */
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_HALF_STRENGTH_MASK        0x00000080
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_HALF_STRENGTH_ALIGN       0
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_HALF_STRENGTH_BITS        1
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_HALF_STRENGTH_SHIFT       7

/* DDR40_PHY_ECC_LANE :: DRIVE_PAD_CTL :: rdqs_en [06:06] */
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_RDQS_EN_MASK              0x00000040
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_RDQS_EN_ALIGN             0
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_RDQS_EN_BITS              1
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_RDQS_EN_SHIFT             6

/* DDR40_PHY_ECC_LANE :: DRIVE_PAD_CTL :: gddr_symmetry [05:05] */
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_GDDR_SYMMETRY_MASK        0x00000020
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_GDDR_SYMMETRY_ALIGN       0
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_GDDR_SYMMETRY_BITS        1
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_GDDR_SYMMETRY_SHIFT       5

/* DDR40_PHY_ECC_LANE :: DRIVE_PAD_CTL :: vddo_volts [04:03] */
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_VDDO_VOLTS_MASK           0x00000018
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_VDDO_VOLTS_ALIGN          0
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_VDDO_VOLTS_BITS           2
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_VDDO_VOLTS_SHIFT          3

/* DDR40_PHY_ECC_LANE :: DRIVE_PAD_CTL :: rt60b [02:02] */
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_RT60B_MASK                0x00000004
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_RT60B_ALIGN               0
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_RT60B_BITS                1
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_RT60B_SHIFT               2

/* DDR40_PHY_ECC_LANE :: DRIVE_PAD_CTL :: rt120b_g [01:01] */
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_RT120B_G_MASK             0x00000002
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_RT120B_G_ALIGN            0
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_RT120B_G_BITS             1
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_RT120B_G_SHIFT            1

/* DDR40_PHY_ECC_LANE :: DRIVE_PAD_CTL :: g_ddr [00:00] */
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_G_DDR_MASK                0x00000001
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_G_DDR_ALIGN               0
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_G_DDR_BITS                1
#define DDR40_PHY_ECC_LANE_DRIVE_PAD_CTL_G_DDR_SHIFT               0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: CLOCK_PAD_DISABLE
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: CLOCK_PAD_DISABLE :: reserved0 [31:03] */
#define DDR40_PHY_ECC_LANE_CLOCK_PAD_DISABLE_RESERVED0_MASK        0xfffffff8
#define DDR40_PHY_ECC_LANE_CLOCK_PAD_DISABLE_RESERVED0_ALIGN       0
#define DDR40_PHY_ECC_LANE_CLOCK_PAD_DISABLE_RESERVED0_BITS        29
#define DDR40_PHY_ECC_LANE_CLOCK_PAD_DISABLE_RESERVED0_SHIFT       3

/* DDR40_PHY_ECC_LANE :: CLOCK_PAD_DISABLE :: dm_pad_dis [02:02] */
#define DDR40_PHY_ECC_LANE_CLOCK_PAD_DISABLE_DM_PAD_DIS_MASK       0x00000004
#define DDR40_PHY_ECC_LANE_CLOCK_PAD_DISABLE_DM_PAD_DIS_ALIGN      0
#define DDR40_PHY_ECC_LANE_CLOCK_PAD_DISABLE_DM_PAD_DIS_BITS       1
#define DDR40_PHY_ECC_LANE_CLOCK_PAD_DISABLE_DM_PAD_DIS_SHIFT      2

/* DDR40_PHY_ECC_LANE :: CLOCK_PAD_DISABLE :: reserved1 [01:00] */
#define DDR40_PHY_ECC_LANE_CLOCK_PAD_DISABLE_RESERVED1_MASK        0x00000003
#define DDR40_PHY_ECC_LANE_CLOCK_PAD_DISABLE_RESERVED1_ALIGN       0
#define DDR40_PHY_ECC_LANE_CLOCK_PAD_DISABLE_RESERVED1_BITS        2
#define DDR40_PHY_ECC_LANE_CLOCK_PAD_DISABLE_RESERVED1_SHIFT       0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: WR_PREAMBLE_MODE
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: WR_PREAMBLE_MODE :: reserved0 [31:02] */
#define DDR40_PHY_ECC_LANE_WR_PREAMBLE_MODE_RESERVED0_MASK         0xfffffffc
#define DDR40_PHY_ECC_LANE_WR_PREAMBLE_MODE_RESERVED0_ALIGN        0
#define DDR40_PHY_ECC_LANE_WR_PREAMBLE_MODE_RESERVED0_BITS         30
#define DDR40_PHY_ECC_LANE_WR_PREAMBLE_MODE_RESERVED0_SHIFT        2

/* DDR40_PHY_ECC_LANE :: WR_PREAMBLE_MODE :: long [01:01] */
#define DDR40_PHY_ECC_LANE_WR_PREAMBLE_MODE_LONG_MASK              0x00000002
#define DDR40_PHY_ECC_LANE_WR_PREAMBLE_MODE_LONG_ALIGN             0
#define DDR40_PHY_ECC_LANE_WR_PREAMBLE_MODE_LONG_BITS              1
#define DDR40_PHY_ECC_LANE_WR_PREAMBLE_MODE_LONG_SHIFT             1

/* DDR40_PHY_ECC_LANE :: WR_PREAMBLE_MODE :: mode [00:00] */
#define DDR40_PHY_ECC_LANE_WR_PREAMBLE_MODE_MODE_MASK              0x00000001
#define DDR40_PHY_ECC_LANE_WR_PREAMBLE_MODE_MODE_ALIGN             0
#define DDR40_PHY_ECC_LANE_WR_PREAMBLE_MODE_MODE_BITS              1
#define DDR40_PHY_ECC_LANE_WR_PREAMBLE_MODE_MODE_SHIFT             0


/****************************************************************************
 * DDR40_PHY_ECC_LANE :: PHYBIST_VDL_ADJ
 ***************************************************************************/
/* DDR40_PHY_ECC_LANE :: PHYBIST_VDL_ADJ :: reserved0 [31:29] */
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_RESERVED0_MASK          0xe0000000
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_RESERVED0_ALIGN         0
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_RESERVED0_BITS          3
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_RESERVED0_SHIFT         29

/* DDR40_PHY_ECC_LANE :: PHYBIST_VDL_ADJ :: dq1_vdl_adj [28:24] */
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_DQ1_VDL_ADJ_MASK        0x1f000000
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_DQ1_VDL_ADJ_ALIGN       0
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_DQ1_VDL_ADJ_BITS        5
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_DQ1_VDL_ADJ_SHIFT       24

/* DDR40_PHY_ECC_LANE :: PHYBIST_VDL_ADJ :: reserved1 [23:21] */
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_RESERVED1_MASK          0x00e00000
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_RESERVED1_ALIGN         0
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_RESERVED1_BITS          3
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_RESERVED1_SHIFT         21

/* DDR40_PHY_ECC_LANE :: PHYBIST_VDL_ADJ :: dq0_vdl_adj [20:16] */
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_DQ0_VDL_ADJ_MASK        0x001f0000
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_DQ0_VDL_ADJ_ALIGN       0
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_DQ0_VDL_ADJ_BITS        5
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_DQ0_VDL_ADJ_SHIFT       16

/* DDR40_PHY_ECC_LANE :: PHYBIST_VDL_ADJ :: reserved2 [15:13] */
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_RESERVED2_MASK          0x0000e000
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_RESERVED2_ALIGN         0
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_RESERVED2_BITS          3
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_RESERVED2_SHIFT         13

/* DDR40_PHY_ECC_LANE :: PHYBIST_VDL_ADJ :: dqs1_vdl_adj [12:08] */
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_DQS1_VDL_ADJ_MASK       0x00001f00
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_DQS1_VDL_ADJ_ALIGN      0
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_DQS1_VDL_ADJ_BITS       5
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_DQS1_VDL_ADJ_SHIFT      8

/* DDR40_PHY_ECC_LANE :: PHYBIST_VDL_ADJ :: reserved3 [07:05] */
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_RESERVED3_MASK          0x000000e0
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_RESERVED3_ALIGN         0
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_RESERVED3_BITS          3
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_RESERVED3_SHIFT         5

/* DDR40_PHY_ECC_LANE :: PHYBIST_VDL_ADJ :: dqs0_vdl_adj [04:00] */
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_DQS0_VDL_ADJ_MASK       0x0000001f
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_DQS0_VDL_ADJ_ALIGN      0
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_DQS0_VDL_ADJ_BITS       5
#define DDR40_PHY_ECC_LANE_PHYBIST_VDL_ADJ_DQS0_VDL_ADJ_SHIFT      0


/****************************************************************************
 * Datatype Definitions.
 ***************************************************************************/
#endif /* #ifndef DDR40_H__ */

/* End of File */

