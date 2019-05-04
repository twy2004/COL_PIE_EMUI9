/*
 * rt9466.c
 *
 * rt9466 driver
 *
 * Copyright (c) 2012-2018 Richtek Technology Corp.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 */

#ifndef __RT9466_CHARGER_H
#define __RT9466_CHARGER_H

#define RT9466_SLAVE_ADDR	0x53
#define RT9466_VENDOR_ID	0x80
#define RT9466_CHIP_REV_E1	0x01
#define RT9466_CHIP_REV_E2	0x02
#define RT9466_CHIP_REV_E3	0x03
#define RT9466_CHIP_REV_E4	0x04

enum rt9466_reg_addr {
	RT9466_REG_CORE_CTRL0,
	RT9466_REG_CHG_CTRL1,
	RT9466_REG_CHG_CTRL2,
	RT9466_REG_CHG_CTRL3,
	RT9466_REG_CHG_CTRL4,
	RT9466_REG_CHG_CTRL5,
	RT9466_REG_CHG_CTRL6,
	RT9466_REG_CHG_CTRL7,
	RT9466_REG_CHG_CTRL8,
	RT9466_REG_CHG_CTRL9,
	RT9466_REG_CHG_CTRL10,
	RT9466_REG_CHG_CTRL11,
	RT9466_REG_CHG_CTRL12,
	RT9466_REG_CHG_CTRL13,
	RT9466_REG_CHG_CTRL14,
	RT9466_REG_CHG_CTRL15,
	RT9466_REG_CHG_CTRL16,
	RT9466_REG_CHG_ADC,
	RT9466_REG_CHG_CTRL19 = 0x18,
	RT9466_REG_CHG_CTRL17,
	RT9466_REG_CHG_CTRL18,
	RT9466_REG_CHG_HIDDEN_CTRL1 = 0x20,
	RT9466_REG_CHG_HIDDEN_CTRL2,
	RT9466_REG_CHG_HIDDEN_CTRL4 = 0x23,
	RT9466_REG_CHG_HIDDEN_CTRL6 = 0x25,
	RT9466_REG_CHG_HIDDEN_CTRL7,
	RT9466_REG_CHG_HIDDEN_CTRL8,
	RT9466_REG_CHG_HIDDEN_CTRL9,
	RT9466_REG_CHG_HIDDEN_CTRL15 = 0x2E,
	RT9466_REG_DEVICE_ID = 0x40,
	RT9466_REG_CHG_STAT = 0x42,
	RT9466_REG_CHG_NTC,
	RT9466_REG_ADC_DATA_H,
	RT9466_REG_ADC_DATA_L,
	RT9466_REG_CHG_STATC = 0x50,
	RT9466_REG_CHG_FAULT,
	RT9466_REG_TS_STATC,
	RT9466_REG_CHG_IRQ1,
	RT9466_REG_CHG_IRQ2,
	RT9466_REG_CHG_IRQ3,
	RT9466_REG_CHG_STATC_CTRL = 0x60,
	RT9466_REG_CHG_FAULT_CTRL,
	RT9466_REG_TS_STATC_CTRL,
	RT9466_REG_CHG_IRQ1_CTRL,
	RT9466_REG_CHG_IRQ2_CTRL,
	RT9466_REG_CHG_IRQ3_CTRL,
	RT9466_REG_MAX,
};

<<<<<<< HEAD
/*************************marco define area***************************/
#define RT9466_SLAVE_ADDR                  (0x53)
#define RT9466_VENDOR_ID                   (0x80)
#define RT9466_CHIP_REV_E1                 (0x01)
#define RT9466_CHIP_REV_E2                 (0x02)
#define RT9466_CHIP_REV_E3                 (0x03)
#define RT9466_CHIP_REV_E4                 (0x04)

/* uA */
#define RT9466_ICHG_NUM                    (64)
#define RT9466_ICHG_MIN                    (100)
#define RT9466_ICHG_MAX                    (5000)
#define RT9466_ICHG_STEP                   (100)

/* uA */
#define RT9466_IEOC_NUM                    (16)
#define RT9466_IEOC_MIN                    (100)
#define RT9466_IEOC_MAX                    (850)
#define RT9466_IEOC_STEP                   (50)

/* mV */
#define RT9466_MIVR_NUM                    (128)
#define RT9466_MIVR_MIN                    (3900)
#define RT9466_MIVR_MAX                    (13400)
#define RT9466_MIVR_STEP                   (100)

/* mA */
#define RT9466_AICR_NUM                    (64)
#define RT9466_AICR_MIN                    (100)
#define RT9466_AICR_MAX                    (3250)
#define RT9466_AICR_STEP                   (50)

/* mV */
#define RT9466_CV_NUM                      (128)
#define RT9466_CV_MIN                      (3900)
#define RT9466_CV_MAX                      (4710)
#define RT9466_CV_STEP                     (10)

