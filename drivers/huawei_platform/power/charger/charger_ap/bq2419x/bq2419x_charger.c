/*
 * bq2419x_charger.c
 *
 * bq2419x driver
 *
 * Copyright (c) 2012-2018 Huawei Technologies Co., Ltd.
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

#include <linux/init.h>
#include <linux/module.h>
#include <linux/device.h>
#include <linux/delay.h>
#include <linux/jiffies.h>
#include <linux/platform_device.h>
#include <linux/slab.h>
#include <linux/i2c.h>
#include <linux/wakelock.h>
#include <linux/usb/otg.h>
#include <linux/io.h>
#include <linux/gpio.h>
#include <linux/power_supply.h>
#include <linux/of.h>
#include <linux/of_device.h>
#include <linux/of_address.h>
#include <linux/of_gpio.h>
#include <linux/interrupt.h>
#include <linux/irq.h>
#include <linux/notifier.h>
#include <linux/mutex.h>
#include <linux/hisi/usb/hisi_usb.h>
#include <linux/hisi/hisi_adc.h>
#include <huawei_platform/log/hw_log.h>
#ifdef CONFIG_HUAWEI_HW_DEV_DCT
#include <huawei_platform/devdetect/hw_dev_dec.h>
#endif
#include <linux/raid/pq.h>
#include <huawei_platform/power/huawei_charger.h>
#ifdef CONFIG_HISI_BCI_BATTERY
#include <linux/power/hisi/hisi_bci_battery.h>
#endif
#include <bq2419x_charger.h>

#ifdef HWLOG_TAG
#undef HWLOG_TAG
#endif

#define HWLOG_TAG bq2419x_charger
HWLOG_REGIST();

struct bq2419x_device_info *g_bq2419x_dev;
<<<<<<< HEAD
/* configured in dts based on the real value of the iin limit resistance */
static unsigned int rilim = BQ2419X_RILIM_220_OHM;
/* configured in dts based on the real adc channel number */
static unsigned int adc_channel_iin = BQ2419X_ADC_CHANNEL_IIN_10;

#define MSG_LEN                      (2)
#define BUF_LEN                      (26)

=======
static unsigned int rilim = 220;	/*this should be configured in dts file based on the real value of the Iin limit resistance*/
static unsigned int adc_channel_iin = 10;	/*this should be configured in dts file based on the real adc channel number*/
/**********************************************************
*  Function:       params_to_reg
*  Discription:    turn the setting parameter to register value
*  Parameters:   const int tbl[], int tbl_size, int val
*  return value:  register value
**********************************************************/
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
static int params_to_reg(const int tbl[], int tbl_size, int val)
{
	int i;

	for (i = 1; i < tbl_size; i++) {
		if (val < tbl[i])
<<<<<<< HEAD
			return (i - 1);
=======
			return i - 1;
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
	}
	return tbl_size - 1;
}

<<<<<<< HEAD
static int bq2419x_write_block(struct bq2419x_device_info *di,
	u8 *value, u8 reg, unsigned int num_bytes)
=======
/**********************************************************
*  Function:       bq2419x_write_block
*  Discription:    register write block interface
*  Parameters:   di:bq2419x_device_info
*                      value:register value
*                      reg:register name
*                      num_bytes:bytes number
*  return value:  0-sucess or others-fail
**********************************************************/
static int bq2419x_write_block(struct bq2419x_device_info *di, u8 *value,
			       u8 reg, unsigned num_bytes)
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
{
	struct i2c_msg msg[1];
	int ret = 0;

<<<<<<< HEAD
	if (di == NULL || value == NULL) {
		hwlog_err("di or value is null\n");
		return -EIO;
	}

=======
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
	*value = reg;

	msg[0].addr = di->client->addr;
	msg[0].flags = 0;
	msg[0].buf = value;
	msg[0].len = num_bytes + 1;

	ret = i2c_transfer(di->client->adapter, msg, 1);

	/* i2c_transfer returns number of messages transferred */
	if (ret != 1) {
<<<<<<< HEAD
		hwlog_err("write_block failed[%x]\n", reg);
=======
		hwlog_err("i2c_write failed to transfer all messages\n");
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
		if (ret < 0)
			return ret;
		else
			return -EIO;
	} else {
		return 0;
	}
}

<<<<<<< HEAD
static int bq2419x_read_block(struct bq2419x_device_info *di,
	u8 *value, u8 reg, unsigned int num_bytes)
