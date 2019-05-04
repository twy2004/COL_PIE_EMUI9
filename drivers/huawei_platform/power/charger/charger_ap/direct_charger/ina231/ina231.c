/*
<<<<<<< HEAD
 * ina231.c
 *
 * ina231 driver
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
=======
 * Driver for ina230 or ina231 power monitor chips
 *
 * Copyright (c) 2013- Hisilicon Technologies CO., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include <linux/kernel.h>
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
#include <linux/module.h>
#include <linux/init.h>
#include <linux/err.h>
#include <linux/slab.h>
#include <linux/i2c.h>
#include <linux/delay.h>
#include <linux/regulator/consumer.h>
#include <huawei_platform/log/hw_log.h>
#include <huawei_platform/power/direct_charger.h>
<<<<<<< HEAD
#include <huawei_platform/power/battery_voltage.h>
#ifdef CONFIG_WIRELESS_CHARGER
#include <huawei_platform/power/wireless_direct_charger.h>
#endif
#ifdef CONFIG_HISI_COUL
#include <linux/power/hisi/coul/hisi_coul_drv.h>
#endif
#include "ina231.h"

#ifdef HWLOG_TAG
#undef HWLOG_TAG
#endif
=======

struct ina231_data *g_idata;
/* common register definitions */
#define INA231_CONFIG			0x00
#define INA231_SHUNT_VOLTAGE	0x01 /* readonly */
#define INA231_BUS_VOLTAGE	0x02 /* readonly */
#define INA231_POWER			0x03 /* readonly */
#define INA231_CURRENT			0x04 /* readonly */
#define INA231_CALIBRATION		0x05
#define INA231_MASK_ENABLE	0x06
#define INA231_ALERT_LIMIT		0x07

/* register count */
#define INA231_MAX_REGS		8
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29

#define HWLOG_TAG ina231_for_charge
HWLOG_REGIST();
struct ina231_config {
	u16 config_sleep_in;
	u16 config_reset;
	u16 config_work;
	u16 calibrate_content;
	u16 mask_enable_content;
	u16 alert_limit_content;

<<<<<<< HEAD
struct ina231_device_info *g_ina231_dev;

static int ina231_init_finish_flag = INA231_NOT_INIT;
static int ina231_int_notify_enable_flag = INA231_DISABLE_INT_NOTIFY;

/*
 * current_lsb = (maximum expected current) / 2^15
 * callibration = 0.00512 / (current_lsb * Rshunt)
 * current = (shunt_voltage * calibration) / 2048
 * power = (current * bus_voltage) / 20000
 */
static struct ina231_config_data ina231_config = {
	/* INA231_CONFIG_REG [0x4124]:
	 * number of averages:1, Vbus ct:1.1ms,
	 * Vsh ct:1.1ms, powerdown mode
	 */
	.config_sleep_in =
		((INA231_CONFIG_MODE_PD1 << INA231_CONFIG_MODE_SHIFT) |
		(INA231_CONFIG_CT_1100US << INA231_CONFIG_VSHUNTCT_SHIFT) |
		(INA231_CONFIG_CT_1100US << INA231_CONFIG_VBUSCT_SHIFT) |
		(INA231_CONFIG_AVG_NUM_1 << INA231_CONFIG_AVG_SHIFT)),

	/* INA231_CONFIG_REG [0x8000]: reset the whole chip */
	.config_reset = (INA231_CONFIG_RST_ENABLE << INA231_CONFIG_RST_SHIFT),

	/* INA231_CONFIG_REG [0x4377]:
	 * number of averages:4, Vbus ct:2.116ms,
	 * Vsh ct:4.156ms, shunt and bus continous mode
	 */
	.config_work =
		 ((INA231_CONFIG_MODE_SB_CONS << INA231_CONFIG_MODE_SHIFT) |
		 (INA231_CONFIG_CT_4156US << INA231_CONFIG_VSHUNTCT_SHIFT) |
		 (INA231_CONFIG_CT_2116US << INA231_CONFIG_VBUSCT_SHIFT) |
		 (INA231_CONFIG_AVG_NUM_4 << INA231_CONFIG_AVG_SHIFT)),

	/* INA231_CALIBRATION_REG [0x1000] */
	.calibrate_content = 0x400,