/* mV */
#define RT9466_BOOST_VOREG_NUM             (64)
#define RT9466_BOOST_VOREG_MIN             (4425)
#define RT9466_BOOST_VOREG_MAX             (5825)
#define RT9466_BOOST_VOREG_STEP            (25)

/* mV */
#define RT9466_VPREC_NUM                   (16)
#define RT9466_VPREC_MIN                   (2000)
#define RT9466_VPREC_MAX                   (3500)
#define RT9466_VPREC_STEP                  (100)

/* mA */
#define RT9466_IPREC_NUM                   (16)
#define RT9466_IPREC_MIN                   (100)
#define RT9466_IPREC_MAX                   (850)
#define RT9466_IPREC_STEP                  (50)

/* IR compensation */
/* mohm */
#define RT9466_IRCMP_RES_NUM               (8)
#define RT9466_IRCMP_RES_MIN               (0)
#define RT9466_IRCMP_RES_MAX               (175)
#define RT9466_IRCMP_RES_STEP              (25)

/* IR compensation maximum voltage clamp */
/* mV */
#define RT9466_IRCMP_VCLAMP_NUM            (8)
#define RT9466_IRCMP_VCLAMP_MIN            (0)
#define RT9466_IRCMP_VCLAMP_MAX            (224)
#define RT9466_IRCMP_VCLAMP_STEP           (32)

/* PE+20 voltage */
/* mV */
#define RT9466_PEP20_VOLT_NUM              (19)
#define RT9466_PEP20_VOLT_MIN              (5500)
#define RT9466_PEP20_VOLT_MAX              (14500)
#define RT9466_PEP20_VOLT_STEP             (500)

/* IIN VTH */
/* mV */
#define RT9466_AICL_VTH_NUM                (8)
#define RT9466_AICL_VTH_MIN                (4100)
#define RT9466_AICL_VTH_MAX                (4800)
#define RT9466_AICL_VTH_STEP               (100)

/* ADC unit/offset */
#define RT9466_ADC_UNIT_VBUS_DIV5          (25)    /* mV */
#define RT9466_ADC_UNIT_VBUS_DIV2          (10)    /* mV */
#define RT9466_ADC_UNIT_VBAT               (5)     /* mV */
#define RT9466_ADC_UNIT_VSYS               (5)     /* mV */
#define RT9466_ADC_UNIT_REGN               (5)     /* mV */
#define RT9466_ADC_UNIT_TS_BAT             (25)    /* 0.01% */
#define RT9466_ADC_UNIT_IBUS               (50)    /* mA */
#define RT9466_ADC_UNIT_IBAT               (50)    /* mA */
#define RT9466_ADC_UNIT_TEMP_JC            (2)     /* degree */

#define RT9466_ADC_OFFSET_VBUS_DIV5        (0)     /* mV */
#define RT9466_ADC_OFFSET_VBUS_DIV2        (0)     /* mV */
#define RT9466_ADC_OFFSET_VBAT             (0)     /* mV */
#define RT9466_ADC_OFFSET_VSYS             (0)     /* mV */
#define RT9466_ADC_OFFSET_REGN             (0)     /* mV */
#define RT9466_ADC_OFFSET_TS_BAT           (0)     /* % */
#define RT9466_ADC_OFFSET_IBUS             (0)     /* mA */
#define RT9466_ADC_OFFSET_IBAT             (0)     /* mA */
#define RT9466_ADC_OFFSET_TEMP_JC          (-40)   /* degree */


/* CORE_CTRL0 0x00 */
#define RT9466_SHIFT_RST                   (7)
#define RT9466_MASK_RST                    (1 << RT9466_SHIFT_RST)

/* CHG_CTRL1 0x01 */
#define RT9466_SHIFT_OPA_MODE              (0)
#define RT9466_SHIFT_HZ_EN                 (2)
#define RT9466_SHIFT_IRQ_PULSE             (3)

#define RT9466_MASK_OPA_MODE               (1 << RT9466_SHIFT_OPA_MODE)
#define RT9466_MASK_HZ_EN                  (1 << RT9466_SHIFT_HZ_EN)
#define RT9466_MASK_IRQ_PULSE              (1 << RT9466_SHIFT_IRQ_PULSE)

/* CHG_CTRL2 0x02 */
#define RT9466_SHIFT_CHG_EN                (0)
#define RT9466_SHIFT_CFO_EN                (1)
#define RT9466_SHIFT_IINLMTSEL             (2)
#define RT9466_SHIFT_TE_EN                 (4)
#define RT9466_SHIFT_SHIPMODE              (7)

#define RT9466_MASK_CHG_EN                 (1 << RT9466_SHIFT_CHG_EN)
#define RT9466_MASK_CFO_EN                 (1 << RT9466_SHIFT_CFO_EN)
#define RT9466_MASK_IINLMTSEL              (0x0C)
#define RT9466_MASK_TE_EN                  (1 << RT9466_SHIFT_TE_EN)
#define RT9466_MASK_SHIPMODE               (1 << RT9466_SHIFT_SHIPMODE)


