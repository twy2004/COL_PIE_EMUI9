# drm/tegra depends on host1x, so if both drivers are built-in care must be
# taken to initialize them in the correct order. Link order is the only way
# to ensure this currently.
<<<<<<< HEAD
obj-y                         += drm/ host1x/ ipu-v3/ vga/
obj-$(CONFIG_GPU_GMC_GENERIC) += gmc/
obj-$(CONFIG_MALI_MIDGARD)    += arm/
=======
obj-$(CONFIG_TEGRA_HOST1X)	+= host1x/
obj-y			+= drm/ vga/
obj-$(CONFIG_MALI_MIDGARD)	+= arm/
obj-$(CONFIG_IMX_IPUV3_CORE)	+= ipu-v3/
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