=======
/**********************************************************
*  Function:       bq2419x_read_block
*  Discription:    register read block interface
*  Parameters:   di:bq2419x_device_info
*                      value:register value
*                      reg:register name
*                      num_bytes:bytes number
*  return value:  0-sucess or others-fail
**********************************************************/
static int bq2419x_read_block(struct bq2419x_device_info *di, u8 *value,
			      u8 reg, unsigned num_bytes)
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
{
	struct i2c_msg msg[2];
	u8 buf = 0;
	int ret = 0;

<<<<<<< HEAD
	if (di == NULL || value == NULL) {
		hwlog_err("di or value is null\n");
		return -EIO;
	}

=======
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
	buf = reg;

	msg[0].addr = di->client->addr;
	msg[0].flags = 0;
	msg[0].buf = &buf;
	msg[0].len = 1;

	msg[1].addr = di->client->addr;
	msg[1].flags = I2C_M_RD;
	msg[1].buf = value;
	msg[1].len = num_bytes;

	ret = i2c_transfer(di->client->adapter, msg, 2);

	/* i2c_transfer returns number of messages transferred */
<<<<<<< HEAD
	if (ret != MSG_LEN) {
		hwlog_err("read_block failed[%x]\n", reg);
=======
	if (ret != 2) {
		hwlog_err("i2c_write failed to transfer all messages\n");
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
		if (ret < 0)
			return ret;
		else
			return -EIO;
	} else {
		return 0;
	}
}

static int bq2419x_write_byte(u8 reg, u8 value)
{
	struct bq2419x_device_info *di = g_bq2419x_dev;
	/* 2 bytes offset 1 contains the data offset 0 is used by i2c_write */
<<<<<<< HEAD
	u8 temp_buffer[MSG_LEN] = {0};
=======
	u8 temp_buffer[2] = { 0 };
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29

	/* offset 1 contains the data */
	temp_buffer[1] = value;
	return bq2419x_write_block(di, temp_buffer, reg, 1);
}

static int bq2419x_read_byte(u8 reg, u8 *value)
{
	struct bq2419x_device_info *di = g_bq2419x_dev;

	return bq2419x_read_block(di, value, reg, 1);
}

static int bq2419x_write_mask(u8 reg, u8 mask, u8 shift, u8 value)
{
	int ret = 0;
	u8 val = 0;

	ret = bq2419x_read_byte(reg, &val);
	if (ret < 0)
		return ret;

	val &= ~mask;
	val |= ((value << shift) & mask);

	ret = bq2419x_write_byte(reg, val);

	return ret;
}

static int bq2419x_read_mask(u8 reg, u8 mask, u8 shift, u8 *value)
{
	int ret = 0;
	u8 val = 0;

	ret = bq2419x_read_byte(reg, &val);
	if (ret < 0)
		return ret;
<<<<<<< HEAD

	val &= mask;
	val >>= shift;
=======
	val &= MASK;
	val >>= SHIFT;
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
	*value = val;

	return 0;
}

#ifdef CONFIG_SYSFS
/*
 * There are a numerous options that are configurable on the bq2419x
 * that go well beyond what the power_supply properties provide access to.
 * Provide sysfs access to them so they can be examined and possibly modified
 * on the fly.
 */
#define BQ2419X_SYSFS_FIELD(_name, r, f, m, store) \
{ \
	.attr = __ATTR(_name, m, bq2419x_sysfs_show, store), \
	.reg = BQ2419X_REG_##r, \
	.mask = BQ2419X_REG_##r##_##f##_MASK, \
	.shift = BQ2419X_REG_##r##_##f##_SHIFT, \
}

#define BQ2419X_SYSFS_FIELD_RW(_name, r, f) \
	BQ2419X_SYSFS_FIELD(_name, r, f, 0644, bq2419x_sysfs_store)

#define BQ2419X_SYSFS_FIELD_RO(_name, r, f) \
	BQ2419X_SYSFS_FIELD(_name, r, f, 0444, NULL)

static ssize_t bq2419x_sysfs_show(struct device *dev,
<<<<<<< HEAD
	struct device_attribute *attr, char *buf);
static ssize_t bq2419x_sysfs_store(struct device *dev,
	struct device_attribute *attr, const char *buf, size_t count);
=======
				  struct device_attribute *attr, char *buf);
static ssize_t bq2419x_sysfs_store(struct device *dev,
				   struct device_attribute *attr,
				   const char *buf, size_t count);
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29

struct bq2419x_sysfs_field_info {
	struct device_attribute attr;
	u8 reg;
	u8 mask;
	u8 shift;
};

/* On i386 ptrace-abi.h defines SS that breaks the macro calls below. */
#undef SS

static struct bq2419x_sysfs_field_info bq2419x_sysfs_field_tbl[] = {
	/* sysfs name reg field in reg */
	BQ2419X_SYSFS_FIELD_RW(en_hiz, ISC, EN_HIZ),
	BQ2419X_SYSFS_FIELD_RW(vindpm, ISC, VINDPM),
	BQ2419X_SYSFS_FIELD_RW(iinlim, ISC, IINLIM),
	BQ2419X_SYSFS_FIELD_RW(chg_config, POC, CHG_CONFIG),
	BQ2419X_SYSFS_FIELD_RW(sys_min, POC, SYS_MIN),
	BQ2419X_SYSFS_FIELD_RW(boost_lim, POC, BOOST_LIM),
	BQ2419X_SYSFS_FIELD_RW(ichg, CCC, ICHG),
	BQ2419X_SYSFS_FIELD_RW(force_20_pct, CCC, FORCE_20PCT),
	BQ2419X_SYSFS_FIELD_RW(iprechg, PCTCC, IPRECHG),
	BQ2419X_SYSFS_FIELD_RW(iterm, PCTCC, ITERM),
	BQ2419X_SYSFS_FIELD_RW(vreg, CVC, VREG),
	BQ2419X_SYSFS_FIELD_RW(batlowv, CVC, BATLOWV),
	BQ2419X_SYSFS_FIELD_RW(vrechg, CVC, VRECHG),
	BQ2419X_SYSFS_FIELD_RW(en_term, CTTC, EN_TERM),
	BQ2419X_SYSFS_FIELD_RW(term_stat, CTTC, TERM_STAT),
	BQ2419X_SYSFS_FIELD_RO(watchdog, CTTC, WATCHDOG),
	BQ2419X_SYSFS_FIELD_RW(en_timer, CTTC, EN_TIMER),
	BQ2419X_SYSFS_FIELD_RW(chg_timer, CTTC, CHG_TIMER),
	BQ2419X_SYSFS_FIELD_RW(jeta_iset, CTTC, JEITA_ISET),
	BQ2419X_SYSFS_FIELD_RW(bat_comp, ICTRC, BAT_COMP),
	BQ2419X_SYSFS_FIELD_RW(vclamp, ICTRC, VCLAMP),
	BQ2419X_SYSFS_FIELD_RW(treg, ICTRC, TREG),
	BQ2419X_SYSFS_FIELD_RW(dpdm_en, MOC, DPDM_EN),
	BQ2419X_SYSFS_FIELD_RW(tmr2x_en, MOC, TMR2X_EN),
	BQ2419X_SYSFS_FIELD_RW(batfet_disable, MOC, BATFET_DISABLE),
	BQ2419X_SYSFS_FIELD_RW(jeita_vset, MOC, JEITA_VSET),
	BQ2419X_SYSFS_FIELD_RO(int_mask, MOC, INT_MASK),
	BQ2419X_SYSFS_FIELD_RO(vbus_stat, SS, VBUS_STAT),
	BQ2419X_SYSFS_FIELD_RO(chrg_stat, SS, CHRG_STAT),
	BQ2419X_SYSFS_FIELD_RO(dpm_stat, SS, DPM_STAT),
	BQ2419X_SYSFS_FIELD_RO(pg_stat, SS, PG_STAT),
	BQ2419X_SYSFS_FIELD_RO(therm_stat, SS, THERM_STAT),
	BQ2419X_SYSFS_FIELD_RO(vsys_stat, SS, VSYS_STAT),
	BQ2419X_SYSFS_FIELD_RO(watchdog_fault, F, WATCHDOG_FAULT),
	BQ2419X_SYSFS_FIELD_RO(boost_fault, F, BOOST_FAULT),
	BQ2419X_SYSFS_FIELD_RO(chrg_fault, F, CHRG_FAULT),
	BQ2419X_SYSFS_FIELD_RO(bat_fault, F, BAT_FAULT),
	BQ2419X_SYSFS_FIELD_RO(ntc_fault, F, NTC_FAULT),
	BQ2419X_SYSFS_FIELD_RO(pn, VPRS, PN),
	BQ2419X_SYSFS_FIELD_RO(ts_profile, VPRS, TS_PROFILE),
	BQ2419X_SYSFS_FIELD_RO(dev_reg, VPRS, DEV_REG),
};