/* CHG_CTRL3 0x03 */
#define RT9466_SHIFT_AICR                  (2)
#define RT9466_SHIFT_AICR_EN               (1)
#define RT9466_SHIFT_ILIM_EN               (0)

#define RT9466_MASK_AICR                   (0xFC)
#define RT9466_MASK_AICR_EN                (1 << RT9466_SHIFT_AICR_EN)
#define RT9466_MASK_ILIM_EN                (1 << RT9466_SHIFT_ILIM_EN)

/* CHG_CTRL4 0x04 */
#define RT9466_SHIFT_CV                    (1)

#define RT9466_MASK_CV                     (0xFE)

/* CHG_CTRL5 0x05 */
#define RT9466_SHIFT_BOOST_VOREG           (2)

#define RT9466_MASK_BOOST_VOREG            (0xFC)

/* CHG_CTRL6 0x06 */
#define RT9466_SHIFT_MIVR                  (1)
#define RT9466_SHIFT_MIVR_EN               (0)

#define RT9466_MASK_MIVR                   (0xFE)
#define RT9466_MASK_MIVR_EN                (1 << RT9466_SHIFT_MIVR_EN)

/* CHG_CTRL7 0x07 */
#define RT9466_SHIFT_ICHG                  (2)

#define RT9466_MASK_ICHG                   (0xFC)

/* CHG_CTRL8 0x08 */
#define RT9466_SHIFT_VPREC                 (4)
#define RT9466_SHIFT_IPREC                 (0)

#define RT9466_MASK_VPREC                  (0xF0)
#define RT9466_MASK_IPREC                  (0x0F)

/* CHG_CTRL9 0x09 */
#define RT9466_SHIFT_IEOC                  (4)

#define RT9466_MASK_IEOC                   (0xF0)
#define RT9466_MASK_CHG_TDEG_EOC           (0x07)

/* CHG_CTRL10 0x0A */
#define RT9466_SHIFT_BOOST_OC              (0)

#define RT9466_MASK_BOOST_OC               (0x07)

/* CHG_CTRL12 0x0C */
#define RT9466_SHIFT_TMR_EN                (1)
#define RT9466_SHIFT_WT_FC                 (5)

#define RT9466_MASK_TMR_EN                 (1 << RT9466_SHIFT_TMR_EN)
#define RT9466_MASK_WT_FC                  (0xE0)

/* CHG_CTRL13 0x0D */
#define RT9466_SHIFT_WDT_EN                (7)
#define RT9466_SHIFT_WDT                   (4)
#define RT9466_SHIFT_IRQ_REZ               (0)

#define RT9466_MASK_WDT_EN                 (1 << RT9466_SHIFT_WDT_EN)
#define RT9466_MASK_WDT                    (0x30)
#define RT9466_MASK_IRQ_REZ                (1 << RT9466_SHIFT_IRQ_REZ)

/* CHG_CTRL14 0x0E */
#define RT9466_SHIFT_AICL_MEAS             (7)
#define RT9466_SHIFT_AICL_VTH              (0)

#define RT9466_MASK_AICL_MEAS              (1 << RT9466_SHIFT_AICL_MEAS)
#define RT9466_MASK_AICL_VTH               (0x07)

/* CHG_CTRL16 0x10 */
#define RT9466_SHIFT_JEITA_EN              (4)

#define RT9466_MASK_JEITA_EN               (1 << RT9466_SHIFT_JEITA_EN)

/* CHG_ADC 0x11 */
#define RT9466_SHIFT_ADC_IN_SEL            (4)
#define RT9466_SHIFT_ADC_START             (0)

#define RT9466_MASK_ADC_IN_SEL             (0xF0)
#define RT9466_MASK_ADC_START              (1 << RT9466_SHIFT_ADC_START)

/* CHG_CTRL17 0x19 */
#define RT9466_SHIFT_PUMPX_EN              (7)
#define RT9466_SHIFT_PUMPX_20_10           (6) /* Version of PE */
#define RT9466_SHIFT_PUMPX_UP_DN           (5)
#define RT9466_SHIFT_PUMPX_DEC             (0)


#define RT9466_MASK_PUMPX_EN               (1 << RT9466_SHIFT_PUMPX_EN)
#define RT9466_MASK_PUMPX_20_10            (1 << RT9466_SHIFT_PUMPX_20_10)
#define RT9466_MASK_PUMPX_UP_DN            (1 << RT9466_SHIFT_PUMPX_UP_DN)
#define RT9466_MASK_PUMPX_DEC              (0x1F)

/* CHG_CTRL18 0x1A */
#define RT9466_SHIFT_IRCMP_RES             (3)
#define RT9466_SHIFT_IRCMP_VCLAMP          (0)