	/* INA231_MASK_ENABLE_REG [0x01] */
	.mask_enable_content =
		(1 << INA231_MASK_ENABLE_LEN_SHIFT),

	/* ALERT_LIMIT [0x0] */
	.alert_limit_content = 0x0,
=======
	int bus_voltage_lsb;	/* uV */
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29

	int current_lsb;	/* uA */
};

<<<<<<< HEAD
#ifdef CONFIG_HUAWEI_POWER_DEBUG
static ssize_t ina231_dbg_show(void *dev_data, char *buf, size_t size)
{
	struct ina231_device_info *dev_p;

	dev_p = (struct ina231_device_info *)dev_data;
	if (dev_p == NULL) {
		hwlog_err("dev_p is null\n");
		return scnprintf(buf, size, "dev_p is null\n");
	}

	return scnprintf(buf, size,
		"ina231_calibrate_content=0x%x\n",
		dev_p->config->calibrate_content);
}

static ssize_t ina231_dbg_store(void *dev_data, const char *buf, size_t size)
{
	struct ina231_device_info *dev_p;
	u16 calibrate_content = 0;

	dev_p = (struct ina231_device_info *)dev_data;
	if (dev_p == NULL) {
		hwlog_err("dev_p is null\n");
		return -EINVAL;
	}

	if (kstrtou16(buf, 0, &calibrate_content) < 0) {
		hwlog_err("get kstrtou16 failed:%s\n", buf);
		return -EINVAL;
	}

	dev_p->config->calibrate_content = calibrate_content;

	hwlog_info("calibrate_content=0x%x\n",
		dev_p->config->calibrate_content);

	return size;
}
#endif /* CONFIG_HUAWEI_POWER_DEBUG */
=======
struct ina231_data {
	struct device *dev;
	struct i2c_client *client;
	const struct ina231_config *config;
	struct regulator *vs_regu;
	int vs_on;
	int need_to_power_vs;
};

static  struct ina231_config ina231_config = {
	.config_sleep_in = 0x4124, /*config ina231 to powerdown mode, number of averages:1, Vbus conversion time is 1.1ms, Vsh conversion time is 1.1ms*/
	.config_reset = 0x8000, /*reset the whole chip*/
	.config_work = 0x4377, /*config ina231 to shunt and bus continous mode, nuber of averages:4, Vbus conversion time is 2.116ms, Vsh conversion time is 4.156ms*/
	.calibrate_content = 0x1000, /*current_LSB: 0.5ma, */
	.mask_enable_content = 0x0,
	.alert_limit_content = 0x0,
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29