#define BQ2419X_SYSFS_ATTRS_SIZE  (ARRAY_SIZE(bq2419x_sysfs_field_tbl) + 1)

static struct attribute *bq2419x_sysfs_attrs[BQ2419X_SYSFS_ATTRS_SIZE];

static const struct attribute_group bq2419x_sysfs_attr_group = {
	.attrs = bq2419x_sysfs_attrs,
};

static void bq2419x_sysfs_init_attrs(void)
{
	int i, limit = ARRAY_SIZE(bq2419x_sysfs_field_tbl);

	for (i = 0; i < limit; i++)
		bq2419x_sysfs_attrs[i] = &bq2419x_sysfs_field_tbl[i].attr.attr;

<<<<<<< HEAD
	bq2419x_sysfs_attrs[limit] = NULL;
=======
	bq2419x_sysfs_attrs[limit] = NULL;	/* Has additional entry for this */
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
}

static struct bq2419x_sysfs_field_info *bq2419x_sysfs_field_lookup(
	const char *name)
{
	int i, limit = ARRAY_SIZE(bq2419x_sysfs_field_tbl);

<<<<<<< HEAD
	for (i = 0; i < limit; i++) {
		if (!strcmp(name, bq2419x_sysfs_field_tbl[i].attr.attr.name))
			break;
	}
=======
	for (i = 0; i < limit; i++)
		if (!strcmp(name, bq2419x_sysfs_field_tbl[i].attr.attr.name))
			break;
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29

	if (i >= limit)
		return NULL;

	return &bq2419x_sysfs_field_tbl[i];
}

static ssize_t bq2419x_sysfs_show(struct device *dev,
<<<<<<< HEAD
	struct device_attribute *attr, char *buf)