#define RT9466_MASK_IRCMP_RES              (0x38)
#define RT9466_MASK_IRCMP_VCLAMP           (0x07)

/* CHG_STAT 0x42 */
#define RT9466_SHIFT_ADC_STAT              (0)
#define RT9466_SHIFT_CHG_STAT              (6)

#define RT9466_MASK_ADC_STAT               (1 << RT9466_SHIFT_ADC_STAT)
#define RT9466_MASK_CHG_STAT               (0xC0)

/* CHG_STATC 0x50 */
#define RT9466_SHIFT_PWR_RDY               (7)
#define RT9466_SHIFT_CHG_MIVR              (6)
#define RT9466_SHIFT_CHG_AICR              (5)

#define RT9466_MASK_PWR_RDY                (1 << RT9466_SHIFT_PWR_RDY)
#define RT9466_MASK_CHG_MIVR               (1 << RT9466_SHIFT_CHG_MIVR)
#define RT9466_MASK_CHG_AICR               (1 << RT9466_SHIFT_CHG_AICR)

/* CHG_FAULT 0x51 */
#define RT9466_SHIFT_VBUSOV                (7)
#define RT9466_SHIFT_VBATOV                (6)

#define RT9466_MASK_VBUSOV                 (1 << RT9466_SHIFT_VBUSOV)
#define RT9466_MASK_VBATOV                 (1 << RT9466_SHIFT_VBATOV)

/* CHG_IRQ2 0x54 */
#define RT9466_SHIFT_CHG_AICLMEASI         (0)
#define RT9466_SHIFT_WDTMRI                (3)
#define RT9466_SHIFT_SSFINISHI             (4)

#define RT9466_MASK_CHG_AICLMEASI          (1 << RT9466_SHIFT_CHG_AICLMEASI)
#define RT9466_MASK_WDTMRI                 (1 << RT9466_SHIFT_WDTMRI)
#define RT9466_MASK_SSFINISHI              (1 << RT9466_SHIFT_SSFINISHI)

/* CHG_IRQ3 0x55 */
#define RT9466_SHIFT_ADC_DONEI             (0)
#define RT9466_SHIFT_PUMPX_DONEI           (1)

#define RT9466_MASK_ADC_DONEI              (1 << RT9466_SHIFT_ADC_DONEI)
#define RT9466_MASK_PUMPX_DONEI            (1 << RT9466_SHIFT_PUMPX_DONEI)

/* CHG_STATC_CTRL 0x60 */
#define RT9466_SHIFT_PWR_RDYM              (7)
#define RT9466_SHIFT_CHG_MIVRM             (6)
#define RT9466_SHIFT_CHG_AICRM             (5)

#define RT9466_MASK_PWR_RDYM               (1 << RT9466_SHIFT_PWR_RDYM)
#define RT9466_MASK_CHG_MIVRM              (1 << RT9466_SHIFT_CHG_MIVRM)
#define RT9466_MASK_CHG_AICRM              (1 << RT9466_SHIFT_CHG_AICRM)

/* CHG_FAULT_CTRL 0x61 */
#define RT9466_SHIFT_VBUSOVM               (7)

#define RT9466_MASK_VBUSOVM                (1 << RT9466_SHIFT_VBUSOVM)

/* CHG_TS_STATC_CTRL 0x62 */
#define RT9466_SHIFT_TS_BAT_HOTM           (7)
#define RT9466_SHIFT_TS_BAT_WARMM          (6)
#define RT9466_SHIFT_TS_BAT_COOLM          (5)
#define RT9466_SHIFT_TS_BAT_COLDM          (4)

#define RT9466_MASK_TS_BAT_HOTM            (1 << RT9466_SHIFT_TS_BAT_HOTM)
#define RT9466_MASK_TS_BAT_WARMM           (1 << RT9466_SHIFT_TS_BAT_WARMM)
#define RT9466_MASK_TS_BAT_COOLM           (1 << RT9466_SHIFT_TS_BAT_COOLM)
#define RT9466_MASK_TS_BAT_COLDM           (1 << RT9466_SHIFT_TS_BAT_COLDM)
#define RT9466_MASK_TS_STATC_RESERVED      (0x0F)

/* CHG_IRQ1_CTRL 0x63 */
#define RT9466_SHIFT_CHG_OTPM              (7)
#define RT9466_SHIFT_CHG_RVPM              (6)
#define RT9466_SHIFT_CHG_ADPBADM           (5)
#define RT9466_SHIFT_CHG_STATCM            (2)
#define RT9466_SHIFT_CHG_FAULTM            (1)
#define RT9466_SHIFT_TS_STATCM             (0)

