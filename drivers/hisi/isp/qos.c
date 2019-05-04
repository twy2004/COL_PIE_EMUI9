/*
 * hisilicon ISP driver, qos.c
 *
 * Copyright (c) 2018 Hisilicon Technologies CO., Ltd.
 *
 */

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/err.h>
#include <linux/iommu.h>
#include <linux/platform_data/remoteproc-hisi.h>
#include "hisp_internel.h"

#define QOS_MAX_NUM 64

struct {
    unsigned int num;
    unsigned int* offset;
    unsigned int* value;
} qos_dev;

int hisp_qos_dtget(struct device_node *np)
{
    int ret = -1;
    unsigned int qos_num = 0;
    unsigned int* qos_offset = NULL;
    unsigned int* qos_value = NULL;

    pr_info("[%s] +\n", __func__);

    if (np == NULL) {
        pr_err("[%s] device_node NULL\n", __func__);
        return -ENOMEM;
    }

	if ((ret = of_property_read_u32(np, "qos-num", &qos_num)) < 0 ) {
		pr_err("[%s] Failed: qos-num.0x%x of_property_read_u32.%d\n",__func__, qos_num, ret);
		return -ENODEV;
	}

    pr_info("[%s] qos-num.%d\n",__func__, qos_num);

    if ((qos_num == 0) || (qos_num > QOS_MAX_NUM)) {
        pr_err("[%s] Failed: QOS_MAX_NUM.%d\n", __func__, QOS_MAX_NUM);
        return -ENODEV;
    }

    qos_offset = (unsigned int*)kmalloc(sizeof(unsigned int)*qos_num, GFP_KERNEL);
    if (!qos_offset) {
        pr_err("[%s] Failed: alloc qos_offset\n", __func__);
        return -ENOMEM;
    }

    qos_value = (unsigned int*)kmalloc(sizeof(unsigned int)*qos_num, GFP_KERNEL);
    if (!qos_value) {
        pr_err("[%s] Failed: alloc qos_value\n", __func__);
        goto free_qos;
    }

    if ((ret = of_property_read_u32_array(np, "qos-offset", qos_offset, qos_num)) < 0) {
        pr_err("[%s] Failed: qos-offset of_property_read_u32_array.%d\n", __func__, ret);
        goto free_qos;
    }

    if ((ret = of_property_read_u32_array(np, "qos-value", qos_value, qos_num)) < 0) {
        pr_err("[%s] Failed: qos-value of_property_read_u32_array.%d\n", __func__, ret);
        goto free_qos;
    }

    qos_dev.num = qos_num;
    qos_dev.offset = qos_offset;
    qos_dev.value= qos_value;

    return 0;

free_qos:
    if (qos_offset)
        kfree(qos_offset);
    if (qos_value)
        kfree(qos_value);
    return -ENOMEM;
}