=======
				  struct device_attribute *attr, char *buf)
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
{
	struct bq2419x_sysfs_field_info *info;
	int ret;
	u8 v;

	info = bq2419x_sysfs_field_lookup(attr->attr.name);
<<<<<<< HEAD
	if (info == NULL) {
		hwlog_err("get sysfs entries failed\n");
=======
	if (!info)
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
		return -EINVAL;

	ret = bq2419x_read_mask(info->reg, info->mask, info->shift, &v);
	if (ret)
		return ret;

	return scnprintf(buf, PAGE_SIZE, "%hhx\n", v);
}

static ssize_t bq2419x_sysfs_store(struct device *dev,
<<<<<<< HEAD
	struct device_attribute *attr, const char *buf, size_t count)
=======
				   struct device_attribute *attr,
				   const char *buf, size_t count)
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
{
	struct bq2419x_sysfs_field_info *info;
	int ret;
	u8 v;

	info = bq2419x_sysfs_field_lookup(attr->attr.name);
<<<<<<< HEAD
	if (info == NULL) {
		hwlog_err("get sysfs entries failed\n");
=======
	if (!info)
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
		return -EINVAL;

	ret = kstrtou8(buf, 0, &v);
<<<<<<< HEAD
	if (ret < 0) {
		hwlog_err("get kstrtou8 failed\n");
=======
	if (ret < 0)
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
		return ret;

	ret = bq2419x_write_mask(info->reg, info->mask, info->shift, v);
	if (ret)
		return ret;

	return count;
}

static int bq2419x_sysfs_create_group(struct bq2419x_device_info *di)
{
	bq2419x_sysfs_init_attrs();

	return sysfs_create_group(&di->dev->kobj, &bq2419x_sysfs_attr_group);
}

static void bq2419x_sysfs_remove_group(struct bq2419x_device_info *di)
{
	sysfs_remove_group(&di->dev->kobj, &bq2419x_sysfs_attr_group);
}
#else
<<<<<<< HEAD

static inline int bq2419x_sysfs_create_group(struct bq2419x_device_info *di)
=======
static int bq2419x_sysfs_create_group(struct bq2419x_device_info *di)
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
{
	return 0;
}

static inline void bq2419x_sysfs_remove_group(struct bq2419x_device_info *di)
{
}
<<<<<<< HEAD

#endif /* CONFIG_SYSFS */
=======
#endif
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29

static int bq2419x_device_check(void)
{
	u8 reg = 0;
	int ret = 0;

	ret = bq2419x_read_byte(BQ2419X_REG_VPRS, &reg);
<<<<<<< HEAD
	if (ret)
=======
	if (ret) {
		hwlog_err("read bq2419x charger version error !\n");
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
		return CHARGE_IC_BAD;

<<<<<<< HEAD
	hwlog_info("device_check [%x]=0x%x\n", BQ2419X_REG_VPRS, reg);

	if ((reg & BQ2419X_REG_VPRS_DEV_REG_MASK) &&
		(reg & BQ2419X_REG_VPRS_PN_MASK)) {
		hwlog_info("bq2419x is good\n");
=======
	if ((reg & BQ2419X_REG_VPRS_DEV_REG_MASK)
	    && (reg & BQ2419X_REG_VPRS_PN_MASK)) {
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
		return CHARGE_IC_GOOD;
	}

	hwlog_err("bq2419x is bad\n");
	return CHARGE_IC_BAD;
}

static int bq2419x_5v_chip_init(struct bq2419x_device_info *di)
{
	int ret = 0;
	/*boost mode current limit = 500mA */
	ret = bq2419x_write_byte(BQ2419X_REG_POC, 0x1a);
	/*I2C watchdog timer setting = 80s */
	/*fast charge timer setting = 12h */
	ret |= bq2419x_write_byte(BQ2419X_REG_CTTC, 0x2d);
	/*iprechg = 256ma,iterm current = 128ma */
	ret |= bq2419x_write_byte(BQ2419X_REG_PCTCC, 0x10);
	/*IR compensation voatge clamp = 48mV */
	/*IR compensation resistor setting = 40mohm */
	ret |= bq2419x_write_byte(BQ2419X_REG_ICTRC, 0x8f);
	gpio_set_value(di->gpio_cd, 0);	/*enable charging*/

	return ret;
}
<<<<<<< HEAD

static int bq2419x_chip_init(struct chip_init_crit *init_crit)
{
	int ret = -1;
	struct bq2419x_device_info *di = g_bq2419x_dev;

	if (di == NULL || init_crit == NULL) {
		hwlog_err("di or init_crit is null\n");
		return -ENOMEM;
	}

	switch (init_crit->vbus) {
	case ADAPTER_5V:
		ret = bq2419x_5v_chip_init(di);
		break;

	default:
		hwlog_err("invaid init_crit vbus mode\n");
		break;
=======
static int bq2419x_chip_init(struct chip_init_crit* init_crit)
{
	int ret = -1;
	struct bq2419x_device_info *di = g_bq2419x_dev;
	if (!di || !init_crit) {
		hwlog_err("%s: di or init_crit is null\n", __func__);
		return -ENOMEM;
	}
	switch(init_crit->vbus) {
		case ADAPTER_5V:
			ret = bq2419x_5v_chip_init(di);
			break;
		default:
			hwlog_err("%s: init mode err\n", __func__);
			break;
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
	}
	return ret;
}

static int bq2419x_set_input_current(int value)
{
	int val = 0;
	int array_size = ARRAY_SIZE(bq2419x_iin_values);

	if (value > bq2419x_iin_values[array_size - 1])
		return bq2419x_iin_values[array_size - 1];
	else if (value < bq2419x_iin_values[0])
		return bq2419x_iin_values[0];

	val = params_to_reg(bq2419x_iin_values, array_size, value);
	return bq2419x_write_mask(BQ2419X_REG_ISC,
<<<<<<< HEAD
			BQ2419X_REG_ISC_IINLIM_MASK,
			BQ2419X_REG_ISC_IINLIM_SHIFT,
			val);
=======
				  BQ2419X_REG_ISC_IINLIM_MASK,
				  BQ2419X_REG_ISC_IINLIM_SHIFT, val);
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
}

static int bq2419x_set_charge_current(int value)
{
	int ret = 0;
	int val = 0;
	int force_20pct_en = 0;
	int array_size = ARRAY_SIZE(bq2419x_ichg_values);

	if (value > bq2419x_ichg_values[array_size - 1])
		return bq2419x_ichg_values[array_size - 1];

<<<<<<< HEAD
	/*
	 * 1. If currentmA is below ICHG_512,
	 * we can set the ICHG to 5*currentmA and set the FORCE_20PCT in REG02
	 * to make the true current 20% of the ICHG.
	 * 2. To slove the OCP BUG of BQ2419X,
	 * we need set the ICHG (lower than 1024mA) to
	 * 5*currentmA and set the FORCE_20PCT in REG02.
	 */
=======
	/* 1.If currentmA is below ICHG_512, we can set the ICHG to 5*currentmA and
	   set the FORCE_20PCT in REG02 to make the true current 20% of the ICHG
	   2.To slove the OCP BUG of BQ2419X, we need set the ICHG(lower than 1024mA)
	   to 5*currentmA and set the FORCE_20PCT in REG02. */
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
	if (value < 1024) {
		value *= 5;
		force_20pct_en = 1;
	}
<<<<<<< HEAD

	/*
	 * why don't return bq2419x_ichg_values[0] when
	 * value < bq2419x_ichg_values[0]? because the charge current
	 * have 20pct setting mode, if someone want to setting 100mA,
	 * we should set 100*5 by 20pct mode, instead of return 512mA.
	 */
	ret = bq2419x_write_mask(BQ2419X_REG_CCC,
			BQ2419X_REG_CCC_FORCE_20PCT_MASK,
			BQ2419X_REG_CCC_FORCE_20PCT_SHIFT,
			force_20pct_en);
=======
	/* why don't return bq2419x_ichg_values[0] when value < bq2419x_ichg_values[0]?
	   because the charge current have 20pct setting mode, if someone want to setting 100mA,
	   we should set 100*5 by 20pct mode, instead of return 512mA.
	 */
	ret = bq2419x_write_mask(BQ2419X_REG_CCC,
				 BQ2419X_REG_CCC_FORCE_20PCT_MASK,
				 BQ2419X_REG_CCC_FORCE_20PCT_SHIFT,
				 force_20pct_en);
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
	if (ret < 0)
		return ret;

	val = params_to_reg(bq2419x_ichg_values, array_size, value);
	return bq2419x_write_mask(BQ2419X_REG_CCC,
<<<<<<< HEAD
			BQ2419X_REG_CCC_ICHG_MASK,
			BQ2419X_REG_CCC_ICHG_SHIFT,
			val);
=======
				  BQ2419X_REG_CCC_ICHG_MASK,
				  BQ2419X_REG_CCC_ICHG_SHIFT, val);
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
}

static int bq2419x_set_terminal_voltage(int value)
{
	int val = 0;
	int array_size = ARRAY_SIZE(bq2419x_vreg_values);

	if (value > bq2419x_vreg_values[array_size - 1])
		return bq2419x_vreg_values[array_size - 1];
	else if (value < bq2419x_vreg_values[0])
		return bq2419x_vreg_values[0];

	val = params_to_reg(bq2419x_vreg_values, array_size, value);
	return bq2419x_write_mask(BQ2419X_REG_CVC,
<<<<<<< HEAD
			BQ2419X_REG_CVC_VREG_MASK,
			BQ2419X_REG_CVC_VREG_SHIFT,
			val);
=======
				  BQ2419X_REG_CVC_VREG_MASK,
				  BQ2419X_REG_CVC_VREG_SHIFT, val);
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
}

static int bq2419x_set_dpm_voltage(int value)
{
	int val = 0;
	int array_size = ARRAY_SIZE(bq2419x_vindpm_values);

	if (value > bq2419x_vindpm_values[array_size - 1])
		return bq2419x_vindpm_values[array_size - 1];
	else if (value < bq2419x_vindpm_values[0])
		return bq2419x_vindpm_values[0];

	val = params_to_reg(bq2419x_vindpm_values, array_size, value);
	return bq2419x_write_mask(BQ2419X_REG_ISC,
<<<<<<< HEAD
			BQ2419X_REG_ISC_VINDPM_MASK,
			BQ2419X_REG_ISC_VINDPM_SHIFT,
			val);
=======
				  BQ2419X_REG_ISC_VINDPM_MASK,
				  BQ2419X_REG_ISC_VINDPM_SHIFT, val);
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
}

static int bq2419x_set_terminal_current(int value)
{
	int val = 0;
	int array_size = ARRAY_SIZE(bq2419x_iterm_values);

	if (value > bq2419x_iterm_values[array_size - 1])
		return bq2419x_iterm_values[array_size - 1];
	else if (value < bq2419x_iterm_values[0])
		return bq2419x_iterm_values[0];

	val = params_to_reg(bq2419x_iterm_values, array_size, value);
	return bq2419x_write_mask(BQ2419X_REG_PCTCC,
<<<<<<< HEAD
			BQ2419X_REG_PCTCC_ITERM_MASK,
			BQ2419X_REG_PCTCC_ITERM_SHIFT,
			val);
=======
				  BQ2419X_REG_PCTCC_ITERM_MASK,
				  BQ2419X_REG_PCTCC_ITERM_SHIFT, val);
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
}

static int bq2419x_set_charge_enable(int enable)
{
	struct bq2419x_device_info *di = g_bq2419x_dev;

	gpio_set_value(di->gpio_cd, !enable);
	return bq2419x_write_mask(BQ2419X_REG_POC,
<<<<<<< HEAD
			BQ2419X_REG_POC_CHG_CONFIG_MASK,
			BQ2419X_REG_POC_CHG_CONFIG_SHIFT,
			enable);
=======
				  BQ2419X_REG_POC_CHG_CONFIG_MASK,
				  BQ2419X_REG_POC_CHG_CONFIG_SHIFT, enable);
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
}