#define RT9466_MASK_CHG_OTPM               (1 << RT9466_SHIFT_CHG_OTPM)
#define RT9466_MASK_CHG_RVPM               (1 << RT9466_SHIFT_CHG_RVPM)
#define RT9466_MASK_CHG_ADPBADM            (1 << RT9466_SHIFT_CHG_ADPBADM)
#define RT9466_MASK_CHG_STATCM             (1 << RT9466_SHIFT_CHG_STATCM)
#define RT9466_MASK_CHG_FAULTM             (1 << RT9466_SHIFT_CHG_FAULTM)
#define RT9466_MASK_TS_STATCM              (1 << RT9466_SHIFT_TS_STATCM)

/* CHG_IRQ2_CTRL 0x64 */
#define RT9466_SHIFT_IEOCM                 (7)
#define RT9466_SHIFT_TERMM                 (6)
#define RT9466_SHIFT_SSFINISHM             (4)
#define RT9466_SHIFT_CHG_AICLMEASM         (0)

#define RT9466_MASK_IEOCM                  (1 << RT9466_SHIFT_IEOCM)
#define RT9466_MASK_TERMM                  (1 << RT9466_SHIFT_TERMM)
#define RT9466_MASK_SSFINISHM              (1 << RT9466_SHIFT_SSFINISHM)
#define RT9466_MASK_CHG_AICLMEASM          (1 << RT9466_SHIFT_CHG_AICLMEASM)
#define RT9466_MASK_IRQ2_RESERVED          (0x04)

/* CHG_IRQ3_CTRL 0x65 */
#define RT9466_SHIFT_BST_BATUVM            (5)
#define RT9466_SHIFT_PUMPX_DONEM           (1)
#define RT9466_SHIFT_ADC_DONEM             (0)

#define RT9466_MASK_BST_BATUVM             (1 << RT9466_SHIFT_BST_BATUVM)
#define RT9466_MASK_PUMPX_DONEM            (1 << RT9466_SHIFT_PUMPX_DONEM)
#define RT9466_MASK_ADC_DONEM              (1 << RT9466_SHIFT_ADC_DONEM)
#define RT9466_MASK_IRQ3_RESERVED          (0x1C)

#define HIZ_IIN_FLAG_TRUE                  (1)
#define HIZ_IIN_FLAG_FALSE                 (0)
#define IINLIM_100                         (100)

#endif /* _RT9466_CHARGER_H_ */
=======
/* =========================== */
/* RT9466 Parameter            */
/* =========================== */

/* uA */
#define RT9466_ICHG_NUM		64
#define RT9466_ICHG_MIN		100
#define RT9466_ICHG_MAX		5000
#define RT9466_ICHG_STEP	100

/* uA */
#define RT9466_IEOC_NUM		16
#define RT9466_IEOC_MIN		100
#define RT9466_IEOC_MAX		850
#define RT9466_IEOC_STEP	50

/* mV */
#define RT9466_MIVR_NUM		128
#define RT9466_MIVR_MIN		3900
#define RT9466_MIVR_MAX		13400
#define RT9466_MIVR_STEP	100

/* mA */
#define RT9466_AICR_NUM		64
#define RT9466_AICR_MIN		100
#define RT9466_AICR_MAX		3250
#define RT9466_AICR_STEP	50

/* mV */
#define RT9466_CV_NUM	128
#define RT9466_CV_MIN	3900
#define RT9466_CV_MAX	4710
#define RT9466_CV_STEP	10

/* mV */
#define RT9466_BOOST_VOREG_NUM	64
#define RT9466_BOOST_VOREG_MIN	4425
#define RT9466_BOOST_VOREG_MAX	5825
#define RT9466_BOOST_VOREG_STEP	25

/* mV */
#define RT9466_VPREC_NUM	16
#define RT9466_VPREC_MIN	2000
#define RT9466_VPREC_MAX	3500
#define RT9466_VPREC_STEP	100

/* mA */
#define RT9466_IPREC_NUM	16
#define RT9466_IPREC_MIN	100
#define RT9466_IPREC_MAX	850
#define RT9466_IPREC_STEP	50

/* IR compensation */
/* mohm */
#define RT9466_IRCMP_RES_NUM	8
#define RT9466_IRCMP_RES_MIN	0
#define RT9466_IRCMP_RES_MAX	175
#define RT9466_IRCMP_RES_STEP	25

/* IR compensation maximum voltage clamp */
/* mV */
#define RT9466_IRCMP_VCLAMP_NUM		8
#define RT9466_IRCMP_VCLAMP_MIN		0
#define RT9466_IRCMP_VCLAMP_MAX		224
#define RT9466_IRCMP_VCLAMP_STEP	32

/* PE+20 voltage */
/* mV */
#define RT9466_PEP20_VOLT_NUM	19
#define RT9466_PEP20_VOLT_MIN	5500
#define RT9466_PEP20_VOLT_MAX	14500
#define RT9466_PEP20_VOLT_STEP	500

/* IIN VTH */
/* mV */
#define RT9466_AICL_VTH_NUM	8
#define RT9466_AICL_VTH_MIN	4100
#define RT9466_AICL_VTH_MAX	4800
#define RT9466_AICL_VTH_STEP	100

