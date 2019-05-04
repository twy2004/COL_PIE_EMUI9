<<<<<<< HEAD
obj-$(CONFIG_HUAWEI_BATTERY_INFORMATION) += battery_ct/
obj-$(CONFIG_HUAWEI_BATTERY_VOLTAGE) += battery_voltage/
obj-$(CONFIG_HUAWEI_BATTERY_TEMP) += battery_temp/
=======
#never change compiling order(drivers initialization order) below
obj-$(CONFIG_HUAWEI_BATTERY_INFORMATION) += MAXIM/

ifneq ($(TARGET_BUILD_VARIANT),user)
ccflags-y += -DBATTERY_LIMIT_DEBUG
endif

ifeq ($(TARGET_VERSION_MODE),factory)
ccflags-y += -DBATTBD_FORCE_MATCH
endif

obj-$(CONFIG_HUAWEI_BATTERY_INFORMATION) += batt_info.o
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