static int bq2419x_set_otg_enable(int enable)
{
	int val = 0;
	struct bq2419x_device_info *di = g_bq2419x_dev;

	gpio_set_value(di->gpio_cd, !enable);
	val = enable << 1;

<<<<<<< HEAD
	/* notice:
	 * why enable irq when entry to OTG mode only?
	 * because we care VBUS overloaded OCP or OVP's interrupt in boost mode
=======
	/*NOTICE:
	   why enable irq when entry to OTG mode only?
	   because we care VBUS overloaded OCP or OVP's interrupt in boost mode
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
	 */
	if ((!di->irq_active) && (enable)) {
		di->irq_active = 1;
		enable_irq(di->irq_int);
	} else if ((di->irq_active) && (!enable)) {
<<<<<<< HEAD
		di->irq_active = 0; /* INACTIVE */
		disable_irq(di->irq_int);
	} else {
		/* do nothing */
	}

	return bq2419x_write_mask(BQ2419X_REG_POC,
			BQ2419X_REG_POC_CHG_CONFIG_MASK,
			BQ2419X_REG_POC_CHG_CONFIG_SHIFT,
			val);
=======
		di->irq_active = 0;
		disable_irq(di->irq_int);
	} else {
		/*do nothing!!*/
	}

	return bq2419x_write_mask(BQ2419X_REG_POC,
				  BQ2419X_REG_POC_CHG_CONFIG_MASK,
				  BQ2419X_REG_POC_CHG_CONFIG_SHIFT, val);
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
}

static int bq2419x_set_term_enable(int enable)
{
	return bq2419x_write_mask(BQ2419X_REG_CTTC,
<<<<<<< HEAD
			BQ2419X_REG_CTTC_EN_TERM_MASK,
			BQ2419X_REG_CTTC_EN_TERM_SHIFT,
			enable);
=======
				  BQ2419X_REG_CTTC_EN_TERM_MASK,
				  BQ2419X_REG_CTTC_EN_TERM_SHIFT, enable);
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
}

static int bq2419x_get_charge_state(unsigned int *state)
{
	u8 reg = 0;
	int ret = 0;

	ret = bq2419x_read_byte(BQ2419X_REG_SS, &reg);
<<<<<<< HEAD

	hwlog_info("get_charge_state [%x]=0x%x\n", BQ2419X_REG_SS, reg);

=======
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
	if ((reg & BQ2419X_REG_SS_PG) == BQ2419X_REG_SS_NOTPG)
		*state |= CHAGRE_STATE_NOT_PG;

	if ((reg & BQ2419X_REG_SS_DPM) == BQ2419X_REG_SS_DPM)
		*state |= CHAGRE_STATE_INPUT_DPM;

	if ((reg & BQ2419X_REG_SS_CHRGDONE) == BQ2419X_REG_SS_CHRGDONE)
		*state |= CHAGRE_STATE_CHRG_DONE;

	ret |= bq2419x_read_byte(BQ2419X_REG_F, &reg);
	ret |= bq2419x_read_byte(BQ2419X_REG_F, &reg);
<<<<<<< HEAD

	hwlog_info("get_charge_state [%x]=0x%x\n", BQ2419X_REG_F, reg);

=======
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
	if ((reg & BQ2419X_REG_F_WDT_TIMEOUT) == BQ2419X_REG_F_WDT_TIMEOUT)
		*state |= CHAGRE_STATE_WDT_FAULT;

	if ((reg & BQ2419X_REG_F_VBUS_OVP) == BQ2419X_REG_F_VBUS_OVP)
		*state |= CHAGRE_STATE_VBUS_OVP;

	if ((reg & BQ2419X_REG_F_BATT_OVP) == BQ2419X_REG_F_BATT_OVP)
		*state |= CHAGRE_STATE_BATT_OVP;

	return ret;
}

static int bq2419x_reset_watchdog_timer(void)
{
	return bq2419x_write_mask(BQ2419X_REG_POC,
<<<<<<< HEAD
			BQ2419X_REG_POC_WDT_RESET_MASK,
			BQ2419X_REG_POC_WDT_RESET_SHIFT,
			0x01);
=======
				  BQ2419X_REG_POC_WDT_RESET_MASK,
				  BQ2419X_REG_POC_WDT_RESET_SHIFT, 0x01);
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
}

static int bq2419x_get_vilim_sample(void)
{
	int i;
	int retry_times = 3;
	int v_sample = -1;

	for (i = 0; i < retry_times; ++i) {
<<<<<<< HEAD
		v_sample = hisi_adc_get_value(adc_channel_iin);
		if (v_sample < 0)
			hwlog_err("adc read channel 10 fail\n");
		else
			break;
	}

	hwlog_info("get Vilim_sample=%d\n", v_sample);

	return v_sample;
=======
		V_sample = hisi_adc_get_value(adc_channel_iin);
		if (V_sample < 0)
			hwlog_err("adc read channel 10 fail!\n");
		else
			break;
	}
	return V_sample;
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
}