/* ADC unit/offset */
#define RT9466_ADC_UNIT_VBUS_DIV5	25	/* mV */
#define RT9466_ADC_UNIT_VBUS_DIV2	10	/* mV */
#define RT9466_ADC_UNIT_VBAT		5	/* mV */
#define RT9466_ADC_UNIT_VSYS		5	/* mV */
#define RT9466_ADC_UNIT_REGN		5	/* mV */
#define RT9466_ADC_UNIT_TS_BAT		25	/* 0.01% */
#define RT9466_ADC_UNIT_IBUS		50	/* mA */
#define RT9466_ADC_UNIT_IBAT		50	/* mA */
#define RT9466_ADC_UNIT_TEMP_JC		2	/* degree */

#define RT9466_ADC_OFFSET_VBUS_DIV5	0	/* mV */
#define RT9466_ADC_OFFSET_VBUS_DIV2	0	/* mV */
#define RT9466_ADC_OFFSET_VBAT		0	/* mV */
#define RT9466_ADC_OFFSET_VSYS		0	/* mV */
#define RT9466_ADC_OFFSET_REGN		0	/* mV */
#define RT9466_ADC_OFFSET_TS_BAT	0	/* % */
#define RT9466_ADC_OFFSET_IBUS		0	/* mA */
#define RT9466_ADC_OFFSET_IBAT		0	/* mA */
#define RT9466_ADC_OFFSET_TEMP_JC	(-40)	/* degree */


/* ========== CORE_CTRL0 0x00 ============ */
#define RT9466_SHIFT_RST	7
#define RT9466_MASK_RST		(1 << RT9466_SHIFT_RST)

/* ========== CHG_CTRL1 0x01 ============ */
#define RT9466_SHIFT_OPA_MODE   0
#define RT9466_SHIFT_HZ_EN      2
#define RT9466_SHIFT_IRQ_PULSE	3

#define RT9466_MASK_OPA_MODE	(1 << RT9466_SHIFT_OPA_MODE)
#define RT9466_MASK_HZ_EN	(1 << RT9466_SHIFT_HZ_EN)
#define RT9466_MASK_IRQ_PULSE	(1 << RT9466_SHIFT_IRQ_PULSE)

/* ========== CHG_CTRL2 0x02 ============ */
#define RT9466_SHIFT_CHG_EN	0
#define RT9466_SHIFT_CFO_EN	1
#define RT9466_SHIFT_IINLMTSEL	2
#define RT9466_SHIFT_TE_EN	4
#define RT9466_SHIFT_SHIPMODE	7

#define RT9466_MASK_CHG_EN	(1 << RT9466_SHIFT_CHG_EN)
#define RT9466_MASK_CFO_EN	(1 << RT9466_SHIFT_CFO_EN)
#define RT9466_MASK_IINLMTSEL	0x0C
#define RT9466_MASK_TE_EN	(1 << RT9466_SHIFT_TE_EN)
#define RT9466_MASK_SHIPMODE	(1 << RT9466_SHIFT_SHIPMODE)


/* ========== CHG_CTRL3 0x03 ============ */
#define RT9466_SHIFT_AICR	2
#define RT9466_SHIFT_AICR_EN	1
#define RT9466_SHIFT_ILIM_EN	0

#define RT9466_MASK_AICR	0xFC
#define RT9466_MASK_AICR_EN	(1 << RT9466_SHIFT_AICR_EN)
#define RT9466_MASK_ILIM_EN	(1 << RT9466_SHIFT_ILIM_EN)

/* ========== CHG_CTRL4 0x04 ============ */
#define RT9466_SHIFT_CV	1

#define RT9466_MASK_CV	0xFE

/* ========== CHG_CTRL5 0x05 ============ */
#define RT9466_SHIFT_BOOST_VOREG	2

#define RT9466_MASK_BOOST_VOREG		0xFC

/* ========== CHG_CTRL6 0x06 ============ */
#define RT9466_SHIFT_MIVR	1
#define RT9466_SHIFT_MIVR_EN	0

#define RT9466_MASK_MIVR	0xFE
#define RT9466_MASK_MIVR_EN	(1 << RT9466_SHIFT_MIVR_EN)

/* ========== CHG_CTRL7 0x07 ============ */
#define RT9466_SHIFT_ICHG	2

#define RT9466_MASK_ICHG	0xFC

/* ========== CHG_CTRL8 0x08 ============ */
#define RT9466_SHIFT_VPREC	4
#define RT9466_SHIFT_IPREC	0

#define RT9466_MASK_VPREC	0xF0
#define RT9466_MASK_IPREC	0x0F

/* ========== CHG_CTRL9 0x09 ============ */
#define RT9466_SHIFT_IEOC	4

#define RT9466_MASK_IEOC	0xF0
#define RT9466_MASK_CHG_TDEG_EOC	0x07

