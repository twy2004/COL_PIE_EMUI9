/*
 * Copyright (C) 2012 Google, Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
#include <linux/version.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/devfreq.h>
#include <linux/list.h>
#include <linux/mutex.h>
#include <linux/pm_qos.h>
#include <linux/slab.h>
#include <asm/page.h>
#include <governor.h>
#include <hisi_npu_pm.h>


#define MHz	(1000000U)

static const int npu_pm_qos_class = PM_QOS_HISI_NPU_FREQ_DNLIMIT;



static int devfreq_npu_qos_func(struct devfreq *df, unsigned long *freq)
{
	int freq_qos;/*mhz*/
	int ret = 0;

	freq_qos = pm_qos_request(npu_pm_qos_class);
	if (freq_qos > 0) {
		*freq = freq_qos * MHz;//lint !e647
	} if (0 == freq_qos) {
		*freq = df->previous_freq;
	} else {
		dev_err(&df->dev, "failed to request pm qos(%d)\n", freq_qos);
		ret = -EINVAL;
	}

	return ret;
}

/*static struct notifier_block npu_pm_qos_notifier = {
	.notifier_call = NULL,
};*/

static int devfreq_npu_qos_gov_init(struct devfreq *df)
{
	/*int ret;

	npu_pm_qos_notifier.notifier_call = df->nb.notifier_call;

	ret = pm_qos_add_notifier(npu_pm_qos_class, &npu_pm_qos_notifier);
	if (ret) {
		dev_err(&df->dev, "failed to init %s governor\n", df->governor_name);
	}

	return ret;*/
	return 0;
}

static void devfreq_npu_qos_gov_exit(struct devfreq *df)
{
	/*int ret;

	ret = pm_qos_remove_notifier(npu_pm_qos_class, &npu_pm_qos_notifier);
	if (ret) {
		dev_err(&df->dev, "failed to exit %s governor\n", df->governor_name);
	}

	npu_pm_qos_notifier.notifier_call = NULL;*/
}

static int devfreq_npu_qos_handler(struct devfreq *devfreq,
				unsigned int event, void *data)
{
	int ret = 0;

	switch (event) {
	case DEVFREQ_GOV_START:
		ret = devfreq_npu_qos_gov_init(devfreq);
		if (!ret) {
			devfreq_monitor_start(devfreq);/*for init work*/
			devfreq_monitor_stop(devfreq);
		}
		break;
	case DEVFREQ_GOV_STOP:
		devfreq_monitor_stop(devfreq);
		devfreq_npu_qos_gov_exit(devfreq);
		break;
	case DEVFREQ_GOV_INTERVAL:
		devfreq_interval_update(devfreq, (unsigned int *)data);
		break;
	case DEVFREQ_GOV_SUSPEND:
		devfreq_monitor_suspend(devfreq);
		break;
	case DEVFREQ_GOV_RESUME:
		devfreq_monitor_resume(devfreq);
		break;
	default:
		break;
	}

	return ret;
}

struct devfreq_governor devfreq_npu_qos = {
	.name = "npu_pm_qos",
	.immutable = 1,
	.get_target_freq = devfreq_npu_qos_func,
	.event_handler = devfreq_npu_qos_handler,
};

static int __init devfreq_npu_qos_init(void)
{
	return devfreq_add_governor(&devfreq_npu_qos);
}
subsys_initcall(devfreq_npu_qos_init);

static void __exit devfreq_npu_qos_exit(void)
{
	int ret;

	ret = devfreq_remove_governor(&devfreq_npu_qos);
	if (ret)
		pr_err("%s: failed remove governor %d\n", __func__, ret);

	return;
}
module_exit(devfreq_npu_qos_exit);
MODULE_LICENSE("GPL");