static int bq2419x_get_ilim(void)
{
	int i;
	int cnt = 0;
	int v_temp;
	int delay_times = 100;
	int sample_num = 5;	/*use 5 samples to get an average value*/
	int sum = 0;
<<<<<<< HEAD
	int kilim = 485; /* based bq2419x spec */
=======
	int Kilim = 485;	/*based bq2419x spec*/
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29

	for (i = 0; i < sample_num; ++i) {
		v_temp = bq2419x_get_vilim_sample();
		if (v_temp >= 0) {
			sum += v_temp;
			++cnt;
		} else {
<<<<<<< HEAD
			hwlog_err("get_ilim get v_temp fail\n");
		}

		msleep(delay_times);
	}

	if (cnt > 0)
		return (sum * kilim) / (rilim * cnt);

	hwlog_err("use 0 as default Vilim\n");
	return 0;
}

=======
			hwlog_err("bq2419x get V_temp fail!\n");
		}
		msleep(delay_times);
	}
	if (cnt > 0) {
		return (sum * Kilim) / (rilim * cnt);
	} else {
		hwlog_err("use 0 as default Vilim!\n");
		return 0;
	}
}

/**********************************************************
*  Function:       bq2419x_check_charger_plugged
*  Discription:    check whether USB or adaptor is plugged
*  Parameters:     NULL
*  return value:   1 means USB or adaptor plugged
*                  0 means USB or adaptor not plugged
**********************************************************/
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
static int bq2419x_check_charger_plugged(void)
{
	u8 reg = 0;
	int ret = 0;

	ret = bq2419x_read_byte(BQ2419X_REG_SS, &reg);
<<<<<<< HEAD

	hwlog_info("check_charger_plugged [%x]=0x%x\n", BQ2419X_REG_SS, reg);

	if ((reg & BQ2419X_REG_SS_VBUS_STAT_MASK) ==
		BQ2419X_REG_SS_VBUS_PLUGGED)
		return TRUE;

	return FALSE;
=======
	if ((reg & BQ2419X_REG_SS_VBUS_STAT_MASK) ==
	    BQ2419X_REG_SS_VBUS_PLUGGED) {
		return 1;
	}
	return 0;
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
}

static int bq2419x_check_input_dpm_state(void)
{
	u8 reg = 0;
	int ret = -1;

	ret = bq2419x_read_byte(BQ2419X_REG_SS, &reg);
<<<<<<< HEAD
	if (ret < 0)
=======
	if (ret < 0) {
		hwlog_err("bq2419x_check_input_dpm_state err\n");
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
		return ret;

<<<<<<< HEAD
	hwlog_info("check_input_dpm_state [%x]=0x%x\n", BQ2419X_REG_SS, reg);

=======
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
	if (reg & BQ2419X_REG_SS_DPM_STAT_MASK)
		return TRUE;
	else
		return FALSE;
}

static int bq2419x_dump_register(char *reg_value)
{
<<<<<<< HEAD
	u8 reg[BQ2419X_REG_NUM] = {0};
	char buff[BUF_LEN] = {0};
=======
	u8 reg[BQ2419X_REG_NUM] = { 0 };
	char buff[26] = { 0 };
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
	int i = 0;

	memset(reg_value, 0, CHARGELOG_SIZE);
	snprintf(buff, 26, "%-8.2d", bq2419x_get_ilim());
	strncat(reg_value, buff, strlen(buff));
	for (i = 0; i < BQ2419X_REG_NUM; i++) {
		bq2419x_read_byte(i, &reg[i]);
		bq2419x_read_byte(i, &reg[i]);
		snprintf(buff, 26, "0x%-8.2x", reg[i]);
		strncat(reg_value, buff, strlen(buff));
	}
	return 0;
}

static int bq2419x_get_register_head(char *reg_head)
{
<<<<<<< HEAD
	char buff[BUF_LEN] = {0};
=======
	char buff[26] = { 0 };
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
	int i = 0;

	memset(reg_head, 0, CHARGELOG_SIZE);
	snprintf(buff, 26, "Ibus    ");
	strncat(reg_head, buff, strlen(buff));
	for (i = 0; i < BQ2419X_REG_NUM; i++) {
		snprintf(buff, 26, "Reg[%d]    ", i);
		strncat(reg_head, buff, strlen(buff));
	}
	return 0;
}

static int bq2419x_set_batfet_disable(int disable)
{
	return bq2419x_write_mask(BQ2419X_REG_MOC,
<<<<<<< HEAD
			BQ2419X_REG_MOC_BATFET_DISABLE_MASK,
			BQ2419X_REG_MOC_BATFET_DISABLE_SHIFT,
			disable);
=======
				  BQ2419X_REG_MOC_BATFET_DISABLE_MASK,
				  BQ2419X_REG_MOC_BATFET_DISABLE_SHIFT,
				  disable);
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
}

static int bq2419x_set_watchdog_timer(int value)
{
	u8 val = 0;
	int array_size = ARRAY_SIZE(bq2419x_watchdog_values);

	if (value > bq2419x_watchdog_values[array_size - 1])
		return bq2419x_watchdog_values[array_size - 1];
	else if (value < bq2419x_watchdog_values[0])
		return bq2419x_watchdog_values[0];

	val = params_to_reg(bq2419x_watchdog_values, array_size, value);
	return bq2419x_write_mask(BQ2419X_REG_CTTC,
<<<<<<< HEAD
			BQ2419X_REG_CTTC_WATCHDOG_MASK,
			BQ2419X_REG_CTTC_WATCHDOG_SHIFT,
			val);
=======
				  BQ2419X_REG_CTTC_WATCHDOG_MASK,
				  BQ2419X_REG_CTTC_WATCHDOG_SHIFT, val);
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
}

static int bq2419x_set_charger_hiz(int enable)
{
	int ret = 0;

	if (enable > 0)
		ret |= bq2419x_write_mask(BQ2419X_REG_ISC,
<<<<<<< HEAD
				BQ2419X_REG_ISC_EN_HIZ_MASK,
				BQ2419X_REG_ISC_EN_HIZ_SHIFT,
				TRUE);
	else
		ret |= bq2419x_write_mask(BQ2419X_REG_ISC,
				BQ2419X_REG_ISC_EN_HIZ_MASK,
				BQ2419X_REG_ISC_EN_HIZ_SHIFT,
				FALSE);
=======
					  BQ2419X_REG_ISC_EN_HIZ_MASK,
					  BQ2419X_REG_ISC_EN_HIZ_SHIFT, TRUE);
	else
		ret |= bq2419x_write_mask(BQ2419X_REG_ISC,
					  BQ2419X_REG_ISC_EN_HIZ_MASK,
					  BQ2419X_REG_ISC_EN_HIZ_SHIFT, FALSE);
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29

	return ret;
}