	.bus_voltage_lsb = 1250, /* 1250uV/bit */
	.current_lsb = 500, /* 500uA/bit */
};
static int enable_vs_supply(void)
{
<<<<<<< HEAD
	struct ina231_device_info *di = g_ina231_dev;
	struct i2c_client *client = NULL;
	s16 reg_value = 0;
	int lsb_value = 0;
	int ret = 0;

	if (di == NULL || di->client == NULL) {
		hwlog_err("di or client is null\n");
		return -1;
	}

	client = di->client;
	lsb_value = di->config->shunt_voltage_lsb;

	ret = i2c_smbus_read_word_swapped(client, INA231_SHUNT_VOLTAGE_REG);
	if (ret < 0) {
		hwlog_err("shunt_voltage_reg read fail\n");
		return -1;
	}

	reg_value = (s16)ret;
	*val = (int)(reg_value * lsb_value) / INA231_NV_TO_MV;

	hwlog_info("shunt_voltage=%d, VOLTAGE_REG=0x%x\n", *val, reg_value);
=======
	struct ina231_data *idata = g_idata;
	int ret;
	if (idata->vs_regu)
	{
		ret = regulator_enable(idata->vs_regu);
		if (ret)
		{
			hwlog_err("[%s]fail!\n", __func__);
			return -1;
		}
	}
	hwlog_info("[%s]succ!\n", __func__);
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
	return 0;
}

static int ina231_init(void)
{
	int ret = 0;
<<<<<<< HEAD

	if (di == NULL || di->client == NULL) {
		hwlog_err("di or client is null\n");
		return -1;
	}

	client = di->client;
	lsb_value = di->config->bus_voltage_lsb;

	ret = i2c_smbus_read_word_swapped(client, INA231_BUS_VOLTAGE_REG);
	if (ret < 0) {
		hwlog_err("bus_voltage_reg read fail\n");
		return -1;
	}

	reg_value = (s16)ret;
	*val = (int)(reg_value * lsb_value) / INA231_UV_TO_MV;

	hwlog_info("voltage=%d, VOLTAGE_REG=0x%x\n", *val, reg_value);
	return 0;
}

static int ina231_get_current_ma(int *val)
{
	struct ina231_device_info *di = g_ina231_dev;
=======
	struct ina231_data *idata = g_idata;
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
	struct i2c_client *client = NULL;

<<<<<<< HEAD
	if (di == NULL || di->client == NULL) {
		hwlog_err("di or client is null\n");
		return -1;
	}

	client = di->client;
	lsb_value = di->config->current_lsb;

	ret = i2c_smbus_read_word_swapped(client, INA231_CURRENT_REG);
	if (ret < 0) {
		hwlog_err("current_reg read fail\n");
		return -1;
	}

	reg_value = (s16)ret;
	*val = (int)(reg_value * lsb_value) / INA231_UA_TO_MA;

	hwlog_info("current=%d, CURRENT_REG=0x%x\n", *val, reg_value);
	return 0;
}

static int ina231_get_vbat_mv(void)
{
	return hw_battery_voltage(BAT_ID_MAX);
}

static int ina231_get_ibat_ma(int *val)
{
	*val =  -hisi_battery_current();
=======
	if (!idata->vs_on)
	{
		hwlog_err("[%s]vs_on is 0, fail!\n", __func__);
		return -1;
	}
	client = idata->client;
	ret = i2c_smbus_write_word_swapped(client, INA231_CONFIG, idata->config->config_work);
	ret |= i2c_smbus_write_word_swapped(client, INA231_CALIBRATION, idata->config->calibrate_content);
	ret |= i2c_smbus_write_word_swapped(client, INA231_MASK_ENABLE, idata->config->mask_enable_content);
	ret |= i2c_smbus_write_word_swapped(client, INA231_ALERT_LIMIT, idata->config->alert_limit_content);
	if (ret)
	{
		hwlog_err("[%s]fail!\n", __func__);
		return -1;
	}
	msleep(100);
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29

	return 0;
}

static int ina231_exit(void)
{
	return 0;
}
static int ina231_get_bus_voltage_mv(void)
{
	s16 reg;
	int ret = 0;
	int bus_voltage_lsb; /* 0mV/bit */
	struct ina231_data *idata = g_idata;
	struct i2c_client *client = NULL;

<<<<<<< HEAD
	if (di == NULL || di->client == NULL) {
		hwlog_err("di or client is null\n");
=======
	client = idata->client;
	bus_voltage_lsb = idata->config->bus_voltage_lsb;
	ret = i2c_smbus_read_word_swapped(client, INA231_BUS_VOLTAGE);
	if (ret < 0)
	{
		hwlog_err("[%s]fail, ret = 0x%x!\n", __func__, ret);
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
		return -1;
	}
	reg = (s16) ret;

<<<<<<< HEAD
	client = di->client;

	for (i = 0; i < INA231_MAX_REGS; ++i) {
		hwlog_info("reg [%d]=0x%x\n",
			i, i2c_smbus_read_word_swapped(client, i));
	}

	ina231_get_shunt_voltage_mv(&shunt_volt);
	ina231_get_bus_voltage_mv(&bus_volt);
	ina231_get_current_ma(&cur);

	hwlog_info("shunt_voltage=%d, bus_voltage=%d, current=%d\n",
		shunt_volt, bus_volt, cur);

	return 0;
=======
	return (int) (reg* bus_voltage_lsb)/1000;
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
}

static int ina231_get_current_ma(int* val)
{
	s16 reg;
	int ret = 0;
<<<<<<< HEAD

	if (di == NULL || di->client == NULL) {
		hwlog_err("di or client is null\n");
		return -1;
	}

	client = di->client;

	/* communication check and reset device */
	ret = i2c_smbus_write_word_swapped(client,
		INA231_CONFIG_REG, di->config->config_reset);
	if (ret < 0) {
		hwlog_err("device_reset fail\n");
		return -1;
	}

	mdelay(20);

	/* device goto sleep */
	i2c_smbus_write_word_swapped(client,
		INA231_CONFIG_REG, di->config->config_sleep_in);
	if (ret < 0) {
		hwlog_err("device_reset fail\n");
		return -1;
	}

	return 0;
}

static int ina231_reg_init(void)
{
	struct ina231_device_info *di = g_ina231_dev;
	struct i2c_client *client = NULL;
	int ret = 0;

	if (di == NULL || di->client == NULL) {
		hwlog_err("di or client is null\n");
		return -1;
	}

	client = di->client;

	ret = i2c_smbus_write_word_swapped(client,
		INA231_CONFIG_REG, di->config->config_work);
	ret |= i2c_smbus_write_word_swapped(client,
		INA231_CALIBRATION_REG, di->config->calibrate_content);
	ret |= i2c_smbus_write_word_swapped(client,
		INA231_MASK_ENABLE_REG, di->config->mask_enable_content);
	ret |= i2c_smbus_write_word_swapped(client,
		INA231_ALERT_LIMIT_REG, di->config->alert_limit_content);
	if (ret) {
		hwlog_err("reg_init fail\n");
=======
	int current_lsb; /* 0mV/bit */
	struct ina231_data *idata = g_idata;
	struct i2c_client *client = NULL;

	client = idata->client;
	current_lsb = idata->config->current_lsb;
	ret= i2c_smbus_read_word_swapped(client, INA231_CURRENT);
	if (ret < 0)
	{
		hwlog_err("[%s]fail, reg = 0x%x!\n", __func__, ret);
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
		return -1;
	}

	reg = (s16) ret;
	*val = (int) (reg* current_lsb)/1000;
	return 0;
}
<<<<<<< HEAD

static int ina231_batinfo_exit(void)
{
	return 0;
}

static void ina231_interrupt_work(struct work_struct *work)
{
	struct ina231_device_info *di;
	u16 mask_enable;
	u16 alert_limit;

	di = container_of(work, struct ina231_device_info, irq_work);

	mask_enable = i2c_smbus_read_word_swapped(di->client,
		INA231_MASK_ENABLE_REG);
	alert_limit = i2c_smbus_read_word_swapped(di->client,
		INA231_ALERT_LIMIT_REG);

	if (ina231_int_notify_enable_flag == INA231_ENABLE_INT_NOTIFY)
		ina231_dump_register();

	hwlog_info("mask_enable_reg [%x]=0x%x\n",
		INA231_MASK_ENABLE_REG, mask_enable);
	hwlog_info("alert_limit_reg [%x]=0x%x\n",
		INA231_ALERT_LIMIT_REG, alert_limit);

	/* clear irq */
	enable_irq(di->irq_int);
}

static irqreturn_t ina231_interrupt(int irq, void *_di)
{
	struct ina231_device_info *di = _di;

	if (di == NULL) {
		hwlog_err("di is null\n");
		return -1;
	}

	if (di->chip_already_init == 0)
		hwlog_err("chip not init\n");

	if (ina231_init_finish_flag == INA231_INIT_FINISH)
		ina231_int_notify_enable_flag = INA231_ENABLE_INT_NOTIFY;

	hwlog_info("ina231 int happened(%d)\n", ina231_init_finish_flag);

	disable_irq_nosync(di->irq_int);
	schedule_work(&di->irq_work);

	return IRQ_HANDLED;
=======
static int ina231_get_bat_temp(void)
{
	return 25;
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
}

struct batinfo_ops ina231_ops = {
	.init = ina231_init,
	.exit = ina231_exit,
	.get_bat_btb_voltage = ina231_get_bus_voltage_mv,
	.get_bat_package_voltage = ina231_get_bus_voltage_mv,
	.get_bat_current = ina231_get_current_ma,
	.get_bat_temperature = ina231_get_bat_temp,
};

static int ina231_probe(struct i2c_client *client,
	const struct i2c_device_id *id)
{
	struct i2c_adapter *adapter = client->adapter;
	struct ina231_data *idata;
	struct device_node *np = NULL;
	int ret = -ENODEV;
	int ibat = 0;
	int i;
	unsigned int calibrate_content;

<<<<<<< HEAD
	hwlog_info("probe begin\n");

	if (client == NULL || id == NULL) {
		hwlog_err("client or id is null\n");
		return -ENOMEM;
	}

	if (!i2c_check_functionality(client->adapter,
		I2C_FUNC_SMBUS_WORD_DATA)) {
		hwlog_err("i2c_check failed\n");
=======
	if (!i2c_check_functionality(adapter, I2C_FUNC_SMBUS_WORD_DATA))
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
		return -ENODEV;

<<<<<<< HEAD
	di = devm_kzalloc(&client->dev, sizeof(*di), GFP_KERNEL);
	if (di == NULL)
		return -ENOMEM;

	g_ina231_dev = di;
=======
	idata = devm_kzalloc(&client->dev, sizeof(*idata), GFP_KERNEL);
	if (!idata)
		return -ENOMEM;
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29

	g_idata = idata;
	idata->config = &ina231_config;
	idata->client = client;
	idata->dev = &client->dev;

	np = idata->dev->of_node;
	ret = of_property_read_u32(np, "calibrate_content", &calibrate_content);
<<<<<<< HEAD
	if (ret == 0) {
		ina231_config.calibrate_content = (u16)calibrate_content;
		hwlog_info("calibrate_content=0x%x (use dts value)\n",
			ina231_config.calibrate_content);
	} else {
		hwlog_info("calibrate_content=0x%x (use default value)\n",
			ina231_config.calibrate_content);
	}

	di->gpio_int = of_get_named_gpio(np, "gpio_int", 0);
	hwlog_info("gpio_int=%d\n", di->gpio_int);

	if (!gpio_is_valid(di->gpio_int)) {
		hwlog_err("gpio(gpio_int) is not valid\n");
		ret = -EINVAL;
		goto ina231_fail_0;
	}

	ret = gpio_request(di->gpio_int, "ina231_gpio_int");
	if (ret) {
		hwlog_err("gpio(gpio_int) request fail\n");
		goto ina231_fail_0;
	}

	ret = gpio_direction_input(di->gpio_int);
	if (ret) {
		hwlog_err("gpio(gpio_int) set input fail\n");
		goto ina231_fail_1;
	}

	di->irq_int = gpio_to_irq(di->gpio_int);
	if (di->irq_int < 0) {
		hwlog_err("gpio(gpio_int) map to irq fail\n");
		ret = -EINVAL;
		goto ina231_fail_1;
	}

	ret = request_irq(di->irq_int, ina231_interrupt, IRQF_TRIGGER_FALLING,
		"ina231_int_irq", di);
	if (ret) {
		hwlog_err("gpio(gpio_int) irq request fail\n");
		di->irq_int = -1;
		goto ina231_fail_1;
	}

	ret = batinfo_lvc_ops_register(&ina231_batinfo_ops);
	if (ret) {
		hwlog_err("ina231 batinfo ops register fail\n");
		goto ina231_fail_2;
=======
	if (ret)
	{
		hwlog_err("get calibrate_content failed\n");
		goto fail0;
	}
	ina231_config.calibrate_content = (u16)calibrate_content;
	hwlog_info("calibrate_content = 0x%x\n", ina231_config.calibrate_content);
	ret = of_property_read_u32(np, "need_to_power_vs", &(idata->need_to_power_vs));
	if (ret)
	{
		hwlog_err("get need_to_power_vs failed\n");
		goto fail0;
	}
	hwlog_info("need_to_power_vs = %d\n", idata->need_to_power_vs);
	if (idata->need_to_power_vs)
	{
		idata->vs_regu = devm_regulator_get(&client->dev, "vs");
		if (IS_ERR(idata->vs_regu))
		{
			hwlog_err("[%s]can not get vs-supply!\n", __func__);
			ret = -ENODEV;
			goto fail0;
		}
		if (enable_vs_supply())
		{
			ret = -ENODEV;
			goto fail0;
		}
	}
	idata->vs_on = 1;

	/* communication check and reset device*/
	ret = i2c_smbus_write_word_swapped(client, INA231_CONFIG, idata->config->config_reset);
	if (ret < 0)
	{
		hwlog_err("%s reset failed\n", client->name);
		goto fail0;
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
	}
	mdelay(20);

<<<<<<< HEAD
	ret = batinfo_sc_ops_register(&ina231_batinfo_ops);
	if (ret) {
		hwlog_err("ina231 batinfo ops register fail\n");
		goto ina231_fail_2;
	}

#ifdef CONFIG_WIRELESS_CHARGER
	ret = wireless_sc_batinfo_ops_register(&ina231_batinfo_ops);
	if (ret) {
		hwlog_err("ina231 wireless_sc batinfo ops register fail\n");
		goto ina231_fail_2;
	}
#endif

#ifdef CONFIG_HUAWEI_POWER_DEBUG
	power_dbg_ops_register("ina231_para", i2c_get_clientdata(client),
		(power_dgb_show)ina231_dbg_show,
		(power_dgb_store)ina231_dbg_store);
#endif

	di->chip_already_init = 1;

	ret = ina231_device_reset();
	if (ret) {
		hwlog_err("ina231 reg reset fail\n");
		di->chip_already_init = 0;
		goto ina231_fail_2;
	}

	ret = ina231_reg_init();
	if (ret) {
		hwlog_err("ina231 reg init fail\n");
		di->chip_already_init = 0;
		goto ina231_fail_2;
=======
	/* goto sleep */
	i2c_smbus_write_word_swapped(client, INA231_CONFIG, idata->config->config_sleep_in);

	i2c_set_clientdata(client, idata);
	ret = batinfo_lvc_ops_register(&ina231_ops);
	if (ret)
	{
		hwlog_err("register ina231 ops failed!\n");
		goto fail0;
	}

	ina231_init();
	for (i = 0; i < 8; ++i)
	{
		hwlog_info("reg[%d] = 0x%x\n", i, i2c_smbus_read_word_swapped(client, i));
	}
	ret = ina231_get_current_ma(&ibat);
	if (ret)
	{
		hwlog_err("get current failed!\n");
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
	}
	hwlog_info("bat_vol = %d, bat_cur = %d\n", ina231_get_bus_voltage_mv(), ibat);
	hwlog_info("name:%s(address:0x%x) probe successfully\n", client->name, client->addr);
	return 0;
fail0:
	kfree(idata);
	idata = NULL;
	return ret;
}

static int ina231_remove(struct i2c_client *client)
{
<<<<<<< HEAD
	struct ina231_device_info *di = i2c_get_clientdata(client);

	hwlog_info("remove begin\n");

	if (di->irq_int)
		free_irq(di->irq_int, di);

	if (di->gpio_int)
		gpio_free(di->gpio_int);

	hwlog_info("remove end\n");
	return 0;
}

static void ina231_shutdown(struct i2c_client *client)
{
	ina231_device_reset();
}

MODULE_DEVICE_TABLE(i2c, ina231);
static const struct of_device_id ina231_of_match[] = {
=======
	return 0;
}

static const struct i2c_device_id ina231_id[] = {
	{"ina231_for_charge", 0},
	{ },
};
MODULE_DEVICE_TABLE(i2c, ina231_id);

static struct of_device_id ina231_match_table[] = {
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
	{
		.compatible = "huawei,ina231_for_charge",
		.data = NULL,
	},
	{},
};

<<<<<<< HEAD
static const struct i2c_device_id ina231_i2c_id[] = {
	{"ina231_for_charge", 0}, {}
};
=======
MODULE_DEVICE_TABLE(of, ina231_of_match);
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29

static struct i2c_driver ina231_driver = {
	.probe		= ina231_probe,
	.remove		= ina231_remove,
	.shutdown = NULL,
	.driver = {
		.name = "huawei_ina231_for_charge",
		.owner = THIS_MODULE,
		.of_match_table = of_match_ptr(ina231_match_table),
	},
	.id_table = ina231_id,
};

static int __init ina231_module_init(void)
{
	int ret = 0;

	ret = i2c_add_driver(&ina231_driver);
	if (ret)
<<<<<<< HEAD
		hwlog_err("i2c_add_driver error\n");
=======
		hwlog_err("Unable to register ina231 driver\n");
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29

	return ret;
}

module_init(ina231_module_init);

<<<<<<< HEAD
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("ina231 module driver");
MODULE_AUTHOR("Huawei Technologies Co., Ltd.");
=======
MODULE_DESCRIPTION("ina231 driver");
MODULE_LICENSE("GPL");
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