/* ========== CHG_CTRL10 0x0A ============ */
#define RT9466_SHIFT_BOOST_OC	0

#define RT9466_MASK_BOOST_OC	0x07

/* ========== CHG_CTRL12 0x0C ============ */
#define RT9466_SHIFT_TMR_EN	1
#define RT9466_SHIFT_WT_FC	5

#define RT9466_MASK_TMR_EN	(1 << RT9466_SHIFT_TMR_EN)
#define RT9466_MASK_WT_FC	0xE0

/* ========== CHG_CTRL13 0x0D ============ */
#define RT9466_SHIFT_WDT_EN	7
#define RT9466_SHIFT_WDT	4
#define RT9466_SHIFT_IRQ_REZ	0

#define RT9466_MASK_WDT_EN	(1 << RT9466_SHIFT_WDT_EN)
#define RT9466_MASK_WDT		0x30
#define RT9466_MASK_IRQ_REZ	(1 << RT9466_SHIFT_IRQ_REZ)

/* ========== CHG_CTRL14 0x0E ============ */
#define RT9466_SHIFT_AICL_MEAS	7
#define RT9466_SHIFT_AICL_VTH	0

#define RT9466_MASK_AICL_MEAS	(1 << RT9466_SHIFT_AICL_MEAS)
#define RT9466_MASK_AICL_VTH	0x07

/* ========== CHG_CTRL16 0x10 ============ */
#define RT9466_SHIFT_JEITA_EN	4

#define RT9466_MASK_JEITA_EN	(1 << RT9466_SHIFT_JEITA_EN)

/* ========== CHG_ADC 0x11 ============ */
#define RT9466_SHIFT_ADC_IN_SEL	4
#define RT9466_SHIFT_ADC_START	0

#define RT9466_MASK_ADC_IN_SEL	0xF0
#define RT9466_MASK_ADC_START	(1 << RT9466_SHIFT_ADC_START)

/* ========== CHG_CTRL17 0x19 ============ */
#define RT9466_SHIFT_PUMPX_EN		7
#define RT9466_SHIFT_PUMPX_20_10	6 /* Version of PE */
#define RT9466_SHIFT_PUMPX_UP_DN	5
#define RT9466_SHIFT_PUMPX_DEC		0


#define RT9466_MASK_PUMPX_EN	(1 << RT9466_SHIFT_PUMPX_EN)
#define RT9466_MASK_PUMPX_20_10	(1 << RT9466_SHIFT_PUMPX_20_10)
#define RT9466_MASK_PUMPX_UP_DN	(1 << RT9466_SHIFT_PUMPX_UP_DN)
#define RT9466_MASK_PUMPX_DEC	0x1F

/* ========== CHG_CTRL18 0x1A ============ */
#define RT9466_SHIFT_IRCMP_RES		3
#define RT9466_SHIFT_IRCMP_VCLAMP	0

#define RT9466_MASK_IRCMP_RES		0x38
#define RT9466_MASK_IRCMP_VCLAMP	0x07

/* ========== CHG_STAT 0x42 ============ */
#define RT9466_SHIFT_ADC_STAT	0
#define RT9466_SHIFT_CHG_STAT	6

#define RT9466_MASK_ADC_STAT	(1 << RT9466_SHIFT_ADC_STAT)
#define RT9466_MASK_CHG_STAT	0xC0

/* ========== CHG_STATC 0x50 ============ */
#define RT9466_SHIFT_PWR_RDY	7
#define RT9466_SHIFT_CHG_MIVR	6
#define RT9466_SHIFT_CHG_AICR	5

#define RT9466_MASK_PWR_RDY	(1 << RT9466_SHIFT_PWR_RDY)
#define RT9466_MASK_CHG_MIVR	(1 << RT9466_SHIFT_CHG_MIVR)
#define RT9466_MASK_CHG_AICR	(1 << RT9466_SHIFT_CHG_AICR)

/* ========== CHG_FAULT 0x51 ============ */
#define RT9466_SHIFT_VBUSOV	7
#define RT9466_SHIFT_VBATOV	6

#define RT9466_MASK_VBUSOV	(1 << RT9466_SHIFT_VBUSOV)
#define RT9466_MASK_VBATOV	(1 << RT9466_SHIFT_VBATOV)

/* ========== CHG_IRQ2 0x54 ============ */
#define RT9466_SHIFT_CHG_AICLMEASI	0
#define RT9466_SHIFT_WDTMRI		3
#define RT9466_SHIFT_SSFINISHI		4

#define RT9466_MASK_CHG_AICLMEASI	(1 << RT9466_SHIFT_CHG_AICLMEASI)
#define RT9466_MASK_WDTMRI		(1 << RT9466_SHIFT_WDTMRI)
#define RT9466_MASK_SSFINISHI		(1 << RT9466_SHIFT_SSFINISHI)

/* ========== CHG_IRQ3 0x55 ============ */
#define RT9466_SHIFT_ADC_DONEI		0
#define RT9466_SHIFT_PUMPX_DONEI	1