struct charge_device_ops bq2419x_ops = {
	.chip_init = bq2419x_chip_init,
	.dev_check = bq2419x_device_check,
	.set_input_current = bq2419x_set_input_current,
	.set_charge_current = bq2419x_set_charge_current,
	.set_terminal_voltage = bq2419x_set_terminal_voltage,
	.set_dpm_voltage = bq2419x_set_dpm_voltage,
	.set_terminal_current = bq2419x_set_terminal_current,
	.set_charge_enable = bq2419x_set_charge_enable,
	.set_otg_enable = bq2419x_set_otg_enable,
	.set_term_enable = bq2419x_set_term_enable,
	.get_charge_state = bq2419x_get_charge_state,
	.reset_watchdog_timer = bq2419x_reset_watchdog_timer,
	.dump_register = bq2419x_dump_register,
	.get_register_head = bq2419x_get_register_head,
	.set_watchdog_timer = bq2419x_set_watchdog_timer,
	.set_batfet_disable = bq2419x_set_batfet_disable,
	.get_ibus = bq2419x_get_ilim,
	.check_charger_plugged = bq2419x_check_charger_plugged,
	.check_input_dpm_state = bq2419x_check_input_dpm_state,
	.set_charger_hiz = bq2419x_set_charger_hiz,
	.get_charge_current = NULL,
};

static void bq2419x_irq_work(struct work_struct *work)
{
<<<<<<< HEAD
	struct bq2419x_device_info *di;
	u8 reg = 0;

	di = container_of(work, struct bq2419x_device_info, irq_work);

	msleep(100); /* sleep 100ms */

=======
	struct bq2419x_device_info *di =
	    container_of(work, struct bq2419x_device_info, irq_work);
	u8 reg = 0;

	msleep(100);
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
	bq2419x_read_byte(BQ2419X_REG_F, &reg);
	bq2419x_read_byte(BQ2419X_REG_F, &reg);

	if (reg & BQ2419X_REG_F_BOOST_OCP) {
<<<<<<< HEAD
		hwlog_info("CHARGE_FAULT_BOOST_OCP happened\n");

		atomic_notifier_call_chain(&fault_notifier_list,
			CHARGE_FAULT_BOOST_OCP, NULL);
=======
		hwlog_info("CHARGE_FAULT_BOOST_OCP\n");
		atomic_notifier_call_chain(&fault_notifier_list,
					   CHARGE_FAULT_BOOST_OCP, NULL);
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
	}

	if (di->irq_active == 0) {
		di->irq_active = 1;
		enable_irq(di->irq_int);
	}
}

static irqreturn_t bq2419x_interrupt(int irq, void *_di)
{
	struct bq2419x_device_info *di = _di;

<<<<<<< HEAD
	if (di == NULL) {
		hwlog_err("di is null\n");
		return -1;
	}

	hwlog_info("bq2419x int happened (%d)\n", di->irq_active);

=======
	hwlog_info("bq2419x interrupt\n");
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
	if (di->irq_active == 1) {
		di->irq_active = 0;
		disable_irq_nosync(di->irq_int);
		schedule_work(&di->irq_work);
	} else {
<<<<<<< HEAD
		hwlog_info("the irq is not enable, do nothing\n");
	}

	return IRQ_HANDLED;
}

static int bq2419x_probe(struct i2c_client *client,
	const struct i2c_device_id *id)
=======
		hwlog_info("The irq is not enable,do nothing!\n");
	}
	return IRQ_HANDLED;
}