int ispcpu_qos_cfg(void)
{
    void __iomem* vivobus_base;
    unsigned int i = 0;

    pr_info("[%s] +\n", __func__);

    vivobus_base = get_regaddr_by_pa(VIVOBUS);
    if (vivobus_base == NULL) {
        pr_err("[%s] vivobus_base remap fail\n", __func__);
        return -ENOMEM;
    }
<<<<<<< HEAD
    pr_info("[%s] vivobus_base.%pK, qos_num.%d", __func__, vivobus_base, qos_dev.num);

    if ((qos_dev.num == 0) || (qos_dev.num > QOS_MAX_NUM) || (qos_dev.offset == NULL) || (qos_dev.value == NULL)) {
        pr_err("[%s] Failed: QOS_MAX_NUM.%d, offset.%pK, value.%pK\n", __func__, QOS_MAX_NUM, qos_dev.offset, qos_dev.value);
        return -ENODEV;
    }

    for (i=0; i<qos_dev.num; i++) {
        __raw_writel(qos_dev.value[i], (volatile void __iomem*)(vivobus_base + qos_dev.offset[i]));
    }
=======
    pr_info("[%s]  vivobus_base.%pK, ", __func__, vivobus_base);

    __raw_writel(QOS_LIMITER_MODE, (volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP_RD_QOS_MODE_ADDR));
    __raw_writel(QOS_EXTCONTROL, (volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP_RD_QOS_EXTCONTROL_ADDR));
    __raw_writel(QOS_LIMITER_MODE, (volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP_WR_QOS_MODE_ADDR));
    __raw_writel(QOS_EXTCONTROL, (volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP_WR_QOS_EXTCONTROL_ADDR));
    __raw_writel(QOS_EXTCONTROL,  (volatile void __iomem*)(vivobus_base + VIVO_BUS_A7T0VIVOBUS_RD_QOS_EXTCONTROL_ADDR));
    __raw_writel(QOS_EXTCONTROL,  (volatile void __iomem*)(vivobus_base + VIVO_BUS_A7T0VIVOBUS_WR_QOS_EXTCONTROL_ADDR));
    __raw_writel(QOS_LIMITER_MODE, (volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP1_RD_QOS_MODE_ADDR));
    __raw_writel(QOS_EXTCONTROL, (volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP1_RD_QOS_EXTCONTROL_ADDR));
    __raw_writel(QOS_LIMITER_MODE, (volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP1_WR_QOS_MODE_ADDR));
    __raw_writel(QOS_EXTCONTROL, (volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP1_WR_QOS_EXTCONTROL_ADDR));
    __raw_writel(QOS_PRIO_4,      (volatile void __iomem*)(vivobus_base + VIVO_BUS_A7T0VIVOBUS_RD_QOS_PRIORITY_ADDR));
    __raw_writel(QOS_FIX_MODE,    (volatile void __iomem*)(vivobus_base + VIVO_BUS_A7T0VIVOBUS_RD_QOS_MODE_ADDR));
    __raw_writel(QOS_PRIO_4,      (volatile void __iomem*)(vivobus_base + VIVO_BUS_A7T0VIVOBUS_WR_QOS_PRIORITY_ADDR));
    __raw_writel(QOS_FIX_MODE,    (volatile void __iomem*)(vivobus_base + VIVO_BUS_A7T0VIVOBUS_WR_QOS_MODE_ADDR));


    __raw_writel(QOS_BANDWIDTH_ISP,  (volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP_RD_QOS_BANDWIDTH_ADDR));
    __raw_writel(QOS_SATURATION_ISP, (volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP_RD_QOS_SATURATION_ADDR));
    __raw_writel(QOS_BANDWIDTH_ISP,  (volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP_WR_QOS_BANDWIDTH_ADDR));
    __raw_writel(QOS_SATURATION_ISP, (volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP_WR_QOS_SATURATION_ADDR));
    __raw_writel(QOS_BANDWIDTH_ISP,  (volatile void __iomem*)(vivobus_base + VIVO_BUS_A7T0VIVOBUS_RD_QOS_BANDWIDTH_ADDR));
    __raw_writel(QOS_SATURATION_ISP, (volatile void __iomem*)(vivobus_base + VIVO_BUS_A7T0VIVOBUS_RD_QOS_SATURATION_ADDR));
    __raw_writel(QOS_BANDWIDTH_ISP,  (volatile void __iomem*)(vivobus_base + VIVO_BUS_A7T0VIVOBUS_WR_QOS_BANDWIDTH_ADDR));
    __raw_writel(QOS_SATURATION_ISP, (volatile void __iomem*)(vivobus_base + VIVO_BUS_A7T0VIVOBUS_WR_QOS_SATURATION_ADDR));
    __raw_writel(QOS_BANDWIDTH_ISP,  (volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP1_RD_QOS_BANDWIDTH_ADDR));
    __raw_writel(QOS_SATURATION_ISP, (volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP1_RD_QOS_SATURATION_ADDR));
    __raw_writel(QOS_BANDWIDTH_ISP,  (volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP1_WR_QOS_BANDWIDTH_ADDR));
    __raw_writel(QOS_SATURATION_ISP, (volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP1_WR_QOS_SATURATION_ADDR));

    pr_info("QOS : ISP.rd.(prio.0x%x, mode.0x%x), ISP.wr.(prio.0x%x, mode.0x%x), A7.rd.(prio.0x%x, mode.0x%x), A7.wr.(prio.0x%x, mode.0x%x)\n",
        __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP_RD_QOS_PRIORITY_ADDR)),
        __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP_RD_QOS_MODE_ADDR)),
        __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP_WR_QOS_PRIORITY_ADDR)),
        __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP_WR_QOS_MODE_ADDR)),
        __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_A7T0VIVOBUS_RD_QOS_PRIORITY_ADDR)),
        __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_A7T0VIVOBUS_RD_QOS_MODE_ADDR)),
        __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_A7T0VIVOBUS_WR_QOS_PRIORITY_ADDR)),
        __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_A7T0VIVOBUS_WR_QOS_MODE_ADDR)));

    pr_info("QOS : ISP1.rd.(prio.0x%x, mode.0x%x), ISP1.wr.(prio.0x%x, mode.0x%x)\n",
        __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP1_RD_QOS_PRIORITY_ADDR)),
        __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP1_RD_QOS_MODE_ADDR)),
        __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP1_WR_QOS_PRIORITY_ADDR)),
        __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP1_WR_QOS_MODE_ADDR)));

    pr_info("QOS : ISP.rd.(bandwidth.0x%x, saturation.0x%x), ISP.wr.(bandwidth.0x%x, saturation.0x%x), A7.rd.(bandwidth.0x%x, saturation.0x%x), A7.wr.(bandwidth.0x%x, saturation.0x%x)\n",
    __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP_RD_QOS_BANDWIDTH_ADDR)),
    __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP_RD_QOS_SATURATION_ADDR)),
    __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP_WR_QOS_BANDWIDTH_ADDR)),
    __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP_WR_QOS_SATURATION_ADDR)),
    __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_A7T0VIVOBUS_RD_QOS_BANDWIDTH_ADDR)),
    __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_A7T0VIVOBUS_RD_QOS_SATURATION_ADDR)),
    __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_A7T0VIVOBUS_WR_QOS_BANDWIDTH_ADDR)),
    __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_A7T0VIVOBUS_WR_QOS_SATURATION_ADDR)));

    pr_info("QOS : ISP1.rd.(bandwidth.0x%x, saturation.0x%x), ISP1.wr.(bandwidth.0x%x, saturation.0x%x)\n",
    __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP1_RD_QOS_BANDWIDTH_ADDR)),
    __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP1_RD_QOS_SATURATION_ADDR)),
    __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP1_WR_QOS_BANDWIDTH_ADDR)),
    __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP1_WR_QOS_SATURATION_ADDR)));

    pr_info("QOS : ISP.rd.(extcontrol.0x%x), ISP.wr.(extcontrol.0x%x), A7.rd.(extcontrol.0x%x), A7.wr.(extcontrol.0x%x), ISP1.rd.(extcontrol.0x%x), ISP1.wr.(extcontrol.0x%x)\n",
    __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP_RD_QOS_EXTCONTROL_ADDR)),
    __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP_WR_QOS_EXTCONTROL_ADDR)),
    __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_A7T0VIVOBUS_RD_QOS_EXTCONTROL_ADDR)),
    __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_A7T0VIVOBUS_WR_QOS_EXTCONTROL_ADDR)),
    __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP1_RD_QOS_EXTCONTROL_ADDR)),
    __raw_readl((volatile void __iomem*)(vivobus_base + VIVO_BUS_ISP1_WR_QOS_EXTCONTROL_ADDR)));
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29

    return 0;
}

void hisp_qos_free(void)
{
    if (qos_dev.offset) {
        kfree(qos_dev.offset);
        qos_dev.offset = NULL;
    }
    if (qos_dev.value) {
        kfree(qos_dev.value);
        qos_dev.value = NULL;
    }
    qos_dev.num = 0;
}

