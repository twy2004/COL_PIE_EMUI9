<<<<<<< HEAD
/*
 * dual_loadswitch.h
 *
 * dual loadswitch driver
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

#ifndef _DUAL_LOADSWITCH_H_
#define _DUAL_LOADSWITCH_H_
=======
#ifndef __DUAL_LOADSWITCH_H_
#define __DUAL_LOADSWITCH_H_
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29

#include <huawei_platform/power/direct_charger.h>
enum dual_loadswitch_sysfs_type {
	DUAL_LOADSWITCH_SYSFS_ENABLE_MAIN = 0,
	DUAL_LOADSWITCH_SYSFS_ENABLE_AUX,
};

struct dual_loadswitch_info {
	struct device *dev;
	int loadswitch_main_enable_sysfs;
	int loadswitch_aux_enable_sysfs;
};

<<<<<<< HEAD
int loadswitch_main_ops_register(struct loadswitch_ops *ops);
int loadswitch_aux_ops_register(struct loadswitch_ops *ops);

#endif /* _DUAL_LOADSWITCH_H_ */
=======
#ifdef CONFIG_LLT_TEST
#endif
int loadswitch_main_ops_register(struct loadswitch_ops *);
int loadswitch_aux_ops_register(struct loadswitch_ops *);

#endif
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