/**********************************************************
*  Function:       bq2419x_probe
*  Discription:    bq2419x module probe
*  Parameters:   client:i2c_client
*                      id:i2c_device_id
*  return value:  0-sucess or others-fail
**********************************************************/
static int bq2419x_probe(struct i2c_client *client,
			 const struct i2c_device_id *id)
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
{
	int ret = 0;
	struct bq2419x_device_info *di = NULL;
	struct charge_device_ops *ops = NULL;
	struct device_node *np = NULL;
	struct class *power_class = NULL;

<<<<<<< HEAD
	hwlog_info("probe begin\n");

	if (client == NULL || id == NULL) {
		hwlog_err("client or id is null\n");
		return -ENOMEM;
	}

	di = kzalloc(sizeof(*di), GFP_KERNEL);
	if (di == NULL)
=======
	di = kzalloc(sizeof(*di), GFP_KERNEL);
	if (!di) {
		hwlog_err("bq2419x_device_info is NULL!\n");
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
		return -ENOMEM;

	g_bq2419x_dev = di;
	di->dev = &client->dev;
	np = di->dev->of_node;
	di->client = client;
	i2c_set_clientdata(client, di);

	INIT_WORK(&di->irq_work, bq2419x_irq_work);
<<<<<<< HEAD

	ret = of_property_read_u32(np, "rilim", &rilim);
	if (ret) {
		hwlog_err("rilim dts read failed\n");
		rilim = BQ2419X_RILIM_220_OHM;
	}
	hwlog_info("rilim=%d\n", rilim);

	ret = of_property_read_u32(np, "adc_channel_iin", &adc_channel_iin);
	if (ret) {
		hwlog_err("adc_channel_iin dts read failed\n");
		adc_channel_iin = BQ2419X_ADC_CHANNEL_IIN_10;
	}
	hwlog_info("adc_channel_iin=%d\n", adc_channel_iin);

=======
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
	di->gpio_cd = of_get_named_gpio(np, "gpio_cd", 0);
	if (!gpio_is_valid(di->gpio_cd)) {
<<<<<<< HEAD
		hwlog_err("gpio(gpio_cd) is not valid\n");
		ret = -EINVAL;
		goto bq2419x_fail_0;
	}

	ret = gpio_request(di->gpio_cd, "charger_cd");
	if (ret) {
		hwlog_err("gpio(gpio_cd) request fail\n");
		goto bq2419x_fail_0;
	}

	/* set gpio to control CD pin to disable/enable bq2419x IC */
	ret = gpio_direction_output(di->gpio_cd, 0);
	if (ret) {
		hwlog_err("gpio(gpio_cd) set output fail\n");
		goto bq2419x_fail_1;
	}

=======
		hwlog_err("gpio_cd is not valid\n");
		ret = -EINVAL;
		goto bq2419x_fail_0;
	}
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
	di->gpio_int = of_get_named_gpio(np, "gpio_int", 0);
	if (!gpio_is_valid(di->gpio_int)) {
<<<<<<< HEAD
		hwlog_err("gpio(gpio_int) is not valid\n");
=======
		hwlog_err("gpio_int is not valid\n");
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
		ret = -EINVAL;
		goto bq2419x_fail_0;
	}
	/*set gpio to control CD pin to disable/enable bq2419x IC */
	ret = gpio_request(di->gpio_cd, "charger_cd");
	if (ret) {
		hwlog_err("could not request gpio_cd\n");
		goto bq2419x_fail_0;
	}
	gpio_direction_output(di->gpio_cd, 0);
	ret = gpio_request(di->gpio_int, "charger_int");
	if (ret) {
<<<<<<< HEAD
		hwlog_err("gpio(gpio_int) request fail\n");
=======
		hwlog_err("could not request gpio_int\n");
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
		goto bq2419x_fail_1;
	}
	if (of_property_read_u32(np, "rilim", &rilim))
		hwlog_err("get rilim error,use default one!\n");

<<<<<<< HEAD
	ret = gpio_direction_input(di->gpio_int);
	if (ret) {
		hwlog_err("gpio(gpio_int) set input fail\n");
		goto bq2419x_fail_2;
	}
=======
	if (of_property_read_u32(np, "adc_channel_iin", &adc_channel_iin))
		hwlog_err("get adc_channel_iin error,use default one!\n");
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29

	gpio_direction_input(di->gpio_int);
	di->irq_int = gpio_to_irq(di->gpio_int);
	if (di->irq_int < 0) {
<<<<<<< HEAD
		hwlog_err("gpio(gpio_int) map to irq fail\n");
		ret = -EINVAL;
		goto bq2419x_fail_2;
	}

	ret = request_irq(di->irq_int, bq2419x_interrupt, IRQF_TRIGGER_FALLING,
		"charger_int_irq", di);
	if (ret) {
		hwlog_err("gpio(gpio_int) irq request fail\n");
=======
		ret = -ENOMEM;
		hwlog_err("could not map gpio_int to irq\n");
		goto bq2419x_fail_2;
	}

	ret =
	    request_irq(di->irq_int, bq2419x_interrupt, IRQF_TRIGGER_FALLING,
			"charger_int_irq", di);
	if (ret) {
		hwlog_err("could not request irq_int\n");
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
		di->irq_int = -1;
		goto bq2419x_fail_2;
	}
	disable_irq(di->irq_int);
	di->irq_active = 0;

	ops = &bq2419x_ops;
	ret = charge_ops_register(ops);
	if (ret) {
<<<<<<< HEAD
		hwlog_err("bq2419x charge ops register fail\n");
=======
		hwlog_err("register charge ops failed!\n");
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
		goto bq2419x_fail_3;
	}
	ret = bq2419x_sysfs_create_group(di);
	if (ret)
<<<<<<< HEAD
		hwlog_err("sysfs group create failed\n");

	power_class = hw_power_get_class();
	if (power_class != NULL) {
		if (charge_dev == NULL)
			charge_dev = device_create(power_class, NULL, 0, NULL,
				"charger");

		ret = sysfs_create_link(&charge_dev->kobj, &di->dev->kobj,
			"bq2419x");
		if (ret) {
			hwlog_err("sysfs link create failed\n");
=======
		hwlog_err("create sysfs entries failed!\n");
	power_class = hw_power_get_class();
	if (power_class) {
		if (charge_dev == NULL)
			charge_dev = device_create(power_class, NULL, 0, NULL, "charger");
		ret = sysfs_create_link(&charge_dev->kobj, &di->dev->kobj, "bq2419x");
		if (ret) {
			hwlog_err("create link to bq2419x fail.\n");
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
			goto bq2419x_fail_4;
		}
	}

<<<<<<< HEAD
	hwlog_info("probe end\n");
=======
	hwlog_info("bq2419x probe ok!\n");
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
	return 0;

bq2419x_fail_4:
	bq2419x_sysfs_remove_group(di);
bq2419x_fail_3:
	free_irq(di->irq_int, di);
bq2419x_fail_2:
	gpio_free(di->gpio_int);
bq2419x_fail_1:
	gpio_free(di->gpio_cd);
bq2419x_fail_0:
	kfree(di);
	g_bq2419x_dev = NULL;
	np = NULL;

	return ret;
}

static int bq2419x_remove(struct i2c_client *client)
{
	struct bq2419x_device_info *di = i2c_get_clientdata(client);

	bq2419x_sysfs_remove_group(di);

	gpio_set_value(di->gpio_cd, 1);
<<<<<<< HEAD

=======
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
	if (di->gpio_cd)
		gpio_free(di->gpio_cd);

	if (di->irq_int)
		free_irq(di->irq_int, di);

	if (di->gpio_int)
		gpio_free(di->gpio_int);

	kfree(di);
	return 0;
}

MODULE_DEVICE_TABLE(i2c, bq24192);
static const struct of_device_id bq2419x_of_match[] = {
	{
	 .compatible = "huawei,bq2419x_charger",
	 .data = NULL,
	 },
	{
	 },
};

static const struct i2c_device_id bq2419x_i2c_id[] = {
	{"bq2419x_charger", 0}, {}
};

static struct i2c_driver bq2419x_driver = {
	.probe = bq2419x_probe,
	.remove = bq2419x_remove,
	.id_table = bq2419x_i2c_id,
	.driver = {
		   .owner = THIS_MODULE,
		   .name = "bq2419x_charger",
		   .of_match_table = of_match_ptr(bq2419x_of_match),
		   },
};

static int __init bq2419x_init(void)
{
	int ret = 0;

	ret = i2c_add_driver(&bq2419x_driver);
	if (ret)
<<<<<<< HEAD
		hwlog_err("i2c_add_driver error\n");
=======
		hwlog_err("%s: i2c_add_driver error!!!\n", __func__);
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29

	return ret;
}

static void __exit bq2419x_exit(void)
{
	i2c_del_driver(&bq2419x_driver);
}

module_init(bq2419x_init);
module_exit(bq2419x_exit);
<<<<<<< HEAD

MODULE_LICENSE("GPL v2");
=======
MODULE_LICENSE("GPL");
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
MODULE_DESCRIPTION("bq2419x charger module driver");
MODULE_AUTHOR("Huawei Technologies Co., Ltd.");
