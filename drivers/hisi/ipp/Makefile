# Hisilicon IPP Makefile
<<<<<<< HEAD
ccflags-$(CONFIG_HISPIPP_V200) += -Idrivers/hisi/ipp/v200
ccflags-$(CONFIG_HISPIPP_V210) += -Idrivers/hisi/ipp/v210
ifeq ($(chip_type),es)
ccflags-$(CONFIG_HISPIPP_V250) += -Idrivers/hisi/ipp/v250es
else
ccflags-$(CONFIG_HISPIPP_V250) += -Idrivers/hisi/ipp/v250
endif
obj-$(CONFIG_HISPIPP_V200) += v200/
obj-$(CONFIG_HISPIPP_V210) += v210/
ifeq ($(chip_type),es)
obj-$(CONFIG_HISPIPP_V250) += v250es/
else
obj-$(CONFIG_HISPIPP_V250) += v250/
=======

obj-$(CONFIG_HISPIPP) += ipp-core.o ipp-com.o memory.o smc.o
obj-$(CONFIG_HISPIPP) += v200/ device/
obj-$(CONFIG_HISPIPP) += adapter_common.o \
                            adapter_mcf.o \
                            adapter_mfnr.o \
                            adapter_slam.o \
                            adapter_slamtest.o

subdir-ccflags-$(CONFIG_HISPIPP) += -Wall -Werror
subdir-ccflags-$(CONFIG_HISPIPP) += -I$(srctree)/drivers/hisi/ipp \
                                    -I$(srctree)/drivers/hisi/ipp/v200 \
                                    -I$(srctree)/drivers/hisi/ipp/device \
                                    -I$(srctree)/drivers/hisi/ipp/include \
                                    -I$(srctree)/drivers/hisi/ipp/v200/include \
                                    -I$(srctree)/drivers/hisi/ipp/device/include \
                                    -I$(srctree)/drivers/hisi/tzdriver
ifneq ($(TARGET_BUILD_VARIANT),user)
subdir-ccflags-$(CONFIG_HISPIPP) += -DCONFIG_IPP_DEBUG
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
endif