#define RT9466_MASK_ADC_DONEI	(1 << RT9466_SHIFT_ADC_DONEI)
#define RT9466_MASK_PUMPX_DONEI	(1 << RT9466_SHIFT_PUMPX_DONEI)

/* ========== CHG_STATC_CTRL 0x60 ============ */
#define RT9466_SHIFT_PWR_RDYM	7
#define RT9466_SHIFT_CHG_MIVRM	6
#define RT9466_SHIFT_CHG_AICRM	5

#define RT9466_MASK_PWR_RDYM	(1 << RT9466_SHIFT_PWR_RDYM)
#define RT9466_MASK_CHG_MIVRM	(1 << RT9466_SHIFT_CHG_MIVRM)
#define RT9466_MASK_CHG_AICRM	(1 << RT9466_SHIFT_CHG_AICRM)

/* ========== CHG_FAULT_CTRL 0x61 ============ */
#define RT9466_SHIFT_VBUSOVM	7

#define RT9466_MASK_VBUSOVM	(1 << RT9466_SHIFT_VBUSOVM)

/* ========== CHG_TS_STATC_CTRL 0x62 ============ */
#define RT9466_SHIFT_TS_BAT_HOTM	7
#define RT9466_SHIFT_TS_BAT_WARMM	6
#define RT9466_SHIFT_TS_BAT_COOLM	5
#define RT9466_SHIFT_TS_BAT_COLDM	4

#define RT9466_MASK_TS_BAT_HOTM		(1 << RT9466_SHIFT_TS_BAT_HOTM)
#define RT9466_MASK_TS_BAT_WARMM	(1 << RT9466_SHIFT_TS_BAT_WARMM)
#define RT9466_MASK_TS_BAT_COOLM	(1 << RT9466_SHIFT_TS_BAT_COOLM)
#define RT9466_MASK_TS_BAT_COLDM	(1 << RT9466_SHIFT_TS_BAT_COLDM)
#define RT9466_MASK_TS_STATC_RESERVED	0x0F

/* ========== CHG_IRQ1_CTRL 0x63 ============ */
#define RT9466_SHIFT_CHG_OTPM		7
#define RT9466_SHIFT_CHG_RVPM		6
#define RT9466_SHIFT_CHG_ADPBADM	5
#define RT9466_SHIFT_CHG_STATCM		2
#define RT9466_SHIFT_CHG_FAULTM		1
#define RT9466_SHIFT_TS_STATCM		0

#define RT9466_MASK_CHG_OTPM	(1 << RT9466_SHIFT_CHG_OTPM)
#define RT9466_MASK_CHG_RVPM	(1 << RT9466_SHIFT_CHG_RVPM)
#define RT9466_MASK_CHG_ADPBADM	(1 << RT9466_SHIFT_CHG_ADPBADM)
#define RT9466_MASK_CHG_STATCM	(1 << RT9466_SHIFT_CHG_STATCM)
#define RT9466_MASK_CHG_FAULTM	(1 << RT9466_SHIFT_CHG_FAULTM)
#define RT9466_MASK_TS_STATCM	(1 << RT9466_SHIFT_TS_STATCM)

/* ========== CHG_IRQ2_CTRL 0x64 ============ */
#define RT9466_SHIFT_IEOCM		7
#define RT9466_SHIFT_TERMM		6
#define RT9466_SHIFT_SSFINISHM		4
#define RT9466_SHIFT_CHG_AICLMEASM	0

#define RT9466_MASK_IEOCM		(1 << RT9466_SHIFT_IEOCM)
#define RT9466_MASK_TERMM		(1 << RT9466_SHIFT_TERMM)
#define RT9466_MASK_SSFINISHM		(1 << RT9466_SHIFT_SSFINISHM)
#define RT9466_MASK_CHG_AICLMEASM	(1 << RT9466_SHIFT_CHG_AICLMEASM)
#define RT9466_MASK_IRQ2_RESERVED	0x04

/* ========== CHG_IRQ3_CTRL 0x65 ============ */
#define RT9466_SHIFT_BST_BATUVM		5
#define RT9466_SHIFT_PUMPX_DONEM	1
#define RT9466_SHIFT_ADC_DONEM		0

#define RT9466_MASK_BST_BATUVM		(1 << RT9466_SHIFT_BST_BATUVM)
#define RT9466_MASK_PUMPX_DONEM		(1 << RT9466_SHIFT_PUMPX_DONEM)
#define RT9466_MASK_ADC_DONEM		(1 << RT9466_SHIFT_ADC_DONEM)
#define RT9466_MASK_IRQ3_RESERVED	0x1C

#define HIZ_IIN_FLAG_TRUE                1
#define HIZ_IIN_FLAG_FALSE               0
#define IINLIM_100                       100

#endif /* __RT9466_CHARGER_H */
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
