#ifndef __SOC_CRGPERIPH_INTERFACE_H__
#define __SOC_CRGPERIPH_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_CRGPERIPH_PEREN0_ADDR(base) ((base) + (0x000))
#define SOC_CRGPERIPH_PERDIS0_ADDR(base) ((base) + (0x004))
#define SOC_CRGPERIPH_PERCLKEN0_ADDR(base) ((base) + (0x008))
#define SOC_CRGPERIPH_PERSTAT0_ADDR(base) ((base) + (0x00C))
#define SOC_CRGPERIPH_PEREN1_ADDR(base) ((base) + (0x010))
#define SOC_CRGPERIPH_PERDIS1_ADDR(base) ((base) + (0x014))
#define SOC_CRGPERIPH_PERCLKEN1_ADDR(base) ((base) + (0x018))
#define SOC_CRGPERIPH_PERSTAT1_ADDR(base) ((base) + (0x01C))
#define SOC_CRGPERIPH_PEREN2_ADDR(base) ((base) + (0x020))
#define SOC_CRGPERIPH_PERDIS2_ADDR(base) ((base) + (0x024))
#define SOC_CRGPERIPH_PERCLKEN2_ADDR(base) ((base) + (0x028))
#define SOC_CRGPERIPH_PERSTAT2_ADDR(base) ((base) + (0x02C))
#define SOC_CRGPERIPH_PEREN3_ADDR(base) ((base) + (0x030))
#define SOC_CRGPERIPH_PERDIS3_ADDR(base) ((base) + (0x034))
#define SOC_CRGPERIPH_PERCLKEN3_ADDR(base) ((base) + (0x038))
#define SOC_CRGPERIPH_PERSTAT3_ADDR(base) ((base) + (0x03C))
#define SOC_CRGPERIPH_PEREN4_ADDR(base) ((base) + (0x040))
#define SOC_CRGPERIPH_PERDIS4_ADDR(base) ((base) + (0x044))
#define SOC_CRGPERIPH_PERCLKEN4_ADDR(base) ((base) + (0x048))
#define SOC_CRGPERIPH_PERSTAT4_ADDR(base) ((base) + (0x04C))
#define SOC_CRGPERIPH_PEREN5_ADDR(base) ((base) + (0x050))
#define SOC_CRGPERIPH_PERDIS5_ADDR(base) ((base) + (0x054))
#define SOC_CRGPERIPH_PERCLKEN5_ADDR(base) ((base) + (0x058))
#define SOC_CRGPERIPH_PERSTAT5_ADDR(base) ((base) + (0x05C))
#define SOC_CRGPERIPH_PERRSTEN0_ADDR(base) ((base) + (0x060))
#define SOC_CRGPERIPH_PERRSTDIS0_ADDR(base) ((base) + (0x064))
#define SOC_CRGPERIPH_PERRSTSTAT0_ADDR(base) ((base) + (0x068))
#define SOC_CRGPERIPH_PERRSTEN1_ADDR(base) ((base) + (0x06C))
#define SOC_CRGPERIPH_PERRSTDIS1_ADDR(base) ((base) + (0x070))
#define SOC_CRGPERIPH_PERRSTSTAT1_ADDR(base) ((base) + (0x074))
#define SOC_CRGPERIPH_PERRSTEN2_ADDR(base) ((base) + (0x078))
#define SOC_CRGPERIPH_PERRSTDIS2_ADDR(base) ((base) + (0x07C))
#define SOC_CRGPERIPH_PERRSTSTAT2_ADDR(base) ((base) + (0x080))
#define SOC_CRGPERIPH_PERRSTEN3_ADDR(base) ((base) + (0x084))
#define SOC_CRGPERIPH_PERRSTDIS3_ADDR(base) ((base) + (0x088))
#define SOC_CRGPERIPH_PERRSTSTAT3_ADDR(base) ((base) + (0x08C))
#define SOC_CRGPERIPH_PERRSTEN4_ADDR(base) ((base) + (0x090))
#define SOC_CRGPERIPH_PERRSTDIS4_ADDR(base) ((base) + (0x094))
#define SOC_CRGPERIPH_PERRSTSTAT4_ADDR(base) ((base) + (0x098))
#define SOC_CRGPERIPH_PERRSTEN5_ADDR(base) ((base) + (0x09C))
#define SOC_CRGPERIPH_PERRSTDIS5_ADDR(base) ((base) + (0x0A0))
#define SOC_CRGPERIPH_PERRSTSTAT5_ADDR(base) ((base) + (0x0A4))
#define SOC_CRGPERIPH_CLKDIV0_ADDR(base) ((base) + (0x0A8))
#define SOC_CRGPERIPH_CLKDIV1_ADDR(base) ((base) + (0x0AC))
#define SOC_CRGPERIPH_CLKDIV2_ADDR(base) ((base) + (0x0B0))
#define SOC_CRGPERIPH_CLKDIV3_ADDR(base) ((base) + (0x0B4))
#define SOC_CRGPERIPH_CLKDIV4_ADDR(base) ((base) + (0x0B8))
#define SOC_CRGPERIPH_CLKDIV5_ADDR(base) ((base) + (0x0BC))
#define SOC_CRGPERIPH_CLKDIV6_ADDR(base) ((base) + (0x0C0))
#define SOC_CRGPERIPH_CLKDIV7_ADDR(base) ((base) + (0x0C4))
#define SOC_CRGPERIPH_CLKDIV8_ADDR(base) ((base) + (0x0C8))
#define SOC_CRGPERIPH_CLKDIV9_ADDR(base) ((base) + (0x0CC))
#define SOC_CRGPERIPH_CLKDIV10_ADDR(base) ((base) + (0x0D0))
#define SOC_CRGPERIPH_CLKDIV11_ADDR(base) ((base) + (0x0D4))
#define SOC_CRGPERIPH_CLKDIV12_ADDR(base) ((base) + (0x0D8))
#define SOC_CRGPERIPH_CLKDIV13_ADDR(base) ((base) + (0x0DC))
#define SOC_CRGPERIPH_CLKDIV14_ADDR(base) ((base) + (0x0E0))
#define SOC_CRGPERIPH_CLKDIV15_ADDR(base) ((base) + (0x0E4))
#define SOC_CRGPERIPH_CLKDIV16_ADDR(base) ((base) + (0x0E8))
#define SOC_CRGPERIPH_CLKDIV17_ADDR(base) ((base) + (0x0EC))
#define SOC_CRGPERIPH_CLKDIV18_ADDR(base) ((base) + (0x0F0))
#define SOC_CRGPERIPH_CLKDIV19_ADDR(base) ((base) + (0x0F4))
#define SOC_CRGPERIPH_CLKDIV20_ADDR(base) ((base) + (0x0F8))
#define SOC_CRGPERIPH_CLKDIV21_ADDR(base) ((base) + (0x0FC))
#define SOC_CRGPERIPH_CLKDIV22_ADDR(base) ((base) + (0x100))
#define SOC_CRGPERIPH_CLKDIV23_ADDR(base) ((base) + (0x104))
#define SOC_CRGPERIPH_CLKDIV24_ADDR(base) ((base) + (0x108))
#define SOC_CRGPERIPH_CLKDIV25_ADDR(base) ((base) + (0x10C))
#define SOC_CRGPERIPH_PERI_STAT0_ADDR(base) ((base) + (0x110))
#define SOC_CRGPERIPH_PERI_STAT1_ADDR(base) ((base) + (0x114))
#define SOC_CRGPERIPH_PERI_STAT2_ADDR(base) ((base) + (0x118))
#define SOC_CRGPERIPH_PERI_STAT3_ADDR(base) ((base) + (0x11C))
#define SOC_CRGPERIPH_PERI_CTRL0_ADDR(base) ((base) + (0x120))
#define SOC_CRGPERIPH_PERI_CTRL1_ADDR(base) ((base) + (0x124))
#define SOC_CRGPERIPH_PERI_CTRL2_ADDR(base) ((base) + (0x128))
#define SOC_CRGPERIPH_PERI_CTRL3_ADDR(base) ((base) + (0x12C))
#define SOC_CRGPERIPH_PERI_CTRL4_ADDR(base) ((base) + (0x130))
#define SOC_CRGPERIPH_PERI_CTRL5_ADDR(base) ((base) + (0x134))
#define SOC_CRGPERIPH_PERI_CTRL6_ADDR(base) ((base) + (0x138))
#define SOC_CRGPERIPH_PERTIMECTRL_ADDR(base) ((base) + (0x140))
#define SOC_CRGPERIPH_ISOEN_ADDR(base) ((base) + (0x144))
#define SOC_CRGPERIPH_ISODIS_ADDR(base) ((base) + (0x148))
#define SOC_CRGPERIPH_ISOSTAT_ADDR(base) ((base) + (0x14C))
#define SOC_CRGPERIPH_PERPWREN_ADDR(base) ((base) + (0x150))
#define SOC_CRGPERIPH_PERPWRDIS_ADDR(base) ((base) + (0x154))
#define SOC_CRGPERIPH_PERPWRSTAT_ADDR(base) ((base) + (0x158))
#define SOC_CRGPERIPH_PERPWRACK_ADDR(base) ((base) + (0x15C))
#define SOC_CRGPERIPH_FCM_CLKEN_ADDR(base) ((base) + (0x160))
#define SOC_CRGPERIPH_FCM_RSTEN_ADDR(base) ((base) + (0x164))
#define SOC_CRGPERIPH_FCM_RSTDIS_ADDR(base) ((base) + (0x168))
#define SOC_CRGPERIPH_FCM_RSTSTAT_ADDR(base) ((base) + (0x16C))
#define SOC_CRGPERIPH_FCM0_ADBLPSTAT_ADDR(base) ((base) + (0x174))
#define SOC_CRGPERIPH_FCM_DBGPWRDUP_ADDR(base) ((base) + (0x178))
#define SOC_CRGPERIPH_A53_OCLDOVSET_ADDR(base) ((base) + (0x184))
#define SOC_CRGPERIPH_A53_OCLDO_STAT_ADDR(base) ((base) + (0x198))
#define SOC_CRGPERIPH_FCM1_ADBLPSTAT_ADDR(base) ((base) + (0x1D4))
#define SOC_CRGPERIPH_FCM_PERIPH_ADBLPSTAT_ADDR(base) ((base) + (0x1D8))
#define SOC_CRGPERIPH_FCM_ACP_ADBLPSTAT_ADDR(base) ((base) + (0x1DC))
#define SOC_CRGPERIPH_MAIA_OCLDOVSET_ADDR(base) ((base) + (0x1E4))
#define SOC_CRGPERIPH_FCM_STAT0_ADDR(base) ((base) + (0x1F4))
#define SOC_CRGPERIPH_FCM_STAT1_ADDR(base) ((base) + (0x1F8))
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_ADDR(base) ((base) + (0x1FC))
#define SOC_CRGPERIPH_CORESIGHT_STAT_ADDR(base) ((base) + (0x200))
#define SOC_CRGPERIPH_CORESIGHTLPSTAT_ADDR(base) ((base) + (0x204))
#define SOC_CRGPERIPH_CORESIGHT_CTRL_ADDR(base) ((base) + (0x208))
#define SOC_CRGPERIPH_CORESIGHTETFINT_ADDR(base) ((base) + (0x20C))
#define SOC_CRGPERIPH_CORESIGHTETRINT_ADDR(base) ((base) + (0x210))
#define SOC_CRGPERIPH_ADB400_STAT_ADDR(base) ((base) + (0x220))
#define SOC_CRGPERIPH_G3D_0_ADBLPSTAT_ADDR(base) ((base) + (0x234))
#define SOC_CRGPERIPH_G3D_1_ADBLPSTAT_ADDR(base) ((base) + (0x238))
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_ADDR(base) ((base) + (0x240))
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_ADDR(base) ((base) + (0x244))
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_ADDR(base) ((base) + (0x248))
#define SOC_CRGPERIPH_A53_PDCEN_ADDR(base) ((base) + (0x260))
#define SOC_CRGPERIPH_A53_COREPWRINTEN_ADDR(base) ((base) + (0x264))
#define SOC_CRGPERIPH_A53_COREPWRINTSTAT_ADDR(base) ((base) + (0x268))
#define SOC_CRGPERIPH_A53_COREGICMASK_ADDR(base) ((base) + (0x26C))
#define SOC_CRGPERIPH_A53_COREPOWERUP_ADDR(base) ((base) + (0x270))
#define SOC_CRGPERIPH_A53_COREPOWERDN_ADDR(base) ((base) + (0x274))
#define SOC_CRGPERIPH_A53_COREPOWERSTAT_ADDR(base) ((base) + (0x278))
#define SOC_CRGPERIPH_A53_COREPWRUPTIME_ADDR(base) ((base) + (0x27C))
#define SOC_CRGPERIPH_A53_COREPWRDNTIME_ADDR(base) ((base) + (0x280))
#define SOC_CRGPERIPH_A53_COREISOTIME_ADDR(base) ((base) + (0x284))
#define SOC_CRGPERIPH_A53_COREDBGTIME_ADDR(base) ((base) + (0x288))
#define SOC_CRGPERIPH_A53_CORERSTTIME_ADDR(base) ((base) + (0x28C))
#define SOC_CRGPERIPH_A53_COREURSTTIME_ADDR(base) ((base) + (0x290))
#define SOC_CRGPERIPH_A53_COREOCLDOTIME0_ADDR(base) ((base) + (0x294))
#define SOC_CRGPERIPH_A53_COREOCLDOTIME1_ADDR(base) ((base) + (0x298))
#define SOC_CRGPERIPH_A53_COREOCLDOSTAT_ADDR(base) ((base) + (0x29C))
#define SOC_CRGPERIPH_MAIA_PDCEN_ADDR(base) ((base) + (0x300))
#define SOC_CRGPERIPH_MAIA_COREPWRINTEN_ADDR(base) ((base) + (0x304))
#define SOC_CRGPERIPH_MAIA_COREPWRINTSTAT_ADDR(base) ((base) + (0x308))
#define SOC_CRGPERIPH_MAIA_COREGICMASK_ADDR(base) ((base) + (0x30C))
#define SOC_CRGPERIPH_MAIA_COREPOWERUP_ADDR(base) ((base) + (0x310))
#define SOC_CRGPERIPH_MAIA_COREPOWERDN_ADDR(base) ((base) + (0x314))
#define SOC_CRGPERIPH_MAIA_COREPOWERSTAT_ADDR(base) ((base) + (0x318))
#define SOC_CRGPERIPH_MAIA_COREPWRUPTIME_ADDR(base) ((base) + (0x31C))
#define SOC_CRGPERIPH_MAIA_COREPWRDNTIME_ADDR(base) ((base) + (0x320))
#define SOC_CRGPERIPH_MAIA_COREISOTIME_ADDR(base) ((base) + (0x324))
#define SOC_CRGPERIPH_MAIA_COREDBGTIME_ADDR(base) ((base) + (0x328))
#define SOC_CRGPERIPH_MAIA_CORERSTTIME_ADDR(base) ((base) + (0x32C))
#define SOC_CRGPERIPH_MAIA_COREURSTTIME_ADDR(base) ((base) + (0x330))
#define SOC_CRGPERIPH_MAIA_COREOCLDOTIME0_ADDR(base) ((base) + (0x334))
#define SOC_CRGPERIPH_MAIA_COREOCLDOTIME1_ADDR(base) ((base) + (0x338))
#define SOC_CRGPERIPH_MAIA_COREOCLDOSTAT_ADDR(base) ((base) + (0x33C))
#define SOC_CRGPERIPH_BIG_CORE_PDC_PMC_CTRL_ADDR(base) ((base) + (0x340))
#define SOC_CRGPERIPH_DMC_PERI_AUTOGT_CTRL_ADDR(base) ((base) + (0x358))
#define SOC_CRGPERIPH_DDRC_AUTOGT_CTRL_ADDR(base) ((base) + (0x35C))
#define SOC_CRGPERIPH_PERI_AUTODIV0_ADDR(base) ((base) + (0x360))
#define SOC_CRGPERIPH_PERI_AUTODIV1_ADDR(base) ((base) + (0x364))
#define SOC_CRGPERIPH_PERI_AUTODIV2_ADDR(base) ((base) + (0x368))
#define SOC_CRGPERIPH_PERI_AUTODIV3_ADDR(base) ((base) + (0x36C))
#define SOC_CRGPERIPH_PERI_AUTODIV4_ADDR(base) ((base) + (0x370))
#define SOC_CRGPERIPH_PERI_AUTODIV5_ADDR(base) ((base) + (0x374))
#define SOC_CRGPERIPH_PERI_AUTODIV6_ADDR(base) ((base) + (0x378))
#define SOC_CRGPERIPH_PERI_AUTODIV7_ADDR(base) ((base) + (0x37C))
#define SOC_CRGPERIPH_PERI_AUTODIV8_ADDR(base) ((base) + (0x380))
#define SOC_CRGPERIPH_PERI_AUTODIV9_ADDR(base) ((base) + (0x384))
#define SOC_CRGPERIPH_PERI_AUTODIV10_ADDR(base) ((base) + (0x388))
#define SOC_CRGPERIPH_PERI_AUTODIV11_ADDR(base) ((base) + (0x38C))
#define SOC_CRGPERIPH_PERI_AUTODIV12_ADDR(base) ((base) + (0x390))
#define SOC_CRGPERIPH_PERI_AUTODIV13_ADDR(base) ((base) + (0x394))
#define SOC_CRGPERIPH_PERI_AUTODIV14_ADDR(base) ((base) + (0x398))
#define SOC_CRGPERIPH_PERI_AUTODIV15_ADDR(base) ((base) + (0x39C))
#define SOC_CRGPERIPH_PERI_AUTODIV_ACPU_ADDR(base) ((base) + (0x404))
#define SOC_CRGPERIPH_PERI_AUTODIV_MCPU_ADDR(base) ((base) + (0x408))
#define SOC_CRGPERIPH_PERI_AUTODIV_INUSE_STAT_ADDR(base) ((base) + (0x40C))
#define SOC_CRGPERIPH_PEREN6_ADDR(base) ((base) + (0x410))
#define SOC_CRGPERIPH_PERDIS6_ADDR(base) ((base) + (0x414))
#define SOC_CRGPERIPH_PERCLKEN6_ADDR(base) ((base) + (0x418))
#define SOC_CRGPERIPH_PERSTAT6_ADDR(base) ((base) + (0x41C))
#define SOC_CRGPERIPH_PEREN7_ADDR(base) ((base) + (0x420))
#define SOC_CRGPERIPH_PERDIS7_ADDR(base) ((base) + (0x424))
#define SOC_CRGPERIPH_PERCLKEN7_ADDR(base) ((base) + (0x428))
#define SOC_CRGPERIPH_PERSTAT7_ADDR(base) ((base) + (0x42C))
#define SOC_CRGPERIPH_PEREN8_ADDR(base) ((base) + (0x430))
#define SOC_CRGPERIPH_PERDIS8_ADDR(base) ((base) + (0x434))
#define SOC_CRGPERIPH_PERCLKEN8_ADDR(base) ((base) + (0x438))
#define SOC_CRGPERIPH_PERSTAT8_ADDR(base) ((base) + (0x43C))
#define SOC_CRGPERIPH_PEREN9_ADDR(base) ((base) + (0x440))
#define SOC_CRGPERIPH_PERDIS9_ADDR(base) ((base) + (0x444))
#define SOC_CRGPERIPH_PERCLKEN9_ADDR(base) ((base) + (0x448))
#define SOC_CRGPERIPH_PERSTAT9_ADDR(base) ((base) + (0x44C))
#define SOC_CRGPERIPH_PEREN10_ADDR(base) ((base) + (0x450))
#define SOC_CRGPERIPH_PERDIS10_ADDR(base) ((base) + (0x454))
#define SOC_CRGPERIPH_PERCLKEN10_ADDR(base) ((base) + (0x458))
#define SOC_CRGPERIPH_PERSTAT10_ADDR(base) ((base) + (0x45C))
#define SOC_CRGPERIPH_PEREN11_ADDR(base) ((base) + (0x460))
#define SOC_CRGPERIPH_PERDIS11_ADDR(base) ((base) + (0x464))
#define SOC_CRGPERIPH_PERCLKEN11_ADDR(base) ((base) + (0x468))
#define SOC_CRGPERIPH_PERSTAT11_ADDR(base) ((base) + (0x46C))
#define SOC_CRGPERIPH_PEREN12_ADDR(base) ((base) + (0x470))
#define SOC_CRGPERIPH_PERDIS12_ADDR(base) ((base) + (0x474))
#define SOC_CRGPERIPH_PERCLKEN12_ADDR(base) ((base) + (0x478))
#define SOC_CRGPERIPH_PERSTAT12_ADDR(base) ((base) + (0x47C))
#define SOC_CRGPERIPH_PEREN13_ADDR(base) ((base) + (0x480))
#define SOC_CRGPERIPH_PERDIS13_ADDR(base) ((base) + (0x484))
#define SOC_CRGPERIPH_PERCLKEN13_ADDR(base) ((base) + (0x488))
#define SOC_CRGPERIPH_PERSTAT13_ADDR(base) ((base) + (0x48C))
#define SOC_CRGPERIPH_PERI_STAT4_ADDR(base) ((base) + (0x500))
#define SOC_CRGPERIPH_PERI_STAT5_ADDR(base) ((base) + (0x504))
#define SOC_CRGPERIPH_PERI_STAT6_ADDR(base) ((base) + (0x508))
#define SOC_CRGPERIPH_PERI_STAT7_ADDR(base) ((base) + (0x50C))
#define SOC_CRGPERIPH_PERPWRACK1_ADDR(base) ((base) + (0x510))
#define SOC_CRGPERIPH_INTR_MASK_NOCBUS_NONIDLE_PEND_ADDR(base) ((base) + (0x520))
#define SOC_CRGPERIPH_INTR_CLR_NOCBUS_NONIDLE_PEND_ADDR(base) ((base) + (0x524))
#define SOC_CRGPERIPH_INTR_STAT_NOCBUS_NONIDLE_PEND_ADDR(base) ((base) + (0x528))
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG0_ADDR(base) ((base) + (0x56C))
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG1_ADDR(base) ((base) + (0x570))
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG2_ADDR(base) ((base) + (0x574))
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_STATE0_ADDR(base) ((base) + (0x5A4))
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_STATE1_ADDR(base) ((base) + (0x5A8))
#define SOC_CRGPERIPH_CLKDIV26_ADDR(base) ((base) + (0x700))
#define SOC_CRGPERIPH_PERI_COMMON_CTRL0_ADDR(base) ((base) + (0x720))
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ADDR(base) ((base) + (0x724))
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ADDR(base) ((base) + (0x728))
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL0_ADDR(base) ((base) + (0x730))
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL1_ADDR(base) ((base) + (0x734))
#define SOC_CRGPERIPH_PERI_AVS_CTRL0_ADDR(base) ((base) + (0x740))
#define SOC_CRGPERIPH_PERI_AVS_CTRL1_ADDR(base) ((base) + (0x744))
#define SOC_CRGPERIPH_PERI_AVS_CTRL2_ADDR(base) ((base) + (0x748))
#define SOC_CRGPERIPH_PERI_AVS_CTRL3_ADDR(base) ((base) + (0x74C))
#define SOC_CRGPERIPH_PERI_FNPLL_CTRL_ADDR(base) ((base) + (0x750))
#define SOC_CRGPERIPH_PERI_FNPLL_STAT_ADDR(base) ((base) + (0x754))
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_CORE_ADDR(base) ((base) + (0x900))
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_ADDR(base) ((base) + (0x904))
#define SOC_CRGPERIPH_G3D_0_ADBLPCTRL_ADDR(base) ((base) + (0x908))
#define SOC_CRGPERIPH_G3D_1_ADBLPCTRL_ADDR(base) ((base) + (0x90C))
#define SOC_CRGPERIPH_MDM_ADBLPCTRL_ADDR(base) ((base) + (0x910))
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_CTRL_ADDR(base) ((base) + (0x920))
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_ADDR(base) ((base) + (0x924))
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_ADDR(base) ((base) + (0x928))
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT0_ADDR(base) ((base) + (0x92C))
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT1_ADDR(base) ((base) + (0x930))
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT2_ADDR(base) ((base) + (0x934))
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT3_ADDR(base) ((base) + (0x938))
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT4_ADDR(base) ((base) + (0x93C))
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ADDR(base) ((base) + (0x950))
#define SOC_CRGPERIPH_PLL_EN_VOTE_CTRL0_ADDR(base) ((base) + (0x954))
#define SOC_CRGPERIPH_PLL_GT_VOTE_CTRL0_ADDR(base) ((base) + (0x958))
#define SOC_CRGPERIPH_PLL_BYPASS_VOTE_CTRL0_ADDR(base) ((base) + (0x95C))
#define SOC_CRGPERIPH_PLL_EN_VOTE_CTRL1_ADDR(base) ((base) + (0x960))
#define SOC_CRGPERIPH_PLL_GT_VOTE_CTRL1_ADDR(base) ((base) + (0x964))
#define SOC_CRGPERIPH_PLL_BYPASS_VOTE_CTRL1_ADDR(base) ((base) + (0x968))
#define SOC_CRGPERIPH_CCI400_CTRL3_ADDR(base) ((base) + (0x980))
#define SOC_CRGPERIPH_RSTEN_HISEE_SEC_ADDR(base) ((base) + (0xC00))
#define SOC_CRGPERIPH_RSTDIS_HISEE_SEC_ADDR(base) ((base) + (0xC04))
#define SOC_CRGPERIPH_RSTSTAT_HISEE_SEC_ADDR(base) ((base) + (0xC08))
#define SOC_CRGPERIPH_PEREN_HISEE_SEC_ADDR(base) ((base) + (0xC10))
#define SOC_CRGPERIPH_PERDIS_HISEE_SEC_ADDR(base) ((base) + (0xC14))
#define SOC_CRGPERIPH_PERCLKEN_HISEE_SEC_ADDR(base) ((base) + (0xC18))
#define SOC_CRGPERIPH_PERSTAT_HISEE_SEC_ADDR(base) ((base) + (0xC1C))
#define SOC_CRGPERIPH_IPCLKRST_BYPASS_HISEE_SEC_ADDR(base) ((base) + (0xC20))
#define SOC_CRGPERIPH_CLKDIV_HISEE_SEC_ADDR(base) ((base) + (0xC30))
#define SOC_CRGPERIPH_MDM_SEC_RSTEN_ADDR(base) ((base) + (0xD00))
#define SOC_CRGPERIPH_MDM_SEC_RSTDIS_ADDR(base) ((base) + (0xD04))
#define SOC_CRGPERIPH_MDM_SEC_RSTSTAT_ADDR(base) ((base) + (0xD08))
#define SOC_CRGPERIPH_GENERAL_SEC_RSTEN_ADDR(base) ((base) + (0xE20))
#define SOC_CRGPERIPH_GENERAL_SEC_RSTDIS_ADDR(base) ((base) + (0xE24))
#define SOC_CRGPERIPH_GENERAL_SEC_RSTSTAT_ADDR(base) ((base) + (0xE28))
#define SOC_CRGPERIPH_GENERAL_SEC_PEREN_ADDR(base) ((base) + (0xE2C))
#define SOC_CRGPERIPH_GENERAL_SEC_PERDIS_ADDR(base) ((base) + (0xE30))
#define SOC_CRGPERIPH_GENERAL_SEC_PERCLKEN_ADDR(base) ((base) + (0xE34))
#define SOC_CRGPERIPH_GENERAL_SEC_PERSTAT_ADDR(base) ((base) + (0xE38))
#define SOC_CRGPERIPH_SEC_IPCLKRST_BYPASS_ADDR(base) ((base) + (0xE80))
#define SOC_CRGPERIPH_GENERAL_SEC_CLKDIV0_ADDR(base) ((base) + (0xE90))
#define SOC_CRGPERIPH_CCI400_CTRL2_ADDR(base) ((base) + (0xEA0))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int gt_aclk_ddrc : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int gt_clk_vcodecbus2ddrc : 1;
        unsigned int gt_pclk_mmc1_sysctrl : 1;
        unsigned int gt_clk_ipf : 1;
        unsigned int gt_clk_ipf_psam : 1;
        unsigned int gt_clk_sysbus : 1;
        unsigned int gt_clk_cfgbus : 1;
        unsigned int gt_clk_sys2cfgbus : 1;
        unsigned int gt_pclk_mmc0_sysctrl : 1;
        unsigned int gt_clk_dp_audio_pll_ao : 1;
        unsigned int reserved_4 : 1;
        unsigned int gt_clk_mmc1_peribus : 1;
        unsigned int reserved_5 : 1;
        unsigned int gt_clk_mmc0peri2sysbus : 1;
        unsigned int gt_clk_mmc0_peribus : 1;
        unsigned int gt_aclk_dmss_free : 1;
        unsigned int gt_clk_lpmcu2cfgbus : 1;
        unsigned int reserved_6 : 1;
        unsigned int gt_clk_dmabus : 1;
        unsigned int gt_clk_dma2sysbus : 1;
        unsigned int reserved_7 : 1;
        unsigned int gt_hclk_usb3otg_misc : 1;
        unsigned int gt_clk_ao_asp : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int reserved_10 : 1;
        unsigned int gt_hclk_sd : 1;
        unsigned int reserved_11 : 1;
    } reg;
} SOC_CRGPERIPH_PEREN0_UNION;
#endif
#define SOC_CRGPERIPH_PEREN0_gt_aclk_ddrc_START (2)
#define SOC_CRGPERIPH_PEREN0_gt_aclk_ddrc_END (2)
#define SOC_CRGPERIPH_PEREN0_gt_clk_vcodecbus2ddrc_START (5)
#define SOC_CRGPERIPH_PEREN0_gt_clk_vcodecbus2ddrc_END (5)
#define SOC_CRGPERIPH_PEREN0_gt_pclk_mmc1_sysctrl_START (6)
#define SOC_CRGPERIPH_PEREN0_gt_pclk_mmc1_sysctrl_END (6)
#define SOC_CRGPERIPH_PEREN0_gt_clk_ipf_START (7)
#define SOC_CRGPERIPH_PEREN0_gt_clk_ipf_END (7)
#define SOC_CRGPERIPH_PEREN0_gt_clk_ipf_psam_START (8)
#define SOC_CRGPERIPH_PEREN0_gt_clk_ipf_psam_END (8)
#define SOC_CRGPERIPH_PEREN0_gt_clk_sysbus_START (9)
#define SOC_CRGPERIPH_PEREN0_gt_clk_sysbus_END (9)
#define SOC_CRGPERIPH_PEREN0_gt_clk_cfgbus_START (10)
#define SOC_CRGPERIPH_PEREN0_gt_clk_cfgbus_END (10)
#define SOC_CRGPERIPH_PEREN0_gt_clk_sys2cfgbus_START (11)
#define SOC_CRGPERIPH_PEREN0_gt_clk_sys2cfgbus_END (11)
#define SOC_CRGPERIPH_PEREN0_gt_pclk_mmc0_sysctrl_START (12)
#define SOC_CRGPERIPH_PEREN0_gt_pclk_mmc0_sysctrl_END (12)
#define SOC_CRGPERIPH_PEREN0_gt_clk_dp_audio_pll_ao_START (13)
#define SOC_CRGPERIPH_PEREN0_gt_clk_dp_audio_pll_ao_END (13)
#define SOC_CRGPERIPH_PEREN0_gt_clk_mmc1_peribus_START (15)
#define SOC_CRGPERIPH_PEREN0_gt_clk_mmc1_peribus_END (15)
#define SOC_CRGPERIPH_PEREN0_gt_clk_mmc0peri2sysbus_START (17)
#define SOC_CRGPERIPH_PEREN0_gt_clk_mmc0peri2sysbus_END (17)
#define SOC_CRGPERIPH_PEREN0_gt_clk_mmc0_peribus_START (18)
#define SOC_CRGPERIPH_PEREN0_gt_clk_mmc0_peribus_END (18)
#define SOC_CRGPERIPH_PEREN0_gt_aclk_dmss_free_START (19)
#define SOC_CRGPERIPH_PEREN0_gt_aclk_dmss_free_END (19)
#define SOC_CRGPERIPH_PEREN0_gt_clk_lpmcu2cfgbus_START (20)
#define SOC_CRGPERIPH_PEREN0_gt_clk_lpmcu2cfgbus_END (20)
#define SOC_CRGPERIPH_PEREN0_gt_clk_dmabus_START (22)
#define SOC_CRGPERIPH_PEREN0_gt_clk_dmabus_END (22)
#define SOC_CRGPERIPH_PEREN0_gt_clk_dma2sysbus_START (23)
#define SOC_CRGPERIPH_PEREN0_gt_clk_dma2sysbus_END (23)
#define SOC_CRGPERIPH_PEREN0_gt_hclk_usb3otg_misc_START (25)
#define SOC_CRGPERIPH_PEREN0_gt_hclk_usb3otg_misc_END (25)
#define SOC_CRGPERIPH_PEREN0_gt_clk_ao_asp_START (26)
#define SOC_CRGPERIPH_PEREN0_gt_clk_ao_asp_END (26)
#define SOC_CRGPERIPH_PEREN0_gt_hclk_sd_START (30)
#define SOC_CRGPERIPH_PEREN0_gt_hclk_sd_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int gt_aclk_ddrc : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int gt_clk_vcodecbus2ddrc : 1;
        unsigned int gt_pclk_mmc1_sysctrl : 1;
        unsigned int gt_clk_ipf : 1;
        unsigned int gt_clk_ipf_psam : 1;
        unsigned int gt_clk_sysbus : 1;
        unsigned int gt_clk_cfgbus : 1;
        unsigned int gt_clk_sys2cfgbus : 1;
        unsigned int gt_pclk_mmc0_sysctrl : 1;
        unsigned int gt_clk_dp_audio_pll_ao : 1;
        unsigned int reserved_4 : 1;
        unsigned int gt_clk_mmc1_peribus : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int gt_clk_mmc0_peribus : 1;
        unsigned int gt_aclk_dmss_free : 1;
        unsigned int gt_clk_lpmcu2cfgbus : 1;
        unsigned int reserved_7 : 1;
        unsigned int gt_clk_dmabus : 1;
        unsigned int gt_clk_dma2sysbus : 1;
        unsigned int reserved_8 : 1;
        unsigned int gt_hclk_usb3otg_misc : 1;
        unsigned int gt_clk_ao_asp : 1;
        unsigned int reserved_9 : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int gt_hclk_sd : 1;
        unsigned int reserved_12 : 1;
    } reg;
} SOC_CRGPERIPH_PERDIS0_UNION;
#endif
#define SOC_CRGPERIPH_PERDIS0_gt_aclk_ddrc_START (2)
#define SOC_CRGPERIPH_PERDIS0_gt_aclk_ddrc_END (2)
#define SOC_CRGPERIPH_PERDIS0_gt_clk_vcodecbus2ddrc_START (5)
#define SOC_CRGPERIPH_PERDIS0_gt_clk_vcodecbus2ddrc_END (5)
#define SOC_CRGPERIPH_PERDIS0_gt_pclk_mmc1_sysctrl_START (6)
#define SOC_CRGPERIPH_PERDIS0_gt_pclk_mmc1_sysctrl_END (6)
#define SOC_CRGPERIPH_PERDIS0_gt_clk_ipf_START (7)
#define SOC_CRGPERIPH_PERDIS0_gt_clk_ipf_END (7)
#define SOC_CRGPERIPH_PERDIS0_gt_clk_ipf_psam_START (8)
#define SOC_CRGPERIPH_PERDIS0_gt_clk_ipf_psam_END (8)
#define SOC_CRGPERIPH_PERDIS0_gt_clk_sysbus_START (9)
#define SOC_CRGPERIPH_PERDIS0_gt_clk_sysbus_END (9)
#define SOC_CRGPERIPH_PERDIS0_gt_clk_cfgbus_START (10)
#define SOC_CRGPERIPH_PERDIS0_gt_clk_cfgbus_END (10)
#define SOC_CRGPERIPH_PERDIS0_gt_clk_sys2cfgbus_START (11)
#define SOC_CRGPERIPH_PERDIS0_gt_clk_sys2cfgbus_END (11)
#define SOC_CRGPERIPH_PERDIS0_gt_pclk_mmc0_sysctrl_START (12)
#define SOC_CRGPERIPH_PERDIS0_gt_pclk_mmc0_sysctrl_END (12)
#define SOC_CRGPERIPH_PERDIS0_gt_clk_dp_audio_pll_ao_START (13)
#define SOC_CRGPERIPH_PERDIS0_gt_clk_dp_audio_pll_ao_END (13)
#define SOC_CRGPERIPH_PERDIS0_gt_clk_mmc1_peribus_START (15)
#define SOC_CRGPERIPH_PERDIS0_gt_clk_mmc1_peribus_END (15)
#define SOC_CRGPERIPH_PERDIS0_gt_clk_mmc0_peribus_START (18)
#define SOC_CRGPERIPH_PERDIS0_gt_clk_mmc0_peribus_END (18)
#define SOC_CRGPERIPH_PERDIS0_gt_aclk_dmss_free_START (19)
#define SOC_CRGPERIPH_PERDIS0_gt_aclk_dmss_free_END (19)
#define SOC_CRGPERIPH_PERDIS0_gt_clk_lpmcu2cfgbus_START (20)
#define SOC_CRGPERIPH_PERDIS0_gt_clk_lpmcu2cfgbus_END (20)
#define SOC_CRGPERIPH_PERDIS0_gt_clk_dmabus_START (22)
#define SOC_CRGPERIPH_PERDIS0_gt_clk_dmabus_END (22)
#define SOC_CRGPERIPH_PERDIS0_gt_clk_dma2sysbus_START (23)
#define SOC_CRGPERIPH_PERDIS0_gt_clk_dma2sysbus_END (23)
#define SOC_CRGPERIPH_PERDIS0_gt_hclk_usb3otg_misc_START (25)
#define SOC_CRGPERIPH_PERDIS0_gt_hclk_usb3otg_misc_END (25)
#define SOC_CRGPERIPH_PERDIS0_gt_clk_ao_asp_START (26)
#define SOC_CRGPERIPH_PERDIS0_gt_clk_ao_asp_END (26)
#define SOC_CRGPERIPH_PERDIS0_gt_hclk_sd_START (30)
#define SOC_CRGPERIPH_PERDIS0_gt_hclk_sd_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int gt_aclk_ddrc : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int gt_clk_vcodecbus2ddrc : 1;
        unsigned int gt_pclk_mmc1_sysctrl : 1;
        unsigned int gt_clk_ipf : 1;
        unsigned int gt_clk_ipf_psam : 1;
        unsigned int gt_clk_sysbus : 1;
        unsigned int gt_clk_cfgbus : 1;
        unsigned int gt_clk_sys2cfgbus : 1;
        unsigned int gt_pclk_mmc0_sysctrl : 1;
        unsigned int gt_clk_dp_audio_pll_ao : 1;
        unsigned int reserved_4 : 1;
        unsigned int gt_clk_mmc1_peribus : 1;
        unsigned int reserved_5 : 1;
        unsigned int gt_clk_mmc0peri2sysbus : 1;
        unsigned int gt_clk_mmc0_peribus : 1;
        unsigned int gt_aclk_dmss_free : 1;
        unsigned int gt_clk_lpmcu2cfgbus : 1;
        unsigned int reserved_6 : 1;
        unsigned int gt_clk_dmabus : 1;
        unsigned int gt_clk_dma2sysbus : 1;
        unsigned int reserved_7 : 1;
        unsigned int gt_hclk_usb3otg_misc : 1;
        unsigned int gt_clk_ao_asp : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int reserved_10 : 1;
        unsigned int gt_hclk_sd : 1;
        unsigned int reserved_11 : 1;
    } reg;
} SOC_CRGPERIPH_PERCLKEN0_UNION;
#endif
#define SOC_CRGPERIPH_PERCLKEN0_gt_aclk_ddrc_START (2)
#define SOC_CRGPERIPH_PERCLKEN0_gt_aclk_ddrc_END (2)
#define SOC_CRGPERIPH_PERCLKEN0_gt_clk_vcodecbus2ddrc_START (5)
#define SOC_CRGPERIPH_PERCLKEN0_gt_clk_vcodecbus2ddrc_END (5)
#define SOC_CRGPERIPH_PERCLKEN0_gt_pclk_mmc1_sysctrl_START (6)
#define SOC_CRGPERIPH_PERCLKEN0_gt_pclk_mmc1_sysctrl_END (6)
#define SOC_CRGPERIPH_PERCLKEN0_gt_clk_ipf_START (7)
#define SOC_CRGPERIPH_PERCLKEN0_gt_clk_ipf_END (7)
#define SOC_CRGPERIPH_PERCLKEN0_gt_clk_ipf_psam_START (8)
#define SOC_CRGPERIPH_PERCLKEN0_gt_clk_ipf_psam_END (8)
#define SOC_CRGPERIPH_PERCLKEN0_gt_clk_sysbus_START (9)
#define SOC_CRGPERIPH_PERCLKEN0_gt_clk_sysbus_END (9)
#define SOC_CRGPERIPH_PERCLKEN0_gt_clk_cfgbus_START (10)
#define SOC_CRGPERIPH_PERCLKEN0_gt_clk_cfgbus_END (10)
#define SOC_CRGPERIPH_PERCLKEN0_gt_clk_sys2cfgbus_START (11)
#define SOC_CRGPERIPH_PERCLKEN0_gt_clk_sys2cfgbus_END (11)
#define SOC_CRGPERIPH_PERCLKEN0_gt_pclk_mmc0_sysctrl_START (12)
#define SOC_CRGPERIPH_PERCLKEN0_gt_pclk_mmc0_sysctrl_END (12)
#define SOC_CRGPERIPH_PERCLKEN0_gt_clk_dp_audio_pll_ao_START (13)
#define SOC_CRGPERIPH_PERCLKEN0_gt_clk_dp_audio_pll_ao_END (13)
#define SOC_CRGPERIPH_PERCLKEN0_gt_clk_mmc1_peribus_START (15)
#define SOC_CRGPERIPH_PERCLKEN0_gt_clk_mmc1_peribus_END (15)
#define SOC_CRGPERIPH_PERCLKEN0_gt_clk_mmc0peri2sysbus_START (17)
#define SOC_CRGPERIPH_PERCLKEN0_gt_clk_mmc0peri2sysbus_END (17)
#define SOC_CRGPERIPH_PERCLKEN0_gt_clk_mmc0_peribus_START (18)
#define SOC_CRGPERIPH_PERCLKEN0_gt_clk_mmc0_peribus_END (18)
#define SOC_CRGPERIPH_PERCLKEN0_gt_aclk_dmss_free_START (19)
#define SOC_CRGPERIPH_PERCLKEN0_gt_aclk_dmss_free_END (19)
#define SOC_CRGPERIPH_PERCLKEN0_gt_clk_lpmcu2cfgbus_START (20)
#define SOC_CRGPERIPH_PERCLKEN0_gt_clk_lpmcu2cfgbus_END (20)
#define SOC_CRGPERIPH_PERCLKEN0_gt_clk_dmabus_START (22)
#define SOC_CRGPERIPH_PERCLKEN0_gt_clk_dmabus_END (22)
#define SOC_CRGPERIPH_PERCLKEN0_gt_clk_dma2sysbus_START (23)
#define SOC_CRGPERIPH_PERCLKEN0_gt_clk_dma2sysbus_END (23)
#define SOC_CRGPERIPH_PERCLKEN0_gt_hclk_usb3otg_misc_START (25)
#define SOC_CRGPERIPH_PERCLKEN0_gt_hclk_usb3otg_misc_END (25)
#define SOC_CRGPERIPH_PERCLKEN0_gt_clk_ao_asp_START (26)
#define SOC_CRGPERIPH_PERCLKEN0_gt_clk_ao_asp_END (26)
#define SOC_CRGPERIPH_PERCLKEN0_gt_hclk_sd_START (30)
#define SOC_CRGPERIPH_PERCLKEN0_gt_hclk_sd_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int st_aclk_ddrc : 1;
        unsigned int st_clk_ddrcfg : 1;
        unsigned int reserved_2 : 1;
        unsigned int st_clk_vcodecbus2ddrc : 1;
        unsigned int st_pclk_mmc1_sysctrl : 1;
        unsigned int st_clk_ipf : 1;
        unsigned int st_clk_ipf_psam : 1;
        unsigned int st_clk_sysbus : 1;
        unsigned int st_clk_cfgbus : 1;
        unsigned int st_clk_sys2cfgbus : 1;
        unsigned int st_pclk_mmc0_sysctrl : 1;
        unsigned int st_clk_dp_audio_pll_ao : 1;
        unsigned int reserved_3 : 1;
        unsigned int st_clk_mmc1_peribus : 1;
        unsigned int reserved_4 : 1;
        unsigned int st_clk_mmc0peri2sysbus : 1;
        unsigned int st_clk_mmc0_peribus : 1;
        unsigned int st_aclk_dmss_free : 1;
        unsigned int st_clk_lpmcu2cfgbus : 1;
        unsigned int reserved_5 : 1;
        unsigned int st_clk_dmabus : 1;
        unsigned int st_clk_dma2sysbus : 1;
        unsigned int reserved_6 : 1;
        unsigned int st_hclk_usb3otg_misc : 1;
        unsigned int st_clk_ao_asp : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int st_hclk_sd : 1;
        unsigned int reserved_10 : 1;
    } reg;
} SOC_CRGPERIPH_PERSTAT0_UNION;
#endif
#define SOC_CRGPERIPH_PERSTAT0_st_aclk_ddrc_START (2)
#define SOC_CRGPERIPH_PERSTAT0_st_aclk_ddrc_END (2)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_ddrcfg_START (3)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_ddrcfg_END (3)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_vcodecbus2ddrc_START (5)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_vcodecbus2ddrc_END (5)
#define SOC_CRGPERIPH_PERSTAT0_st_pclk_mmc1_sysctrl_START (6)
#define SOC_CRGPERIPH_PERSTAT0_st_pclk_mmc1_sysctrl_END (6)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_ipf_START (7)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_ipf_END (7)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_ipf_psam_START (8)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_ipf_psam_END (8)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_sysbus_START (9)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_sysbus_END (9)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_cfgbus_START (10)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_cfgbus_END (10)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_sys2cfgbus_START (11)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_sys2cfgbus_END (11)
#define SOC_CRGPERIPH_PERSTAT0_st_pclk_mmc0_sysctrl_START (12)
#define SOC_CRGPERIPH_PERSTAT0_st_pclk_mmc0_sysctrl_END (12)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_dp_audio_pll_ao_START (13)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_dp_audio_pll_ao_END (13)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_mmc1_peribus_START (15)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_mmc1_peribus_END (15)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_mmc0peri2sysbus_START (17)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_mmc0peri2sysbus_END (17)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_mmc0_peribus_START (18)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_mmc0_peribus_END (18)
#define SOC_CRGPERIPH_PERSTAT0_st_aclk_dmss_free_START (19)
#define SOC_CRGPERIPH_PERSTAT0_st_aclk_dmss_free_END (19)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_lpmcu2cfgbus_START (20)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_lpmcu2cfgbus_END (20)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_dmabus_START (22)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_dmabus_END (22)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_dma2sysbus_START (23)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_dma2sysbus_END (23)
#define SOC_CRGPERIPH_PERSTAT0_st_hclk_usb3otg_misc_START (25)
#define SOC_CRGPERIPH_PERSTAT0_st_hclk_usb3otg_misc_END (25)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_ao_asp_START (26)
#define SOC_CRGPERIPH_PERSTAT0_st_clk_ao_asp_END (26)
#define SOC_CRGPERIPH_PERSTAT0_st_hclk_sd_START (30)
#define SOC_CRGPERIPH_PERSTAT0_st_hclk_sd_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_pclk_gpio0 : 1;
        unsigned int gt_pclk_gpio1 : 1;
        unsigned int gt_pclk_gpio2 : 1;
        unsigned int gt_pclk_gpio3 : 1;
        unsigned int gt_pclk_gpio4 : 1;
        unsigned int gt_pclk_gpio5 : 1;
        unsigned int gt_pclk_gpio6 : 1;
        unsigned int gt_pclk_gpio7 : 1;
        unsigned int gt_pclk_gpio8 : 1;
        unsigned int gt_pclk_gpio9 : 1;
        unsigned int gt_pclk_gpio10 : 1;
        unsigned int gt_pclk_gpio11 : 1;
        unsigned int gt_pclk_gpio12 : 1;
        unsigned int gt_pclk_gpio13 : 1;
        unsigned int gt_pclk_gpio14 : 1;
        unsigned int gt_pclk_gpio15 : 1;
        unsigned int gt_pclk_gpio16 : 1;
        unsigned int gt_pclk_gpio17 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int gt_pclk_gpio20 : 1;
        unsigned int gt_pclk_gpio21 : 1;
        unsigned int gt_pclk_timer9 : 1;
        unsigned int gt_pclk_timer10 : 1;
        unsigned int gt_pclk_timer11 : 1;
        unsigned int gt_pclk_timer12 : 1;
        unsigned int gt_clk_socp_lpm3 : 1;
        unsigned int gt_clk_djtag : 1;
        unsigned int gt_clk_socp_acpu : 1;
        unsigned int gt_clk_socp_mcpu : 1;
        unsigned int gt_clk_i2c6 : 1;
        unsigned int gt_clk_i2c7 : 1;
    } reg;
} SOC_CRGPERIPH_PEREN1_UNION;
#endif
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio0_START (0)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio0_END (0)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio1_START (1)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio1_END (1)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio2_START (2)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio2_END (2)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio3_START (3)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio3_END (3)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio4_START (4)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio4_END (4)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio5_START (5)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio5_END (5)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio6_START (6)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio6_END (6)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio7_START (7)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio7_END (7)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio8_START (8)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio8_END (8)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio9_START (9)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio9_END (9)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio10_START (10)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio10_END (10)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio11_START (11)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio11_END (11)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio12_START (12)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio12_END (12)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio13_START (13)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio13_END (13)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio14_START (14)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio14_END (14)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio15_START (15)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio15_END (15)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio16_START (16)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio16_END (16)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio17_START (17)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio17_END (17)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio20_START (20)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio20_END (20)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio21_START (21)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_gpio21_END (21)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_timer9_START (22)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_timer9_END (22)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_timer10_START (23)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_timer10_END (23)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_timer11_START (24)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_timer11_END (24)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_timer12_START (25)
#define SOC_CRGPERIPH_PEREN1_gt_pclk_timer12_END (25)
#define SOC_CRGPERIPH_PEREN1_gt_clk_socp_lpm3_START (26)
#define SOC_CRGPERIPH_PEREN1_gt_clk_socp_lpm3_END (26)
#define SOC_CRGPERIPH_PEREN1_gt_clk_djtag_START (27)
#define SOC_CRGPERIPH_PEREN1_gt_clk_djtag_END (27)
#define SOC_CRGPERIPH_PEREN1_gt_clk_socp_acpu_START (28)
#define SOC_CRGPERIPH_PEREN1_gt_clk_socp_acpu_END (28)
#define SOC_CRGPERIPH_PEREN1_gt_clk_socp_mcpu_START (29)
#define SOC_CRGPERIPH_PEREN1_gt_clk_socp_mcpu_END (29)
#define SOC_CRGPERIPH_PEREN1_gt_clk_i2c6_START (30)
#define SOC_CRGPERIPH_PEREN1_gt_clk_i2c6_END (30)
#define SOC_CRGPERIPH_PEREN1_gt_clk_i2c7_START (31)
#define SOC_CRGPERIPH_PEREN1_gt_clk_i2c7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_pclk_gpio0 : 1;
        unsigned int gt_pclk_gpio1 : 1;
        unsigned int gt_pclk_gpio2 : 1;
        unsigned int gt_pclk_gpio3 : 1;
        unsigned int gt_pclk_gpio4 : 1;
        unsigned int gt_pclk_gpio5 : 1;
        unsigned int gt_pclk_gpio6 : 1;
        unsigned int gt_pclk_gpio7 : 1;
        unsigned int gt_pclk_gpio8 : 1;
        unsigned int gt_pclk_gpio9 : 1;
        unsigned int gt_pclk_gpio10 : 1;
        unsigned int gt_pclk_gpio11 : 1;
        unsigned int gt_pclk_gpio12 : 1;
        unsigned int gt_pclk_gpio13 : 1;
        unsigned int gt_pclk_gpio14 : 1;
        unsigned int gt_pclk_gpio15 : 1;
        unsigned int gt_pclk_gpio16 : 1;
        unsigned int gt_pclk_gpio17 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int gt_pclk_gpio20 : 1;
        unsigned int gt_pclk_gpio21 : 1;
        unsigned int gt_pclk_timer9 : 1;
        unsigned int gt_pclk_timer10 : 1;
        unsigned int gt_pclk_timer11 : 1;
        unsigned int gt_pclk_timer12 : 1;
        unsigned int gt_clk_socp_lpm3 : 1;
        unsigned int gt_clk_djtag : 1;
        unsigned int gt_clk_socp_acpu : 1;
        unsigned int gt_clk_socp_mcpu : 1;
        unsigned int gt_clk_i2c6 : 1;
        unsigned int gt_clk_i2c7 : 1;
    } reg;
} SOC_CRGPERIPH_PERDIS1_UNION;
#endif
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio0_START (0)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio0_END (0)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio1_START (1)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio1_END (1)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio2_START (2)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio2_END (2)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio3_START (3)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio3_END (3)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio4_START (4)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio4_END (4)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio5_START (5)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio5_END (5)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio6_START (6)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio6_END (6)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio7_START (7)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio7_END (7)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio8_START (8)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio8_END (8)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio9_START (9)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio9_END (9)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio10_START (10)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio10_END (10)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio11_START (11)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio11_END (11)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio12_START (12)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio12_END (12)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio13_START (13)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio13_END (13)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio14_START (14)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio14_END (14)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio15_START (15)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio15_END (15)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio16_START (16)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio16_END (16)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio17_START (17)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio17_END (17)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio20_START (20)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio20_END (20)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio21_START (21)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_gpio21_END (21)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_timer9_START (22)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_timer9_END (22)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_timer10_START (23)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_timer10_END (23)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_timer11_START (24)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_timer11_END (24)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_timer12_START (25)
#define SOC_CRGPERIPH_PERDIS1_gt_pclk_timer12_END (25)
#define SOC_CRGPERIPH_PERDIS1_gt_clk_socp_lpm3_START (26)
#define SOC_CRGPERIPH_PERDIS1_gt_clk_socp_lpm3_END (26)
#define SOC_CRGPERIPH_PERDIS1_gt_clk_djtag_START (27)
#define SOC_CRGPERIPH_PERDIS1_gt_clk_djtag_END (27)
#define SOC_CRGPERIPH_PERDIS1_gt_clk_socp_acpu_START (28)
#define SOC_CRGPERIPH_PERDIS1_gt_clk_socp_acpu_END (28)
#define SOC_CRGPERIPH_PERDIS1_gt_clk_socp_mcpu_START (29)
#define SOC_CRGPERIPH_PERDIS1_gt_clk_socp_mcpu_END (29)
#define SOC_CRGPERIPH_PERDIS1_gt_clk_i2c6_START (30)
#define SOC_CRGPERIPH_PERDIS1_gt_clk_i2c6_END (30)
#define SOC_CRGPERIPH_PERDIS1_gt_clk_i2c7_START (31)
#define SOC_CRGPERIPH_PERDIS1_gt_clk_i2c7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_pclk_gpio0 : 1;
        unsigned int gt_pclk_gpio1 : 1;
        unsigned int gt_pclk_gpio2 : 1;
        unsigned int gt_pclk_gpio3 : 1;
        unsigned int gt_pclk_gpio4 : 1;
        unsigned int gt_pclk_gpio5 : 1;
        unsigned int gt_pclk_gpio6 : 1;
        unsigned int gt_pclk_gpio7 : 1;
        unsigned int gt_pclk_gpio8 : 1;
        unsigned int gt_pclk_gpio9 : 1;
        unsigned int gt_pclk_gpio10 : 1;
        unsigned int gt_pclk_gpio11 : 1;
        unsigned int gt_pclk_gpio12 : 1;
        unsigned int gt_pclk_gpio13 : 1;
        unsigned int gt_pclk_gpio14 : 1;
        unsigned int gt_pclk_gpio15 : 1;
        unsigned int gt_pclk_gpio16 : 1;
        unsigned int gt_pclk_gpio17 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int gt_pclk_gpio20 : 1;
        unsigned int gt_pclk_gpio21 : 1;
        unsigned int gt_pclk_timer9 : 1;
        unsigned int gt_pclk_timer10 : 1;
        unsigned int gt_pclk_timer11 : 1;
        unsigned int gt_pclk_timer12 : 1;
        unsigned int gt_clk_socp_lpm3 : 1;
        unsigned int gt_clk_djtag : 1;
        unsigned int gt_clk_socp_acpu : 1;
        unsigned int gt_clk_socp_mcpu : 1;
        unsigned int gt_clk_i2c6 : 1;
        unsigned int gt_clk_i2c7 : 1;
    } reg;
} SOC_CRGPERIPH_PERCLKEN1_UNION;
#endif
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio0_START (0)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio0_END (0)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio1_START (1)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio1_END (1)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio2_START (2)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio2_END (2)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio3_START (3)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio3_END (3)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio4_START (4)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio4_END (4)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio5_START (5)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio5_END (5)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio6_START (6)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio6_END (6)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio7_START (7)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio7_END (7)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio8_START (8)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio8_END (8)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio9_START (9)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio9_END (9)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio10_START (10)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio10_END (10)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio11_START (11)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio11_END (11)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio12_START (12)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio12_END (12)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio13_START (13)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio13_END (13)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio14_START (14)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio14_END (14)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio15_START (15)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio15_END (15)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio16_START (16)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio16_END (16)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio17_START (17)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio17_END (17)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio20_START (20)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio20_END (20)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio21_START (21)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_gpio21_END (21)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_timer9_START (22)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_timer9_END (22)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_timer10_START (23)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_timer10_END (23)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_timer11_START (24)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_timer11_END (24)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_timer12_START (25)
#define SOC_CRGPERIPH_PERCLKEN1_gt_pclk_timer12_END (25)
#define SOC_CRGPERIPH_PERCLKEN1_gt_clk_socp_lpm3_START (26)
#define SOC_CRGPERIPH_PERCLKEN1_gt_clk_socp_lpm3_END (26)
#define SOC_CRGPERIPH_PERCLKEN1_gt_clk_djtag_START (27)
#define SOC_CRGPERIPH_PERCLKEN1_gt_clk_djtag_END (27)
#define SOC_CRGPERIPH_PERCLKEN1_gt_clk_socp_acpu_START (28)
#define SOC_CRGPERIPH_PERCLKEN1_gt_clk_socp_acpu_END (28)
#define SOC_CRGPERIPH_PERCLKEN1_gt_clk_socp_mcpu_START (29)
#define SOC_CRGPERIPH_PERCLKEN1_gt_clk_socp_mcpu_END (29)
#define SOC_CRGPERIPH_PERCLKEN1_gt_clk_i2c6_START (30)
#define SOC_CRGPERIPH_PERCLKEN1_gt_clk_i2c6_END (30)
#define SOC_CRGPERIPH_PERCLKEN1_gt_clk_i2c7_START (31)
#define SOC_CRGPERIPH_PERCLKEN1_gt_clk_i2c7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int st_pclk_gpio0 : 1;
        unsigned int st_pclk_gpio1 : 1;
        unsigned int st_pclk_gpio2 : 1;
        unsigned int st_pclk_gpio3 : 1;
        unsigned int st_pclk_gpio4 : 1;
        unsigned int st_pclk_gpio5 : 1;
        unsigned int st_pclk_gpio6 : 1;
        unsigned int st_pclk_gpio7 : 1;
        unsigned int st_pclk_gpio8 : 1;
        unsigned int st_pclk_gpio9 : 1;
        unsigned int st_pclk_gpio10 : 1;
        unsigned int st_pclk_gpio11 : 1;
        unsigned int st_pclk_gpio12 : 1;
        unsigned int st_pclk_gpio13 : 1;
        unsigned int st_pclk_gpio14 : 1;
        unsigned int st_pclk_gpio15 : 1;
        unsigned int st_pclk_gpio16 : 1;
        unsigned int st_pclk_gpio17 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int st_pclk_gpio20 : 1;
        unsigned int st_pclk_gpio21 : 1;
        unsigned int st_pclk_timer9 : 1;
        unsigned int st_pclk_timer10 : 1;
        unsigned int st_pclk_timer11 : 1;
        unsigned int st_pclk_timer12 : 1;
        unsigned int st_clk_socp : 1;
        unsigned int st_clk_djtag : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int st_clk_i2c6 : 1;
        unsigned int st_clk_i2c7 : 1;
    } reg;
} SOC_CRGPERIPH_PERSTAT1_UNION;
#endif
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio0_START (0)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio0_END (0)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio1_START (1)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio1_END (1)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio2_START (2)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio2_END (2)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio3_START (3)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio3_END (3)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio4_START (4)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio4_END (4)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio5_START (5)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio5_END (5)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio6_START (6)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio6_END (6)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio7_START (7)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio7_END (7)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio8_START (8)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio8_END (8)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio9_START (9)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio9_END (9)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio10_START (10)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio10_END (10)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio11_START (11)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio11_END (11)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio12_START (12)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio12_END (12)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio13_START (13)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio13_END (13)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio14_START (14)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio14_END (14)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio15_START (15)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio15_END (15)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio16_START (16)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio16_END (16)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio17_START (17)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio17_END (17)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio20_START (20)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio20_END (20)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio21_START (21)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_gpio21_END (21)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_timer9_START (22)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_timer9_END (22)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_timer10_START (23)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_timer10_END (23)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_timer11_START (24)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_timer11_END (24)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_timer12_START (25)
#define SOC_CRGPERIPH_PERSTAT1_st_pclk_timer12_END (25)
#define SOC_CRGPERIPH_PERSTAT1_st_clk_socp_START (26)
#define SOC_CRGPERIPH_PERSTAT1_st_clk_socp_END (26)
#define SOC_CRGPERIPH_PERSTAT1_st_clk_djtag_START (27)
#define SOC_CRGPERIPH_PERSTAT1_st_clk_djtag_END (27)
#define SOC_CRGPERIPH_PERSTAT1_st_clk_i2c6_START (30)
#define SOC_CRGPERIPH_PERSTAT1_st_clk_i2c6_END (30)
#define SOC_CRGPERIPH_PERSTAT1_st_clk_i2c7_START (31)
#define SOC_CRGPERIPH_PERSTAT1_st_clk_i2c7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_pclk_pwm : 1;
        unsigned int gt_pclk_ctf : 1;
        unsigned int gt_pclk_ipc0 : 1;
        unsigned int gt_pclk_ipc1 : 1;
        unsigned int gt_pclk_blpwm_peri : 1;
        unsigned int gt_clk_loadmonitor : 1;
        unsigned int gt_pclk_loadmonitor : 1;
        unsigned int gt_clk_i2c3 : 1;
        unsigned int gt_pclk_loadmonitor_lpmcu : 1;
        unsigned int gt_clk_spi1 : 1;
        unsigned int gt_clk_uart0 : 1;
        unsigned int gt_clk_uart1 : 1;
        unsigned int gt_clk_uart2 : 1;
        unsigned int gt_clk_adb_mst_mdm : 1;
        unsigned int gt_clk_uart4 : 1;
        unsigned int gt_clk_uart5 : 1;
        unsigned int gt_pclk_wd0 : 1;
        unsigned int gt_pclk_wd1 : 1;
        unsigned int gt_pclk_tzpc : 1;
        unsigned int reserved : 1;
        unsigned int gt_pclk_ipc_mdm : 1;
        unsigned int gt_clk_adb_mst_fcm0 : 1;
        unsigned int gt_clk_adb_mst_fcm1 : 1;
        unsigned int gt_aclk_gic : 1;
        unsigned int gt_clk_adb_slv_acp : 1;
        unsigned int gt_pclk_ioc : 1;
        unsigned int gt_clk_codecssi : 1;
        unsigned int gt_clk_i2c4 : 1;
        unsigned int gt_clk_loadmonitor_1 : 1;
        unsigned int gt_pclk_loadmonitor_1 : 1;
        unsigned int gt_pclk_loadmonitor_1_lpmcu : 1;
        unsigned int gt_pclk_pctrl : 1;
    } reg;
} SOC_CRGPERIPH_PEREN2_UNION;
#endif
#define SOC_CRGPERIPH_PEREN2_gt_pclk_pwm_START (0)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_pwm_END (0)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_ctf_START (1)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_ctf_END (1)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_ipc0_START (2)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_ipc0_END (2)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_ipc1_START (3)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_ipc1_END (3)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_blpwm_peri_START (4)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_blpwm_peri_END (4)
#define SOC_CRGPERIPH_PEREN2_gt_clk_loadmonitor_START (5)
#define SOC_CRGPERIPH_PEREN2_gt_clk_loadmonitor_END (5)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_loadmonitor_START (6)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_loadmonitor_END (6)
#define SOC_CRGPERIPH_PEREN2_gt_clk_i2c3_START (7)
#define SOC_CRGPERIPH_PEREN2_gt_clk_i2c3_END (7)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_loadmonitor_lpmcu_START (8)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_loadmonitor_lpmcu_END (8)
#define SOC_CRGPERIPH_PEREN2_gt_clk_spi1_START (9)
#define SOC_CRGPERIPH_PEREN2_gt_clk_spi1_END (9)
#define SOC_CRGPERIPH_PEREN2_gt_clk_uart0_START (10)
#define SOC_CRGPERIPH_PEREN2_gt_clk_uart0_END (10)
#define SOC_CRGPERIPH_PEREN2_gt_clk_uart1_START (11)
#define SOC_CRGPERIPH_PEREN2_gt_clk_uart1_END (11)
#define SOC_CRGPERIPH_PEREN2_gt_clk_uart2_START (12)
#define SOC_CRGPERIPH_PEREN2_gt_clk_uart2_END (12)
#define SOC_CRGPERIPH_PEREN2_gt_clk_adb_mst_mdm_START (13)
#define SOC_CRGPERIPH_PEREN2_gt_clk_adb_mst_mdm_END (13)
#define SOC_CRGPERIPH_PEREN2_gt_clk_uart4_START (14)
#define SOC_CRGPERIPH_PEREN2_gt_clk_uart4_END (14)
#define SOC_CRGPERIPH_PEREN2_gt_clk_uart5_START (15)
#define SOC_CRGPERIPH_PEREN2_gt_clk_uart5_END (15)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_wd0_START (16)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_wd0_END (16)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_wd1_START (17)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_wd1_END (17)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_tzpc_START (18)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_tzpc_END (18)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_ipc_mdm_START (20)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_ipc_mdm_END (20)
#define SOC_CRGPERIPH_PEREN2_gt_clk_adb_mst_fcm0_START (21)
#define SOC_CRGPERIPH_PEREN2_gt_clk_adb_mst_fcm0_END (21)
#define SOC_CRGPERIPH_PEREN2_gt_clk_adb_mst_fcm1_START (22)
#define SOC_CRGPERIPH_PEREN2_gt_clk_adb_mst_fcm1_END (22)
#define SOC_CRGPERIPH_PEREN2_gt_aclk_gic_START (23)
#define SOC_CRGPERIPH_PEREN2_gt_aclk_gic_END (23)
#define SOC_CRGPERIPH_PEREN2_gt_clk_adb_slv_acp_START (24)
#define SOC_CRGPERIPH_PEREN2_gt_clk_adb_slv_acp_END (24)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_ioc_START (25)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_ioc_END (25)
#define SOC_CRGPERIPH_PEREN2_gt_clk_codecssi_START (26)
#define SOC_CRGPERIPH_PEREN2_gt_clk_codecssi_END (26)
#define SOC_CRGPERIPH_PEREN2_gt_clk_i2c4_START (27)
#define SOC_CRGPERIPH_PEREN2_gt_clk_i2c4_END (27)
#define SOC_CRGPERIPH_PEREN2_gt_clk_loadmonitor_1_START (28)
#define SOC_CRGPERIPH_PEREN2_gt_clk_loadmonitor_1_END (28)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_loadmonitor_1_START (29)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_loadmonitor_1_END (29)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_loadmonitor_1_lpmcu_START (30)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_loadmonitor_1_lpmcu_END (30)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_pctrl_START (31)
#define SOC_CRGPERIPH_PEREN2_gt_pclk_pctrl_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_pclk_pwm : 1;
        unsigned int gt_pclk_ctf : 1;
        unsigned int gt_pclk_ipc0 : 1;
        unsigned int gt_pclk_ipc1 : 1;
        unsigned int gt_pclk_blpwm_peri : 1;
        unsigned int gt_clk_loadmonitor : 1;
        unsigned int gt_pclk_loadmonitor : 1;
        unsigned int gt_clk_i2c3 : 1;
        unsigned int gt_pclk_loadmonitor_lpmcu : 1;
        unsigned int gt_clk_spi1 : 1;
        unsigned int gt_clk_uart0 : 1;
        unsigned int gt_clk_uart1 : 1;
        unsigned int gt_clk_uart2 : 1;
        unsigned int gt_clk_adb_mst_mdm : 1;
        unsigned int gt_clk_uart4 : 1;
        unsigned int gt_clk_uart5 : 1;
        unsigned int gt_pclk_wd0 : 1;
        unsigned int gt_pclk_wd1 : 1;
        unsigned int gt_pclk_tzpc : 1;
        unsigned int reserved : 1;
        unsigned int gt_pclk_ipc_mdm : 1;
        unsigned int gt_clk_adb_mst_fcm0 : 1;
        unsigned int gt_clk_adb_mst_fcm1 : 1;
        unsigned int gt_aclk_gic : 1;
        unsigned int gt_clk_adb_slv_acp : 1;
        unsigned int gt_pclk_ioc : 1;
        unsigned int gt_clk_codecssi : 1;
        unsigned int gt_clk_i2c4 : 1;
        unsigned int gt_clk_loadmonitor_1 : 1;
        unsigned int gt_pclk_loadmonitor_1 : 1;
        unsigned int gt_pclk_loadmonitor_1_lpmcu : 1;
        unsigned int gt_pclk_pctrl : 1;
    } reg;
} SOC_CRGPERIPH_PERDIS2_UNION;
#endif
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_pwm_START (0)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_pwm_END (0)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_ctf_START (1)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_ctf_END (1)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_ipc0_START (2)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_ipc0_END (2)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_ipc1_START (3)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_ipc1_END (3)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_blpwm_peri_START (4)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_blpwm_peri_END (4)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_loadmonitor_START (5)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_loadmonitor_END (5)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_loadmonitor_START (6)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_loadmonitor_END (6)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_i2c3_START (7)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_i2c3_END (7)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_loadmonitor_lpmcu_START (8)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_loadmonitor_lpmcu_END (8)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_spi1_START (9)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_spi1_END (9)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_uart0_START (10)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_uart0_END (10)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_uart1_START (11)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_uart1_END (11)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_uart2_START (12)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_uart2_END (12)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_adb_mst_mdm_START (13)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_adb_mst_mdm_END (13)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_uart4_START (14)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_uart4_END (14)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_uart5_START (15)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_uart5_END (15)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_wd0_START (16)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_wd0_END (16)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_wd1_START (17)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_wd1_END (17)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_tzpc_START (18)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_tzpc_END (18)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_ipc_mdm_START (20)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_ipc_mdm_END (20)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_adb_mst_fcm0_START (21)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_adb_mst_fcm0_END (21)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_adb_mst_fcm1_START (22)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_adb_mst_fcm1_END (22)
#define SOC_CRGPERIPH_PERDIS2_gt_aclk_gic_START (23)
#define SOC_CRGPERIPH_PERDIS2_gt_aclk_gic_END (23)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_adb_slv_acp_START (24)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_adb_slv_acp_END (24)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_ioc_START (25)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_ioc_END (25)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_codecssi_START (26)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_codecssi_END (26)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_i2c4_START (27)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_i2c4_END (27)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_loadmonitor_1_START (28)
#define SOC_CRGPERIPH_PERDIS2_gt_clk_loadmonitor_1_END (28)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_loadmonitor_1_START (29)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_loadmonitor_1_END (29)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_loadmonitor_1_lpmcu_START (30)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_loadmonitor_1_lpmcu_END (30)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_pctrl_START (31)
#define SOC_CRGPERIPH_PERDIS2_gt_pclk_pctrl_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_pclk_pwm : 1;
        unsigned int gt_pclk_ctf : 1;
        unsigned int gt_pclk_ipc0 : 1;
        unsigned int gt_pclk_ipc1 : 1;
        unsigned int gt_pclk_blpwm_peri : 1;
        unsigned int gt_clk_loadmonitor : 1;
        unsigned int gt_pclk_loadmonitor : 1;
        unsigned int gt_clk_i2c3 : 1;
        unsigned int gt_pclk_loadmonitor_lpmcu : 1;
        unsigned int gt_clk_spi1 : 1;
        unsigned int gt_clk_uart0 : 1;
        unsigned int gt_clk_uart1 : 1;
        unsigned int gt_clk_uart2 : 1;
        unsigned int gt_clk_adb_mst_mdm : 1;
        unsigned int gt_clk_uart4 : 1;
        unsigned int gt_clk_uart5 : 1;
        unsigned int gt_pclk_wd0 : 1;
        unsigned int gt_pclk_wd1 : 1;
        unsigned int gt_pclk_tzpc : 1;
        unsigned int reserved : 1;
        unsigned int gt_pclk_ipc_mdm : 1;
        unsigned int gt_clk_adb_mst_fcm0 : 1;
        unsigned int gt_clk_adb_mst_fcm1 : 1;
        unsigned int gt_aclk_gic : 1;
        unsigned int gt_clk_adb_slv_acp : 1;
        unsigned int gt_pclk_ioc : 1;
        unsigned int gt_clk_codecssi : 1;
        unsigned int gt_clk_i2c4 : 1;
        unsigned int gt_clk_loadmonitor_1 : 1;
        unsigned int gt_pclk_loadmonitor_1 : 1;
        unsigned int gt_pclk_loadmonitor_1_lpmcu : 1;
        unsigned int gt_pclk_pctrl : 1;
    } reg;
} SOC_CRGPERIPH_PERCLKEN2_UNION;
#endif
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_pwm_START (0)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_pwm_END (0)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_ctf_START (1)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_ctf_END (1)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_ipc0_START (2)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_ipc0_END (2)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_ipc1_START (3)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_ipc1_END (3)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_blpwm_peri_START (4)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_blpwm_peri_END (4)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_loadmonitor_START (5)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_loadmonitor_END (5)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_loadmonitor_START (6)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_loadmonitor_END (6)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_i2c3_START (7)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_i2c3_END (7)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_loadmonitor_lpmcu_START (8)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_loadmonitor_lpmcu_END (8)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_spi1_START (9)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_spi1_END (9)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_uart0_START (10)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_uart0_END (10)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_uart1_START (11)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_uart1_END (11)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_uart2_START (12)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_uart2_END (12)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_adb_mst_mdm_START (13)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_adb_mst_mdm_END (13)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_uart4_START (14)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_uart4_END (14)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_uart5_START (15)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_uart5_END (15)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_wd0_START (16)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_wd0_END (16)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_wd1_START (17)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_wd1_END (17)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_tzpc_START (18)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_tzpc_END (18)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_ipc_mdm_START (20)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_ipc_mdm_END (20)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_adb_mst_fcm0_START (21)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_adb_mst_fcm0_END (21)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_adb_mst_fcm1_START (22)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_adb_mst_fcm1_END (22)
#define SOC_CRGPERIPH_PERCLKEN2_gt_aclk_gic_START (23)
#define SOC_CRGPERIPH_PERCLKEN2_gt_aclk_gic_END (23)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_adb_slv_acp_START (24)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_adb_slv_acp_END (24)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_ioc_START (25)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_ioc_END (25)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_codecssi_START (26)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_codecssi_END (26)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_i2c4_START (27)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_i2c4_END (27)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_loadmonitor_1_START (28)
#define SOC_CRGPERIPH_PERCLKEN2_gt_clk_loadmonitor_1_END (28)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_loadmonitor_1_START (29)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_loadmonitor_1_END (29)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_loadmonitor_1_lpmcu_START (30)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_loadmonitor_1_lpmcu_END (30)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_pctrl_START (31)
#define SOC_CRGPERIPH_PERCLKEN2_gt_pclk_pctrl_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int st_pclk_pwm : 1;
        unsigned int st_pclk_ctf : 1;
        unsigned int st_pclk_ipc0 : 1;
        unsigned int st_pclk_ipc1 : 1;
        unsigned int st_pclk_blpwm_peri : 1;
        unsigned int st_clk_loadmonitor : 1;
        unsigned int st_pclk_loadmonitor : 1;
        unsigned int st_clk_i2c3 : 1;
        unsigned int reserved_0 : 1;
        unsigned int st_clk_spi1 : 1;
        unsigned int st_clk_uart0 : 1;
        unsigned int st_clk_uart1 : 1;
        unsigned int st_clk_uart2 : 1;
        unsigned int st_clk_adb_mst_mdm : 1;
        unsigned int st_clk_uart4 : 1;
        unsigned int st_clk_uart5 : 1;
        unsigned int st_pclk_wd0 : 1;
        unsigned int st_pclk_wd1 : 1;
        unsigned int st_pclk_tzpc : 1;
        unsigned int reserved_1 : 1;
        unsigned int st_pclk_ipc_mdm : 1;
        unsigned int st_clk_adb_mst_fcm0 : 1;
        unsigned int st_clk_adb_mst_fcm1 : 1;
        unsigned int st_aclk_gic : 1;
        unsigned int st_clk_adb_slv_acp : 1;
        unsigned int st_pclk_ioc : 1;
        unsigned int st_clk_codecssi : 1;
        unsigned int st_clk_i2c4 : 1;
        unsigned int st_clk_loadmonitor_1 : 1;
        unsigned int st_pclk_loadmonitor_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int st_pclk_pctrl : 1;
    } reg;
} SOC_CRGPERIPH_PERSTAT2_UNION;
#endif
#define SOC_CRGPERIPH_PERSTAT2_st_pclk_pwm_START (0)
#define SOC_CRGPERIPH_PERSTAT2_st_pclk_pwm_END (0)
#define SOC_CRGPERIPH_PERSTAT2_st_pclk_ctf_START (1)
#define SOC_CRGPERIPH_PERSTAT2_st_pclk_ctf_END (1)
#define SOC_CRGPERIPH_PERSTAT2_st_pclk_ipc0_START (2)
#define SOC_CRGPERIPH_PERSTAT2_st_pclk_ipc0_END (2)
#define SOC_CRGPERIPH_PERSTAT2_st_pclk_ipc1_START (3)
#define SOC_CRGPERIPH_PERSTAT2_st_pclk_ipc1_END (3)
#define SOC_CRGPERIPH_PERSTAT2_st_pclk_blpwm_peri_START (4)
#define SOC_CRGPERIPH_PERSTAT2_st_pclk_blpwm_peri_END (4)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_loadmonitor_START (5)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_loadmonitor_END (5)
#define SOC_CRGPERIPH_PERSTAT2_st_pclk_loadmonitor_START (6)
#define SOC_CRGPERIPH_PERSTAT2_st_pclk_loadmonitor_END (6)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_i2c3_START (7)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_i2c3_END (7)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_spi1_START (9)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_spi1_END (9)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_uart0_START (10)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_uart0_END (10)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_uart1_START (11)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_uart1_END (11)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_uart2_START (12)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_uart2_END (12)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_adb_mst_mdm_START (13)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_adb_mst_mdm_END (13)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_uart4_START (14)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_uart4_END (14)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_uart5_START (15)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_uart5_END (15)
#define SOC_CRGPERIPH_PERSTAT2_st_pclk_wd0_START (16)
#define SOC_CRGPERIPH_PERSTAT2_st_pclk_wd0_END (16)
#define SOC_CRGPERIPH_PERSTAT2_st_pclk_wd1_START (17)
#define SOC_CRGPERIPH_PERSTAT2_st_pclk_wd1_END (17)
#define SOC_CRGPERIPH_PERSTAT2_st_pclk_tzpc_START (18)
#define SOC_CRGPERIPH_PERSTAT2_st_pclk_tzpc_END (18)
#define SOC_CRGPERIPH_PERSTAT2_st_pclk_ipc_mdm_START (20)
#define SOC_CRGPERIPH_PERSTAT2_st_pclk_ipc_mdm_END (20)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_adb_mst_fcm0_START (21)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_adb_mst_fcm0_END (21)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_adb_mst_fcm1_START (22)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_adb_mst_fcm1_END (22)
#define SOC_CRGPERIPH_PERSTAT2_st_aclk_gic_START (23)
#define SOC_CRGPERIPH_PERSTAT2_st_aclk_gic_END (23)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_adb_slv_acp_START (24)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_adb_slv_acp_END (24)
#define SOC_CRGPERIPH_PERSTAT2_st_pclk_ioc_START (25)
#define SOC_CRGPERIPH_PERSTAT2_st_pclk_ioc_END (25)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_codecssi_START (26)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_codecssi_END (26)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_i2c4_START (27)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_i2c4_END (27)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_loadmonitor_1_START (28)
#define SOC_CRGPERIPH_PERSTAT2_st_clk_loadmonitor_1_END (28)
#define SOC_CRGPERIPH_PERSTAT2_st_pclk_loadmonitor_1_START (29)
#define SOC_CRGPERIPH_PERSTAT2_st_pclk_loadmonitor_1_END (29)
#define SOC_CRGPERIPH_PERSTAT2_st_pclk_pctrl_START (31)
#define SOC_CRGPERIPH_PERSTAT2_st_pclk_pctrl_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_aclk_dmac_lpm3 : 1;
        unsigned int gt_aclk_dmac_acpu : 1;
        unsigned int gt_aclk_dmac_mcpu : 1;
        unsigned int gt_aclk_g3d_cfg : 1;
        unsigned int gt_clk_g3dmt : 1;
        unsigned int gt_aclk_g3d : 1;
        unsigned int sc_abb_pll_gps_en0 : 1;
        unsigned int sc_abb_pll_gps_en1 : 1;
        unsigned int sc_abb_pll_audio_en0 : 1;
        unsigned int sc_abb_pll_audio_en1 : 1;
        unsigned int gt_clk_noc_mdm_mst : 1;
        unsigned int gt_clk_noc_mdm_cfg : 1;
        unsigned int gt_pclk_mmc1_pcie : 1;
        unsigned int gt_clk_pll_unlock_detect : 1;
        unsigned int gt_clk_adb_mst_mdm2sys : 1;
        unsigned int gt_clk_sysbus2mdm : 1;
        unsigned int reserved_0 : 1;
        unsigned int gt_clk_rxdphy3_cfg : 1;
        unsigned int sc_abb_pll_gps_gt_en0 : 1;
        unsigned int sc_abb_pll_audio_gt_en0 : 1;
        unsigned int gt_clk_rxdphy0_cfg : 1;
        unsigned int gt_clk_rxdphy1_cfg : 1;
        unsigned int gt_clk_rxdphy2_cfg : 1;
        unsigned int reserved_1 : 1;
        unsigned int gt_clk_csi_trans : 1;
        unsigned int gt_clk_dsi_trans : 1;
        unsigned int gt_clk_isp_i2c_media : 1;
        unsigned int reserved_2 : 1;
        unsigned int gt_clk_txdphy0_cfg : 1;
        unsigned int gt_clk_txdphy0_ref : 1;
        unsigned int gt_clk_txdphy1_cfg : 1;
        unsigned int gt_clk_txdphy1_ref : 1;
    } reg;
} SOC_CRGPERIPH_PEREN3_UNION;
#endif
#define SOC_CRGPERIPH_PEREN3_gt_aclk_dmac_lpm3_START (0)
#define SOC_CRGPERIPH_PEREN3_gt_aclk_dmac_lpm3_END (0)
#define SOC_CRGPERIPH_PEREN3_gt_aclk_dmac_acpu_START (1)
#define SOC_CRGPERIPH_PEREN3_gt_aclk_dmac_acpu_END (1)
#define SOC_CRGPERIPH_PEREN3_gt_aclk_dmac_mcpu_START (2)
#define SOC_CRGPERIPH_PEREN3_gt_aclk_dmac_mcpu_END (2)
#define SOC_CRGPERIPH_PEREN3_gt_aclk_g3d_cfg_START (3)
#define SOC_CRGPERIPH_PEREN3_gt_aclk_g3d_cfg_END (3)
#define SOC_CRGPERIPH_PEREN3_gt_clk_g3dmt_START (4)
#define SOC_CRGPERIPH_PEREN3_gt_clk_g3dmt_END (4)
#define SOC_CRGPERIPH_PEREN3_gt_aclk_g3d_START (5)
#define SOC_CRGPERIPH_PEREN3_gt_aclk_g3d_END (5)
#define SOC_CRGPERIPH_PEREN3_sc_abb_pll_gps_en0_START (6)
#define SOC_CRGPERIPH_PEREN3_sc_abb_pll_gps_en0_END (6)
#define SOC_CRGPERIPH_PEREN3_sc_abb_pll_gps_en1_START (7)
#define SOC_CRGPERIPH_PEREN3_sc_abb_pll_gps_en1_END (7)
#define SOC_CRGPERIPH_PEREN3_sc_abb_pll_audio_en0_START (8)
#define SOC_CRGPERIPH_PEREN3_sc_abb_pll_audio_en0_END (8)
#define SOC_CRGPERIPH_PEREN3_sc_abb_pll_audio_en1_START (9)
#define SOC_CRGPERIPH_PEREN3_sc_abb_pll_audio_en1_END (9)
#define SOC_CRGPERIPH_PEREN3_gt_clk_noc_mdm_mst_START (10)
#define SOC_CRGPERIPH_PEREN3_gt_clk_noc_mdm_mst_END (10)
#define SOC_CRGPERIPH_PEREN3_gt_clk_noc_mdm_cfg_START (11)
#define SOC_CRGPERIPH_PEREN3_gt_clk_noc_mdm_cfg_END (11)
#define SOC_CRGPERIPH_PEREN3_gt_pclk_mmc1_pcie_START (12)
#define SOC_CRGPERIPH_PEREN3_gt_pclk_mmc1_pcie_END (12)
#define SOC_CRGPERIPH_PEREN3_gt_clk_pll_unlock_detect_START (13)
#define SOC_CRGPERIPH_PEREN3_gt_clk_pll_unlock_detect_END (13)
#define SOC_CRGPERIPH_PEREN3_gt_clk_adb_mst_mdm2sys_START (14)
#define SOC_CRGPERIPH_PEREN3_gt_clk_adb_mst_mdm2sys_END (14)
#define SOC_CRGPERIPH_PEREN3_gt_clk_sysbus2mdm_START (15)
#define SOC_CRGPERIPH_PEREN3_gt_clk_sysbus2mdm_END (15)
#define SOC_CRGPERIPH_PEREN3_gt_clk_rxdphy3_cfg_START (17)
#define SOC_CRGPERIPH_PEREN3_gt_clk_rxdphy3_cfg_END (17)
#define SOC_CRGPERIPH_PEREN3_sc_abb_pll_gps_gt_en0_START (18)
#define SOC_CRGPERIPH_PEREN3_sc_abb_pll_gps_gt_en0_END (18)
#define SOC_CRGPERIPH_PEREN3_sc_abb_pll_audio_gt_en0_START (19)
#define SOC_CRGPERIPH_PEREN3_sc_abb_pll_audio_gt_en0_END (19)
#define SOC_CRGPERIPH_PEREN3_gt_clk_rxdphy0_cfg_START (20)
#define SOC_CRGPERIPH_PEREN3_gt_clk_rxdphy0_cfg_END (20)
#define SOC_CRGPERIPH_PEREN3_gt_clk_rxdphy1_cfg_START (21)
#define SOC_CRGPERIPH_PEREN3_gt_clk_rxdphy1_cfg_END (21)
#define SOC_CRGPERIPH_PEREN3_gt_clk_rxdphy2_cfg_START (22)
#define SOC_CRGPERIPH_PEREN3_gt_clk_rxdphy2_cfg_END (22)
#define SOC_CRGPERIPH_PEREN3_gt_clk_csi_trans_START (24)
#define SOC_CRGPERIPH_PEREN3_gt_clk_csi_trans_END (24)
#define SOC_CRGPERIPH_PEREN3_gt_clk_dsi_trans_START (25)
#define SOC_CRGPERIPH_PEREN3_gt_clk_dsi_trans_END (25)
#define SOC_CRGPERIPH_PEREN3_gt_clk_isp_i2c_media_START (26)
#define SOC_CRGPERIPH_PEREN3_gt_clk_isp_i2c_media_END (26)
#define SOC_CRGPERIPH_PEREN3_gt_clk_txdphy0_cfg_START (28)
#define SOC_CRGPERIPH_PEREN3_gt_clk_txdphy0_cfg_END (28)
#define SOC_CRGPERIPH_PEREN3_gt_clk_txdphy0_ref_START (29)
#define SOC_CRGPERIPH_PEREN3_gt_clk_txdphy0_ref_END (29)
#define SOC_CRGPERIPH_PEREN3_gt_clk_txdphy1_cfg_START (30)
#define SOC_CRGPERIPH_PEREN3_gt_clk_txdphy1_cfg_END (30)
#define SOC_CRGPERIPH_PEREN3_gt_clk_txdphy1_ref_START (31)
#define SOC_CRGPERIPH_PEREN3_gt_clk_txdphy1_ref_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_aclk_dmac_lpm3 : 1;
        unsigned int gt_aclk_dmac_acpu : 1;
        unsigned int gt_aclk_dmac_mcpu : 1;
        unsigned int gt_aclk_g3d_cfg : 1;
        unsigned int gt_clk_g3dmt : 1;
        unsigned int gt_aclk_g3d : 1;
        unsigned int sc_abb_pll_gps_en0 : 1;
        unsigned int sc_abb_pll_gps_en1 : 1;
        unsigned int sc_abb_pll_audio_en0 : 1;
        unsigned int sc_abb_pll_audio_en1 : 1;
        unsigned int gt_clk_noc_mdm_mst : 1;
        unsigned int gt_clk_noc_mdm_cfg : 1;
        unsigned int gt_pclk_mmc1_pcie : 1;
        unsigned int gt_clk_pll_unlock_detect : 1;
        unsigned int gt_clk_adb_mst_mdm2sys : 1;
        unsigned int gt_clk_sysbus2mdm : 1;
        unsigned int reserved_0 : 1;
        unsigned int gt_clk_rxdphy3_cfg : 1;
        unsigned int sc_abb_pll_gps_gt_en0 : 1;
        unsigned int sc_abb_pll_audio_gt_en0 : 1;
        unsigned int gt_clk_rxdphy0_cfg : 1;
        unsigned int gt_clk_rxdphy1_cfg : 1;
        unsigned int gt_clk_rxdphy2_cfg : 1;
        unsigned int reserved_1 : 1;
        unsigned int gt_clk_csi_trans : 1;
        unsigned int gt_clk_dsi_trans : 1;
        unsigned int gt_clk_isp_i2c_media : 1;
        unsigned int reserved_2 : 1;
        unsigned int gt_clk_txdphy0_cfg : 1;
        unsigned int gt_clk_txdphy0_ref : 1;
        unsigned int gt_clk_txdphy1_cfg : 1;
        unsigned int gt_clk_txdphy1_ref : 1;
    } reg;
} SOC_CRGPERIPH_PERDIS3_UNION;
#endif
#define SOC_CRGPERIPH_PERDIS3_gt_aclk_dmac_lpm3_START (0)
#define SOC_CRGPERIPH_PERDIS3_gt_aclk_dmac_lpm3_END (0)
#define SOC_CRGPERIPH_PERDIS3_gt_aclk_dmac_acpu_START (1)
#define SOC_CRGPERIPH_PERDIS3_gt_aclk_dmac_acpu_END (1)
#define SOC_CRGPERIPH_PERDIS3_gt_aclk_dmac_mcpu_START (2)
#define SOC_CRGPERIPH_PERDIS3_gt_aclk_dmac_mcpu_END (2)
#define SOC_CRGPERIPH_PERDIS3_gt_aclk_g3d_cfg_START (3)
#define SOC_CRGPERIPH_PERDIS3_gt_aclk_g3d_cfg_END (3)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_g3dmt_START (4)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_g3dmt_END (4)
#define SOC_CRGPERIPH_PERDIS3_gt_aclk_g3d_START (5)
#define SOC_CRGPERIPH_PERDIS3_gt_aclk_g3d_END (5)
#define SOC_CRGPERIPH_PERDIS3_sc_abb_pll_gps_en0_START (6)
#define SOC_CRGPERIPH_PERDIS3_sc_abb_pll_gps_en0_END (6)
#define SOC_CRGPERIPH_PERDIS3_sc_abb_pll_gps_en1_START (7)
#define SOC_CRGPERIPH_PERDIS3_sc_abb_pll_gps_en1_END (7)
#define SOC_CRGPERIPH_PERDIS3_sc_abb_pll_audio_en0_START (8)
#define SOC_CRGPERIPH_PERDIS3_sc_abb_pll_audio_en0_END (8)
#define SOC_CRGPERIPH_PERDIS3_sc_abb_pll_audio_en1_START (9)
#define SOC_CRGPERIPH_PERDIS3_sc_abb_pll_audio_en1_END (9)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_noc_mdm_mst_START (10)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_noc_mdm_mst_END (10)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_noc_mdm_cfg_START (11)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_noc_mdm_cfg_END (11)
#define SOC_CRGPERIPH_PERDIS3_gt_pclk_mmc1_pcie_START (12)
#define SOC_CRGPERIPH_PERDIS3_gt_pclk_mmc1_pcie_END (12)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_pll_unlock_detect_START (13)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_pll_unlock_detect_END (13)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_adb_mst_mdm2sys_START (14)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_adb_mst_mdm2sys_END (14)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_sysbus2mdm_START (15)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_sysbus2mdm_END (15)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_rxdphy3_cfg_START (17)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_rxdphy3_cfg_END (17)
#define SOC_CRGPERIPH_PERDIS3_sc_abb_pll_gps_gt_en0_START (18)
#define SOC_CRGPERIPH_PERDIS3_sc_abb_pll_gps_gt_en0_END (18)
#define SOC_CRGPERIPH_PERDIS3_sc_abb_pll_audio_gt_en0_START (19)
#define SOC_CRGPERIPH_PERDIS3_sc_abb_pll_audio_gt_en0_END (19)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_rxdphy0_cfg_START (20)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_rxdphy0_cfg_END (20)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_rxdphy1_cfg_START (21)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_rxdphy1_cfg_END (21)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_rxdphy2_cfg_START (22)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_rxdphy2_cfg_END (22)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_csi_trans_START (24)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_csi_trans_END (24)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_dsi_trans_START (25)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_dsi_trans_END (25)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_isp_i2c_media_START (26)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_isp_i2c_media_END (26)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_txdphy0_cfg_START (28)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_txdphy0_cfg_END (28)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_txdphy0_ref_START (29)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_txdphy0_ref_END (29)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_txdphy1_cfg_START (30)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_txdphy1_cfg_END (30)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_txdphy1_ref_START (31)
#define SOC_CRGPERIPH_PERDIS3_gt_clk_txdphy1_ref_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_aclk_dmac_lpm3 : 1;
        unsigned int gt_aclk_dmac_acpu : 1;
        unsigned int gt_aclk_dmac_mcpu : 1;
        unsigned int gt_aclk_g3d_cfg : 1;
        unsigned int gt_clk_g3dmt : 1;
        unsigned int gt_aclk_g3d : 1;
        unsigned int sc_abb_pll_gps_en0 : 1;
        unsigned int sc_abb_pll_gps_en1 : 1;
        unsigned int sc_abb_pll_audio_en0 : 1;
        unsigned int sc_abb_pll_audio_en1 : 1;
        unsigned int gt_clk_noc_mdm_mst : 1;
        unsigned int gt_clk_noc_mdm_cfg : 1;
        unsigned int gt_pclk_mmc1_pcie : 1;
        unsigned int gt_clk_pll_unlock_detect : 1;
        unsigned int gt_clk_adb_mst_mdm2sys : 1;
        unsigned int gt_clk_sysbus2mdm : 1;
        unsigned int reserved_0 : 1;
        unsigned int gt_clk_rxdphy3_cfg : 1;
        unsigned int sc_abb_pll_gps_gt_en0 : 1;
        unsigned int sc_abb_pll_audio_gt_en0 : 1;
        unsigned int gt_clk_rxdphy0_cfg : 1;
        unsigned int gt_clk_rxdphy1_cfg : 1;
        unsigned int gt_clk_rxdphy2_cfg : 1;
        unsigned int reserved_1 : 1;
        unsigned int gt_clk_csi_trans : 1;
        unsigned int gt_clk_dsi_trans : 1;
        unsigned int gt_clk_isp_i2c_media : 1;
        unsigned int reserved_2 : 1;
        unsigned int gt_clk_txdphy0_cfg : 1;
        unsigned int gt_clk_txdphy0_ref : 1;
        unsigned int gt_clk_txdphy1_cfg : 1;
        unsigned int gt_clk_txdphy1_ref : 1;
    } reg;
} SOC_CRGPERIPH_PERCLKEN3_UNION;
#endif
#define SOC_CRGPERIPH_PERCLKEN3_gt_aclk_dmac_lpm3_START (0)
#define SOC_CRGPERIPH_PERCLKEN3_gt_aclk_dmac_lpm3_END (0)
#define SOC_CRGPERIPH_PERCLKEN3_gt_aclk_dmac_acpu_START (1)
#define SOC_CRGPERIPH_PERCLKEN3_gt_aclk_dmac_acpu_END (1)
#define SOC_CRGPERIPH_PERCLKEN3_gt_aclk_dmac_mcpu_START (2)
#define SOC_CRGPERIPH_PERCLKEN3_gt_aclk_dmac_mcpu_END (2)
#define SOC_CRGPERIPH_PERCLKEN3_gt_aclk_g3d_cfg_START (3)
#define SOC_CRGPERIPH_PERCLKEN3_gt_aclk_g3d_cfg_END (3)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_g3dmt_START (4)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_g3dmt_END (4)
#define SOC_CRGPERIPH_PERCLKEN3_gt_aclk_g3d_START (5)
#define SOC_CRGPERIPH_PERCLKEN3_gt_aclk_g3d_END (5)
#define SOC_CRGPERIPH_PERCLKEN3_sc_abb_pll_gps_en0_START (6)
#define SOC_CRGPERIPH_PERCLKEN3_sc_abb_pll_gps_en0_END (6)
#define SOC_CRGPERIPH_PERCLKEN3_sc_abb_pll_gps_en1_START (7)
#define SOC_CRGPERIPH_PERCLKEN3_sc_abb_pll_gps_en1_END (7)
#define SOC_CRGPERIPH_PERCLKEN3_sc_abb_pll_audio_en0_START (8)
#define SOC_CRGPERIPH_PERCLKEN3_sc_abb_pll_audio_en0_END (8)
#define SOC_CRGPERIPH_PERCLKEN3_sc_abb_pll_audio_en1_START (9)
#define SOC_CRGPERIPH_PERCLKEN3_sc_abb_pll_audio_en1_END (9)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_noc_mdm_mst_START (10)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_noc_mdm_mst_END (10)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_noc_mdm_cfg_START (11)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_noc_mdm_cfg_END (11)
#define SOC_CRGPERIPH_PERCLKEN3_gt_pclk_mmc1_pcie_START (12)
#define SOC_CRGPERIPH_PERCLKEN3_gt_pclk_mmc1_pcie_END (12)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_pll_unlock_detect_START (13)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_pll_unlock_detect_END (13)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_adb_mst_mdm2sys_START (14)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_adb_mst_mdm2sys_END (14)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_sysbus2mdm_START (15)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_sysbus2mdm_END (15)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_rxdphy3_cfg_START (17)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_rxdphy3_cfg_END (17)
#define SOC_CRGPERIPH_PERCLKEN3_sc_abb_pll_gps_gt_en0_START (18)
#define SOC_CRGPERIPH_PERCLKEN3_sc_abb_pll_gps_gt_en0_END (18)
#define SOC_CRGPERIPH_PERCLKEN3_sc_abb_pll_audio_gt_en0_START (19)
#define SOC_CRGPERIPH_PERCLKEN3_sc_abb_pll_audio_gt_en0_END (19)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_rxdphy0_cfg_START (20)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_rxdphy0_cfg_END (20)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_rxdphy1_cfg_START (21)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_rxdphy1_cfg_END (21)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_rxdphy2_cfg_START (22)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_rxdphy2_cfg_END (22)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_csi_trans_START (24)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_csi_trans_END (24)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_dsi_trans_START (25)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_dsi_trans_END (25)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_isp_i2c_media_START (26)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_isp_i2c_media_END (26)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_txdphy0_cfg_START (28)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_txdphy0_cfg_END (28)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_txdphy0_ref_START (29)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_txdphy0_ref_END (29)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_txdphy1_cfg_START (30)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_txdphy1_cfg_END (30)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_txdphy1_ref_START (31)
#define SOC_CRGPERIPH_PERCLKEN3_gt_clk_txdphy1_ref_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int st_clk_dmac0 : 1;
        unsigned int st_clk_dmac1 : 1;
        unsigned int st_aclk_dmac : 1;
        unsigned int st_aclk_g3d_cfg : 1;
        unsigned int st_clk_g3dmt : 1;
        unsigned int st_aclk_g3d : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int st_clk_noc_mdm_mst : 1;
        unsigned int st_clk_noc_mdm_cfg : 1;
        unsigned int st_pclk_mmc1_pcie : 1;
        unsigned int st_clk_pll_unlock_detect : 1;
        unsigned int st_clk_adb_mst_mdm2sys : 1;
        unsigned int st_clk_sysbus2mdm : 1;
        unsigned int reserved_4 : 1;
        unsigned int st_clk_rxdphy3_cfg : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int st_clk_rxdphy0_cfg : 1;
        unsigned int st_clk_rxdphy1_cfg : 1;
        unsigned int st_clk_rxdphy2_cfg : 1;
        unsigned int reserved_7 : 1;
        unsigned int st_clk_csi_trans : 1;
        unsigned int st_clk_dsi_trans : 1;
        unsigned int st_clk_isp_i2c_media : 1;
        unsigned int reserved_8 : 1;
        unsigned int st_clk_txdphy0_cfg : 1;
        unsigned int st_clk_txdphy0_ref : 1;
        unsigned int st_clk_txdphy1_cfg : 1;
        unsigned int st_clk_txdphy1_ref : 1;
    } reg;
} SOC_CRGPERIPH_PERSTAT3_UNION;
#endif
#define SOC_CRGPERIPH_PERSTAT3_st_clk_dmac0_START (0)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_dmac0_END (0)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_dmac1_START (1)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_dmac1_END (1)
#define SOC_CRGPERIPH_PERSTAT3_st_aclk_dmac_START (2)
#define SOC_CRGPERIPH_PERSTAT3_st_aclk_dmac_END (2)
#define SOC_CRGPERIPH_PERSTAT3_st_aclk_g3d_cfg_START (3)
#define SOC_CRGPERIPH_PERSTAT3_st_aclk_g3d_cfg_END (3)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_g3dmt_START (4)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_g3dmt_END (4)
#define SOC_CRGPERIPH_PERSTAT3_st_aclk_g3d_START (5)
#define SOC_CRGPERIPH_PERSTAT3_st_aclk_g3d_END (5)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_noc_mdm_mst_START (10)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_noc_mdm_mst_END (10)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_noc_mdm_cfg_START (11)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_noc_mdm_cfg_END (11)
#define SOC_CRGPERIPH_PERSTAT3_st_pclk_mmc1_pcie_START (12)
#define SOC_CRGPERIPH_PERSTAT3_st_pclk_mmc1_pcie_END (12)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_pll_unlock_detect_START (13)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_pll_unlock_detect_END (13)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_adb_mst_mdm2sys_START (14)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_adb_mst_mdm2sys_END (14)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_sysbus2mdm_START (15)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_sysbus2mdm_END (15)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_rxdphy3_cfg_START (17)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_rxdphy3_cfg_END (17)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_rxdphy0_cfg_START (20)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_rxdphy0_cfg_END (20)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_rxdphy1_cfg_START (21)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_rxdphy1_cfg_END (21)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_rxdphy2_cfg_START (22)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_rxdphy2_cfg_END (22)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_csi_trans_START (24)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_csi_trans_END (24)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_dsi_trans_START (25)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_dsi_trans_END (25)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_isp_i2c_media_START (26)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_isp_i2c_media_END (26)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_txdphy0_cfg_START (28)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_txdphy0_cfg_END (28)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_txdphy0_ref_START (29)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_txdphy0_ref_END (29)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_txdphy1_cfg_START (30)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_txdphy1_cfg_END (30)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_txdphy1_ref_START (31)
#define SOC_CRGPERIPH_PERSTAT3_st_clk_txdphy1_ref_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_clk_usb3otg_ref : 1;
        unsigned int gt_aclk_usb3otg : 1;
        unsigned int gt_clk_isp_snclk3 : 1;
        unsigned int gt_clk_socp_bbe2 : 1;
        unsigned int gt_clk_spi4 : 1;
        unsigned int gt_clk_ppll4_sscg : 1;
        unsigned int gt_clk_media_tcxo : 1;
        unsigned int gt_clk_mpll3_sscg : 1;
        unsigned int gt_clk_perf_stat : 1;
        unsigned int gt_pclk_perf_stat : 1;
        unsigned int gt_aclk_perf_stat : 1;
        unsigned int gt_clk_socp_bbe1 : 1;
        unsigned int gt_clk_x2j_func_mbist : 1;
        unsigned int gt_pclk_mmc0_ioc : 1;
        unsigned int gt_clk_socp_bbe0 : 1;
        unsigned int gt_clk_socp_hifi : 1;
        unsigned int gt_clk_mpll2_sscg : 1;
        unsigned int gt_clk_sd : 1;
        unsigned int sc_abb_pll_gps_gt_en1 : 1;
        unsigned int gt_clk_sdio : 1;
        unsigned int sc_abb_pll_audio_gt_en1 : 1;
        unsigned int gt_clk_a57_tsensor : 1;
        unsigned int gt_clk_a53_tsensor : 1;
        unsigned int gt_clk_apll0_sscg : 1;
        unsigned int gt_clk_apll1_sscg : 1;
        unsigned int gt_clk_apll2_sscg : 1;
        unsigned int gt_clk_ppll1_sscg : 1;
        unsigned int gt_clk_ppll2_sscg : 1;
        unsigned int gt_clk_ppll3_sscg : 1;
        unsigned int gt_clk_mpll0_sscg : 1;
        unsigned int gt_clk_mpll1_sscg : 1;
        unsigned int gt_clk_cpu_little_tp : 1;
    } reg;
} SOC_CRGPERIPH_PEREN4_UNION;
#endif
#define SOC_CRGPERIPH_PEREN4_gt_clk_usb3otg_ref_START (0)
#define SOC_CRGPERIPH_PEREN4_gt_clk_usb3otg_ref_END (0)
#define SOC_CRGPERIPH_PEREN4_gt_aclk_usb3otg_START (1)
#define SOC_CRGPERIPH_PEREN4_gt_aclk_usb3otg_END (1)
#define SOC_CRGPERIPH_PEREN4_gt_clk_isp_snclk3_START (2)
#define SOC_CRGPERIPH_PEREN4_gt_clk_isp_snclk3_END (2)
#define SOC_CRGPERIPH_PEREN4_gt_clk_socp_bbe2_START (3)
#define SOC_CRGPERIPH_PEREN4_gt_clk_socp_bbe2_END (3)
#define SOC_CRGPERIPH_PEREN4_gt_clk_spi4_START (4)
#define SOC_CRGPERIPH_PEREN4_gt_clk_spi4_END (4)
#define SOC_CRGPERIPH_PEREN4_gt_clk_ppll4_sscg_START (5)
#define SOC_CRGPERIPH_PEREN4_gt_clk_ppll4_sscg_END (5)
#define SOC_CRGPERIPH_PEREN4_gt_clk_media_tcxo_START (6)
#define SOC_CRGPERIPH_PEREN4_gt_clk_media_tcxo_END (6)
#define SOC_CRGPERIPH_PEREN4_gt_clk_mpll3_sscg_START (7)
#define SOC_CRGPERIPH_PEREN4_gt_clk_mpll3_sscg_END (7)
#define SOC_CRGPERIPH_PEREN4_gt_clk_perf_stat_START (8)
#define SOC_CRGPERIPH_PEREN4_gt_clk_perf_stat_END (8)
#define SOC_CRGPERIPH_PEREN4_gt_pclk_perf_stat_START (9)
#define SOC_CRGPERIPH_PEREN4_gt_pclk_perf_stat_END (9)
#define SOC_CRGPERIPH_PEREN4_gt_aclk_perf_stat_START (10)
#define SOC_CRGPERIPH_PEREN4_gt_aclk_perf_stat_END (10)
#define SOC_CRGPERIPH_PEREN4_gt_clk_socp_bbe1_START (11)
#define SOC_CRGPERIPH_PEREN4_gt_clk_socp_bbe1_END (11)
#define SOC_CRGPERIPH_PEREN4_gt_clk_x2j_func_mbist_START (12)
#define SOC_CRGPERIPH_PEREN4_gt_clk_x2j_func_mbist_END (12)
#define SOC_CRGPERIPH_PEREN4_gt_pclk_mmc0_ioc_START (13)
#define SOC_CRGPERIPH_PEREN4_gt_pclk_mmc0_ioc_END (13)
#define SOC_CRGPERIPH_PEREN4_gt_clk_socp_bbe0_START (14)
#define SOC_CRGPERIPH_PEREN4_gt_clk_socp_bbe0_END (14)
#define SOC_CRGPERIPH_PEREN4_gt_clk_socp_hifi_START (15)
#define SOC_CRGPERIPH_PEREN4_gt_clk_socp_hifi_END (15)
#define SOC_CRGPERIPH_PEREN4_gt_clk_mpll2_sscg_START (16)
#define SOC_CRGPERIPH_PEREN4_gt_clk_mpll2_sscg_END (16)
#define SOC_CRGPERIPH_PEREN4_gt_clk_sd_START (17)
#define SOC_CRGPERIPH_PEREN4_gt_clk_sd_END (17)
#define SOC_CRGPERIPH_PEREN4_sc_abb_pll_gps_gt_en1_START (18)
#define SOC_CRGPERIPH_PEREN4_sc_abb_pll_gps_gt_en1_END (18)
#define SOC_CRGPERIPH_PEREN4_gt_clk_sdio_START (19)
#define SOC_CRGPERIPH_PEREN4_gt_clk_sdio_END (19)
#define SOC_CRGPERIPH_PEREN4_sc_abb_pll_audio_gt_en1_START (20)
#define SOC_CRGPERIPH_PEREN4_sc_abb_pll_audio_gt_en1_END (20)
#define SOC_CRGPERIPH_PEREN4_gt_clk_a57_tsensor_START (21)
#define SOC_CRGPERIPH_PEREN4_gt_clk_a57_tsensor_END (21)
#define SOC_CRGPERIPH_PEREN4_gt_clk_a53_tsensor_START (22)
#define SOC_CRGPERIPH_PEREN4_gt_clk_a53_tsensor_END (22)
#define SOC_CRGPERIPH_PEREN4_gt_clk_apll0_sscg_START (23)
#define SOC_CRGPERIPH_PEREN4_gt_clk_apll0_sscg_END (23)
#define SOC_CRGPERIPH_PEREN4_gt_clk_apll1_sscg_START (24)
#define SOC_CRGPERIPH_PEREN4_gt_clk_apll1_sscg_END (24)
#define SOC_CRGPERIPH_PEREN4_gt_clk_apll2_sscg_START (25)
#define SOC_CRGPERIPH_PEREN4_gt_clk_apll2_sscg_END (25)
#define SOC_CRGPERIPH_PEREN4_gt_clk_ppll1_sscg_START (26)
#define SOC_CRGPERIPH_PEREN4_gt_clk_ppll1_sscg_END (26)
#define SOC_CRGPERIPH_PEREN4_gt_clk_ppll2_sscg_START (27)
#define SOC_CRGPERIPH_PEREN4_gt_clk_ppll2_sscg_END (27)
#define SOC_CRGPERIPH_PEREN4_gt_clk_ppll3_sscg_START (28)
#define SOC_CRGPERIPH_PEREN4_gt_clk_ppll3_sscg_END (28)
#define SOC_CRGPERIPH_PEREN4_gt_clk_mpll0_sscg_START (29)
#define SOC_CRGPERIPH_PEREN4_gt_clk_mpll0_sscg_END (29)
#define SOC_CRGPERIPH_PEREN4_gt_clk_mpll1_sscg_START (30)
#define SOC_CRGPERIPH_PEREN4_gt_clk_mpll1_sscg_END (30)
#define SOC_CRGPERIPH_PEREN4_gt_clk_cpu_little_tp_START (31)
#define SOC_CRGPERIPH_PEREN4_gt_clk_cpu_little_tp_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_clk_usb3otg_ref : 1;
        unsigned int gt_aclk_usb3otg : 1;
        unsigned int gt_clk_isp_snclk3 : 1;
        unsigned int gt_clk_socp_bbe2 : 1;
        unsigned int gt_clk_spi4 : 1;
        unsigned int gt_clk_ppll4_sscg : 1;
        unsigned int gt_clk_media_tcxo : 1;
        unsigned int gt_clk_mpll3_sscg : 1;
        unsigned int gt_clk_perf_stat : 1;
        unsigned int gt_pclk_perf_stat : 1;
        unsigned int gt_aclk_perf_stat : 1;
        unsigned int gt_clk_socp_bbe1 : 1;
        unsigned int gt_clk_x2j_func_mbist : 1;
        unsigned int gt_pclk_mmc0_ioc : 1;
        unsigned int gt_clk_socp_bbe0 : 1;
        unsigned int gt_clk_socp_hifi : 1;
        unsigned int gt_clk_mpll2_sscg : 1;
        unsigned int gt_clk_sd : 1;
        unsigned int sc_abb_pll_gps_gt_en1 : 1;
        unsigned int gt_clk_sdio : 1;
        unsigned int sc_abb_pll_audio_gt_en1 : 1;
        unsigned int gt_clk_a57_tsensor : 1;
        unsigned int gt_clk_a53_tsensor : 1;
        unsigned int gt_clk_apll0_sscg : 1;
        unsigned int gt_clk_apll1_sscg : 1;
        unsigned int gt_clk_apll2_sscg : 1;
        unsigned int gt_clk_ppll1_sscg : 1;
        unsigned int gt_clk_ppll2_sscg : 1;
        unsigned int gt_clk_ppll3_sscg : 1;
        unsigned int gt_clk_mpll0_sscg : 1;
        unsigned int gt_clk_mpll1_sscg : 1;
        unsigned int gt_clk_cpu_little_tp : 1;
    } reg;
} SOC_CRGPERIPH_PERDIS4_UNION;
#endif
#define SOC_CRGPERIPH_PERDIS4_gt_clk_usb3otg_ref_START (0)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_usb3otg_ref_END (0)
#define SOC_CRGPERIPH_PERDIS4_gt_aclk_usb3otg_START (1)
#define SOC_CRGPERIPH_PERDIS4_gt_aclk_usb3otg_END (1)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_isp_snclk3_START (2)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_isp_snclk3_END (2)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_socp_bbe2_START (3)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_socp_bbe2_END (3)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_spi4_START (4)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_spi4_END (4)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_ppll4_sscg_START (5)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_ppll4_sscg_END (5)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_media_tcxo_START (6)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_media_tcxo_END (6)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_mpll3_sscg_START (7)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_mpll3_sscg_END (7)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_perf_stat_START (8)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_perf_stat_END (8)
#define SOC_CRGPERIPH_PERDIS4_gt_pclk_perf_stat_START (9)
#define SOC_CRGPERIPH_PERDIS4_gt_pclk_perf_stat_END (9)
#define SOC_CRGPERIPH_PERDIS4_gt_aclk_perf_stat_START (10)
#define SOC_CRGPERIPH_PERDIS4_gt_aclk_perf_stat_END (10)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_socp_bbe1_START (11)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_socp_bbe1_END (11)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_x2j_func_mbist_START (12)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_x2j_func_mbist_END (12)
#define SOC_CRGPERIPH_PERDIS4_gt_pclk_mmc0_ioc_START (13)
#define SOC_CRGPERIPH_PERDIS4_gt_pclk_mmc0_ioc_END (13)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_socp_bbe0_START (14)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_socp_bbe0_END (14)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_socp_hifi_START (15)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_socp_hifi_END (15)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_mpll2_sscg_START (16)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_mpll2_sscg_END (16)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_sd_START (17)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_sd_END (17)
#define SOC_CRGPERIPH_PERDIS4_sc_abb_pll_gps_gt_en1_START (18)
#define SOC_CRGPERIPH_PERDIS4_sc_abb_pll_gps_gt_en1_END (18)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_sdio_START (19)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_sdio_END (19)
#define SOC_CRGPERIPH_PERDIS4_sc_abb_pll_audio_gt_en1_START (20)
#define SOC_CRGPERIPH_PERDIS4_sc_abb_pll_audio_gt_en1_END (20)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_a57_tsensor_START (21)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_a57_tsensor_END (21)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_a53_tsensor_START (22)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_a53_tsensor_END (22)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_apll0_sscg_START (23)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_apll0_sscg_END (23)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_apll1_sscg_START (24)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_apll1_sscg_END (24)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_apll2_sscg_START (25)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_apll2_sscg_END (25)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_ppll1_sscg_START (26)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_ppll1_sscg_END (26)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_ppll2_sscg_START (27)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_ppll2_sscg_END (27)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_ppll3_sscg_START (28)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_ppll3_sscg_END (28)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_mpll0_sscg_START (29)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_mpll0_sscg_END (29)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_mpll1_sscg_START (30)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_mpll1_sscg_END (30)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_cpu_little_tp_START (31)
#define SOC_CRGPERIPH_PERDIS4_gt_clk_cpu_little_tp_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_clk_usb3otg_ref : 1;
        unsigned int gt_aclk_usb3otg : 1;
        unsigned int gt_clk_isp_snclk3 : 1;
        unsigned int gt_clk_socp_bbe2 : 1;
        unsigned int gt_clk_spi4 : 1;
        unsigned int gt_clk_ppll4_sscg : 1;
        unsigned int gt_clk_media_tcxo : 1;
        unsigned int gt_clk_mpll3_sscg : 1;
        unsigned int gt_clk_perf_stat : 1;
        unsigned int gt_pclk_perf_stat : 1;
        unsigned int gt_aclk_perf_stat : 1;
        unsigned int gt_clk_socp_bbe1 : 1;
        unsigned int gt_clk_x2j_func_mbist : 1;
        unsigned int gt_pclk_mmc0_ioc : 1;
        unsigned int gt_clk_socp_bbe0 : 1;
        unsigned int gt_clk_socp_hifi : 1;
        unsigned int gt_clk_mpll2_sscg : 1;
        unsigned int gt_clk_sd : 1;
        unsigned int sc_abb_pll_gps_gt_en1 : 1;
        unsigned int gt_clk_sdio : 1;
        unsigned int sc_abb_pll_audio_gt_en1 : 1;
        unsigned int gt_clk_a57_tsensor : 1;
        unsigned int gt_clk_a53_tsensor : 1;
        unsigned int gt_clk_apll0_sscg : 1;
        unsigned int gt_clk_apll1_sscg : 1;
        unsigned int gt_clk_apll2_sscg : 1;
        unsigned int gt_clk_ppll1_sscg : 1;
        unsigned int gt_clk_ppll2_sscg : 1;
        unsigned int gt_clk_ppll3_sscg : 1;
        unsigned int gt_clk_mpll0_sscg : 1;
        unsigned int gt_clk_mpll1_sscg : 1;
        unsigned int gt_clk_cpu_little_tp : 1;
    } reg;
} SOC_CRGPERIPH_PERCLKEN4_UNION;
#endif
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_usb3otg_ref_START (0)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_usb3otg_ref_END (0)
#define SOC_CRGPERIPH_PERCLKEN4_gt_aclk_usb3otg_START (1)
#define SOC_CRGPERIPH_PERCLKEN4_gt_aclk_usb3otg_END (1)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_isp_snclk3_START (2)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_isp_snclk3_END (2)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_socp_bbe2_START (3)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_socp_bbe2_END (3)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_spi4_START (4)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_spi4_END (4)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_ppll4_sscg_START (5)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_ppll4_sscg_END (5)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_media_tcxo_START (6)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_media_tcxo_END (6)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_mpll3_sscg_START (7)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_mpll3_sscg_END (7)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_perf_stat_START (8)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_perf_stat_END (8)
#define SOC_CRGPERIPH_PERCLKEN4_gt_pclk_perf_stat_START (9)
#define SOC_CRGPERIPH_PERCLKEN4_gt_pclk_perf_stat_END (9)
#define SOC_CRGPERIPH_PERCLKEN4_gt_aclk_perf_stat_START (10)
#define SOC_CRGPERIPH_PERCLKEN4_gt_aclk_perf_stat_END (10)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_socp_bbe1_START (11)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_socp_bbe1_END (11)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_x2j_func_mbist_START (12)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_x2j_func_mbist_END (12)
#define SOC_CRGPERIPH_PERCLKEN4_gt_pclk_mmc0_ioc_START (13)
#define SOC_CRGPERIPH_PERCLKEN4_gt_pclk_mmc0_ioc_END (13)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_socp_bbe0_START (14)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_socp_bbe0_END (14)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_socp_hifi_START (15)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_socp_hifi_END (15)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_mpll2_sscg_START (16)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_mpll2_sscg_END (16)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_sd_START (17)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_sd_END (17)
#define SOC_CRGPERIPH_PERCLKEN4_sc_abb_pll_gps_gt_en1_START (18)
#define SOC_CRGPERIPH_PERCLKEN4_sc_abb_pll_gps_gt_en1_END (18)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_sdio_START (19)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_sdio_END (19)
#define SOC_CRGPERIPH_PERCLKEN4_sc_abb_pll_audio_gt_en1_START (20)
#define SOC_CRGPERIPH_PERCLKEN4_sc_abb_pll_audio_gt_en1_END (20)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_a57_tsensor_START (21)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_a57_tsensor_END (21)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_a53_tsensor_START (22)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_a53_tsensor_END (22)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_apll0_sscg_START (23)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_apll0_sscg_END (23)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_apll1_sscg_START (24)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_apll1_sscg_END (24)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_apll2_sscg_START (25)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_apll2_sscg_END (25)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_ppll1_sscg_START (26)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_ppll1_sscg_END (26)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_ppll2_sscg_START (27)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_ppll2_sscg_END (27)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_ppll3_sscg_START (28)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_ppll3_sscg_END (28)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_mpll0_sscg_START (29)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_mpll0_sscg_END (29)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_mpll1_sscg_START (30)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_mpll1_sscg_END (30)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_cpu_little_tp_START (31)
#define SOC_CRGPERIPH_PERCLKEN4_gt_clk_cpu_little_tp_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int st_clk_usb3otg_ref : 1;
        unsigned int st_aclk_usb3otg : 1;
        unsigned int st_clk_isp_snclk3 : 1;
        unsigned int reserved_0 : 1;
        unsigned int st_clk_spi4 : 1;
        unsigned int st_clk_ppll4_sscg : 1;
        unsigned int st_clk_media_tcxo : 1;
        unsigned int st_clk_mpll3_sscg : 1;
        unsigned int st_clk_perf_stat : 1;
        unsigned int st_pclk_perf_stat : 1;
        unsigned int st_aclk_perf_stat : 1;
        unsigned int reserved_1 : 1;
        unsigned int st_clk_x2j_func_mbist : 1;
        unsigned int st_pclk_mmc0_ioc : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int st_clk_mpll2_sscg : 1;
        unsigned int st_clk_sd : 1;
        unsigned int reserved_4 : 1;
        unsigned int st_clk_sdio : 1;
        unsigned int reserved_5 : 1;
        unsigned int st_clk_a57_tsensor : 1;
        unsigned int st_clk_a53_tsensor : 1;
        unsigned int st_clk_apll0_sscg : 1;
        unsigned int st_clk_apll1_sscg : 1;
        unsigned int st_clk_apll2_sscg : 1;
        unsigned int st_clk_ppll1_sscg : 1;
        unsigned int st_clk_ppll2_sscg : 1;
        unsigned int st_clk_ppll3_sscg : 1;
        unsigned int st_clk_mpll0_sscg : 1;
        unsigned int st_clk_mpll1_sscg : 1;
        unsigned int st_clk_cpu_little_tp : 1;
    } reg;
} SOC_CRGPERIPH_PERSTAT4_UNION;
#endif
#define SOC_CRGPERIPH_PERSTAT4_st_clk_usb3otg_ref_START (0)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_usb3otg_ref_END (0)
#define SOC_CRGPERIPH_PERSTAT4_st_aclk_usb3otg_START (1)
#define SOC_CRGPERIPH_PERSTAT4_st_aclk_usb3otg_END (1)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_isp_snclk3_START (2)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_isp_snclk3_END (2)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_spi4_START (4)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_spi4_END (4)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_ppll4_sscg_START (5)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_ppll4_sscg_END (5)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_media_tcxo_START (6)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_media_tcxo_END (6)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_mpll3_sscg_START (7)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_mpll3_sscg_END (7)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_perf_stat_START (8)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_perf_stat_END (8)
#define SOC_CRGPERIPH_PERSTAT4_st_pclk_perf_stat_START (9)
#define SOC_CRGPERIPH_PERSTAT4_st_pclk_perf_stat_END (9)
#define SOC_CRGPERIPH_PERSTAT4_st_aclk_perf_stat_START (10)
#define SOC_CRGPERIPH_PERSTAT4_st_aclk_perf_stat_END (10)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_x2j_func_mbist_START (12)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_x2j_func_mbist_END (12)
#define SOC_CRGPERIPH_PERSTAT4_st_pclk_mmc0_ioc_START (13)
#define SOC_CRGPERIPH_PERSTAT4_st_pclk_mmc0_ioc_END (13)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_mpll2_sscg_START (16)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_mpll2_sscg_END (16)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_sd_START (17)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_sd_END (17)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_sdio_START (19)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_sdio_END (19)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_a57_tsensor_START (21)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_a57_tsensor_END (21)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_a53_tsensor_START (22)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_a53_tsensor_END (22)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_apll0_sscg_START (23)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_apll0_sscg_END (23)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_apll1_sscg_START (24)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_apll1_sscg_END (24)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_apll2_sscg_START (25)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_apll2_sscg_END (25)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_ppll1_sscg_START (26)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_ppll1_sscg_END (26)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_ppll2_sscg_START (27)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_ppll2_sscg_END (27)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_ppll3_sscg_START (28)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_ppll3_sscg_END (28)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_mpll0_sscg_START (29)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_mpll0_sscg_END (29)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_mpll1_sscg_START (30)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_mpll1_sscg_END (30)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_cpu_little_tp_START (31)
#define SOC_CRGPERIPH_PERSTAT4_st_clk_cpu_little_tp_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_clk_jittermon_wmux_cpub : 1;
        unsigned int gt_clk_modem_tcxo : 1;
        unsigned int gt_clk_modem_subsys : 1;
        unsigned int gt_clk_noc_timeout_extref : 1;
        unsigned int gt_clk_mmc1_pcie_axi : 1;
        unsigned int gt_clk_g3d_tsensor : 1;
        unsigned int gt_clk_modem_tsensor : 1;
        unsigned int gt_clk_gpu_tp : 1;
        unsigned int gt_clk_lpmcu : 1;
        unsigned int gt_clk_cpu_middle_tp : 1;
        unsigned int gt_clk_cci2sysbus_asyn : 1;
        unsigned int gt_clk_aohpm : 1;
        unsigned int gt_clk_perihpm : 1;
        unsigned int gt_clk_fcm_monitor_sensor : 1;
        unsigned int gt_aclk_cci : 1;
        unsigned int gt_clk_gpuhpm : 1;
        unsigned int gt_clk_isp_snclk0 : 1;
        unsigned int gt_clk_isp_snclk1 : 1;
        unsigned int gt_clk_isp_snclk2 : 1;
        unsigned int gt_clk_mmc0_subsys : 1;
        unsigned int gt_clk_mmc1_subsys : 1;
        unsigned int gt_clk_cpu_big_tp : 1;
        unsigned int gt_clk_abb_backup : 1;
        unsigned int gt_clk_modem_ccpu_tp : 1;
        unsigned int gt_clk_mmc_dpctrl : 1;
        unsigned int gt_pclk_atgc : 1;
        unsigned int gt_pclk_atg_media : 1;
        unsigned int gt_pclk_atgs_mdm : 1;
        unsigned int gt_pclk_dsi0 : 1;
        unsigned int gt_pclk_dsi1 : 1;
        unsigned int gt_clk_lpmcu_tp : 1;
        unsigned int gt_clk_sysbus_tp : 1;
    } reg;
} SOC_CRGPERIPH_PEREN5_UNION;
#endif
#define SOC_CRGPERIPH_PEREN5_gt_clk_jittermon_wmux_cpub_START (0)
#define SOC_CRGPERIPH_PEREN5_gt_clk_jittermon_wmux_cpub_END (0)
#define SOC_CRGPERIPH_PEREN5_gt_clk_modem_tcxo_START (1)
#define SOC_CRGPERIPH_PEREN5_gt_clk_modem_tcxo_END (1)
#define SOC_CRGPERIPH_PEREN5_gt_clk_modem_subsys_START (2)
#define SOC_CRGPERIPH_PEREN5_gt_clk_modem_subsys_END (2)
#define SOC_CRGPERIPH_PEREN5_gt_clk_noc_timeout_extref_START (3)
#define SOC_CRGPERIPH_PEREN5_gt_clk_noc_timeout_extref_END (3)
#define SOC_CRGPERIPH_PEREN5_gt_clk_mmc1_pcie_axi_START (4)
#define SOC_CRGPERIPH_PEREN5_gt_clk_mmc1_pcie_axi_END (4)
#define SOC_CRGPERIPH_PEREN5_gt_clk_g3d_tsensor_START (5)
#define SOC_CRGPERIPH_PEREN5_gt_clk_g3d_tsensor_END (5)
#define SOC_CRGPERIPH_PEREN5_gt_clk_modem_tsensor_START (6)
#define SOC_CRGPERIPH_PEREN5_gt_clk_modem_tsensor_END (6)
#define SOC_CRGPERIPH_PEREN5_gt_clk_gpu_tp_START (7)
#define SOC_CRGPERIPH_PEREN5_gt_clk_gpu_tp_END (7)
#define SOC_CRGPERIPH_PEREN5_gt_clk_lpmcu_START (8)
#define SOC_CRGPERIPH_PEREN5_gt_clk_lpmcu_END (8)
#define SOC_CRGPERIPH_PEREN5_gt_clk_cpu_middle_tp_START (9)
#define SOC_CRGPERIPH_PEREN5_gt_clk_cpu_middle_tp_END (9)
#define SOC_CRGPERIPH_PEREN5_gt_clk_cci2sysbus_asyn_START (10)
#define SOC_CRGPERIPH_PEREN5_gt_clk_cci2sysbus_asyn_END (10)
#define SOC_CRGPERIPH_PEREN5_gt_clk_aohpm_START (11)
#define SOC_CRGPERIPH_PEREN5_gt_clk_aohpm_END (11)
#define SOC_CRGPERIPH_PEREN5_gt_clk_perihpm_START (12)
#define SOC_CRGPERIPH_PEREN5_gt_clk_perihpm_END (12)
#define SOC_CRGPERIPH_PEREN5_gt_clk_fcm_monitor_sensor_START (13)
#define SOC_CRGPERIPH_PEREN5_gt_clk_fcm_monitor_sensor_END (13)
#define SOC_CRGPERIPH_PEREN5_gt_aclk_cci_START (14)
#define SOC_CRGPERIPH_PEREN5_gt_aclk_cci_END (14)
#define SOC_CRGPERIPH_PEREN5_gt_clk_gpuhpm_START (15)
#define SOC_CRGPERIPH_PEREN5_gt_clk_gpuhpm_END (15)
#define SOC_CRGPERIPH_PEREN5_gt_clk_isp_snclk0_START (16)
#define SOC_CRGPERIPH_PEREN5_gt_clk_isp_snclk0_END (16)
#define SOC_CRGPERIPH_PEREN5_gt_clk_isp_snclk1_START (17)
#define SOC_CRGPERIPH_PEREN5_gt_clk_isp_snclk1_END (17)
#define SOC_CRGPERIPH_PEREN5_gt_clk_isp_snclk2_START (18)
#define SOC_CRGPERIPH_PEREN5_gt_clk_isp_snclk2_END (18)
#define SOC_CRGPERIPH_PEREN5_gt_clk_mmc0_subsys_START (19)
#define SOC_CRGPERIPH_PEREN5_gt_clk_mmc0_subsys_END (19)
#define SOC_CRGPERIPH_PEREN5_gt_clk_mmc1_subsys_START (20)
#define SOC_CRGPERIPH_PEREN5_gt_clk_mmc1_subsys_END (20)
#define SOC_CRGPERIPH_PEREN5_gt_clk_cpu_big_tp_START (21)
#define SOC_CRGPERIPH_PEREN5_gt_clk_cpu_big_tp_END (21)
#define SOC_CRGPERIPH_PEREN5_gt_clk_abb_backup_START (22)
#define SOC_CRGPERIPH_PEREN5_gt_clk_abb_backup_END (22)
#define SOC_CRGPERIPH_PEREN5_gt_clk_modem_ccpu_tp_START (23)
#define SOC_CRGPERIPH_PEREN5_gt_clk_modem_ccpu_tp_END (23)
#define SOC_CRGPERIPH_PEREN5_gt_clk_mmc_dpctrl_START (24)
#define SOC_CRGPERIPH_PEREN5_gt_clk_mmc_dpctrl_END (24)
#define SOC_CRGPERIPH_PEREN5_gt_pclk_atgc_START (25)
#define SOC_CRGPERIPH_PEREN5_gt_pclk_atgc_END (25)
#define SOC_CRGPERIPH_PEREN5_gt_pclk_atg_media_START (26)
#define SOC_CRGPERIPH_PEREN5_gt_pclk_atg_media_END (26)
#define SOC_CRGPERIPH_PEREN5_gt_pclk_atgs_mdm_START (27)
#define SOC_CRGPERIPH_PEREN5_gt_pclk_atgs_mdm_END (27)
#define SOC_CRGPERIPH_PEREN5_gt_pclk_dsi0_START (28)
#define SOC_CRGPERIPH_PEREN5_gt_pclk_dsi0_END (28)
#define SOC_CRGPERIPH_PEREN5_gt_pclk_dsi1_START (29)
#define SOC_CRGPERIPH_PEREN5_gt_pclk_dsi1_END (29)
#define SOC_CRGPERIPH_PEREN5_gt_clk_lpmcu_tp_START (30)
#define SOC_CRGPERIPH_PEREN5_gt_clk_lpmcu_tp_END (30)
#define SOC_CRGPERIPH_PEREN5_gt_clk_sysbus_tp_START (31)
#define SOC_CRGPERIPH_PEREN5_gt_clk_sysbus_tp_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_clk_jittermon_wmux_cpub : 1;
        unsigned int gt_clk_modem_tcxo : 1;
        unsigned int gt_clk_modem_subsys : 1;
        unsigned int gt_clk_noc_timeout_extref : 1;
        unsigned int gt_clk_mmc1_pcie_axi : 1;
        unsigned int gt_clk_g3d_tsensor : 1;
        unsigned int gt_clk_modem_tsensor : 1;
        unsigned int gt_clk_gpu_tp : 1;
        unsigned int gt_clk_lpmcu : 1;
        unsigned int gt_clk_cpu_middle_tp : 1;
        unsigned int gt_clk_cci2sysbus_asyn : 1;
        unsigned int gt_clk_aohpm : 1;
        unsigned int gt_clk_perihpm : 1;
        unsigned int gt_clk_fcm_monitor_sensor : 1;
        unsigned int gt_aclk_cci : 1;
        unsigned int gt_clk_gpuhpm : 1;
        unsigned int gt_clk_isp_snclk0 : 1;
        unsigned int gt_clk_isp_snclk1 : 1;
        unsigned int gt_clk_isp_snclk2 : 1;
        unsigned int gt_clk_mmc0_subsys : 1;
        unsigned int gt_clk_mmc1_subsys : 1;
        unsigned int gt_clk_cpu_big_tp : 1;
        unsigned int gt_clk_abb_backup : 1;
        unsigned int gt_clk_modem_ccpu_tp : 1;
        unsigned int gt_clk_mmc_dpctrl : 1;
        unsigned int gt_pclk_atgc : 1;
        unsigned int gt_pclk_atg_media : 1;
        unsigned int gt_pclk_atgs_mdm : 1;
        unsigned int gt_pclk_dsi0 : 1;
        unsigned int gt_pclk_dsi1 : 1;
        unsigned int gt_clk_lpmcu_tp : 1;
        unsigned int gt_clk_sysbus_tp : 1;
    } reg;
} SOC_CRGPERIPH_PERDIS5_UNION;
#endif
#define SOC_CRGPERIPH_PERDIS5_gt_clk_jittermon_wmux_cpub_START (0)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_jittermon_wmux_cpub_END (0)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_modem_tcxo_START (1)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_modem_tcxo_END (1)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_modem_subsys_START (2)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_modem_subsys_END (2)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_noc_timeout_extref_START (3)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_noc_timeout_extref_END (3)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_mmc1_pcie_axi_START (4)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_mmc1_pcie_axi_END (4)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_g3d_tsensor_START (5)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_g3d_tsensor_END (5)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_modem_tsensor_START (6)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_modem_tsensor_END (6)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_gpu_tp_START (7)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_gpu_tp_END (7)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_lpmcu_START (8)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_lpmcu_END (8)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_cpu_middle_tp_START (9)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_cpu_middle_tp_END (9)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_cci2sysbus_asyn_START (10)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_cci2sysbus_asyn_END (10)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_aohpm_START (11)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_aohpm_END (11)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_perihpm_START (12)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_perihpm_END (12)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_fcm_monitor_sensor_START (13)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_fcm_monitor_sensor_END (13)
#define SOC_CRGPERIPH_PERDIS5_gt_aclk_cci_START (14)
#define SOC_CRGPERIPH_PERDIS5_gt_aclk_cci_END (14)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_gpuhpm_START (15)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_gpuhpm_END (15)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_isp_snclk0_START (16)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_isp_snclk0_END (16)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_isp_snclk1_START (17)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_isp_snclk1_END (17)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_isp_snclk2_START (18)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_isp_snclk2_END (18)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_mmc0_subsys_START (19)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_mmc0_subsys_END (19)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_mmc1_subsys_START (20)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_mmc1_subsys_END (20)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_cpu_big_tp_START (21)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_cpu_big_tp_END (21)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_abb_backup_START (22)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_abb_backup_END (22)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_modem_ccpu_tp_START (23)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_modem_ccpu_tp_END (23)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_mmc_dpctrl_START (24)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_mmc_dpctrl_END (24)
#define SOC_CRGPERIPH_PERDIS5_gt_pclk_atgc_START (25)
#define SOC_CRGPERIPH_PERDIS5_gt_pclk_atgc_END (25)
#define SOC_CRGPERIPH_PERDIS5_gt_pclk_atg_media_START (26)
#define SOC_CRGPERIPH_PERDIS5_gt_pclk_atg_media_END (26)
#define SOC_CRGPERIPH_PERDIS5_gt_pclk_atgs_mdm_START (27)
#define SOC_CRGPERIPH_PERDIS5_gt_pclk_atgs_mdm_END (27)
#define SOC_CRGPERIPH_PERDIS5_gt_pclk_dsi0_START (28)
#define SOC_CRGPERIPH_PERDIS5_gt_pclk_dsi0_END (28)
#define SOC_CRGPERIPH_PERDIS5_gt_pclk_dsi1_START (29)
#define SOC_CRGPERIPH_PERDIS5_gt_pclk_dsi1_END (29)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_lpmcu_tp_START (30)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_lpmcu_tp_END (30)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_sysbus_tp_START (31)
#define SOC_CRGPERIPH_PERDIS5_gt_clk_sysbus_tp_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_clk_jittermon_wmux_cpub : 1;
        unsigned int gt_clk_modem_tcxo : 1;
        unsigned int gt_clk_modem_subsys : 1;
        unsigned int gt_clk_noc_timeout_extref : 1;
        unsigned int gt_clk_mmc1_pcie_axi : 1;
        unsigned int gt_clk_g3d_tsensor : 1;
        unsigned int gt_clk_modem_tsensor : 1;
        unsigned int gt_clk_gpu_tp : 1;
        unsigned int gt_clk_lpmcu : 1;
        unsigned int gt_clk_cpu_middle_tp : 1;
        unsigned int gt_clk_cci2sysbus_asyn : 1;
        unsigned int gt_clk_aohpm : 1;
        unsigned int gt_clk_perihpm : 1;
        unsigned int gt_clk_fcm_monitor_sensor : 1;
        unsigned int gt_aclk_cci : 1;
        unsigned int gt_clk_gpuhpm : 1;
        unsigned int gt_clk_isp_snclk0 : 1;
        unsigned int gt_clk_isp_snclk1 : 1;
        unsigned int gt_clk_isp_snclk2 : 1;
        unsigned int gt_clk_mmc0_subsys : 1;
        unsigned int gt_clk_mmc1_subsys : 1;
        unsigned int gt_clk_cpu_big_tp : 1;
        unsigned int gt_clk_abb_backup : 1;
        unsigned int gt_clk_modem_ccpu_tp : 1;
        unsigned int gt_clk_mmc_dpctrl : 1;
        unsigned int gt_pclk_atgc : 1;
        unsigned int gt_pclk_atg_media : 1;
        unsigned int gt_pclk_atgs_mdm : 1;
        unsigned int gt_pclk_dsi0 : 1;
        unsigned int gt_pclk_dsi1 : 1;
        unsigned int gt_clk_lpmcu_tp : 1;
        unsigned int gt_clk_sysbus_tp : 1;
    } reg;
} SOC_CRGPERIPH_PERCLKEN5_UNION;
#endif
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_jittermon_wmux_cpub_START (0)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_jittermon_wmux_cpub_END (0)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_modem_tcxo_START (1)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_modem_tcxo_END (1)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_modem_subsys_START (2)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_modem_subsys_END (2)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_noc_timeout_extref_START (3)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_noc_timeout_extref_END (3)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_mmc1_pcie_axi_START (4)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_mmc1_pcie_axi_END (4)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_g3d_tsensor_START (5)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_g3d_tsensor_END (5)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_modem_tsensor_START (6)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_modem_tsensor_END (6)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_gpu_tp_START (7)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_gpu_tp_END (7)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_lpmcu_START (8)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_lpmcu_END (8)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_cpu_middle_tp_START (9)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_cpu_middle_tp_END (9)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_cci2sysbus_asyn_START (10)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_cci2sysbus_asyn_END (10)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_aohpm_START (11)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_aohpm_END (11)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_perihpm_START (12)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_perihpm_END (12)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_fcm_monitor_sensor_START (13)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_fcm_monitor_sensor_END (13)
#define SOC_CRGPERIPH_PERCLKEN5_gt_aclk_cci_START (14)
#define SOC_CRGPERIPH_PERCLKEN5_gt_aclk_cci_END (14)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_gpuhpm_START (15)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_gpuhpm_END (15)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_isp_snclk0_START (16)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_isp_snclk0_END (16)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_isp_snclk1_START (17)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_isp_snclk1_END (17)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_isp_snclk2_START (18)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_isp_snclk2_END (18)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_mmc0_subsys_START (19)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_mmc0_subsys_END (19)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_mmc1_subsys_START (20)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_mmc1_subsys_END (20)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_cpu_big_tp_START (21)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_cpu_big_tp_END (21)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_abb_backup_START (22)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_abb_backup_END (22)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_modem_ccpu_tp_START (23)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_modem_ccpu_tp_END (23)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_mmc_dpctrl_START (24)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_mmc_dpctrl_END (24)
#define SOC_CRGPERIPH_PERCLKEN5_gt_pclk_atgc_START (25)
#define SOC_CRGPERIPH_PERCLKEN5_gt_pclk_atgc_END (25)
#define SOC_CRGPERIPH_PERCLKEN5_gt_pclk_atg_media_START (26)
#define SOC_CRGPERIPH_PERCLKEN5_gt_pclk_atg_media_END (26)
#define SOC_CRGPERIPH_PERCLKEN5_gt_pclk_atgs_mdm_START (27)
#define SOC_CRGPERIPH_PERCLKEN5_gt_pclk_atgs_mdm_END (27)
#define SOC_CRGPERIPH_PERCLKEN5_gt_pclk_dsi0_START (28)
#define SOC_CRGPERIPH_PERCLKEN5_gt_pclk_dsi0_END (28)
#define SOC_CRGPERIPH_PERCLKEN5_gt_pclk_dsi1_START (29)
#define SOC_CRGPERIPH_PERCLKEN5_gt_pclk_dsi1_END (29)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_lpmcu_tp_START (30)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_lpmcu_tp_END (30)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_sysbus_tp_START (31)
#define SOC_CRGPERIPH_PERCLKEN5_gt_clk_sysbus_tp_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int st_clk_jittermon_wmux_cpub : 1;
        unsigned int st_clk_modem_tcxo : 1;
        unsigned int st_clk_modem_subsys : 1;
        unsigned int st_clk_noc_timeout_extref : 1;
        unsigned int st_clk_mmc1_pcie_axi : 1;
        unsigned int st_clk_g3d_tsensor : 1;
        unsigned int st_clk_modem_tsensor : 1;
        unsigned int st_clk_g3d_tp : 1;
        unsigned int st_clk_lpmcu : 1;
        unsigned int st_clk_cpu_middle_tp : 1;
        unsigned int st_clk_cci2sysbus_asyn : 1;
        unsigned int st_clk_aohpm : 1;
        unsigned int st_clk_perihpm : 1;
        unsigned int st_clk_fcm_monitor_sensor : 1;
        unsigned int st_aclk_cci : 1;
        unsigned int st_clk_gpuhpm : 1;
        unsigned int st_clk_isp_snclk0 : 1;
        unsigned int st_clk_isp_snclk1 : 1;
        unsigned int st_clk_isp_snclk2 : 1;
        unsigned int st_clk_mmc0_subsys : 1;
        unsigned int st_clk_mmc1_subsys : 1;
        unsigned int st_clk_cpu_big_tp : 1;
        unsigned int st_clk_abb_backup : 1;
        unsigned int reserved : 1;
        unsigned int st_clk_mmc_dpctrl : 1;
        unsigned int st_pclk_atgc : 1;
        unsigned int st_pclk_atg_media : 1;
        unsigned int st_pclk_atgs_mdm : 1;
        unsigned int st_pclk_dsi0 : 1;
        unsigned int st_pclk_dsi1 : 1;
        unsigned int st_clk_lpmcu_tp : 1;
        unsigned int st_clk_sysbus_tp : 1;
    } reg;
} SOC_CRGPERIPH_PERSTAT5_UNION;
#endif
#define SOC_CRGPERIPH_PERSTAT5_st_clk_jittermon_wmux_cpub_START (0)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_jittermon_wmux_cpub_END (0)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_modem_tcxo_START (1)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_modem_tcxo_END (1)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_modem_subsys_START (2)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_modem_subsys_END (2)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_noc_timeout_extref_START (3)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_noc_timeout_extref_END (3)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_mmc1_pcie_axi_START (4)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_mmc1_pcie_axi_END (4)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_g3d_tsensor_START (5)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_g3d_tsensor_END (5)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_modem_tsensor_START (6)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_modem_tsensor_END (6)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_g3d_tp_START (7)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_g3d_tp_END (7)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_lpmcu_START (8)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_lpmcu_END (8)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_cpu_middle_tp_START (9)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_cpu_middle_tp_END (9)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_cci2sysbus_asyn_START (10)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_cci2sysbus_asyn_END (10)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_aohpm_START (11)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_aohpm_END (11)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_perihpm_START (12)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_perihpm_END (12)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_fcm_monitor_sensor_START (13)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_fcm_monitor_sensor_END (13)
#define SOC_CRGPERIPH_PERSTAT5_st_aclk_cci_START (14)
#define SOC_CRGPERIPH_PERSTAT5_st_aclk_cci_END (14)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_gpuhpm_START (15)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_gpuhpm_END (15)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_isp_snclk0_START (16)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_isp_snclk0_END (16)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_isp_snclk1_START (17)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_isp_snclk1_END (17)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_isp_snclk2_START (18)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_isp_snclk2_END (18)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_mmc0_subsys_START (19)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_mmc0_subsys_END (19)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_mmc1_subsys_START (20)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_mmc1_subsys_END (20)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_cpu_big_tp_START (21)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_cpu_big_tp_END (21)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_abb_backup_START (22)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_abb_backup_END (22)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_mmc_dpctrl_START (24)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_mmc_dpctrl_END (24)
#define SOC_CRGPERIPH_PERSTAT5_st_pclk_atgc_START (25)
#define SOC_CRGPERIPH_PERSTAT5_st_pclk_atgc_END (25)
#define SOC_CRGPERIPH_PERSTAT5_st_pclk_atg_media_START (26)
#define SOC_CRGPERIPH_PERSTAT5_st_pclk_atg_media_END (26)
#define SOC_CRGPERIPH_PERSTAT5_st_pclk_atgs_mdm_START (27)
#define SOC_CRGPERIPH_PERSTAT5_st_pclk_atgs_mdm_END (27)
#define SOC_CRGPERIPH_PERSTAT5_st_pclk_dsi0_START (28)
#define SOC_CRGPERIPH_PERSTAT5_st_pclk_dsi0_END (28)
#define SOC_CRGPERIPH_PERSTAT5_st_pclk_dsi1_START (29)
#define SOC_CRGPERIPH_PERSTAT5_st_pclk_dsi1_END (29)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_lpmcu_tp_START (30)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_lpmcu_tp_END (30)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_sysbus_tp_START (31)
#define SOC_CRGPERIPH_PERSTAT5_st_clk_sysbus_tp_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ip_arst_ddrc : 1;
        unsigned int ip_rst_noc_sysbus2ddrc : 1;
        unsigned int ip_rst_exmbist : 1;
        unsigned int ip_rst_adb_mst_mdm2sys : 1;
        unsigned int ip_prst_mmc1_sysctrl : 1;
        unsigned int ip_rst_peri_dmc : 1;
        unsigned int ip_rst_peri_dmc_crg : 1;
        unsigned int ip_rst_sysbus : 1;
        unsigned int ip_rst_cfgbus : 1;
        unsigned int ip_rst_timerperi : 1;
        unsigned int ip_rst_dpctrl : 1;
        unsigned int ip_prst_mmc1pericfg : 1;
        unsigned int ip_prst_mmc0pericfg : 1;
        unsigned int ip_prst_mmc0_sysctrl : 1;
        unsigned int ip_rst_i2c7 : 1;
        unsigned int ip_rst_spi4 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int ip_rst_perf_stat : 1;
        unsigned int ip_rst_i2c6 : 1;
        unsigned int ip_rst_lpmcu2cfgbus : 1;
        unsigned int ip_rst_noc_dmabus : 1;
        unsigned int reserved_2 : 1;
        unsigned int ip_rst_noc_mdm_cfg : 1;
        unsigned int ip_rst_noc_mdm_mst : 1;
        unsigned int ip_rst_svfd_cpm_l3 : 1;
        unsigned int ip_rst_svfd_cpm_middle : 1;
        unsigned int ip_rst_svfd_ffs_l3 : 1;
        unsigned int ip_rst_svfd_ffs_middle : 1;
        unsigned int ip_prst_noc_mmc2pcie_axi : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
    } reg;
} SOC_CRGPERIPH_PERRSTEN0_UNION;
#endif
#define SOC_CRGPERIPH_PERRSTEN0_ip_arst_ddrc_START (0)
#define SOC_CRGPERIPH_PERRSTEN0_ip_arst_ddrc_END (0)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_noc_sysbus2ddrc_START (1)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_noc_sysbus2ddrc_END (1)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_exmbist_START (2)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_exmbist_END (2)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_adb_mst_mdm2sys_START (3)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_adb_mst_mdm2sys_END (3)
#define SOC_CRGPERIPH_PERRSTEN0_ip_prst_mmc1_sysctrl_START (4)
#define SOC_CRGPERIPH_PERRSTEN0_ip_prst_mmc1_sysctrl_END (4)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_peri_dmc_START (5)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_peri_dmc_END (5)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_peri_dmc_crg_START (6)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_peri_dmc_crg_END (6)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_sysbus_START (7)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_sysbus_END (7)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_cfgbus_START (8)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_cfgbus_END (8)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_timerperi_START (9)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_timerperi_END (9)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_dpctrl_START (10)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_dpctrl_END (10)
#define SOC_CRGPERIPH_PERRSTEN0_ip_prst_mmc1pericfg_START (11)
#define SOC_CRGPERIPH_PERRSTEN0_ip_prst_mmc1pericfg_END (11)
#define SOC_CRGPERIPH_PERRSTEN0_ip_prst_mmc0pericfg_START (12)
#define SOC_CRGPERIPH_PERRSTEN0_ip_prst_mmc0pericfg_END (12)
#define SOC_CRGPERIPH_PERRSTEN0_ip_prst_mmc0_sysctrl_START (13)
#define SOC_CRGPERIPH_PERRSTEN0_ip_prst_mmc0_sysctrl_END (13)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_i2c7_START (14)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_i2c7_END (14)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_spi4_START (15)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_spi4_END (15)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_perf_stat_START (18)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_perf_stat_END (18)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_i2c6_START (19)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_i2c6_END (19)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_lpmcu2cfgbus_START (20)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_lpmcu2cfgbus_END (20)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_noc_dmabus_START (21)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_noc_dmabus_END (21)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_noc_mdm_cfg_START (23)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_noc_mdm_cfg_END (23)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_noc_mdm_mst_START (24)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_noc_mdm_mst_END (24)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_svfd_cpm_l3_START (25)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_svfd_cpm_l3_END (25)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_svfd_cpm_middle_START (26)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_svfd_cpm_middle_END (26)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_svfd_ffs_l3_START (27)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_svfd_ffs_l3_END (27)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_svfd_ffs_middle_START (28)
#define SOC_CRGPERIPH_PERRSTEN0_ip_rst_svfd_ffs_middle_END (28)
#define SOC_CRGPERIPH_PERRSTEN0_ip_prst_noc_mmc2pcie_axi_START (29)
#define SOC_CRGPERIPH_PERRSTEN0_ip_prst_noc_mmc2pcie_axi_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ip_arst_ddrc : 1;
        unsigned int ip_rst_noc_sysbus2ddrc : 1;
        unsigned int ip_rst_exmbist : 1;
        unsigned int ip_rst_adb_mst_mdm2sys : 1;
        unsigned int ip_prst_mmc1_sysctrl : 1;
        unsigned int ip_rst_peri_dmc : 1;
        unsigned int ip_rst_peri_dmc_crg : 1;
        unsigned int ip_rst_sysbus : 1;
        unsigned int ip_rst_cfgbus : 1;
        unsigned int ip_rst_timerperi : 1;
        unsigned int ip_rst_dpctrl : 1;
        unsigned int ip_prst_mmc1pericfg : 1;
        unsigned int ip_prst_mmc0pericfg : 1;
        unsigned int ip_prst_mmc0_sysctrl : 1;
        unsigned int ip_rst_i2c7 : 1;
        unsigned int ip_rst_spi4 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int ip_rst_perf_stat : 1;
        unsigned int ip_rst_i2c6 : 1;
        unsigned int ip_rst_lpmcu2cfgbus : 1;
        unsigned int ip_rst_noc_dmabus : 1;
        unsigned int reserved_2 : 1;
        unsigned int ip_rst_noc_mdm_cfg : 1;
        unsigned int ip_rst_noc_mdm_mst : 1;
        unsigned int ip_rst_svfd_cpm_l3 : 1;
        unsigned int ip_rst_svfd_cpm_middle : 1;
        unsigned int ip_rst_svfd_ffs_l3 : 1;
        unsigned int ip_rst_svfd_ffs_middle : 1;
        unsigned int ip_prst_noc_mmc2pcie_axi : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
    } reg;
} SOC_CRGPERIPH_PERRSTDIS0_UNION;
#endif
#define SOC_CRGPERIPH_PERRSTDIS0_ip_arst_ddrc_START (0)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_arst_ddrc_END (0)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_noc_sysbus2ddrc_START (1)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_noc_sysbus2ddrc_END (1)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_exmbist_START (2)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_exmbist_END (2)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_adb_mst_mdm2sys_START (3)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_adb_mst_mdm2sys_END (3)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_prst_mmc1_sysctrl_START (4)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_prst_mmc1_sysctrl_END (4)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_peri_dmc_START (5)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_peri_dmc_END (5)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_peri_dmc_crg_START (6)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_peri_dmc_crg_END (6)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_sysbus_START (7)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_sysbus_END (7)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_cfgbus_START (8)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_cfgbus_END (8)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_timerperi_START (9)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_timerperi_END (9)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_dpctrl_START (10)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_dpctrl_END (10)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_prst_mmc1pericfg_START (11)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_prst_mmc1pericfg_END (11)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_prst_mmc0pericfg_START (12)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_prst_mmc0pericfg_END (12)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_prst_mmc0_sysctrl_START (13)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_prst_mmc0_sysctrl_END (13)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_i2c7_START (14)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_i2c7_END (14)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_spi4_START (15)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_spi4_END (15)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_perf_stat_START (18)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_perf_stat_END (18)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_i2c6_START (19)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_i2c6_END (19)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_lpmcu2cfgbus_START (20)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_lpmcu2cfgbus_END (20)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_noc_dmabus_START (21)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_noc_dmabus_END (21)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_noc_mdm_cfg_START (23)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_noc_mdm_cfg_END (23)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_noc_mdm_mst_START (24)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_noc_mdm_mst_END (24)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_svfd_cpm_l3_START (25)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_svfd_cpm_l3_END (25)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_svfd_cpm_middle_START (26)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_svfd_cpm_middle_END (26)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_svfd_ffs_l3_START (27)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_svfd_ffs_l3_END (27)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_svfd_ffs_middle_START (28)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_rst_svfd_ffs_middle_END (28)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_prst_noc_mmc2pcie_axi_START (29)
#define SOC_CRGPERIPH_PERRSTDIS0_ip_prst_noc_mmc2pcie_axi_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ip_arst_ddrc : 1;
        unsigned int ip_rst_noc_sysbus2ddrc : 1;
        unsigned int ip_rst_exmbist : 1;
        unsigned int ip_rst_adb_mst_mdm2sys : 1;
        unsigned int ip_prst_mmc1_sysctrl : 1;
        unsigned int ip_rst_peri_dmc : 1;
        unsigned int ip_rst_peri_dmc_crg : 1;
        unsigned int ip_rst_sysbus : 1;
        unsigned int ip_rst_cfgbus : 1;
        unsigned int ip_rst_timerperi : 1;
        unsigned int ip_rst_dpctrl : 1;
        unsigned int ip_prst_mmc1pericfg : 1;
        unsigned int ip_prst_mmc0pericfg : 1;
        unsigned int ip_prst_mmc0_sysctrl : 1;
        unsigned int ip_rst_i2c7 : 1;
        unsigned int ip_rst_spi4 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int ip_rst_perf_stat : 1;
        unsigned int ip_rst_i2c6 : 1;
        unsigned int ip_rst_lpmcu2cfgbus : 1;
        unsigned int ip_rst_noc_dmabus : 1;
        unsigned int reserved_2 : 1;
        unsigned int ip_rst_noc_mdm_cfg : 1;
        unsigned int ip_rst_noc_mdm_mst : 1;
        unsigned int ip_rst_svfd_cpm_l3 : 1;
        unsigned int ip_rst_svfd_cpm_middle : 1;
        unsigned int ip_rst_svfd_ffs_l3 : 1;
        unsigned int ip_rst_svfd_ffs_middle : 1;
        unsigned int ip_prst_noc_mmc2pcie_axi : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
    } reg;
} SOC_CRGPERIPH_PERRSTSTAT0_UNION;
#endif
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_arst_ddrc_START (0)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_arst_ddrc_END (0)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_noc_sysbus2ddrc_START (1)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_noc_sysbus2ddrc_END (1)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_exmbist_START (2)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_exmbist_END (2)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_adb_mst_mdm2sys_START (3)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_adb_mst_mdm2sys_END (3)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_prst_mmc1_sysctrl_START (4)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_prst_mmc1_sysctrl_END (4)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_peri_dmc_START (5)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_peri_dmc_END (5)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_peri_dmc_crg_START (6)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_peri_dmc_crg_END (6)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_sysbus_START (7)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_sysbus_END (7)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_cfgbus_START (8)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_cfgbus_END (8)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_timerperi_START (9)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_timerperi_END (9)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_dpctrl_START (10)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_dpctrl_END (10)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_prst_mmc1pericfg_START (11)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_prst_mmc1pericfg_END (11)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_prst_mmc0pericfg_START (12)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_prst_mmc0pericfg_END (12)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_prst_mmc0_sysctrl_START (13)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_prst_mmc0_sysctrl_END (13)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_i2c7_START (14)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_i2c7_END (14)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_spi4_START (15)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_spi4_END (15)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_perf_stat_START (18)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_perf_stat_END (18)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_i2c6_START (19)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_i2c6_END (19)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_lpmcu2cfgbus_START (20)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_lpmcu2cfgbus_END (20)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_noc_dmabus_START (21)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_noc_dmabus_END (21)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_noc_mdm_cfg_START (23)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_noc_mdm_cfg_END (23)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_noc_mdm_mst_START (24)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_noc_mdm_mst_END (24)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_svfd_cpm_l3_START (25)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_svfd_cpm_l3_END (25)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_svfd_cpm_middle_START (26)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_svfd_cpm_middle_END (26)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_svfd_ffs_l3_START (27)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_svfd_ffs_l3_END (27)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_svfd_ffs_middle_START (28)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_rst_svfd_ffs_middle_END (28)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_prst_noc_mmc2pcie_axi_START (29)
#define SOC_CRGPERIPH_PERRSTSTAT0_ip_prst_noc_mmc2pcie_axi_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ip_prst_gpio0 : 1;
        unsigned int ip_prst_gpio1 : 1;
        unsigned int ip_prst_gpio2 : 1;
        unsigned int ip_prst_gpio3 : 1;
        unsigned int ip_prst_gpio4 : 1;
        unsigned int ip_prst_gpio5 : 1;
        unsigned int ip_prst_gpio6 : 1;
        unsigned int ip_prst_gpio7 : 1;
        unsigned int ip_prst_gpio8 : 1;
        unsigned int ip_prst_gpio9 : 1;
        unsigned int ip_prst_gpio10 : 1;
        unsigned int ip_prst_gpio11 : 1;
        unsigned int ip_prst_gpio12 : 1;
        unsigned int ip_prst_gpio13 : 1;
        unsigned int ip_prst_gpio14 : 1;
        unsigned int ip_prst_gpio15 : 1;
        unsigned int ip_prst_gpio16 : 1;
        unsigned int ip_prst_gpio17 : 1;
        unsigned int ip_rst_vsensorc_l3 : 1;
        unsigned int ip_rst_vsensorc_middle : 1;
        unsigned int ip_prst_gpio20 : 1;
        unsigned int ip_prst_gpio21 : 1;
        unsigned int ip_prst_timer9 : 1;
        unsigned int ip_prst_timer10 : 1;
        unsigned int ip_prst_timer11 : 1;
        unsigned int ip_prst_timer12 : 1;
        unsigned int ip_rst_socp : 1;
        unsigned int ip_rst_djtag : 1;
        unsigned int ip_rst_vsensorc_big : 1;
        unsigned int ip_rst_vsensorc_little : 1;
        unsigned int ip_rst_vsensorc_gpu : 1;
        unsigned int reserved : 1;
    } reg;
} SOC_CRGPERIPH_PERRSTEN1_UNION;
#endif
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio0_START (0)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio0_END (0)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio1_START (1)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio1_END (1)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio2_START (2)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio2_END (2)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio3_START (3)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio3_END (3)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio4_START (4)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio4_END (4)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio5_START (5)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio5_END (5)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio6_START (6)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio6_END (6)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio7_START (7)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio7_END (7)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio8_START (8)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio8_END (8)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio9_START (9)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio9_END (9)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio10_START (10)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio10_END (10)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio11_START (11)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio11_END (11)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio12_START (12)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio12_END (12)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio13_START (13)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio13_END (13)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio14_START (14)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio14_END (14)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio15_START (15)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio15_END (15)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio16_START (16)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio16_END (16)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio17_START (17)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio17_END (17)
#define SOC_CRGPERIPH_PERRSTEN1_ip_rst_vsensorc_l3_START (18)
#define SOC_CRGPERIPH_PERRSTEN1_ip_rst_vsensorc_l3_END (18)
#define SOC_CRGPERIPH_PERRSTEN1_ip_rst_vsensorc_middle_START (19)
#define SOC_CRGPERIPH_PERRSTEN1_ip_rst_vsensorc_middle_END (19)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio20_START (20)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio20_END (20)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio21_START (21)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_gpio21_END (21)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_timer9_START (22)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_timer9_END (22)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_timer10_START (23)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_timer10_END (23)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_timer11_START (24)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_timer11_END (24)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_timer12_START (25)
#define SOC_CRGPERIPH_PERRSTEN1_ip_prst_timer12_END (25)
#define SOC_CRGPERIPH_PERRSTEN1_ip_rst_socp_START (26)
#define SOC_CRGPERIPH_PERRSTEN1_ip_rst_socp_END (26)
#define SOC_CRGPERIPH_PERRSTEN1_ip_rst_djtag_START (27)
#define SOC_CRGPERIPH_PERRSTEN1_ip_rst_djtag_END (27)
#define SOC_CRGPERIPH_PERRSTEN1_ip_rst_vsensorc_big_START (28)
#define SOC_CRGPERIPH_PERRSTEN1_ip_rst_vsensorc_big_END (28)
#define SOC_CRGPERIPH_PERRSTEN1_ip_rst_vsensorc_little_START (29)
#define SOC_CRGPERIPH_PERRSTEN1_ip_rst_vsensorc_little_END (29)
#define SOC_CRGPERIPH_PERRSTEN1_ip_rst_vsensorc_gpu_START (30)
#define SOC_CRGPERIPH_PERRSTEN1_ip_rst_vsensorc_gpu_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ip_prst_gpio0 : 1;
        unsigned int ip_prst_gpio1 : 1;
        unsigned int ip_prst_gpio2 : 1;
        unsigned int ip_prst_gpio3 : 1;
        unsigned int ip_prst_gpio4 : 1;
        unsigned int ip_prst_gpio5 : 1;
        unsigned int ip_prst_gpio6 : 1;
        unsigned int ip_prst_gpio7 : 1;
        unsigned int ip_prst_gpio8 : 1;
        unsigned int ip_prst_gpio9 : 1;
        unsigned int ip_prst_gpio10 : 1;
        unsigned int ip_prst_gpio11 : 1;
        unsigned int ip_prst_gpio12 : 1;
        unsigned int ip_prst_gpio13 : 1;
        unsigned int ip_prst_gpio14 : 1;
        unsigned int ip_prst_gpio15 : 1;
        unsigned int ip_prst_gpio16 : 1;
        unsigned int ip_prst_gpio17 : 1;
        unsigned int ip_rst_vsensorc_l3 : 1;
        unsigned int ip_rst_vsensorc_middle : 1;
        unsigned int ip_prst_gpio20 : 1;
        unsigned int ip_prst_gpio21 : 1;
        unsigned int ip_prst_timer9 : 1;
        unsigned int ip_prst_timer10 : 1;
        unsigned int ip_prst_timer11 : 1;
        unsigned int ip_prst_timer12 : 1;
        unsigned int ip_rst_socp : 1;
        unsigned int ip_rst_djtag : 1;
        unsigned int ip_rst_vsensorc_big : 1;
        unsigned int ip_rst_vsensorc_little : 1;
        unsigned int ip_rst_vsensorc_gpu : 1;
        unsigned int reserved : 1;
    } reg;
} SOC_CRGPERIPH_PERRSTDIS1_UNION;
#endif
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio0_START (0)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio0_END (0)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio1_START (1)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio1_END (1)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio2_START (2)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio2_END (2)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio3_START (3)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio3_END (3)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio4_START (4)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio4_END (4)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio5_START (5)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio5_END (5)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio6_START (6)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio6_END (6)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio7_START (7)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio7_END (7)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio8_START (8)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio8_END (8)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio9_START (9)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio9_END (9)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio10_START (10)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio10_END (10)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio11_START (11)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio11_END (11)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio12_START (12)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio12_END (12)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio13_START (13)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio13_END (13)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio14_START (14)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio14_END (14)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio15_START (15)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio15_END (15)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio16_START (16)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio16_END (16)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio17_START (17)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio17_END (17)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_rst_vsensorc_l3_START (18)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_rst_vsensorc_l3_END (18)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_rst_vsensorc_middle_START (19)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_rst_vsensorc_middle_END (19)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio20_START (20)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio20_END (20)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio21_START (21)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_gpio21_END (21)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_timer9_START (22)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_timer9_END (22)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_timer10_START (23)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_timer10_END (23)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_timer11_START (24)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_timer11_END (24)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_timer12_START (25)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_prst_timer12_END (25)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_rst_socp_START (26)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_rst_socp_END (26)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_rst_djtag_START (27)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_rst_djtag_END (27)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_rst_vsensorc_big_START (28)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_rst_vsensorc_big_END (28)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_rst_vsensorc_little_START (29)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_rst_vsensorc_little_END (29)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_rst_vsensorc_gpu_START (30)
#define SOC_CRGPERIPH_PERRSTDIS1_ip_rst_vsensorc_gpu_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ip_prst_gpio0 : 1;
        unsigned int ip_prst_gpio1 : 1;
        unsigned int ip_prst_gpio2 : 1;
        unsigned int ip_prst_gpio3 : 1;
        unsigned int ip_prst_gpio4 : 1;
        unsigned int ip_prst_gpio5 : 1;
        unsigned int ip_prst_gpio6 : 1;
        unsigned int ip_prst_gpio7 : 1;
        unsigned int ip_prst_gpio8 : 1;
        unsigned int ip_prst_gpio9 : 1;
        unsigned int ip_prst_gpio10 : 1;
        unsigned int ip_prst_gpio11 : 1;
        unsigned int ip_prst_gpio12 : 1;
        unsigned int ip_prst_gpio13 : 1;
        unsigned int ip_prst_gpio14 : 1;
        unsigned int ip_prst_gpio15 : 1;
        unsigned int ip_prst_gpio16 : 1;
        unsigned int ip_prst_gpio17 : 1;
        unsigned int ip_rst_vsensorc_l3 : 1;
        unsigned int ip_rst_vsensorc_middle : 1;
        unsigned int ip_prst_gpio20 : 1;
        unsigned int ip_prst_gpio21 : 1;
        unsigned int ip_prst_timer9 : 1;
        unsigned int ip_prst_timer10 : 1;
        unsigned int ip_prst_timer11 : 1;
        unsigned int ip_prst_timer12 : 1;
        unsigned int ip_rst_socp : 1;
        unsigned int ip_rst_djtag : 1;
        unsigned int ip_rst_vsensorc_big : 1;
        unsigned int ip_rst_vsensorc_little : 1;
        unsigned int ip_rst_vsensorc_gpu : 1;
        unsigned int reserved : 1;
    } reg;
} SOC_CRGPERIPH_PERRSTSTAT1_UNION;
#endif
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio0_START (0)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio0_END (0)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio1_START (1)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio1_END (1)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio2_START (2)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio2_END (2)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio3_START (3)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio3_END (3)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio4_START (4)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio4_END (4)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio5_START (5)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio5_END (5)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio6_START (6)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio6_END (6)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio7_START (7)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio7_END (7)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio8_START (8)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio8_END (8)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio9_START (9)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio9_END (9)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio10_START (10)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio10_END (10)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio11_START (11)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio11_END (11)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio12_START (12)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio12_END (12)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio13_START (13)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio13_END (13)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio14_START (14)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio14_END (14)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio15_START (15)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio15_END (15)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio16_START (16)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio16_END (16)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio17_START (17)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio17_END (17)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_rst_vsensorc_l3_START (18)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_rst_vsensorc_l3_END (18)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_rst_vsensorc_middle_START (19)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_rst_vsensorc_middle_END (19)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio20_START (20)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio20_END (20)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio21_START (21)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_gpio21_END (21)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_timer9_START (22)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_timer9_END (22)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_timer10_START (23)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_timer10_END (23)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_timer11_START (24)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_timer11_END (24)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_timer12_START (25)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_prst_timer12_END (25)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_rst_socp_START (26)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_rst_socp_END (26)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_rst_djtag_START (27)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_rst_djtag_END (27)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_rst_vsensorc_big_START (28)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_rst_vsensorc_big_END (28)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_rst_vsensorc_little_START (29)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_rst_vsensorc_little_END (29)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_rst_vsensorc_gpu_START (30)
#define SOC_CRGPERIPH_PERRSTSTAT1_ip_rst_vsensorc_gpu_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ip_prst_pwm : 1;
        unsigned int ip_prst_blpwm_peri : 1;
        unsigned int ip_prst_ipc0 : 1;
        unsigned int ip_prst_ipc1 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int ip_rst_i2c3 : 1;
        unsigned int reserved_3 : 1;
        unsigned int ip_rst_spi1 : 1;
        unsigned int ip_prst_uart0 : 1;
        unsigned int ip_prst_uart1 : 1;
        unsigned int ip_prst_uart2 : 1;
        unsigned int reserved_4 : 1;
        unsigned int ip_prst_uart4 : 1;
        unsigned int ip_prst_uart5 : 1;
        unsigned int ip_prst_tzpc : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int ip_rst_adb_slv_acp : 1;
        unsigned int ip_prst_ipc_mdm : 1;
        unsigned int ip_rst_adb_mst_fcm0 : 1;
        unsigned int ip_rst_adb_mst_fcm1 : 1;
        unsigned int ip_rst_gic : 1;
        unsigned int reserved_7 : 1;
        unsigned int ip_prst_ioc : 1;
        unsigned int ip_rst_codecssi : 1;
        unsigned int ip_rst_i2c4 : 1;
        unsigned int ip_rst_adb_mst_mdm : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int ip_prst_pctrl : 1;
    } reg;
} SOC_CRGPERIPH_PERRSTEN2_UNION;
#endif
#define SOC_CRGPERIPH_PERRSTEN2_ip_prst_pwm_START (0)
#define SOC_CRGPERIPH_PERRSTEN2_ip_prst_pwm_END (0)
#define SOC_CRGPERIPH_PERRSTEN2_ip_prst_blpwm_peri_START (1)
#define SOC_CRGPERIPH_PERRSTEN2_ip_prst_blpwm_peri_END (1)
#define SOC_CRGPERIPH_PERRSTEN2_ip_prst_ipc0_START (2)
#define SOC_CRGPERIPH_PERRSTEN2_ip_prst_ipc0_END (2)
#define SOC_CRGPERIPH_PERRSTEN2_ip_prst_ipc1_START (3)
#define SOC_CRGPERIPH_PERRSTEN2_ip_prst_ipc1_END (3)
#define SOC_CRGPERIPH_PERRSTEN2_ip_rst_i2c3_START (7)
#define SOC_CRGPERIPH_PERRSTEN2_ip_rst_i2c3_END (7)
#define SOC_CRGPERIPH_PERRSTEN2_ip_rst_spi1_START (9)
#define SOC_CRGPERIPH_PERRSTEN2_ip_rst_spi1_END (9)
#define SOC_CRGPERIPH_PERRSTEN2_ip_prst_uart0_START (10)
#define SOC_CRGPERIPH_PERRSTEN2_ip_prst_uart0_END (10)
#define SOC_CRGPERIPH_PERRSTEN2_ip_prst_uart1_START (11)
#define SOC_CRGPERIPH_PERRSTEN2_ip_prst_uart1_END (11)
#define SOC_CRGPERIPH_PERRSTEN2_ip_prst_uart2_START (12)
#define SOC_CRGPERIPH_PERRSTEN2_ip_prst_uart2_END (12)
#define SOC_CRGPERIPH_PERRSTEN2_ip_prst_uart4_START (14)
#define SOC_CRGPERIPH_PERRSTEN2_ip_prst_uart4_END (14)
#define SOC_CRGPERIPH_PERRSTEN2_ip_prst_uart5_START (15)
#define SOC_CRGPERIPH_PERRSTEN2_ip_prst_uart5_END (15)
#define SOC_CRGPERIPH_PERRSTEN2_ip_prst_tzpc_START (16)
#define SOC_CRGPERIPH_PERRSTEN2_ip_prst_tzpc_END (16)
#define SOC_CRGPERIPH_PERRSTEN2_ip_rst_adb_slv_acp_START (19)
#define SOC_CRGPERIPH_PERRSTEN2_ip_rst_adb_slv_acp_END (19)
#define SOC_CRGPERIPH_PERRSTEN2_ip_prst_ipc_mdm_START (20)
#define SOC_CRGPERIPH_PERRSTEN2_ip_prst_ipc_mdm_END (20)
#define SOC_CRGPERIPH_PERRSTEN2_ip_rst_adb_mst_fcm0_START (21)
#define SOC_CRGPERIPH_PERRSTEN2_ip_rst_adb_mst_fcm0_END (21)
#define SOC_CRGPERIPH_PERRSTEN2_ip_rst_adb_mst_fcm1_START (22)
#define SOC_CRGPERIPH_PERRSTEN2_ip_rst_adb_mst_fcm1_END (22)
#define SOC_CRGPERIPH_PERRSTEN2_ip_rst_gic_START (23)
#define SOC_CRGPERIPH_PERRSTEN2_ip_rst_gic_END (23)
#define SOC_CRGPERIPH_PERRSTEN2_ip_prst_ioc_START (25)
#define SOC_CRGPERIPH_PERRSTEN2_ip_prst_ioc_END (25)
#define SOC_CRGPERIPH_PERRSTEN2_ip_rst_codecssi_START (26)
#define SOC_CRGPERIPH_PERRSTEN2_ip_rst_codecssi_END (26)
#define SOC_CRGPERIPH_PERRSTEN2_ip_rst_i2c4_START (27)
#define SOC_CRGPERIPH_PERRSTEN2_ip_rst_i2c4_END (27)
#define SOC_CRGPERIPH_PERRSTEN2_ip_rst_adb_mst_mdm_START (28)
#define SOC_CRGPERIPH_PERRSTEN2_ip_rst_adb_mst_mdm_END (28)
#define SOC_CRGPERIPH_PERRSTEN2_ip_prst_pctrl_START (31)
#define SOC_CRGPERIPH_PERRSTEN2_ip_prst_pctrl_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ip_prst_pwm : 1;
        unsigned int ip_prst_blpwm_peri : 1;
        unsigned int ip_prst_ipc0 : 1;
        unsigned int ip_prst_ipc1 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int ip_rst_i2c3 : 1;
        unsigned int reserved_3 : 1;
        unsigned int ip_rst_spi1 : 1;
        unsigned int ip_prst_uart0 : 1;
        unsigned int ip_prst_uart1 : 1;
        unsigned int ip_prst_uart2 : 1;
        unsigned int reserved_4 : 1;
        unsigned int ip_prst_uart4 : 1;
        unsigned int ip_prst_uart5 : 1;
        unsigned int ip_prst_tzpc : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int ip_rst_adb_slv_acp : 1;
        unsigned int ip_prst_ipc_mdm : 1;
        unsigned int ip_rst_adb_mst_fcm0 : 1;
        unsigned int ip_rst_adb_mst_fcm1 : 1;
        unsigned int ip_rst_gic : 1;
        unsigned int reserved_7 : 1;
        unsigned int ip_prst_ioc : 1;
        unsigned int ip_rst_codecssi : 1;
        unsigned int ip_rst_i2c4 : 1;
        unsigned int ip_rst_adb_mst_mdm : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int ip_prst_pctrl : 1;
    } reg;
} SOC_CRGPERIPH_PERRSTDIS2_UNION;
#endif
#define SOC_CRGPERIPH_PERRSTDIS2_ip_prst_pwm_START (0)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_prst_pwm_END (0)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_prst_blpwm_peri_START (1)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_prst_blpwm_peri_END (1)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_prst_ipc0_START (2)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_prst_ipc0_END (2)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_prst_ipc1_START (3)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_prst_ipc1_END (3)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_rst_i2c3_START (7)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_rst_i2c3_END (7)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_rst_spi1_START (9)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_rst_spi1_END (9)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_prst_uart0_START (10)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_prst_uart0_END (10)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_prst_uart1_START (11)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_prst_uart1_END (11)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_prst_uart2_START (12)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_prst_uart2_END (12)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_prst_uart4_START (14)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_prst_uart4_END (14)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_prst_uart5_START (15)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_prst_uart5_END (15)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_prst_tzpc_START (16)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_prst_tzpc_END (16)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_rst_adb_slv_acp_START (19)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_rst_adb_slv_acp_END (19)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_prst_ipc_mdm_START (20)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_prst_ipc_mdm_END (20)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_rst_adb_mst_fcm0_START (21)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_rst_adb_mst_fcm0_END (21)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_rst_adb_mst_fcm1_START (22)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_rst_adb_mst_fcm1_END (22)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_rst_gic_START (23)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_rst_gic_END (23)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_prst_ioc_START (25)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_prst_ioc_END (25)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_rst_codecssi_START (26)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_rst_codecssi_END (26)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_rst_i2c4_START (27)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_rst_i2c4_END (27)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_rst_adb_mst_mdm_START (28)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_rst_adb_mst_mdm_END (28)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_prst_pctrl_START (31)
#define SOC_CRGPERIPH_PERRSTDIS2_ip_prst_pctrl_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ip_prst_pwm : 1;
        unsigned int ip_prst_blpwm_peri : 1;
        unsigned int ip_prst_ipc0 : 1;
        unsigned int ip_prst_ipc1 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int ip_rst_i2c3 : 1;
        unsigned int reserved_3 : 1;
        unsigned int ip_rst_spi1 : 1;
        unsigned int ip_prst_uart0 : 1;
        unsigned int ip_prst_uart1 : 1;
        unsigned int ip_prst_uart2 : 1;
        unsigned int reserved_4 : 1;
        unsigned int ip_prst_uart4 : 1;
        unsigned int ip_prst_uart5 : 1;
        unsigned int ip_prst_tzpc : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int ip_rst_adb_slv_acp : 1;
        unsigned int ip_prst_ipc_mdm : 1;
        unsigned int ip_rst_adb_mst_fcm0 : 1;
        unsigned int ip_rst_adb_mst_fcm1 : 1;
        unsigned int ip_rst_gic : 1;
        unsigned int reserved_7 : 1;
        unsigned int ip_prst_ioc : 1;
        unsigned int ip_rst_codecssi : 1;
        unsigned int ip_rst_i2c4 : 1;
        unsigned int ip_rst_adb_mst_mdm : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int ip_prst_pctrl : 1;
    } reg;
} SOC_CRGPERIPH_PERRSTSTAT2_UNION;
#endif
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_prst_pwm_START (0)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_prst_pwm_END (0)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_prst_blpwm_peri_START (1)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_prst_blpwm_peri_END (1)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_prst_ipc0_START (2)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_prst_ipc0_END (2)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_prst_ipc1_START (3)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_prst_ipc1_END (3)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_rst_i2c3_START (7)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_rst_i2c3_END (7)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_rst_spi1_START (9)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_rst_spi1_END (9)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_prst_uart0_START (10)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_prst_uart0_END (10)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_prst_uart1_START (11)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_prst_uart1_END (11)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_prst_uart2_START (12)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_prst_uart2_END (12)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_prst_uart4_START (14)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_prst_uart4_END (14)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_prst_uart5_START (15)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_prst_uart5_END (15)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_prst_tzpc_START (16)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_prst_tzpc_END (16)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_rst_adb_slv_acp_START (19)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_rst_adb_slv_acp_END (19)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_prst_ipc_mdm_START (20)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_prst_ipc_mdm_END (20)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_rst_adb_mst_fcm0_START (21)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_rst_adb_mst_fcm0_END (21)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_rst_adb_mst_fcm1_START (22)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_rst_adb_mst_fcm1_END (22)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_rst_gic_START (23)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_rst_gic_END (23)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_prst_ioc_START (25)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_prst_ioc_END (25)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_rst_codecssi_START (26)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_rst_codecssi_END (26)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_rst_i2c4_START (27)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_rst_i2c4_END (27)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_rst_adb_mst_mdm_START (28)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_rst_adb_mst_mdm_END (28)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_prst_pctrl_START (31)
#define SOC_CRGPERIPH_PERRSTSTAT2_ip_prst_pctrl_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ip_arst_dmac : 1;
        unsigned int ip_prst_loadmonitor : 1;
        unsigned int ip_arst_g3d_cfg : 1;
        unsigned int ip_arst_g3d : 1;
        unsigned int ip_rst_g3dmt : 1;
        unsigned int ip_prst_ctf : 1;
        unsigned int ip_prst_loadmonitor_1 : 1;
        unsigned int reserved_0 : 1;
        unsigned int ip_rst_g3dshpm15 : 1;
        unsigned int ip_rst_g3dshpm14 : 1;
        unsigned int ip_rst_g3dshpm13 : 1;
        unsigned int ip_rst_g3dshpm12 : 1;
        unsigned int reserved_1 : 1;
        unsigned int ip_rst_g3dshpm8 : 1;
        unsigned int ip_rst_g3dshpm7 : 1;
        unsigned int ip_rst_g3dshpm6 : 1;
        unsigned int ip_rst_g3dshpm5 : 1;
        unsigned int ip_rst_g3dshpm4 : 1;
        unsigned int ip_rst_g3dshpm3 : 1;
        unsigned int ip_rst_g3dshpm2 : 1;
        unsigned int ip_rst_g3dshpm1 : 1;
        unsigned int ip_rst_g3dshpm0 : 1;
        unsigned int ip_rst_g3dghpm : 1;
        unsigned int ip_rst_perihpm : 1;
        unsigned int ip_rst_aohpm : 1;
        unsigned int ip_rst_ipf : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int ip_prst_dsi0 : 1;
        unsigned int ip_prst_dsi1 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
    } reg;
} SOC_CRGPERIPH_PERRSTEN3_UNION;
#endif
#define SOC_CRGPERIPH_PERRSTEN3_ip_arst_dmac_START (0)
#define SOC_CRGPERIPH_PERRSTEN3_ip_arst_dmac_END (0)
#define SOC_CRGPERIPH_PERRSTEN3_ip_prst_loadmonitor_START (1)
#define SOC_CRGPERIPH_PERRSTEN3_ip_prst_loadmonitor_END (1)
#define SOC_CRGPERIPH_PERRSTEN3_ip_arst_g3d_cfg_START (2)
#define SOC_CRGPERIPH_PERRSTEN3_ip_arst_g3d_cfg_END (2)
#define SOC_CRGPERIPH_PERRSTEN3_ip_arst_g3d_START (3)
#define SOC_CRGPERIPH_PERRSTEN3_ip_arst_g3d_END (3)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dmt_START (4)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dmt_END (4)
#define SOC_CRGPERIPH_PERRSTEN3_ip_prst_ctf_START (5)
#define SOC_CRGPERIPH_PERRSTEN3_ip_prst_ctf_END (5)
#define SOC_CRGPERIPH_PERRSTEN3_ip_prst_loadmonitor_1_START (6)
#define SOC_CRGPERIPH_PERRSTEN3_ip_prst_loadmonitor_1_END (6)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dshpm15_START (8)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dshpm15_END (8)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dshpm14_START (9)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dshpm14_END (9)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dshpm13_START (10)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dshpm13_END (10)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dshpm12_START (11)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dshpm12_END (11)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dshpm8_START (13)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dshpm8_END (13)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dshpm7_START (14)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dshpm7_END (14)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dshpm6_START (15)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dshpm6_END (15)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dshpm5_START (16)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dshpm5_END (16)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dshpm4_START (17)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dshpm4_END (17)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dshpm3_START (18)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dshpm3_END (18)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dshpm2_START (19)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dshpm2_END (19)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dshpm1_START (20)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dshpm1_END (20)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dshpm0_START (21)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dshpm0_END (21)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dghpm_START (22)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_g3dghpm_END (22)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_perihpm_START (23)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_perihpm_END (23)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_aohpm_START (24)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_aohpm_END (24)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_ipf_START (25)
#define SOC_CRGPERIPH_PERRSTEN3_ip_rst_ipf_END (25)
#define SOC_CRGPERIPH_PERRSTEN3_ip_prst_dsi0_START (28)
#define SOC_CRGPERIPH_PERRSTEN3_ip_prst_dsi0_END (28)
#define SOC_CRGPERIPH_PERRSTEN3_ip_prst_dsi1_START (29)
#define SOC_CRGPERIPH_PERRSTEN3_ip_prst_dsi1_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ip_arst_dmac : 1;
        unsigned int ip_prst_loadmonitor : 1;
        unsigned int ip_arst_g3d_cfg : 1;
        unsigned int ip_arst_g3d : 1;
        unsigned int ip_rst_g3dmt : 1;
        unsigned int ip_prst_ctf : 1;
        unsigned int ip_prst_loadmonitor_1 : 1;
        unsigned int reserved_0 : 1;
        unsigned int ip_rst_g3dshpm15 : 1;
        unsigned int ip_rst_g3dshpm14 : 1;
        unsigned int ip_rst_g3dshpm13 : 1;
        unsigned int ip_rst_g3dshpm12 : 1;
        unsigned int reserved_1 : 1;
        unsigned int ip_rst_g3dshpm8 : 1;
        unsigned int ip_rst_g3dshpm7 : 1;
        unsigned int ip_rst_g3dshpm6 : 1;
        unsigned int ip_rst_g3dshpm5 : 1;
        unsigned int ip_rst_g3dshpm4 : 1;
        unsigned int ip_rst_g3dshpm3 : 1;
        unsigned int ip_rst_g3dshpm2 : 1;
        unsigned int ip_rst_g3dshpm1 : 1;
        unsigned int ip_rst_g3dshpm0 : 1;
        unsigned int ip_rst_g3dghpm : 1;
        unsigned int ip_rst_perihpm : 1;
        unsigned int ip_rst_aohpm : 1;
        unsigned int ip_rst_ipf : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int ip_prst_dsi0 : 1;
        unsigned int ip_prst_dsi1 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
    } reg;
} SOC_CRGPERIPH_PERRSTDIS3_UNION;
#endif
#define SOC_CRGPERIPH_PERRSTDIS3_ip_arst_dmac_START (0)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_arst_dmac_END (0)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_prst_loadmonitor_START (1)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_prst_loadmonitor_END (1)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_arst_g3d_cfg_START (2)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_arst_g3d_cfg_END (2)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_arst_g3d_START (3)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_arst_g3d_END (3)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dmt_START (4)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dmt_END (4)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_prst_ctf_START (5)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_prst_ctf_END (5)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_prst_loadmonitor_1_START (6)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_prst_loadmonitor_1_END (6)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dshpm15_START (8)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dshpm15_END (8)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dshpm14_START (9)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dshpm14_END (9)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dshpm13_START (10)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dshpm13_END (10)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dshpm12_START (11)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dshpm12_END (11)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dshpm8_START (13)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dshpm8_END (13)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dshpm7_START (14)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dshpm7_END (14)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dshpm6_START (15)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dshpm6_END (15)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dshpm5_START (16)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dshpm5_END (16)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dshpm4_START (17)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dshpm4_END (17)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dshpm3_START (18)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dshpm3_END (18)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dshpm2_START (19)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dshpm2_END (19)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dshpm1_START (20)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dshpm1_END (20)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dshpm0_START (21)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dshpm0_END (21)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dghpm_START (22)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_g3dghpm_END (22)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_perihpm_START (23)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_perihpm_END (23)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_aohpm_START (24)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_aohpm_END (24)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_ipf_START (25)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_rst_ipf_END (25)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_prst_dsi0_START (28)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_prst_dsi0_END (28)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_prst_dsi1_START (29)
#define SOC_CRGPERIPH_PERRSTDIS3_ip_prst_dsi1_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ip_arst_dmac : 1;
        unsigned int ip_prst_loadmonitor : 1;
        unsigned int ip_arst_g3d_cfg : 1;
        unsigned int ip_arst_g3d : 1;
        unsigned int ip_rst_g3dmt : 1;
        unsigned int ip_prst_ctf : 1;
        unsigned int ip_prst_loadmonitor_1 : 1;
        unsigned int reserved_0 : 1;
        unsigned int ip_rst_g3dshpm15 : 1;
        unsigned int ip_rst_g3dshpm14 : 1;
        unsigned int ip_rst_g3dshpm13 : 1;
        unsigned int ip_rst_g3dshpm12 : 1;
        unsigned int reserved_1 : 1;
        unsigned int ip_rst_g3dshpm8 : 1;
        unsigned int ip_rst_g3dshpm7 : 1;
        unsigned int ip_rst_g3dshpm6 : 1;
        unsigned int ip_rst_g3dshpm5 : 1;
        unsigned int ip_rst_g3dshpm4 : 1;
        unsigned int ip_rst_g3dshpm3 : 1;
        unsigned int ip_rst_g3dshpm2 : 1;
        unsigned int ip_rst_g3dshpm1 : 1;
        unsigned int ip_rst_g3dshpm0 : 1;
        unsigned int ip_rst_g3dghpm : 1;
        unsigned int ip_rst_perihpm : 1;
        unsigned int ip_rst_aohpm : 1;
        unsigned int ip_rst_ipf : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int ip_prst_dsi0 : 1;
        unsigned int ip_prst_dsi1 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
    } reg;
} SOC_CRGPERIPH_PERRSTSTAT3_UNION;
#endif
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_arst_dmac_START (0)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_arst_dmac_END (0)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_prst_loadmonitor_START (1)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_prst_loadmonitor_END (1)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_arst_g3d_cfg_START (2)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_arst_g3d_cfg_END (2)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_arst_g3d_START (3)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_arst_g3d_END (3)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dmt_START (4)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dmt_END (4)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_prst_ctf_START (5)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_prst_ctf_END (5)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_prst_loadmonitor_1_START (6)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_prst_loadmonitor_1_END (6)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dshpm15_START (8)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dshpm15_END (8)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dshpm14_START (9)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dshpm14_END (9)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dshpm13_START (10)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dshpm13_END (10)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dshpm12_START (11)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dshpm12_END (11)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dshpm8_START (13)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dshpm8_END (13)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dshpm7_START (14)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dshpm7_END (14)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dshpm6_START (15)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dshpm6_END (15)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dshpm5_START (16)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dshpm5_END (16)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dshpm4_START (17)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dshpm4_END (17)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dshpm3_START (18)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dshpm3_END (18)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dshpm2_START (19)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dshpm2_END (19)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dshpm1_START (20)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dshpm1_END (20)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dshpm0_START (21)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dshpm0_END (21)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dghpm_START (22)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_g3dghpm_END (22)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_perihpm_START (23)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_perihpm_END (23)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_aohpm_START (24)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_aohpm_END (24)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_ipf_START (25)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_rst_ipf_END (25)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_prst_dsi0_START (28)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_prst_dsi0_END (28)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_prst_dsi1_START (29)
#define SOC_CRGPERIPH_PERRSTSTAT3_ip_prst_dsi1_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ip_rst_media2 : 1;
        unsigned int ip_rst_media2_crg : 1;
        unsigned int ip_rst_lpm_cpu_big : 1;
        unsigned int ip_rst_lpm_cpu_middle : 1;
        unsigned int ip_rst_lpm_cpu_little : 1;
        unsigned int ip_rst_tidm_core : 1;
        unsigned int ip_rst_usb3otg_32k : 1;
        unsigned int ip_hrst_usb3otg_misc : 1;
        unsigned int ip_rst_pa_gpu : 1;
        unsigned int ip_prst_mmc0_ioc : 1;
        unsigned int ip_rst_tidm_gpu : 1;
        unsigned int ip_prst_atgc : 1;
        unsigned int ip_rst_x2j_func_mbist : 1;
        unsigned int ip_prst_atgs_mdm : 1;
        unsigned int ip_rst_dmc_hpm : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int ip_hrst_sd : 1;
        unsigned int ip_prst_atgs_sys : 1;
        unsigned int ip_rst_cci_crg : 1;
        unsigned int ip_arst_cci : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int ip_rst_sd : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int ip_rst_lpmcu : 1;
        unsigned int ip_rst_jittermon_wmux_cpub : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
    } reg;
} SOC_CRGPERIPH_PERRSTEN4_UNION;
#endif
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_media2_START (0)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_media2_END (0)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_media2_crg_START (1)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_media2_crg_END (1)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_lpm_cpu_big_START (2)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_lpm_cpu_big_END (2)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_lpm_cpu_middle_START (3)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_lpm_cpu_middle_END (3)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_lpm_cpu_little_START (4)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_lpm_cpu_little_END (4)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_tidm_core_START (5)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_tidm_core_END (5)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_usb3otg_32k_START (6)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_usb3otg_32k_END (6)
#define SOC_CRGPERIPH_PERRSTEN4_ip_hrst_usb3otg_misc_START (7)
#define SOC_CRGPERIPH_PERRSTEN4_ip_hrst_usb3otg_misc_END (7)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_pa_gpu_START (8)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_pa_gpu_END (8)
#define SOC_CRGPERIPH_PERRSTEN4_ip_prst_mmc0_ioc_START (9)
#define SOC_CRGPERIPH_PERRSTEN4_ip_prst_mmc0_ioc_END (9)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_tidm_gpu_START (10)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_tidm_gpu_END (10)
#define SOC_CRGPERIPH_PERRSTEN4_ip_prst_atgc_START (11)
#define SOC_CRGPERIPH_PERRSTEN4_ip_prst_atgc_END (11)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_x2j_func_mbist_START (12)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_x2j_func_mbist_END (12)
#define SOC_CRGPERIPH_PERRSTEN4_ip_prst_atgs_mdm_START (13)
#define SOC_CRGPERIPH_PERRSTEN4_ip_prst_atgs_mdm_END (13)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_dmc_hpm_START (14)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_dmc_hpm_END (14)
#define SOC_CRGPERIPH_PERRSTEN4_ip_hrst_sd_START (18)
#define SOC_CRGPERIPH_PERRSTEN4_ip_hrst_sd_END (18)
#define SOC_CRGPERIPH_PERRSTEN4_ip_prst_atgs_sys_START (19)
#define SOC_CRGPERIPH_PERRSTEN4_ip_prst_atgs_sys_END (19)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_cci_crg_START (20)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_cci_crg_END (20)
#define SOC_CRGPERIPH_PERRSTEN4_ip_arst_cci_START (21)
#define SOC_CRGPERIPH_PERRSTEN4_ip_arst_cci_END (21)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_sd_START (24)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_sd_END (24)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_lpmcu_START (28)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_lpmcu_END (28)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_jittermon_wmux_cpub_START (29)
#define SOC_CRGPERIPH_PERRSTEN4_ip_rst_jittermon_wmux_cpub_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ip_rst_media2 : 1;
        unsigned int ip_rst_media2_crg : 1;
        unsigned int ip_rst_lpm_cpu_big : 1;
        unsigned int ip_rst_lpm_cpu_middle : 1;
        unsigned int ip_rst_lpm_cpu_little : 1;
        unsigned int ip_rst_tidm_core : 1;
        unsigned int ip_rst_usb3otg_32k : 1;
        unsigned int ip_hrst_usb3otg_misc : 1;
        unsigned int ip_rst_pa_gpu : 1;
        unsigned int ip_prst_mmc0_ioc : 1;
        unsigned int ip_rst_tidm_gpu : 1;
        unsigned int ip_prst_atgc : 1;
        unsigned int ip_rst_x2j_func_mbist : 1;
        unsigned int ip_prst_atgs_mdm : 1;
        unsigned int ip_rst_dmc_hpm : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int ip_hrst_sd : 1;
        unsigned int ip_prst_atgs_sys : 1;
        unsigned int ip_rst_cci_crg : 1;
        unsigned int ip_arst_cci : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int ip_rst_sd : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int ip_rst_lpmcu : 1;
        unsigned int ip_rst_jittermon_wmux_cpub : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
    } reg;
} SOC_CRGPERIPH_PERRSTDIS4_UNION;
#endif
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_media2_START (0)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_media2_END (0)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_media2_crg_START (1)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_media2_crg_END (1)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_lpm_cpu_big_START (2)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_lpm_cpu_big_END (2)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_lpm_cpu_middle_START (3)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_lpm_cpu_middle_END (3)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_lpm_cpu_little_START (4)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_lpm_cpu_little_END (4)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_tidm_core_START (5)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_tidm_core_END (5)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_usb3otg_32k_START (6)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_usb3otg_32k_END (6)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_hrst_usb3otg_misc_START (7)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_hrst_usb3otg_misc_END (7)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_pa_gpu_START (8)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_pa_gpu_END (8)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_prst_mmc0_ioc_START (9)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_prst_mmc0_ioc_END (9)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_tidm_gpu_START (10)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_tidm_gpu_END (10)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_prst_atgc_START (11)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_prst_atgc_END (11)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_x2j_func_mbist_START (12)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_x2j_func_mbist_END (12)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_prst_atgs_mdm_START (13)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_prst_atgs_mdm_END (13)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_dmc_hpm_START (14)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_dmc_hpm_END (14)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_hrst_sd_START (18)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_hrst_sd_END (18)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_prst_atgs_sys_START (19)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_prst_atgs_sys_END (19)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_cci_crg_START (20)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_cci_crg_END (20)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_arst_cci_START (21)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_arst_cci_END (21)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_sd_START (24)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_sd_END (24)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_lpmcu_START (28)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_lpmcu_END (28)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_jittermon_wmux_cpub_START (29)
#define SOC_CRGPERIPH_PERRSTDIS4_ip_rst_jittermon_wmux_cpub_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ip_rst_media2 : 1;
        unsigned int ip_rst_media2_crg : 1;
        unsigned int ip_rst_lpm_cpu_big : 1;
        unsigned int ip_rst_lpm_cpu_middle : 1;
        unsigned int ip_rst_lpm_cpu_little : 1;
        unsigned int ip_rst_tidm_core : 1;
        unsigned int ip_rst_usb3otg_32k : 1;
        unsigned int ip_hrst_usb3otg_misc : 1;
        unsigned int ip_rst_pa_gpu : 1;
        unsigned int ip_prst_mmc0_ioc : 1;
        unsigned int ip_rst_tidm_gpu : 1;
        unsigned int ip_prst_atgc : 1;
        unsigned int ip_rst_x2j_func_mbist : 1;
        unsigned int ip_prst_atgs_mdm : 1;
        unsigned int ip_rst_dmc_hpm : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int ip_hrst_sd : 1;
        unsigned int ip_prst_atgs_sys : 1;
        unsigned int ip_rst_cci_crg : 1;
        unsigned int ip_arst_cci : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int ip_rst_sd : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int ip_rst_lpmcu : 1;
        unsigned int ip_rst_jittermon_wmux_cpub : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
    } reg;
} SOC_CRGPERIPH_PERRSTSTAT4_UNION;
#endif
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_media2_START (0)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_media2_END (0)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_media2_crg_START (1)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_media2_crg_END (1)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_lpm_cpu_big_START (2)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_lpm_cpu_big_END (2)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_lpm_cpu_middle_START (3)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_lpm_cpu_middle_END (3)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_lpm_cpu_little_START (4)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_lpm_cpu_little_END (4)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_tidm_core_START (5)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_tidm_core_END (5)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_usb3otg_32k_START (6)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_usb3otg_32k_END (6)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_hrst_usb3otg_misc_START (7)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_hrst_usb3otg_misc_END (7)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_pa_gpu_START (8)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_pa_gpu_END (8)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_prst_mmc0_ioc_START (9)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_prst_mmc0_ioc_END (9)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_tidm_gpu_START (10)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_tidm_gpu_END (10)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_prst_atgc_START (11)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_prst_atgc_END (11)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_x2j_func_mbist_START (12)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_x2j_func_mbist_END (12)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_prst_atgs_mdm_START (13)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_prst_atgs_mdm_END (13)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_dmc_hpm_START (14)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_dmc_hpm_END (14)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_hrst_sd_START (18)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_hrst_sd_END (18)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_prst_atgs_sys_START (19)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_prst_atgs_sys_END (19)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_cci_crg_START (20)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_cci_crg_END (20)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_arst_cci_START (21)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_arst_cci_END (21)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_sd_START (24)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_sd_END (24)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_lpmcu_START (28)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_lpmcu_END (28)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_jittermon_wmux_cpub_START (29)
#define SOC_CRGPERIPH_PERRSTSTAT4_ip_rst_jittermon_wmux_cpub_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ip_hrst_ddrc_dmux : 1;
        unsigned int ip_rst_noc_dmc_a : 1;
        unsigned int ip_rst_noc_dmc_b : 1;
        unsigned int ip_rst_noc_dmc_c : 1;
        unsigned int ip_rst_noc_dmc_d : 1;
        unsigned int ip_rst_ddrc_a_sys : 1;
        unsigned int ip_rst_ddrc_b_sys : 1;
        unsigned int ip_rst_ddrc_c_sys : 1;
        unsigned int ip_rst_ddrc_d_sys : 1;
        unsigned int ip_rst_cpu_gic : 1;
        unsigned int ip_rst_svfd_ffs_gpu : 1;
        unsigned int ip_rst_svfd_ffs_big : 1;
        unsigned int ip_rst_svfd_ffs_little : 1;
        unsigned int ip_rst_svfd_cpm_gpu : 1;
        unsigned int ip_rst_svfd_cpm_big : 1;
        unsigned int ip_rst_svfd_cpm_little : 1;
        unsigned int ip_rst_pll_unlock_detect : 1;
        unsigned int ip_rst_media : 1;
        unsigned int ip_rst_media_crg : 1;
        unsigned int ip_rst_g3dshpm9 : 1;
        unsigned int ip_rst_g3dshpm10 : 1;
        unsigned int ip_rst_g3dshpm11 : 1;
        unsigned int ip_rst_process_monitor0 : 1;
        unsigned int ip_rst_process_monitor1 : 1;
        unsigned int ip_rst_process_monitor2 : 1;
        unsigned int ip_rst_process_monitor3 : 1;
        unsigned int ip_rst_process_monitor4 : 1;
        unsigned int ip_rst_process_monitor5 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
    } reg;
} SOC_CRGPERIPH_PERRSTEN5_UNION;
#endif
#define SOC_CRGPERIPH_PERRSTEN5_ip_hrst_ddrc_dmux_START (0)
#define SOC_CRGPERIPH_PERRSTEN5_ip_hrst_ddrc_dmux_END (0)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_noc_dmc_a_START (1)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_noc_dmc_a_END (1)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_noc_dmc_b_START (2)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_noc_dmc_b_END (2)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_noc_dmc_c_START (3)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_noc_dmc_c_END (3)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_noc_dmc_d_START (4)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_noc_dmc_d_END (4)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_ddrc_a_sys_START (5)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_ddrc_a_sys_END (5)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_ddrc_b_sys_START (6)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_ddrc_b_sys_END (6)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_ddrc_c_sys_START (7)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_ddrc_c_sys_END (7)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_ddrc_d_sys_START (8)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_ddrc_d_sys_END (8)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_cpu_gic_START (9)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_cpu_gic_END (9)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_svfd_ffs_gpu_START (10)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_svfd_ffs_gpu_END (10)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_svfd_ffs_big_START (11)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_svfd_ffs_big_END (11)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_svfd_ffs_little_START (12)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_svfd_ffs_little_END (12)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_svfd_cpm_gpu_START (13)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_svfd_cpm_gpu_END (13)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_svfd_cpm_big_START (14)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_svfd_cpm_big_END (14)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_svfd_cpm_little_START (15)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_svfd_cpm_little_END (15)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_pll_unlock_detect_START (16)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_pll_unlock_detect_END (16)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_media_START (17)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_media_END (17)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_media_crg_START (18)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_media_crg_END (18)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_g3dshpm9_START (19)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_g3dshpm9_END (19)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_g3dshpm10_START (20)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_g3dshpm10_END (20)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_g3dshpm11_START (21)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_g3dshpm11_END (21)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_process_monitor0_START (22)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_process_monitor0_END (22)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_process_monitor1_START (23)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_process_monitor1_END (23)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_process_monitor2_START (24)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_process_monitor2_END (24)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_process_monitor3_START (25)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_process_monitor3_END (25)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_process_monitor4_START (26)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_process_monitor4_END (26)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_process_monitor5_START (27)
#define SOC_CRGPERIPH_PERRSTEN5_ip_rst_process_monitor5_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ip_hrst_ddrc_dmux : 1;
        unsigned int ip_rst_noc_dmc_a : 1;
        unsigned int ip_rst_noc_dmc_b : 1;
        unsigned int ip_rst_noc_dmc_c : 1;
        unsigned int ip_rst_noc_dmc_d : 1;
        unsigned int ip_rst_ddrc_a_sys : 1;
        unsigned int ip_rst_ddrc_b_sys : 1;
        unsigned int ip_rst_ddrc_c_sys : 1;
        unsigned int ip_rst_ddrc_d_sys : 1;
        unsigned int ip_rst_cpu_gic : 1;
        unsigned int ip_rst_svfd_ffs_gpu : 1;
        unsigned int ip_rst_svfd_ffs_big : 1;
        unsigned int ip_rst_svfd_ffs_little : 1;
        unsigned int ip_rst_svfd_cpm_gpu : 1;
        unsigned int ip_rst_svfd_cpm_big : 1;
        unsigned int ip_rst_svfd_cpm_little : 1;
        unsigned int ip_rst_pll_unlock_detect : 1;
        unsigned int ip_rst_media : 1;
        unsigned int ip_rst_media_crg : 1;
        unsigned int ip_rst_g3dshpm9 : 1;
        unsigned int ip_rst_g3dshpm10 : 1;
        unsigned int ip_rst_g3dshpm11 : 1;
        unsigned int ip_rst_process_monitor0 : 1;
        unsigned int ip_rst_process_monitor1 : 1;
        unsigned int ip_rst_process_monitor2 : 1;
        unsigned int ip_rst_process_monitor3 : 1;
        unsigned int ip_rst_process_monitor4 : 1;
        unsigned int ip_rst_process_monitor5 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
    } reg;
} SOC_CRGPERIPH_PERRSTDIS5_UNION;
#endif
#define SOC_CRGPERIPH_PERRSTDIS5_ip_hrst_ddrc_dmux_START (0)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_hrst_ddrc_dmux_END (0)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_noc_dmc_a_START (1)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_noc_dmc_a_END (1)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_noc_dmc_b_START (2)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_noc_dmc_b_END (2)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_noc_dmc_c_START (3)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_noc_dmc_c_END (3)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_noc_dmc_d_START (4)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_noc_dmc_d_END (4)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_ddrc_a_sys_START (5)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_ddrc_a_sys_END (5)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_ddrc_b_sys_START (6)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_ddrc_b_sys_END (6)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_ddrc_c_sys_START (7)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_ddrc_c_sys_END (7)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_ddrc_d_sys_START (8)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_ddrc_d_sys_END (8)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_cpu_gic_START (9)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_cpu_gic_END (9)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_svfd_ffs_gpu_START (10)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_svfd_ffs_gpu_END (10)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_svfd_ffs_big_START (11)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_svfd_ffs_big_END (11)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_svfd_ffs_little_START (12)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_svfd_ffs_little_END (12)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_svfd_cpm_gpu_START (13)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_svfd_cpm_gpu_END (13)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_svfd_cpm_big_START (14)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_svfd_cpm_big_END (14)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_svfd_cpm_little_START (15)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_svfd_cpm_little_END (15)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_pll_unlock_detect_START (16)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_pll_unlock_detect_END (16)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_media_START (17)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_media_END (17)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_media_crg_START (18)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_media_crg_END (18)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_g3dshpm9_START (19)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_g3dshpm9_END (19)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_g3dshpm10_START (20)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_g3dshpm10_END (20)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_g3dshpm11_START (21)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_g3dshpm11_END (21)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_process_monitor0_START (22)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_process_monitor0_END (22)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_process_monitor1_START (23)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_process_monitor1_END (23)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_process_monitor2_START (24)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_process_monitor2_END (24)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_process_monitor3_START (25)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_process_monitor3_END (25)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_process_monitor4_START (26)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_process_monitor4_END (26)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_process_monitor5_START (27)
#define SOC_CRGPERIPH_PERRSTDIS5_ip_rst_process_monitor5_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ip_hrst_ddrc_dmux : 1;
        unsigned int ip_rst_noc_dmc_a : 1;
        unsigned int ip_rst_noc_dmc_b : 1;
        unsigned int ip_rst_noc_dmc_c : 1;
        unsigned int ip_rst_noc_dmc_d : 1;
        unsigned int ip_rst_ddrc_a_sys : 1;
        unsigned int ip_rst_ddrc_b_sys : 1;
        unsigned int ip_rst_ddrc_c_sys : 1;
        unsigned int ip_rst_ddrc_d_sys : 1;
        unsigned int ip_rst_cpu_gic : 1;
        unsigned int ip_rst_svfd_ffs_gpu : 1;
        unsigned int ip_rst_svfd_ffs_big : 1;
        unsigned int ip_rst_svfd_ffs_little : 1;
        unsigned int ip_rst_svfd_cpm_gpu : 1;
        unsigned int ip_rst_svfd_cpm_big : 1;
        unsigned int ip_rst_svfd_cpm_little : 1;
        unsigned int ip_rst_pll_unlock_detect : 1;
        unsigned int ip_rst_media : 1;
        unsigned int ip_rst_media_crg : 1;
        unsigned int ip_rst_g3dshpm9 : 1;
        unsigned int ip_rst_g3dshpm10 : 1;
        unsigned int ip_rst_g3dshpm11 : 1;
        unsigned int ip_rst_process_monitor0 : 1;
        unsigned int ip_rst_process_monitor1 : 1;
        unsigned int ip_rst_process_monitor2 : 1;
        unsigned int ip_rst_process_monitor3 : 1;
        unsigned int ip_rst_process_monitor4 : 1;
        unsigned int ip_rst_process_monitor5 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
    } reg;
} SOC_CRGPERIPH_PERRSTSTAT5_UNION;
#endif
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_hrst_ddrc_dmux_START (0)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_hrst_ddrc_dmux_END (0)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_noc_dmc_a_START (1)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_noc_dmc_a_END (1)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_noc_dmc_b_START (2)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_noc_dmc_b_END (2)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_noc_dmc_c_START (3)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_noc_dmc_c_END (3)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_noc_dmc_d_START (4)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_noc_dmc_d_END (4)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_ddrc_a_sys_START (5)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_ddrc_a_sys_END (5)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_ddrc_b_sys_START (6)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_ddrc_b_sys_END (6)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_ddrc_c_sys_START (7)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_ddrc_c_sys_END (7)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_ddrc_d_sys_START (8)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_ddrc_d_sys_END (8)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_cpu_gic_START (9)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_cpu_gic_END (9)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_svfd_ffs_gpu_START (10)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_svfd_ffs_gpu_END (10)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_svfd_ffs_big_START (11)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_svfd_ffs_big_END (11)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_svfd_ffs_little_START (12)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_svfd_ffs_little_END (12)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_svfd_cpm_gpu_START (13)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_svfd_cpm_gpu_END (13)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_svfd_cpm_big_START (14)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_svfd_cpm_big_END (14)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_svfd_cpm_little_START (15)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_svfd_cpm_little_END (15)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_pll_unlock_detect_START (16)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_pll_unlock_detect_END (16)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_media_START (17)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_media_END (17)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_media_crg_START (18)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_media_crg_END (18)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_g3dshpm9_START (19)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_g3dshpm9_END (19)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_g3dshpm10_START (20)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_g3dshpm10_END (20)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_g3dshpm11_START (21)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_g3dshpm11_END (21)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_process_monitor0_START (22)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_process_monitor0_END (22)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_process_monitor1_START (23)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_process_monitor1_END (23)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_process_monitor2_START (24)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_process_monitor2_END (24)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_process_monitor3_START (25)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_process_monitor3_END (25)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_process_monitor4_START (26)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_process_monitor4_END (26)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_process_monitor5_START (27)
#define SOC_CRGPERIPH_PERRSTSTAT5_ip_rst_process_monitor5_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int div_sysbus_pll : 5;
        unsigned int div_lpmcu : 5;
        unsigned int div_x2j : 4;
        unsigned int reserved : 2;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_CLKDIV0_UNION;
#endif
#define SOC_CRGPERIPH_CLKDIV0_div_sysbus_pll_START (0)
#define SOC_CRGPERIPH_CLKDIV0_div_sysbus_pll_END (4)
#define SOC_CRGPERIPH_CLKDIV0_div_lpmcu_START (5)
#define SOC_CRGPERIPH_CLKDIV0_div_lpmcu_END (9)
#define SOC_CRGPERIPH_CLKDIV0_div_x2j_START (10)
#define SOC_CRGPERIPH_CLKDIV0_div_x2j_END (13)
#define SOC_CRGPERIPH_CLKDIV0_bitmasken_START (16)
#define SOC_CRGPERIPH_CLKDIV0_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sel_sysbus_pll : 1;
        unsigned int sel_lpmcu_pll : 1;
        unsigned int sel_uart0 : 1;
        unsigned int sel_uartl : 1;
        unsigned int sel_uarth : 1;
        unsigned int sel_gps_ref : 2;
        unsigned int sel_codeccssi_sys_src : 1;
        unsigned int sel_spi : 1;
        unsigned int lpmcu_clk_sw_req_cfg : 2;
        unsigned int lpmcu_invar_clk_sw_req_cfg : 2;
        unsigned int sel_i2c : 1;
        unsigned int sysbus_clk_sw_req_cfg : 2;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_CLKDIV1_UNION;
#endif
#define SOC_CRGPERIPH_CLKDIV1_sel_sysbus_pll_START (0)
#define SOC_CRGPERIPH_CLKDIV1_sel_sysbus_pll_END (0)
#define SOC_CRGPERIPH_CLKDIV1_sel_lpmcu_pll_START (1)
#define SOC_CRGPERIPH_CLKDIV1_sel_lpmcu_pll_END (1)
#define SOC_CRGPERIPH_CLKDIV1_sel_uart0_START (2)
#define SOC_CRGPERIPH_CLKDIV1_sel_uart0_END (2)
#define SOC_CRGPERIPH_CLKDIV1_sel_uartl_START (3)
#define SOC_CRGPERIPH_CLKDIV1_sel_uartl_END (3)
#define SOC_CRGPERIPH_CLKDIV1_sel_uarth_START (4)
#define SOC_CRGPERIPH_CLKDIV1_sel_uarth_END (4)
#define SOC_CRGPERIPH_CLKDIV1_sel_gps_ref_START (5)
#define SOC_CRGPERIPH_CLKDIV1_sel_gps_ref_END (6)
#define SOC_CRGPERIPH_CLKDIV1_sel_codeccssi_sys_src_START (7)
#define SOC_CRGPERIPH_CLKDIV1_sel_codeccssi_sys_src_END (7)
#define SOC_CRGPERIPH_CLKDIV1_sel_spi_START (8)
#define SOC_CRGPERIPH_CLKDIV1_sel_spi_END (8)
#define SOC_CRGPERIPH_CLKDIV1_lpmcu_clk_sw_req_cfg_START (9)
#define SOC_CRGPERIPH_CLKDIV1_lpmcu_clk_sw_req_cfg_END (10)
#define SOC_CRGPERIPH_CLKDIV1_lpmcu_invar_clk_sw_req_cfg_START (11)
#define SOC_CRGPERIPH_CLKDIV1_lpmcu_invar_clk_sw_req_cfg_END (12)
#define SOC_CRGPERIPH_CLKDIV1_sel_i2c_START (13)
#define SOC_CRGPERIPH_CLKDIV1_sel_i2c_END (13)
#define SOC_CRGPERIPH_CLKDIV1_sysbus_clk_sw_req_cfg_START (14)
#define SOC_CRGPERIPH_CLKDIV1_sysbus_clk_sw_req_cfg_END (15)
#define SOC_CRGPERIPH_CLKDIV1_bitmasken_START (16)
#define SOC_CRGPERIPH_CLKDIV1_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int div_gpu_ppll0 : 4;
        unsigned int div_uart0 : 4;
        unsigned int div_uartl : 4;
        unsigned int div_uarth : 4;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_CLKDIV2_UNION;
#endif
#define SOC_CRGPERIPH_CLKDIV2_div_gpu_ppll0_START (0)
#define SOC_CRGPERIPH_CLKDIV2_div_gpu_ppll0_END (3)
#define SOC_CRGPERIPH_CLKDIV2_div_uart0_START (4)
#define SOC_CRGPERIPH_CLKDIV2_div_uart0_END (7)
#define SOC_CRGPERIPH_CLKDIV2_div_uartl_START (8)
#define SOC_CRGPERIPH_CLKDIV2_div_uartl_END (11)
#define SOC_CRGPERIPH_CLKDIV2_div_uarth_START (12)
#define SOC_CRGPERIPH_CLKDIV2_div_uarth_END (15)
#define SOC_CRGPERIPH_CLKDIV2_bitmasken_START (16)
#define SOC_CRGPERIPH_CLKDIV2_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int div_aclk_pcie : 5;
        unsigned int sel_pcie_pll : 1;
        unsigned int div_pclk_pcie : 4;
        unsigned int req_g3d_sram_0p55_msk : 1;
        unsigned int req_g3d_sram_0p55 : 1;
        unsigned int reserved : 4;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_CLKDIV3_UNION;
#endif
#define SOC_CRGPERIPH_CLKDIV3_div_aclk_pcie_START (0)
#define SOC_CRGPERIPH_CLKDIV3_div_aclk_pcie_END (4)
#define SOC_CRGPERIPH_CLKDIV3_sel_pcie_pll_START (5)
#define SOC_CRGPERIPH_CLKDIV3_sel_pcie_pll_END (5)
#define SOC_CRGPERIPH_CLKDIV3_div_pclk_pcie_START (6)
#define SOC_CRGPERIPH_CLKDIV3_div_pclk_pcie_END (9)
#define SOC_CRGPERIPH_CLKDIV3_req_g3d_sram_0p55_msk_START (10)
#define SOC_CRGPERIPH_CLKDIV3_req_g3d_sram_0p55_msk_END (10)
#define SOC_CRGPERIPH_CLKDIV3_req_g3d_sram_0p55_START (11)
#define SOC_CRGPERIPH_CLKDIV3_req_g3d_sram_0p55_END (11)
#define SOC_CRGPERIPH_CLKDIV3_bitmasken_START (16)
#define SOC_CRGPERIPH_CLKDIV3_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int div_sd : 4;
        unsigned int sel_sd_pll : 3;
        unsigned int div_isp_i2c : 4;
        unsigned int reserved : 3;
        unsigned int div_loadmonitor : 2;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_CLKDIV4_UNION;
#endif
#define SOC_CRGPERIPH_CLKDIV4_div_sd_START (0)
#define SOC_CRGPERIPH_CLKDIV4_div_sd_END (3)
#define SOC_CRGPERIPH_CLKDIV4_sel_sd_pll_START (4)
#define SOC_CRGPERIPH_CLKDIV4_sel_sd_pll_END (6)
#define SOC_CRGPERIPH_CLKDIV4_div_isp_i2c_START (7)
#define SOC_CRGPERIPH_CLKDIV4_div_isp_i2c_END (10)
#define SOC_CRGPERIPH_CLKDIV4_div_loadmonitor_START (14)
#define SOC_CRGPERIPH_CLKDIV4_div_loadmonitor_END (15)
#define SOC_CRGPERIPH_CLKDIV4_bitmasken_START (16)
#define SOC_CRGPERIPH_CLKDIV4_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int div_vcodecbus : 6;
        unsigned int reserved_0 : 1;
        unsigned int div_dpctrl : 4;
        unsigned int div_dp_audio_pll_ao : 4;
        unsigned int reserved_1 : 1;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_CLKDIV5_UNION;
#endif
#define SOC_CRGPERIPH_CLKDIV5_div_vcodecbus_START (0)
#define SOC_CRGPERIPH_CLKDIV5_div_vcodecbus_END (5)
#define SOC_CRGPERIPH_CLKDIV5_div_dpctrl_START (7)
#define SOC_CRGPERIPH_CLKDIV5_div_dpctrl_END (10)
#define SOC_CRGPERIPH_CLKDIV5_div_dp_audio_pll_ao_START (11)
#define SOC_CRGPERIPH_CLKDIV5_div_dp_audio_pll_ao_END (14)
#define SOC_CRGPERIPH_CLKDIV5_bitmasken_START (16)
#define SOC_CRGPERIPH_CLKDIV5_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int div_sdio1 : 4;
        unsigned int sel_sdio1_pll : 3;
        unsigned int reserved_0 : 1;
        unsigned int div_venc : 6;
        unsigned int reserved_1 : 2;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_CLKDIV6_UNION;
#endif
#define SOC_CRGPERIPH_CLKDIV6_div_sdio1_START (0)
#define SOC_CRGPERIPH_CLKDIV6_div_sdio1_END (3)
#define SOC_CRGPERIPH_CLKDIV6_sel_sdio1_pll_START (4)
#define SOC_CRGPERIPH_CLKDIV6_sel_sdio1_pll_END (6)
#define SOC_CRGPERIPH_CLKDIV6_div_venc_START (8)
#define SOC_CRGPERIPH_CLKDIV6_div_venc_END (13)
#define SOC_CRGPERIPH_CLKDIV6_bitmasken_START (16)
#define SOC_CRGPERIPH_CLKDIV6_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int div_vdec : 6;
        unsigned int reserved_0 : 2;
        unsigned int sel_rxdphy_cfg : 1;
        unsigned int reserved_1 : 3;
        unsigned int div_spi : 4;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_CLKDIV7_UNION;
#endif
#define SOC_CRGPERIPH_CLKDIV7_div_vdec_START (0)
#define SOC_CRGPERIPH_CLKDIV7_div_vdec_END (5)
#define SOC_CRGPERIPH_CLKDIV7_sel_rxdphy_cfg_START (8)
#define SOC_CRGPERIPH_CLKDIV7_sel_rxdphy_cfg_END (8)
#define SOC_CRGPERIPH_CLKDIV7_div_spi_START (12)
#define SOC_CRGPERIPH_CLKDIV7_div_spi_END (15)
#define SOC_CRGPERIPH_CLKDIV7_bitmasken_START (16)
#define SOC_CRGPERIPH_CLKDIV7_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sel_vcodecbus_pll : 4;
        unsigned int sel_venc_pll : 4;
        unsigned int sel_vdec_pll : 4;
        unsigned int sel_ics_pll : 4;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_CLKDIV8_UNION;
#endif
#define SOC_CRGPERIPH_CLKDIV8_sel_vcodecbus_pll_START (0)
#define SOC_CRGPERIPH_CLKDIV8_sel_vcodecbus_pll_END (3)
#define SOC_CRGPERIPH_CLKDIV8_sel_venc_pll_START (4)
#define SOC_CRGPERIPH_CLKDIV8_sel_venc_pll_END (7)
#define SOC_CRGPERIPH_CLKDIV8_sel_vdec_pll_START (8)
#define SOC_CRGPERIPH_CLKDIV8_sel_vdec_pll_END (11)
#define SOC_CRGPERIPH_CLKDIV8_sel_ics_pll_START (12)
#define SOC_CRGPERIPH_CLKDIV8_sel_ics_pll_END (15)
#define SOC_CRGPERIPH_CLKDIV8_bitmasken_START (16)
#define SOC_CRGPERIPH_CLKDIV8_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int div_cpul_ppll0 : 4;
        unsigned int sel_g3d_lv : 1;
        unsigned int div_l3_ppll0 : 4;
        unsigned int sc_gt_clk_g3d_lv_mux : 1;
        unsigned int sel_g3d_pll_cs_sw : 1;
        unsigned int div_gpu_lv_fix : 2;
        unsigned int div_gpu_lv : 2;
        unsigned int go2pwr_bypass : 1;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_CLKDIV9_UNION;
#endif
#define SOC_CRGPERIPH_CLKDIV9_div_cpul_ppll0_START (0)
#define SOC_CRGPERIPH_CLKDIV9_div_cpul_ppll0_END (3)
#define SOC_CRGPERIPH_CLKDIV9_sel_g3d_lv_START (4)
#define SOC_CRGPERIPH_CLKDIV9_sel_g3d_lv_END (4)
#define SOC_CRGPERIPH_CLKDIV9_div_l3_ppll0_START (5)
#define SOC_CRGPERIPH_CLKDIV9_div_l3_ppll0_END (8)
#define SOC_CRGPERIPH_CLKDIV9_sc_gt_clk_g3d_lv_mux_START (9)
#define SOC_CRGPERIPH_CLKDIV9_sc_gt_clk_g3d_lv_mux_END (9)
#define SOC_CRGPERIPH_CLKDIV9_sel_g3d_pll_cs_sw_START (10)
#define SOC_CRGPERIPH_CLKDIV9_sel_g3d_pll_cs_sw_END (10)
#define SOC_CRGPERIPH_CLKDIV9_div_gpu_lv_fix_START (11)
#define SOC_CRGPERIPH_CLKDIV9_div_gpu_lv_fix_END (12)
#define SOC_CRGPERIPH_CLKDIV9_div_gpu_lv_START (13)
#define SOC_CRGPERIPH_CLKDIV9_div_gpu_lv_END (14)
#define SOC_CRGPERIPH_CLKDIV9_go2pwr_bypass_START (15)
#define SOC_CRGPERIPH_CLKDIV9_go2pwr_bypass_END (15)
#define SOC_CRGPERIPH_CLKDIV9_bitmasken_START (16)
#define SOC_CRGPERIPH_CLKDIV9_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 2;
        unsigned int gt_aclk_g3d_sram_lv_bypass : 1;
        unsigned int req_g3d_sram_lv_msk : 1;
        unsigned int reserved_1 : 2;
        unsigned int div_modem_bbp2 : 2;
        unsigned int sel_modem_bbp2 : 1;
        unsigned int div_modem_bbp3 : 2;
        unsigned int sel_modem_bbp3 : 1;
        unsigned int div_perf_stat : 4;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_CLKDIV10_UNION;
#endif
#define SOC_CRGPERIPH_CLKDIV10_gt_aclk_g3d_sram_lv_bypass_START (2)
#define SOC_CRGPERIPH_CLKDIV10_gt_aclk_g3d_sram_lv_bypass_END (2)
#define SOC_CRGPERIPH_CLKDIV10_req_g3d_sram_lv_msk_START (3)
#define SOC_CRGPERIPH_CLKDIV10_req_g3d_sram_lv_msk_END (3)
#define SOC_CRGPERIPH_CLKDIV10_div_modem_bbp2_START (6)
#define SOC_CRGPERIPH_CLKDIV10_div_modem_bbp2_END (7)
#define SOC_CRGPERIPH_CLKDIV10_sel_modem_bbp2_START (8)
#define SOC_CRGPERIPH_CLKDIV10_sel_modem_bbp2_END (8)
#define SOC_CRGPERIPH_CLKDIV10_div_modem_bbp3_START (9)
#define SOC_CRGPERIPH_CLKDIV10_div_modem_bbp3_END (10)
#define SOC_CRGPERIPH_CLKDIV10_sel_modem_bbp3_START (11)
#define SOC_CRGPERIPH_CLKDIV10_sel_modem_bbp3_END (11)
#define SOC_CRGPERIPH_CLKDIV10_div_perf_stat_START (12)
#define SOC_CRGPERIPH_CLKDIV10_div_perf_stat_END (15)
#define SOC_CRGPERIPH_CLKDIV10_bitmasken_START (16)
#define SOC_CRGPERIPH_CLKDIV10_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int div_modem_peri : 5;
        unsigned int div_rxdphy_cfg_fix : 3;
        unsigned int reserved_0 : 1;
        unsigned int sel_a53hpm_pll : 1;
        unsigned int sel_modem_peri : 4;
        unsigned int reserved_1 : 2;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_CLKDIV11_UNION;
#endif
#define SOC_CRGPERIPH_CLKDIV11_div_modem_peri_START (0)
#define SOC_CRGPERIPH_CLKDIV11_div_modem_peri_END (4)
#define SOC_CRGPERIPH_CLKDIV11_div_rxdphy_cfg_fix_START (5)
#define SOC_CRGPERIPH_CLKDIV11_div_rxdphy_cfg_fix_END (7)
#define SOC_CRGPERIPH_CLKDIV11_sel_a53hpm_pll_START (9)
#define SOC_CRGPERIPH_CLKDIV11_sel_a53hpm_pll_END (9)
#define SOC_CRGPERIPH_CLKDIV11_sel_modem_peri_START (10)
#define SOC_CRGPERIPH_CLKDIV11_sel_modem_peri_END (13)
#define SOC_CRGPERIPH_CLKDIV11_bitmasken_START (16)
#define SOC_CRGPERIPH_CLKDIV11_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int div_ptp : 4;
        unsigned int div_pll_test : 6;
        unsigned int sel_pll_test : 2;
        unsigned int sel_clk_sysbus_tp : 1;
        unsigned int div_a53hpm : 3;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_CLKDIV12_UNION;
#endif
#define SOC_CRGPERIPH_CLKDIV12_div_ptp_START (0)
#define SOC_CRGPERIPH_CLKDIV12_div_ptp_END (3)
#define SOC_CRGPERIPH_CLKDIV12_div_pll_test_START (4)
#define SOC_CRGPERIPH_CLKDIV12_div_pll_test_END (9)
#define SOC_CRGPERIPH_CLKDIV12_sel_pll_test_START (10)
#define SOC_CRGPERIPH_CLKDIV12_sel_pll_test_END (11)
#define SOC_CRGPERIPH_CLKDIV12_sel_clk_sysbus_tp_START (12)
#define SOC_CRGPERIPH_CLKDIV12_sel_clk_sysbus_tp_END (12)
#define SOC_CRGPERIPH_CLKDIV12_div_a53hpm_START (13)
#define SOC_CRGPERIPH_CLKDIV12_div_a53hpm_END (15)
#define SOC_CRGPERIPH_CLKDIV12_bitmasken_START (16)
#define SOC_CRGPERIPH_CLKDIV12_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int div_modem_dsp : 2;
        unsigned int sel_modem_dsp : 1;
        unsigned int div_modem_bbp0 : 2;
        unsigned int sel_modem_bbp0 : 1;
        unsigned int div_modem_ccpu : 2;
        unsigned int sel_modem_ccpu : 1;
        unsigned int div_modem_bbp1 : 3;
        unsigned int sel_modem_bbp1 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_CLKDIV13_UNION;
#endif
#define SOC_CRGPERIPH_CLKDIV13_div_modem_dsp_START (0)
#define SOC_CRGPERIPH_CLKDIV13_div_modem_dsp_END (1)
#define SOC_CRGPERIPH_CLKDIV13_sel_modem_dsp_START (2)
#define SOC_CRGPERIPH_CLKDIV13_sel_modem_dsp_END (2)
#define SOC_CRGPERIPH_CLKDIV13_div_modem_bbp0_START (3)
#define SOC_CRGPERIPH_CLKDIV13_div_modem_bbp0_END (4)
#define SOC_CRGPERIPH_CLKDIV13_sel_modem_bbp0_START (5)
#define SOC_CRGPERIPH_CLKDIV13_sel_modem_bbp0_END (5)
#define SOC_CRGPERIPH_CLKDIV13_div_modem_ccpu_START (6)
#define SOC_CRGPERIPH_CLKDIV13_div_modem_ccpu_END (7)
#define SOC_CRGPERIPH_CLKDIV13_sel_modem_ccpu_START (8)
#define SOC_CRGPERIPH_CLKDIV13_sel_modem_ccpu_END (8)
#define SOC_CRGPERIPH_CLKDIV13_div_modem_bbp1_START (9)
#define SOC_CRGPERIPH_CLKDIV13_div_modem_bbp1_END (11)
#define SOC_CRGPERIPH_CLKDIV13_sel_modem_bbp1_START (12)
#define SOC_CRGPERIPH_CLKDIV13_sel_modem_bbp1_END (12)
#define SOC_CRGPERIPH_CLKDIV13_bitmasken_START (16)
#define SOC_CRGPERIPH_CLKDIV13_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int div_process_monitor : 2;
        unsigned int reserved : 2;
        unsigned int div_clkout0_pll : 6;
        unsigned int div_clkout1_pll : 6;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_CLKDIV14_UNION;
#endif
#define SOC_CRGPERIPH_CLKDIV14_div_process_monitor_START (0)
#define SOC_CRGPERIPH_CLKDIV14_div_process_monitor_END (1)
#define SOC_CRGPERIPH_CLKDIV14_div_clkout0_pll_START (4)
#define SOC_CRGPERIPH_CLKDIV14_div_clkout0_pll_END (9)
#define SOC_CRGPERIPH_CLKDIV14_div_clkout1_pll_START (10)
#define SOC_CRGPERIPH_CLKDIV14_div_clkout1_pll_END (15)
#define SOC_CRGPERIPH_CLKDIV14_bitmasken_START (16)
#define SOC_CRGPERIPH_CLKDIV14_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 5;
        unsigned int div_jittermon_wmux : 4;
        unsigned int div_ics : 6;
        unsigned int reserved_1 : 1;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_CLKDIV15_UNION;
#endif
#define SOC_CRGPERIPH_CLKDIV15_div_jittermon_wmux_START (5)
#define SOC_CRGPERIPH_CLKDIV15_div_jittermon_wmux_END (8)
#define SOC_CRGPERIPH_CLKDIV15_div_ics_START (9)
#define SOC_CRGPERIPH_CLKDIV15_div_ics_END (14)
#define SOC_CRGPERIPH_CLKDIV15_bitmasken_START (16)
#define SOC_CRGPERIPH_CLKDIV15_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sel_dmcpll : 4;
        unsigned int div_i2c : 4;
        unsigned int sel_ddrcpll : 4;
        unsigned int ddrc_clk_sw_req_cfg : 2;
        unsigned int dmc_clk_sw_req_cfg : 2;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_CLKDIV16_UNION;
#endif
#define SOC_CRGPERIPH_CLKDIV16_sel_dmcpll_START (0)
#define SOC_CRGPERIPH_CLKDIV16_sel_dmcpll_END (3)
#define SOC_CRGPERIPH_CLKDIV16_div_i2c_START (4)
#define SOC_CRGPERIPH_CLKDIV16_div_i2c_END (7)
#define SOC_CRGPERIPH_CLKDIV16_sel_ddrcpll_START (8)
#define SOC_CRGPERIPH_CLKDIV16_sel_ddrcpll_END (11)
#define SOC_CRGPERIPH_CLKDIV16_ddrc_clk_sw_req_cfg_START (12)
#define SOC_CRGPERIPH_CLKDIV16_ddrc_clk_sw_req_cfg_END (13)
#define SOC_CRGPERIPH_CLKDIV16_dmc_clk_sw_req_cfg_START (14)
#define SOC_CRGPERIPH_CLKDIV16_dmc_clk_sw_req_cfg_END (15)
#define SOC_CRGPERIPH_CLKDIV16_bitmasken_START (16)
#define SOC_CRGPERIPH_CLKDIV16_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int div_cfgbus : 2;
        unsigned int div_mmc0_peribus : 1;
        unsigned int div_mmc1_peribus : 1;
        unsigned int div_blpwm_peri : 2;
        unsigned int sel_cpu_gic : 1;
        unsigned int div_cpu_gic : 6;
        unsigned int div_cssysdbg : 1;
        unsigned int reserved : 1;
        unsigned int div_dmabus : 1;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_CLKDIV17_UNION;
#endif
#define SOC_CRGPERIPH_CLKDIV17_div_cfgbus_START (0)
#define SOC_CRGPERIPH_CLKDIV17_div_cfgbus_END (1)
#define SOC_CRGPERIPH_CLKDIV17_div_mmc0_peribus_START (2)
#define SOC_CRGPERIPH_CLKDIV17_div_mmc0_peribus_END (2)
#define SOC_CRGPERIPH_CLKDIV17_div_mmc1_peribus_START (3)
#define SOC_CRGPERIPH_CLKDIV17_div_mmc1_peribus_END (3)
#define SOC_CRGPERIPH_CLKDIV17_div_blpwm_peri_START (4)
#define SOC_CRGPERIPH_CLKDIV17_div_blpwm_peri_END (5)
#define SOC_CRGPERIPH_CLKDIV17_sel_cpu_gic_START (6)
#define SOC_CRGPERIPH_CLKDIV17_sel_cpu_gic_END (6)
#define SOC_CRGPERIPH_CLKDIV17_div_cpu_gic_START (7)
#define SOC_CRGPERIPH_CLKDIV17_div_cpu_gic_END (12)
#define SOC_CRGPERIPH_CLKDIV17_div_cssysdbg_START (13)
#define SOC_CRGPERIPH_CLKDIV17_div_cssysdbg_END (13)
#define SOC_CRGPERIPH_CLKDIV17_div_dmabus_START (15)
#define SOC_CRGPERIPH_CLKDIV17_div_dmabus_END (15)
#define SOC_CRGPERIPH_CLKDIV17_bitmasken_START (16)
#define SOC_CRGPERIPH_CLKDIV17_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_gt_clk_g3d_ppll0_div : 1;
        unsigned int sc_gt_clk_time_stamp_div : 1;
        unsigned int sc_gt_clk_ddrc_pll : 1;
        unsigned int sc_gt_clk_perf_stat_div : 1;
        unsigned int sc_gt_clk_lpmcu_pll : 1;
        unsigned int sc_gt_clk_loadmonitor : 1;
        unsigned int sc_gt_clk_sysbus_pll : 1;
        unsigned int sc_gt_clk_mmc_dpctrl : 1;
        unsigned int sc_gt_clk_vcodecbus : 1;
        unsigned int sc_gt_clk_venc : 1;
        unsigned int sc_gt_clk_out0 : 1;
        unsigned int sc_gt_clk_out1 : 1;
        unsigned int sc_gt_clk_rxdphy_cfg : 1;
        unsigned int sc_gt_clk_vdec : 1;
        unsigned int sc_gt_clk_ics : 1;
        unsigned int sc_gt_clk_sysbus_sys : 1;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_CLKDIV18_UNION;
#endif
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_g3d_ppll0_div_START (0)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_g3d_ppll0_div_END (0)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_time_stamp_div_START (1)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_time_stamp_div_END (1)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_ddrc_pll_START (2)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_ddrc_pll_END (2)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_perf_stat_div_START (3)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_perf_stat_div_END (3)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_lpmcu_pll_START (4)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_lpmcu_pll_END (4)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_loadmonitor_START (5)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_loadmonitor_END (5)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_sysbus_pll_START (6)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_sysbus_pll_END (6)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_mmc_dpctrl_START (7)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_mmc_dpctrl_END (7)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_vcodecbus_START (8)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_vcodecbus_END (8)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_venc_START (9)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_venc_END (9)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_out0_START (10)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_out0_END (10)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_out1_START (11)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_out1_END (11)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_rxdphy_cfg_START (12)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_rxdphy_cfg_END (12)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_vdec_START (13)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_vdec_END (13)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_ics_START (14)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_ics_END (14)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_sysbus_sys_START (15)
#define SOC_CRGPERIPH_CLKDIV18_sc_gt_clk_sysbus_sys_END (15)
#define SOC_CRGPERIPH_CLKDIV18_bitmasken_START (16)
#define SOC_CRGPERIPH_CLKDIV18_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_gt_clk_modem_bbp2 : 1;
        unsigned int sc_gt_clk_cpul_ppll0_div : 1;
        unsigned int sc_gt_clk_l3_ppll0_div : 1;
        unsigned int sc_gt_clk_sd : 1;
        unsigned int sc_gt_clk_ao_asp_pll : 1;
        unsigned int sc_gt_clk_sd_sys : 1;
        unsigned int sc_gt_clk_sdio1_sys : 1;
        unsigned int sc_gt_clk_a53hpm : 1;
        unsigned int sc_gt_clk_sdio1 : 1;
        unsigned int sc_gt_clk_uart0 : 1;
        unsigned int sc_gt_clk_uartl : 1;
        unsigned int sc_gt_clk_uarth : 1;
        unsigned int reserved_0 : 1;
        unsigned int sc_gt_clk_spi : 1;
        unsigned int reserved_1 : 1;
        unsigned int sc_gt_clk_modem_bbp3 : 1;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_CLKDIV19_UNION;
#endif
#define SOC_CRGPERIPH_CLKDIV19_sc_gt_clk_modem_bbp2_START (0)
#define SOC_CRGPERIPH_CLKDIV19_sc_gt_clk_modem_bbp2_END (0)
#define SOC_CRGPERIPH_CLKDIV19_sc_gt_clk_cpul_ppll0_div_START (1)
#define SOC_CRGPERIPH_CLKDIV19_sc_gt_clk_cpul_ppll0_div_END (1)
#define SOC_CRGPERIPH_CLKDIV19_sc_gt_clk_l3_ppll0_div_START (2)
#define SOC_CRGPERIPH_CLKDIV19_sc_gt_clk_l3_ppll0_div_END (2)
#define SOC_CRGPERIPH_CLKDIV19_sc_gt_clk_sd_START (3)
#define SOC_CRGPERIPH_CLKDIV19_sc_gt_clk_sd_END (3)
#define SOC_CRGPERIPH_CLKDIV19_sc_gt_clk_ao_asp_pll_START (4)
#define SOC_CRGPERIPH_CLKDIV19_sc_gt_clk_ao_asp_pll_END (4)
#define SOC_CRGPERIPH_CLKDIV19_sc_gt_clk_sd_sys_START (5)
#define SOC_CRGPERIPH_CLKDIV19_sc_gt_clk_sd_sys_END (5)
#define SOC_CRGPERIPH_CLKDIV19_sc_gt_clk_sdio1_sys_START (6)
#define SOC_CRGPERIPH_CLKDIV19_sc_gt_clk_sdio1_sys_END (6)
#define SOC_CRGPERIPH_CLKDIV19_sc_gt_clk_a53hpm_START (7)
#define SOC_CRGPERIPH_CLKDIV19_sc_gt_clk_a53hpm_END (7)
#define SOC_CRGPERIPH_CLKDIV19_sc_gt_clk_sdio1_START (8)
#define SOC_CRGPERIPH_CLKDIV19_sc_gt_clk_sdio1_END (8)
#define SOC_CRGPERIPH_CLKDIV19_sc_gt_clk_uart0_START (9)
#define SOC_CRGPERIPH_CLKDIV19_sc_gt_clk_uart0_END (9)
#define SOC_CRGPERIPH_CLKDIV19_sc_gt_clk_uartl_START (10)
#define SOC_CRGPERIPH_CLKDIV19_sc_gt_clk_uartl_END (10)
#define SOC_CRGPERIPH_CLKDIV19_sc_gt_clk_uarth_START (11)
#define SOC_CRGPERIPH_CLKDIV19_sc_gt_clk_uarth_END (11)
#define SOC_CRGPERIPH_CLKDIV19_sc_gt_clk_spi_START (13)
#define SOC_CRGPERIPH_CLKDIV19_sc_gt_clk_spi_END (13)
#define SOC_CRGPERIPH_CLKDIV19_sc_gt_clk_modem_bbp3_START (15)
#define SOC_CRGPERIPH_CLKDIV19_sc_gt_clk_modem_bbp3_END (15)
#define SOC_CRGPERIPH_CLKDIV19_bitmasken_START (16)
#define SOC_CRGPERIPH_CLKDIV19_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_gt_clk_i2c : 1;
        unsigned int sc_gt_clk_modem_bbp0 : 1;
        unsigned int sc_gt_clk_modem_bbp1 : 1;
        unsigned int sc_gt_clk_cfgbus : 1;
        unsigned int sc_gt_clk_isp_i2c : 1;
        unsigned int sc_gt_clk_ptp : 1;
        unsigned int sc_gt_clk_modem_ccpu : 1;
        unsigned int sc_gt_clk_modem_dsp : 1;
        unsigned int sc_gt_clk_modem_peri : 1;
        unsigned int sc_gt_clk_noc_mdm_mst : 1;
        unsigned int sc_gt_clk_320m_pll : 1;
        unsigned int sc_gt_clk_pll_test : 1;
        unsigned int sc_gt_clk_atgc : 1;
        unsigned int sc_gt_pclk_pcie : 1;
        unsigned int reserved : 1;
        unsigned int sc_gt_clk_dp_audio_pll_ao : 1;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_CLKDIV20_UNION;
#endif
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_clk_i2c_START (0)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_clk_i2c_END (0)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_clk_modem_bbp0_START (1)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_clk_modem_bbp0_END (1)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_clk_modem_bbp1_START (2)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_clk_modem_bbp1_END (2)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_clk_cfgbus_START (3)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_clk_cfgbus_END (3)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_clk_isp_i2c_START (4)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_clk_isp_i2c_END (4)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_clk_ptp_START (5)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_clk_ptp_END (5)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_clk_modem_ccpu_START (6)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_clk_modem_ccpu_END (6)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_clk_modem_dsp_START (7)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_clk_modem_dsp_END (7)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_clk_modem_peri_START (8)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_clk_modem_peri_END (8)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_clk_noc_mdm_mst_START (9)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_clk_noc_mdm_mst_END (9)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_clk_320m_pll_START (10)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_clk_320m_pll_END (10)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_clk_pll_test_START (11)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_clk_pll_test_END (11)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_clk_atgc_START (12)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_clk_atgc_END (12)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_pclk_pcie_START (13)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_pclk_pcie_END (13)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_clk_dp_audio_pll_ao_START (15)
#define SOC_CRGPERIPH_CLKDIV20_sc_gt_clk_dp_audio_pll_ao_END (15)
#define SOC_CRGPERIPH_CLKDIV20_bitmasken_START (16)
#define SOC_CRGPERIPH_CLKDIV20_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_gt_clk_cssysdbg_div : 1;
        unsigned int sc_gt_clk_blpwm_peri : 1;
        unsigned int sc_gt_clk_dmc_sys : 1;
        unsigned int sc_gt_clk_dmc_pll : 1;
        unsigned int sc_gt_clk_cpu_gic : 1;
        unsigned int reserved_0 : 1;
        unsigned int sc_gt_clk_abb_sys : 1;
        unsigned int sc_gt_clk_abb_pll : 1;
        unsigned int sel_abb_backup : 1;
        unsigned int sc_gt_clk_socp_deflate : 1;
        unsigned int reserved_1 : 1;
        unsigned int sc_gt_clk_dmabus : 1;
        unsigned int sc_gt_clk_dpctrl_16m : 1;
        unsigned int sc_gt_clk_process_monitor : 1;
        unsigned int sc_gt_clk_jittermon_wmux : 1;
        unsigned int sc_gt_aclk_pcie : 1;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_CLKDIV21_UNION;
#endif
#define SOC_CRGPERIPH_CLKDIV21_sc_gt_clk_cssysdbg_div_START (0)
#define SOC_CRGPERIPH_CLKDIV21_sc_gt_clk_cssysdbg_div_END (0)
#define SOC_CRGPERIPH_CLKDIV21_sc_gt_clk_blpwm_peri_START (1)
#define SOC_CRGPERIPH_CLKDIV21_sc_gt_clk_blpwm_peri_END (1)
#define SOC_CRGPERIPH_CLKDIV21_sc_gt_clk_dmc_sys_START (2)
#define SOC_CRGPERIPH_CLKDIV21_sc_gt_clk_dmc_sys_END (2)
#define SOC_CRGPERIPH_CLKDIV21_sc_gt_clk_dmc_pll_START (3)
#define SOC_CRGPERIPH_CLKDIV21_sc_gt_clk_dmc_pll_END (3)
#define SOC_CRGPERIPH_CLKDIV21_sc_gt_clk_cpu_gic_START (4)
#define SOC_CRGPERIPH_CLKDIV21_sc_gt_clk_cpu_gic_END (4)
#define SOC_CRGPERIPH_CLKDIV21_sc_gt_clk_abb_sys_START (6)
#define SOC_CRGPERIPH_CLKDIV21_sc_gt_clk_abb_sys_END (6)
#define SOC_CRGPERIPH_CLKDIV21_sc_gt_clk_abb_pll_START (7)
#define SOC_CRGPERIPH_CLKDIV21_sc_gt_clk_abb_pll_END (7)
#define SOC_CRGPERIPH_CLKDIV21_sel_abb_backup_START (8)
#define SOC_CRGPERIPH_CLKDIV21_sel_abb_backup_END (8)
#define SOC_CRGPERIPH_CLKDIV21_sc_gt_clk_socp_deflate_START (9)
#define SOC_CRGPERIPH_CLKDIV21_sc_gt_clk_socp_deflate_END (9)
#define SOC_CRGPERIPH_CLKDIV21_sc_gt_clk_dmabus_START (11)
#define SOC_CRGPERIPH_CLKDIV21_sc_gt_clk_dmabus_END (11)
#define SOC_CRGPERIPH_CLKDIV21_sc_gt_clk_dpctrl_16m_START (12)
#define SOC_CRGPERIPH_CLKDIV21_sc_gt_clk_dpctrl_16m_END (12)
#define SOC_CRGPERIPH_CLKDIV21_sc_gt_clk_process_monitor_START (13)
#define SOC_CRGPERIPH_CLKDIV21_sc_gt_clk_process_monitor_END (13)
#define SOC_CRGPERIPH_CLKDIV21_sc_gt_clk_jittermon_wmux_START (14)
#define SOC_CRGPERIPH_CLKDIV21_sc_gt_clk_jittermon_wmux_END (14)
#define SOC_CRGPERIPH_CLKDIV21_sc_gt_aclk_pcie_START (15)
#define SOC_CRGPERIPH_CLKDIV21_sc_gt_aclk_pcie_END (15)
#define SOC_CRGPERIPH_CLKDIV21_bitmasken_START (16)
#define SOC_CRGPERIPH_CLKDIV21_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sel_320m_pll : 1;
        unsigned int div_320m : 3;
        unsigned int reserved_0 : 2;
        unsigned int sel_ao_asp_pll : 1;
        unsigned int sel_isp_snclk3 : 1;
        unsigned int div_isp_snclk3 : 2;
        unsigned int reserved_1 : 1;
        unsigned int div_clk_sys_ddr : 2;
        unsigned int div_clk_sys_sysbus : 2;
        unsigned int reserved_2 : 1;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_CLKDIV22_UNION;
#endif
#define SOC_CRGPERIPH_CLKDIV22_sel_320m_pll_START (0)
#define SOC_CRGPERIPH_CLKDIV22_sel_320m_pll_END (0)
#define SOC_CRGPERIPH_CLKDIV22_div_320m_START (1)
#define SOC_CRGPERIPH_CLKDIV22_div_320m_END (3)
#define SOC_CRGPERIPH_CLKDIV22_sel_ao_asp_pll_START (6)
#define SOC_CRGPERIPH_CLKDIV22_sel_ao_asp_pll_END (6)
#define SOC_CRGPERIPH_CLKDIV22_sel_isp_snclk3_START (7)
#define SOC_CRGPERIPH_CLKDIV22_sel_isp_snclk3_END (7)
#define SOC_CRGPERIPH_CLKDIV22_div_isp_snclk3_START (8)
#define SOC_CRGPERIPH_CLKDIV22_div_isp_snclk3_END (9)
#define SOC_CRGPERIPH_CLKDIV22_div_clk_sys_ddr_START (11)
#define SOC_CRGPERIPH_CLKDIV22_div_clk_sys_ddr_END (12)
#define SOC_CRGPERIPH_CLKDIV22_div_clk_sys_sysbus_START (13)
#define SOC_CRGPERIPH_CLKDIV22_div_clk_sys_sysbus_END (14)
#define SOC_CRGPERIPH_CLKDIV22_bitmasken_START (16)
#define SOC_CRGPERIPH_CLKDIV22_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int div_ddrc_pll : 5;
        unsigned int div_clk_ddrcfg : 2;
        unsigned int sc_gt_clk_ddrcfg : 1;
        unsigned int sc_gt_clk_ddrc_sys : 1;
        unsigned int sc_gt_clk_ddrsys_ao : 1;
        unsigned int div_clk_ddrsys : 2;
        unsigned int sc_gt_clk_ddrsys_noc : 1;
        unsigned int sc_gt_clk_ddrc_sw : 1;
        unsigned int div_clk_dcdrbus_dmc : 2;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_CLKDIV23_UNION;
#endif
#define SOC_CRGPERIPH_CLKDIV23_div_ddrc_pll_START (0)
#define SOC_CRGPERIPH_CLKDIV23_div_ddrc_pll_END (4)
#define SOC_CRGPERIPH_CLKDIV23_div_clk_ddrcfg_START (5)
#define SOC_CRGPERIPH_CLKDIV23_div_clk_ddrcfg_END (6)
#define SOC_CRGPERIPH_CLKDIV23_sc_gt_clk_ddrcfg_START (7)
#define SOC_CRGPERIPH_CLKDIV23_sc_gt_clk_ddrcfg_END (7)
#define SOC_CRGPERIPH_CLKDIV23_sc_gt_clk_ddrc_sys_START (8)
#define SOC_CRGPERIPH_CLKDIV23_sc_gt_clk_ddrc_sys_END (8)
#define SOC_CRGPERIPH_CLKDIV23_sc_gt_clk_ddrsys_ao_START (9)
#define SOC_CRGPERIPH_CLKDIV23_sc_gt_clk_ddrsys_ao_END (9)
#define SOC_CRGPERIPH_CLKDIV23_div_clk_ddrsys_START (10)
#define SOC_CRGPERIPH_CLKDIV23_div_clk_ddrsys_END (11)
#define SOC_CRGPERIPH_CLKDIV23_sc_gt_clk_ddrsys_noc_START (12)
#define SOC_CRGPERIPH_CLKDIV23_sc_gt_clk_ddrsys_noc_END (12)
#define SOC_CRGPERIPH_CLKDIV23_sc_gt_clk_ddrc_sw_START (13)
#define SOC_CRGPERIPH_CLKDIV23_sc_gt_clk_ddrc_sw_END (13)
#define SOC_CRGPERIPH_CLKDIV23_div_clk_dcdrbus_dmc_START (14)
#define SOC_CRGPERIPH_CLKDIV23_div_clk_dcdrbus_dmc_END (15)
#define SOC_CRGPERIPH_CLKDIV23_bitmasken_START (16)
#define SOC_CRGPERIPH_CLKDIV23_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int div_isp_snclk0 : 2;
        unsigned int sc_gt_clk_isp_snclk : 1;
        unsigned int sel_isp_snclk0 : 1;
        unsigned int atclk_to_ispa7_clkoff_sys : 1;
        unsigned int pclkdbg_to_ispa7_clkoff_sys : 1;
        unsigned int div_ao_asp : 4;
        unsigned int div_abb_backup : 6;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_CLKDIV24_UNION;
#endif
#define SOC_CRGPERIPH_CLKDIV24_div_isp_snclk0_START (0)
#define SOC_CRGPERIPH_CLKDIV24_div_isp_snclk0_END (1)
#define SOC_CRGPERIPH_CLKDIV24_sc_gt_clk_isp_snclk_START (2)
#define SOC_CRGPERIPH_CLKDIV24_sc_gt_clk_isp_snclk_END (2)
#define SOC_CRGPERIPH_CLKDIV24_sel_isp_snclk0_START (3)
#define SOC_CRGPERIPH_CLKDIV24_sel_isp_snclk0_END (3)
#define SOC_CRGPERIPH_CLKDIV24_atclk_to_ispa7_clkoff_sys_START (4)
#define SOC_CRGPERIPH_CLKDIV24_atclk_to_ispa7_clkoff_sys_END (4)
#define SOC_CRGPERIPH_CLKDIV24_pclkdbg_to_ispa7_clkoff_sys_START (5)
#define SOC_CRGPERIPH_CLKDIV24_pclkdbg_to_ispa7_clkoff_sys_END (5)
#define SOC_CRGPERIPH_CLKDIV24_div_ao_asp_START (6)
#define SOC_CRGPERIPH_CLKDIV24_div_ao_asp_END (9)
#define SOC_CRGPERIPH_CLKDIV24_div_abb_backup_START (10)
#define SOC_CRGPERIPH_CLKDIV24_div_abb_backup_END (15)
#define SOC_CRGPERIPH_CLKDIV24_bitmasken_START (16)
#define SOC_CRGPERIPH_CLKDIV24_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int div_dmc_pll : 5;
        unsigned int sel_blpwm : 1;
        unsigned int reserved : 2;
        unsigned int div_clk_sys_dmc : 2;
        unsigned int sel_isp_snclk2 : 1;
        unsigned int div_isp_snclk2 : 2;
        unsigned int sel_isp_snclk1 : 1;
        unsigned int div_isp_snclk1 : 2;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_CLKDIV25_UNION;
#endif
#define SOC_CRGPERIPH_CLKDIV25_div_dmc_pll_START (0)
#define SOC_CRGPERIPH_CLKDIV25_div_dmc_pll_END (4)
#define SOC_CRGPERIPH_CLKDIV25_sel_blpwm_START (5)
#define SOC_CRGPERIPH_CLKDIV25_sel_blpwm_END (5)
#define SOC_CRGPERIPH_CLKDIV25_div_clk_sys_dmc_START (8)
#define SOC_CRGPERIPH_CLKDIV25_div_clk_sys_dmc_END (9)
#define SOC_CRGPERIPH_CLKDIV25_sel_isp_snclk2_START (10)
#define SOC_CRGPERIPH_CLKDIV25_sel_isp_snclk2_END (10)
#define SOC_CRGPERIPH_CLKDIV25_div_isp_snclk2_START (11)
#define SOC_CRGPERIPH_CLKDIV25_div_isp_snclk2_END (12)
#define SOC_CRGPERIPH_CLKDIV25_sel_isp_snclk1_START (13)
#define SOC_CRGPERIPH_CLKDIV25_sel_isp_snclk1_END (13)
#define SOC_CRGPERIPH_CLKDIV25_div_isp_snclk1_START (14)
#define SOC_CRGPERIPH_CLKDIV25_div_isp_snclk1_END (15)
#define SOC_CRGPERIPH_CLKDIV25_bitmasken_START (16)
#define SOC_CRGPERIPH_CLKDIV25_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sysbus_idle_req : 1;
        unsigned int cfgbus_idle_req : 1;
        unsigned int dmabus_idle_req : 1;
        unsigned int mmc0bus_idle_req : 1;
        unsigned int mmc1bus_idle_req : 1;
        unsigned int mdmbus_idle_req : 1;
        unsigned int hiseebus_idle_req : 1;
        unsigned int reserved_0 : 3;
        unsigned int sysbus_idle_ack : 1;
        unsigned int cfgbus_idle_ack : 1;
        unsigned int dmabus_idle_ack : 1;
        unsigned int mmc0bus_idle_ack : 1;
        unsigned int mmc1bus_idle_ack : 1;
        unsigned int mdmbus_idle_ack : 1;
        unsigned int hiseebus_idle_ack : 1;
        unsigned int reserved_1 : 3;
        unsigned int sysbus_idle_stat : 1;
        unsigned int cfgbus_idle_stat : 1;
        unsigned int dmabus_idle_stat : 1;
        unsigned int mmc0bus_idle_stat : 1;
        unsigned int mmc1bus_idle_stat : 1;
        unsigned int mdmbus_idle_stat : 1;
        unsigned int hiseebus_idle_stat : 1;
        unsigned int reserved_2 : 5;
    } reg;
} SOC_CRGPERIPH_PERI_STAT0_UNION;
#endif
#define SOC_CRGPERIPH_PERI_STAT0_sysbus_idle_req_START (0)
#define SOC_CRGPERIPH_PERI_STAT0_sysbus_idle_req_END (0)
#define SOC_CRGPERIPH_PERI_STAT0_cfgbus_idle_req_START (1)
#define SOC_CRGPERIPH_PERI_STAT0_cfgbus_idle_req_END (1)
#define SOC_CRGPERIPH_PERI_STAT0_dmabus_idle_req_START (2)
#define SOC_CRGPERIPH_PERI_STAT0_dmabus_idle_req_END (2)
#define SOC_CRGPERIPH_PERI_STAT0_mmc0bus_idle_req_START (3)
#define SOC_CRGPERIPH_PERI_STAT0_mmc0bus_idle_req_END (3)
#define SOC_CRGPERIPH_PERI_STAT0_mmc1bus_idle_req_START (4)
#define SOC_CRGPERIPH_PERI_STAT0_mmc1bus_idle_req_END (4)
#define SOC_CRGPERIPH_PERI_STAT0_mdmbus_idle_req_START (5)
#define SOC_CRGPERIPH_PERI_STAT0_mdmbus_idle_req_END (5)
#define SOC_CRGPERIPH_PERI_STAT0_hiseebus_idle_req_START (6)
#define SOC_CRGPERIPH_PERI_STAT0_hiseebus_idle_req_END (6)
#define SOC_CRGPERIPH_PERI_STAT0_sysbus_idle_ack_START (10)
#define SOC_CRGPERIPH_PERI_STAT0_sysbus_idle_ack_END (10)
#define SOC_CRGPERIPH_PERI_STAT0_cfgbus_idle_ack_START (11)
#define SOC_CRGPERIPH_PERI_STAT0_cfgbus_idle_ack_END (11)
#define SOC_CRGPERIPH_PERI_STAT0_dmabus_idle_ack_START (12)
#define SOC_CRGPERIPH_PERI_STAT0_dmabus_idle_ack_END (12)
#define SOC_CRGPERIPH_PERI_STAT0_mmc0bus_idle_ack_START (13)
#define SOC_CRGPERIPH_PERI_STAT0_mmc0bus_idle_ack_END (13)
#define SOC_CRGPERIPH_PERI_STAT0_mmc1bus_idle_ack_START (14)
#define SOC_CRGPERIPH_PERI_STAT0_mmc1bus_idle_ack_END (14)
#define SOC_CRGPERIPH_PERI_STAT0_mdmbus_idle_ack_START (15)
#define SOC_CRGPERIPH_PERI_STAT0_mdmbus_idle_ack_END (15)
#define SOC_CRGPERIPH_PERI_STAT0_hiseebus_idle_ack_START (16)
#define SOC_CRGPERIPH_PERI_STAT0_hiseebus_idle_ack_END (16)
#define SOC_CRGPERIPH_PERI_STAT0_sysbus_idle_stat_START (20)
#define SOC_CRGPERIPH_PERI_STAT0_sysbus_idle_stat_END (20)
#define SOC_CRGPERIPH_PERI_STAT0_cfgbus_idle_stat_START (21)
#define SOC_CRGPERIPH_PERI_STAT0_cfgbus_idle_stat_END (21)
#define SOC_CRGPERIPH_PERI_STAT0_dmabus_idle_stat_START (22)
#define SOC_CRGPERIPH_PERI_STAT0_dmabus_idle_stat_END (22)
#define SOC_CRGPERIPH_PERI_STAT0_mmc0bus_idle_stat_START (23)
#define SOC_CRGPERIPH_PERI_STAT0_mmc0bus_idle_stat_END (23)
#define SOC_CRGPERIPH_PERI_STAT0_mmc1bus_idle_stat_START (24)
#define SOC_CRGPERIPH_PERI_STAT0_mmc1bus_idle_stat_END (24)
#define SOC_CRGPERIPH_PERI_STAT0_mdmbus_idle_stat_START (25)
#define SOC_CRGPERIPH_PERI_STAT0_mdmbus_idle_stat_END (25)
#define SOC_CRGPERIPH_PERI_STAT0_hiseebus_idle_stat_START (26)
#define SOC_CRGPERIPH_PERI_STAT0_hiseebus_idle_stat_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bootmode : 2;
        unsigned int sc_noc_aobus_idle_flag : 1;
        unsigned int isp_to_ddrc_dfs_en : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 24;
    } reg;
} SOC_CRGPERIPH_PERI_STAT1_UNION;
#endif
#define SOC_CRGPERIPH_PERI_STAT1_bootmode_START (0)
#define SOC_CRGPERIPH_PERI_STAT1_bootmode_END (1)
#define SOC_CRGPERIPH_PERI_STAT1_sc_noc_aobus_idle_flag_START (2)
#define SOC_CRGPERIPH_PERI_STAT1_sc_noc_aobus_idle_flag_END (2)
#define SOC_CRGPERIPH_PERI_STAT1_isp_to_ddrc_dfs_en_START (3)
#define SOC_CRGPERIPH_PERI_STAT1_isp_to_ddrc_dfs_en_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int swdone_clk_ddrc_pll_div : 1;
        unsigned int swdone_clk_sysbus_pll_div : 1;
        unsigned int swdone_clk_lpmcu_pll_div : 1;
        unsigned int swdone_clk_cpu_gic_div : 1;
        unsigned int swdone_clk_isp_snclk3_div : 1;
        unsigned int swdone_clk_ddrcfg : 1;
        unsigned int swdone_clk_modem_bbp0_div : 1;
        unsigned int swdone_clk_modem_bbp1_div : 1;
        unsigned int swdone_aclk_pcie : 1;
        unsigned int swdone_clk_ddrsys_noc : 1;
        unsigned int swdone_pclk_pcie : 1;
        unsigned int swdone_clk_vcodecbus_div : 1;
        unsigned int swdone_clk_venc_div : 1;
        unsigned int swdone_clk_vdec_div : 1;
        unsigned int swdone_clk_isp_snclk2_div : 1;
        unsigned int swdone_clk_cfgbus_div : 1;
        unsigned int swdone_clk_ics_div : 1;
        unsigned int swdone_clk_modem_peri_div : 1;
        unsigned int swdone_clk_sd_div : 1;
        unsigned int swdone_clk_dmabus_div : 1;
        unsigned int swdone_clk_sdio1_div : 1;
        unsigned int swdone_clk_a53hpm_div : 1;
        unsigned int swdone_clk_out1_div : 1;
        unsigned int swdone_clk_blpwm_peri_div : 1;
        unsigned int swdone_clk_isp_snclk0_div : 1;
        unsigned int swdone_clk_ptp_div : 1;
        unsigned int swdone_clk_isp_snclk1_div : 1;
        unsigned int swdone_clk_spi_div : 1;
        unsigned int swdone_clk_i2c_div : 1;
        unsigned int swdone_clk_modem_ccpu_div : 1;
        unsigned int swdone_clk_modem_dsp_div : 1;
        unsigned int swdone_clk_out0_div : 1;
    } reg;
} SOC_CRGPERIPH_PERI_STAT2_UNION;
#endif
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_ddrc_pll_div_START (0)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_ddrc_pll_div_END (0)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_sysbus_pll_div_START (1)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_sysbus_pll_div_END (1)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_lpmcu_pll_div_START (2)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_lpmcu_pll_div_END (2)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_cpu_gic_div_START (3)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_cpu_gic_div_END (3)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_isp_snclk3_div_START (4)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_isp_snclk3_div_END (4)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_ddrcfg_START (5)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_ddrcfg_END (5)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_modem_bbp0_div_START (6)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_modem_bbp0_div_END (6)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_modem_bbp1_div_START (7)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_modem_bbp1_div_END (7)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_aclk_pcie_START (8)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_aclk_pcie_END (8)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_ddrsys_noc_START (9)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_ddrsys_noc_END (9)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_pclk_pcie_START (10)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_pclk_pcie_END (10)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_vcodecbus_div_START (11)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_vcodecbus_div_END (11)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_venc_div_START (12)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_venc_div_END (12)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_vdec_div_START (13)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_vdec_div_END (13)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_isp_snclk2_div_START (14)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_isp_snclk2_div_END (14)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_cfgbus_div_START (15)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_cfgbus_div_END (15)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_ics_div_START (16)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_ics_div_END (16)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_modem_peri_div_START (17)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_modem_peri_div_END (17)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_sd_div_START (18)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_sd_div_END (18)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_dmabus_div_START (19)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_dmabus_div_END (19)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_sdio1_div_START (20)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_sdio1_div_END (20)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_a53hpm_div_START (21)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_a53hpm_div_END (21)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_out1_div_START (22)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_out1_div_END (22)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_blpwm_peri_div_START (23)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_blpwm_peri_div_END (23)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_isp_snclk0_div_START (24)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_isp_snclk0_div_END (24)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_ptp_div_START (25)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_ptp_div_END (25)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_isp_snclk1_div_START (26)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_isp_snclk1_div_END (26)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_spi_div_START (27)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_spi_div_END (27)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_i2c_div_START (28)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_i2c_div_END (28)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_modem_ccpu_div_START (29)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_modem_ccpu_div_END (29)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_modem_dsp_div_START (30)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_modem_dsp_div_END (30)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_out0_div_START (31)
#define SOC_CRGPERIPH_PERI_STAT2_swdone_clk_out0_div_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int peri_avs_vol_up_timeout : 1;
        unsigned int peri_avs_vol_down_timeout : 1;
        unsigned int peri_avs_up_req : 1;
        unsigned int peri_avs_down_req : 1;
        unsigned int peri_avs_ddr_lp_en : 1;
        unsigned int sw_ack_clk_modem_peri_sw : 4;
        unsigned int sw_ack_clk_g3d_sw : 2;
        unsigned int reserved_0 : 1;
        unsigned int sw_ack_clk_ddrc_pll_sw : 4;
        unsigned int sw_ack_clk_modem_ccpu_sw : 2;
        unsigned int sw_ack_clk_modem_dsp_sw : 2;
        unsigned int swdone_clk_modem_bbp2_div : 1;
        unsigned int swdone_clk_modem_bbp3_div : 1;
        unsigned int swdone_clk_cpul_ppll0_div : 1;
        unsigned int swdone_clk_l3_ppll0_div : 1;
        unsigned int ddrclksw2sys : 1;
        unsigned int ddrclksw2pll : 1;
        unsigned int sysbusclksw2sys : 1;
        unsigned int sysbusclksw2pll : 1;
        unsigned int lpmcuclksw2sys : 1;
        unsigned int lpmcuclksw2pll : 1;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_CRGPERIPH_PERI_STAT3_UNION;
#endif
#define SOC_CRGPERIPH_PERI_STAT3_peri_avs_vol_up_timeout_START (0)
#define SOC_CRGPERIPH_PERI_STAT3_peri_avs_vol_up_timeout_END (0)
#define SOC_CRGPERIPH_PERI_STAT3_peri_avs_vol_down_timeout_START (1)
#define SOC_CRGPERIPH_PERI_STAT3_peri_avs_vol_down_timeout_END (1)
#define SOC_CRGPERIPH_PERI_STAT3_peri_avs_up_req_START (2)
#define SOC_CRGPERIPH_PERI_STAT3_peri_avs_up_req_END (2)
#define SOC_CRGPERIPH_PERI_STAT3_peri_avs_down_req_START (3)
#define SOC_CRGPERIPH_PERI_STAT3_peri_avs_down_req_END (3)
#define SOC_CRGPERIPH_PERI_STAT3_peri_avs_ddr_lp_en_START (4)
#define SOC_CRGPERIPH_PERI_STAT3_peri_avs_ddr_lp_en_END (4)
#define SOC_CRGPERIPH_PERI_STAT3_sw_ack_clk_modem_peri_sw_START (5)
#define SOC_CRGPERIPH_PERI_STAT3_sw_ack_clk_modem_peri_sw_END (8)
#define SOC_CRGPERIPH_PERI_STAT3_sw_ack_clk_g3d_sw_START (9)
#define SOC_CRGPERIPH_PERI_STAT3_sw_ack_clk_g3d_sw_END (10)
#define SOC_CRGPERIPH_PERI_STAT3_sw_ack_clk_ddrc_pll_sw_START (12)
#define SOC_CRGPERIPH_PERI_STAT3_sw_ack_clk_ddrc_pll_sw_END (15)
#define SOC_CRGPERIPH_PERI_STAT3_sw_ack_clk_modem_ccpu_sw_START (16)
#define SOC_CRGPERIPH_PERI_STAT3_sw_ack_clk_modem_ccpu_sw_END (17)
#define SOC_CRGPERIPH_PERI_STAT3_sw_ack_clk_modem_dsp_sw_START (18)
#define SOC_CRGPERIPH_PERI_STAT3_sw_ack_clk_modem_dsp_sw_END (19)
#define SOC_CRGPERIPH_PERI_STAT3_swdone_clk_modem_bbp2_div_START (20)
#define SOC_CRGPERIPH_PERI_STAT3_swdone_clk_modem_bbp2_div_END (20)
#define SOC_CRGPERIPH_PERI_STAT3_swdone_clk_modem_bbp3_div_START (21)
#define SOC_CRGPERIPH_PERI_STAT3_swdone_clk_modem_bbp3_div_END (21)
#define SOC_CRGPERIPH_PERI_STAT3_swdone_clk_cpul_ppll0_div_START (22)
#define SOC_CRGPERIPH_PERI_STAT3_swdone_clk_cpul_ppll0_div_END (22)
#define SOC_CRGPERIPH_PERI_STAT3_swdone_clk_l3_ppll0_div_START (23)
#define SOC_CRGPERIPH_PERI_STAT3_swdone_clk_l3_ppll0_div_END (23)
#define SOC_CRGPERIPH_PERI_STAT3_ddrclksw2sys_START (24)
#define SOC_CRGPERIPH_PERI_STAT3_ddrclksw2sys_END (24)
#define SOC_CRGPERIPH_PERI_STAT3_ddrclksw2pll_START (25)
#define SOC_CRGPERIPH_PERI_STAT3_ddrclksw2pll_END (25)
#define SOC_CRGPERIPH_PERI_STAT3_sysbusclksw2sys_START (26)
#define SOC_CRGPERIPH_PERI_STAT3_sysbusclksw2sys_END (26)
#define SOC_CRGPERIPH_PERI_STAT3_sysbusclksw2pll_START (27)
#define SOC_CRGPERIPH_PERI_STAT3_sysbusclksw2pll_END (27)
#define SOC_CRGPERIPH_PERI_STAT3_lpmcuclksw2sys_START (28)
#define SOC_CRGPERIPH_PERI_STAT3_lpmcuclksw2sys_END (28)
#define SOC_CRGPERIPH_PERI_STAT3_lpmcuclksw2pll_START (29)
#define SOC_CRGPERIPH_PERI_STAT3_lpmcuclksw2pll_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 8;
        unsigned int reserved_1: 1;
        unsigned int reserved_2: 23;
    } reg;
} SOC_CRGPERIPH_PERI_CTRL0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_auto_clk_cci2sysbus_async_bypass : 1;
        unsigned int gt_auto_clk_i2c347_bypass : 1;
        unsigned int gt_auto_clk_uart025_bypass : 1;
        unsigned int gt_auto_clk_uart14_bypass : 1;
        unsigned int gt_auto_clk_spi13_bypass : 1;
        unsigned int a53_0_ocldo_iso_byppass : 1;
        unsigned int a53_1_ocldo_iso_byppass : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_CRGPERIPH_PERI_CTRL1_UNION;
#endif
#define SOC_CRGPERIPH_PERI_CTRL1_gt_auto_clk_cci2sysbus_async_bypass_START (0)
#define SOC_CRGPERIPH_PERI_CTRL1_gt_auto_clk_cci2sysbus_async_bypass_END (0)
#define SOC_CRGPERIPH_PERI_CTRL1_gt_auto_clk_i2c347_bypass_START (1)
#define SOC_CRGPERIPH_PERI_CTRL1_gt_auto_clk_i2c347_bypass_END (1)
#define SOC_CRGPERIPH_PERI_CTRL1_gt_auto_clk_uart025_bypass_START (2)
#define SOC_CRGPERIPH_PERI_CTRL1_gt_auto_clk_uart025_bypass_END (2)
#define SOC_CRGPERIPH_PERI_CTRL1_gt_auto_clk_uart14_bypass_START (3)
#define SOC_CRGPERIPH_PERI_CTRL1_gt_auto_clk_uart14_bypass_END (3)
#define SOC_CRGPERIPH_PERI_CTRL1_gt_auto_clk_spi13_bypass_START (4)
#define SOC_CRGPERIPH_PERI_CTRL1_gt_auto_clk_spi13_bypass_END (4)
#define SOC_CRGPERIPH_PERI_CTRL1_a53_0_ocldo_iso_byppass_START (5)
#define SOC_CRGPERIPH_PERI_CTRL1_a53_0_ocldo_iso_byppass_END (5)
#define SOC_CRGPERIPH_PERI_CTRL1_a53_1_ocldo_iso_byppass_START (6)
#define SOC_CRGPERIPH_PERI_CTRL1_a53_1_ocldo_iso_byppass_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pclkdbg_sel : 1;
        unsigned int pclkdbg_clkoff_sys : 1;
        unsigned int pclkdbg_to_a53cfg_clkoff_sys_0 : 1;
        unsigned int pclkdbg_to_a53cfg_clkoff_sys_1 : 1;
        unsigned int pclkdbg_to_ao_clkoff_sys : 1;
        unsigned int pclkdbg_to_lpmcu_clkoff_sys : 1;
        unsigned int traceclkin_clkoff_sys : 1;
        unsigned int atclkoff_sys : 1;
        unsigned int atclk_to_iomcu_clkoff_sys : 1;
        unsigned int atclk_to_a53crg_clkoff_sys_0 : 1;
        unsigned int atclk_to_a53crg_clkoff_sys_1 : 1;
        unsigned int cs_soft_rst_req : 1;
        unsigned int traceclkin_sel : 2;
        unsigned int reserved_0 : 1;
        unsigned int cs_cssys_rst_req : 1;
        unsigned int atclk_to_modem_clkoff_sys : 1;
        unsigned int pclkdbg_to_modem_clkoff_sys : 1;
        unsigned int modem_cssys_rst_req : 1;
        unsigned int asp_cssys_rst_req : 1;
        unsigned int atclk_to_asp_clkoff_sys : 1;
        unsigned int pclkdbg_to_asp_clkoff_sys : 1;
        unsigned int div_time_stamp : 3;
        unsigned int gt_clk_cssys_atclk : 1;
        unsigned int ip_rst_cssys_atclk : 1;
        unsigned int gt_clk_time_stamp : 1;
        unsigned int ip_rst_time_stamp : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
    } reg;
} SOC_CRGPERIPH_PERI_CTRL2_UNION;
#endif
#define SOC_CRGPERIPH_PERI_CTRL2_pclkdbg_sel_START (0)
#define SOC_CRGPERIPH_PERI_CTRL2_pclkdbg_sel_END (0)
#define SOC_CRGPERIPH_PERI_CTRL2_pclkdbg_clkoff_sys_START (1)
#define SOC_CRGPERIPH_PERI_CTRL2_pclkdbg_clkoff_sys_END (1)
#define SOC_CRGPERIPH_PERI_CTRL2_pclkdbg_to_a53cfg_clkoff_sys_0_START (2)
#define SOC_CRGPERIPH_PERI_CTRL2_pclkdbg_to_a53cfg_clkoff_sys_0_END (2)
#define SOC_CRGPERIPH_PERI_CTRL2_pclkdbg_to_a53cfg_clkoff_sys_1_START (3)
#define SOC_CRGPERIPH_PERI_CTRL2_pclkdbg_to_a53cfg_clkoff_sys_1_END (3)
#define SOC_CRGPERIPH_PERI_CTRL2_pclkdbg_to_ao_clkoff_sys_START (4)
#define SOC_CRGPERIPH_PERI_CTRL2_pclkdbg_to_ao_clkoff_sys_END (4)
#define SOC_CRGPERIPH_PERI_CTRL2_pclkdbg_to_lpmcu_clkoff_sys_START (5)
#define SOC_CRGPERIPH_PERI_CTRL2_pclkdbg_to_lpmcu_clkoff_sys_END (5)
#define SOC_CRGPERIPH_PERI_CTRL2_traceclkin_clkoff_sys_START (6)
#define SOC_CRGPERIPH_PERI_CTRL2_traceclkin_clkoff_sys_END (6)
#define SOC_CRGPERIPH_PERI_CTRL2_atclkoff_sys_START (7)
#define SOC_CRGPERIPH_PERI_CTRL2_atclkoff_sys_END (7)
#define SOC_CRGPERIPH_PERI_CTRL2_atclk_to_iomcu_clkoff_sys_START (8)
#define SOC_CRGPERIPH_PERI_CTRL2_atclk_to_iomcu_clkoff_sys_END (8)
#define SOC_CRGPERIPH_PERI_CTRL2_atclk_to_a53crg_clkoff_sys_0_START (9)
#define SOC_CRGPERIPH_PERI_CTRL2_atclk_to_a53crg_clkoff_sys_0_END (9)
#define SOC_CRGPERIPH_PERI_CTRL2_atclk_to_a53crg_clkoff_sys_1_START (10)
#define SOC_CRGPERIPH_PERI_CTRL2_atclk_to_a53crg_clkoff_sys_1_END (10)
#define SOC_CRGPERIPH_PERI_CTRL2_cs_soft_rst_req_START (11)
#define SOC_CRGPERIPH_PERI_CTRL2_cs_soft_rst_req_END (11)
#define SOC_CRGPERIPH_PERI_CTRL2_traceclkin_sel_START (12)
#define SOC_CRGPERIPH_PERI_CTRL2_traceclkin_sel_END (13)
#define SOC_CRGPERIPH_PERI_CTRL2_cs_cssys_rst_req_START (15)
#define SOC_CRGPERIPH_PERI_CTRL2_cs_cssys_rst_req_END (15)
#define SOC_CRGPERIPH_PERI_CTRL2_atclk_to_modem_clkoff_sys_START (16)
#define SOC_CRGPERIPH_PERI_CTRL2_atclk_to_modem_clkoff_sys_END (16)
#define SOC_CRGPERIPH_PERI_CTRL2_pclkdbg_to_modem_clkoff_sys_START (17)
#define SOC_CRGPERIPH_PERI_CTRL2_pclkdbg_to_modem_clkoff_sys_END (17)
#define SOC_CRGPERIPH_PERI_CTRL2_modem_cssys_rst_req_START (18)
#define SOC_CRGPERIPH_PERI_CTRL2_modem_cssys_rst_req_END (18)
#define SOC_CRGPERIPH_PERI_CTRL2_asp_cssys_rst_req_START (19)
#define SOC_CRGPERIPH_PERI_CTRL2_asp_cssys_rst_req_END (19)
#define SOC_CRGPERIPH_PERI_CTRL2_atclk_to_asp_clkoff_sys_START (20)
#define SOC_CRGPERIPH_PERI_CTRL2_atclk_to_asp_clkoff_sys_END (20)
#define SOC_CRGPERIPH_PERI_CTRL2_pclkdbg_to_asp_clkoff_sys_START (21)
#define SOC_CRGPERIPH_PERI_CTRL2_pclkdbg_to_asp_clkoff_sys_END (21)
#define SOC_CRGPERIPH_PERI_CTRL2_div_time_stamp_START (22)
#define SOC_CRGPERIPH_PERI_CTRL2_div_time_stamp_END (24)
#define SOC_CRGPERIPH_PERI_CTRL2_gt_clk_cssys_atclk_START (25)
#define SOC_CRGPERIPH_PERI_CTRL2_gt_clk_cssys_atclk_END (25)
#define SOC_CRGPERIPH_PERI_CTRL2_ip_rst_cssys_atclk_START (26)
#define SOC_CRGPERIPH_PERI_CTRL2_ip_rst_cssys_atclk_END (26)
#define SOC_CRGPERIPH_PERI_CTRL2_gt_clk_time_stamp_START (27)
#define SOC_CRGPERIPH_PERI_CTRL2_gt_clk_time_stamp_END (27)
#define SOC_CRGPERIPH_PERI_CTRL2_ip_rst_time_stamp_START (28)
#define SOC_CRGPERIPH_PERI_CTRL2_ip_rst_time_stamp_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int noc_timeout_en : 1;
        unsigned int reserved_0 : 5;
        unsigned int mem_ctrl_pgt_lpm3 : 6;
        unsigned int mcpu_fiq_n : 2;
        unsigned int reserved_1 : 18;
    } reg;
} SOC_CRGPERIPH_PERI_CTRL3_UNION;
#endif
#define SOC_CRGPERIPH_PERI_CTRL3_noc_timeout_en_START (0)
#define SOC_CRGPERIPH_PERI_CTRL3_noc_timeout_en_END (0)
#define SOC_CRGPERIPH_PERI_CTRL3_mem_ctrl_pgt_lpm3_START (6)
#define SOC_CRGPERIPH_PERI_CTRL3_mem_ctrl_pgt_lpm3_END (11)
#define SOC_CRGPERIPH_PERI_CTRL3_mcpu_fiq_n_START (12)
#define SOC_CRGPERIPH_PERI_CTRL3_mcpu_fiq_n_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 1;
        unsigned int reserved_1: 31;
    } reg;
} SOC_CRGPERIPH_PERI_CTRL4_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_CRGPERIPH_PERI_CTRL5_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_CRGPERIPH_PERI_CTRL6_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int timer9_A_en_sel : 1;
        unsigned int timer9_A_en_ov : 1;
        unsigned int timer9_B_en_sel : 1;
        unsigned int timer9_B_en_ov : 1;
        unsigned int timer10_A_en_sel : 1;
        unsigned int timer10_A_en_ov : 1;
        unsigned int timer10_B_en_sel : 1;
        unsigned int timer10_B_en_ov : 1;
        unsigned int timer11_A_en_sel : 1;
        unsigned int timer11_A_en_ov : 1;
        unsigned int timer11_B_en_sel : 1;
        unsigned int timer11_B_en_ov : 1;
        unsigned int timer12_A_en_sel : 1;
        unsigned int timer12_A_en_ov : 1;
        unsigned int timer12_B_en_sel : 1;
        unsigned int timer12_B_en_ov : 1;
        unsigned int wdog1enov : 1;
        unsigned int wdog0enov : 1;
        unsigned int wd0_dbgack_byp : 1;
        unsigned int wd1_dbgack_byp : 1;
        unsigned int reserved : 12;
    } reg;
} SOC_CRGPERIPH_PERTIMECTRL_UNION;
#endif
#define SOC_CRGPERIPH_PERTIMECTRL_timer9_A_en_sel_START (0)
#define SOC_CRGPERIPH_PERTIMECTRL_timer9_A_en_sel_END (0)
#define SOC_CRGPERIPH_PERTIMECTRL_timer9_A_en_ov_START (1)
#define SOC_CRGPERIPH_PERTIMECTRL_timer9_A_en_ov_END (1)
#define SOC_CRGPERIPH_PERTIMECTRL_timer9_B_en_sel_START (2)
#define SOC_CRGPERIPH_PERTIMECTRL_timer9_B_en_sel_END (2)
#define SOC_CRGPERIPH_PERTIMECTRL_timer9_B_en_ov_START (3)
#define SOC_CRGPERIPH_PERTIMECTRL_timer9_B_en_ov_END (3)
#define SOC_CRGPERIPH_PERTIMECTRL_timer10_A_en_sel_START (4)
#define SOC_CRGPERIPH_PERTIMECTRL_timer10_A_en_sel_END (4)
#define SOC_CRGPERIPH_PERTIMECTRL_timer10_A_en_ov_START (5)
#define SOC_CRGPERIPH_PERTIMECTRL_timer10_A_en_ov_END (5)
#define SOC_CRGPERIPH_PERTIMECTRL_timer10_B_en_sel_START (6)
#define SOC_CRGPERIPH_PERTIMECTRL_timer10_B_en_sel_END (6)
#define SOC_CRGPERIPH_PERTIMECTRL_timer10_B_en_ov_START (7)
#define SOC_CRGPERIPH_PERTIMECTRL_timer10_B_en_ov_END (7)
#define SOC_CRGPERIPH_PERTIMECTRL_timer11_A_en_sel_START (8)
#define SOC_CRGPERIPH_PERTIMECTRL_timer11_A_en_sel_END (8)
#define SOC_CRGPERIPH_PERTIMECTRL_timer11_A_en_ov_START (9)
#define SOC_CRGPERIPH_PERTIMECTRL_timer11_A_en_ov_END (9)
#define SOC_CRGPERIPH_PERTIMECTRL_timer11_B_en_sel_START (10)
#define SOC_CRGPERIPH_PERTIMECTRL_timer11_B_en_sel_END (10)
#define SOC_CRGPERIPH_PERTIMECTRL_timer11_B_en_ov_START (11)
#define SOC_CRGPERIPH_PERTIMECTRL_timer11_B_en_ov_END (11)
#define SOC_CRGPERIPH_PERTIMECTRL_timer12_A_en_sel_START (12)
#define SOC_CRGPERIPH_PERTIMECTRL_timer12_A_en_sel_END (12)
#define SOC_CRGPERIPH_PERTIMECTRL_timer12_A_en_ov_START (13)
#define SOC_CRGPERIPH_PERTIMECTRL_timer12_A_en_ov_END (13)
#define SOC_CRGPERIPH_PERTIMECTRL_timer12_B_en_sel_START (14)
#define SOC_CRGPERIPH_PERTIMECTRL_timer12_B_en_sel_END (14)
#define SOC_CRGPERIPH_PERTIMECTRL_timer12_B_en_ov_START (15)
#define SOC_CRGPERIPH_PERTIMECTRL_timer12_B_en_ov_END (15)
#define SOC_CRGPERIPH_PERTIMECTRL_wdog1enov_START (16)
#define SOC_CRGPERIPH_PERTIMECTRL_wdog1enov_END (16)
#define SOC_CRGPERIPH_PERTIMECTRL_wdog0enov_START (17)
#define SOC_CRGPERIPH_PERTIMECTRL_wdog0enov_END (17)
#define SOC_CRGPERIPH_PERTIMECTRL_wd0_dbgack_byp_START (18)
#define SOC_CRGPERIPH_PERTIMECTRL_wd0_dbgack_byp_END (18)
#define SOC_CRGPERIPH_PERTIMECTRL_wd1_dbgack_byp_START (19)
#define SOC_CRGPERIPH_PERTIMECTRL_wd1_dbgack_byp_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int isp_iso_en : 1;
        unsigned int venc_iso_en : 1;
        unsigned int vdec_iso_en : 1;
        unsigned int reserved_0 : 1;
        unsigned int modemsubsys_iso_en : 1;
        unsigned int g3d_iso_en : 1;
        unsigned int mediasubsys_iso_en : 1;
        unsigned int dmc_iso_en : 1;
        unsigned int ics_iso_en : 1;
        unsigned int isp_cpu_iso_en : 1;
        unsigned int isp_fe_iso_en : 1;
        unsigned int cci_iso_en : 1;
        unsigned int fcm_core_0_iso_en : 4;
        unsigned int fcm_cluster_iso_en : 1;
        unsigned int fcm_core_1_iso_en : 4;
        unsigned int reserved_1 : 1;
        unsigned int modemperi_iso_en : 1;
        unsigned int modemirm_iso_en : 1;
        unsigned int ivp32dsp_iso_en : 1;
        unsigned int usb_refclk_iso_en : 1;
        unsigned int mmc1_subsys_iso_en : 1;
        unsigned int isp_srt_iso_en : 1;
        unsigned int isp_bpe_iso_en : 1;
        unsigned int ics2_iso_en : 1;
        unsigned int reserved_2 : 2;
    } reg;
} SOC_CRGPERIPH_ISOEN_UNION;
#endif
#define SOC_CRGPERIPH_ISOEN_isp_iso_en_START (0)
#define SOC_CRGPERIPH_ISOEN_isp_iso_en_END (0)
#define SOC_CRGPERIPH_ISOEN_venc_iso_en_START (1)
#define SOC_CRGPERIPH_ISOEN_venc_iso_en_END (1)
#define SOC_CRGPERIPH_ISOEN_vdec_iso_en_START (2)
#define SOC_CRGPERIPH_ISOEN_vdec_iso_en_END (2)
#define SOC_CRGPERIPH_ISOEN_modemsubsys_iso_en_START (4)
#define SOC_CRGPERIPH_ISOEN_modemsubsys_iso_en_END (4)
#define SOC_CRGPERIPH_ISOEN_g3d_iso_en_START (5)
#define SOC_CRGPERIPH_ISOEN_g3d_iso_en_END (5)
#define SOC_CRGPERIPH_ISOEN_mediasubsys_iso_en_START (6)
#define SOC_CRGPERIPH_ISOEN_mediasubsys_iso_en_END (6)
#define SOC_CRGPERIPH_ISOEN_dmc_iso_en_START (7)
#define SOC_CRGPERIPH_ISOEN_dmc_iso_en_END (7)
#define SOC_CRGPERIPH_ISOEN_ics_iso_en_START (8)
#define SOC_CRGPERIPH_ISOEN_ics_iso_en_END (8)
#define SOC_CRGPERIPH_ISOEN_isp_cpu_iso_en_START (9)
#define SOC_CRGPERIPH_ISOEN_isp_cpu_iso_en_END (9)
#define SOC_CRGPERIPH_ISOEN_isp_fe_iso_en_START (10)
#define SOC_CRGPERIPH_ISOEN_isp_fe_iso_en_END (10)
#define SOC_CRGPERIPH_ISOEN_cci_iso_en_START (11)
#define SOC_CRGPERIPH_ISOEN_cci_iso_en_END (11)
#define SOC_CRGPERIPH_ISOEN_fcm_core_0_iso_en_START (12)
#define SOC_CRGPERIPH_ISOEN_fcm_core_0_iso_en_END (15)
#define SOC_CRGPERIPH_ISOEN_fcm_cluster_iso_en_START (16)
#define SOC_CRGPERIPH_ISOEN_fcm_cluster_iso_en_END (16)
#define SOC_CRGPERIPH_ISOEN_fcm_core_1_iso_en_START (17)
#define SOC_CRGPERIPH_ISOEN_fcm_core_1_iso_en_END (20)
#define SOC_CRGPERIPH_ISOEN_modemperi_iso_en_START (22)
#define SOC_CRGPERIPH_ISOEN_modemperi_iso_en_END (22)
#define SOC_CRGPERIPH_ISOEN_modemirm_iso_en_START (23)
#define SOC_CRGPERIPH_ISOEN_modemirm_iso_en_END (23)
#define SOC_CRGPERIPH_ISOEN_ivp32dsp_iso_en_START (24)
#define SOC_CRGPERIPH_ISOEN_ivp32dsp_iso_en_END (24)
#define SOC_CRGPERIPH_ISOEN_usb_refclk_iso_en_START (25)
#define SOC_CRGPERIPH_ISOEN_usb_refclk_iso_en_END (25)
#define SOC_CRGPERIPH_ISOEN_mmc1_subsys_iso_en_START (26)
#define SOC_CRGPERIPH_ISOEN_mmc1_subsys_iso_en_END (26)
#define SOC_CRGPERIPH_ISOEN_isp_srt_iso_en_START (27)
#define SOC_CRGPERIPH_ISOEN_isp_srt_iso_en_END (27)
#define SOC_CRGPERIPH_ISOEN_isp_bpe_iso_en_START (28)
#define SOC_CRGPERIPH_ISOEN_isp_bpe_iso_en_END (28)
#define SOC_CRGPERIPH_ISOEN_ics2_iso_en_START (29)
#define SOC_CRGPERIPH_ISOEN_ics2_iso_en_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int isp_iso_en : 1;
        unsigned int venc_iso_en : 1;
        unsigned int vdec_iso_en : 1;
        unsigned int reserved_0 : 1;
        unsigned int modemsubsys_iso_en : 1;
        unsigned int g3d_iso_en : 1;
        unsigned int mediasubsys_iso_en : 1;
        unsigned int dmc_iso_en : 1;
        unsigned int ics_iso_en : 1;
        unsigned int isp_cpu_iso_en : 1;
        unsigned int isp_fe_iso_en : 1;
        unsigned int cci_iso_en : 1;
        unsigned int fcm_core_0_iso_en : 4;
        unsigned int fcm_cluster_iso_en : 1;
        unsigned int fcm_core_1_iso_en : 4;
        unsigned int reserved_1 : 1;
        unsigned int modemperi_iso_en : 1;
        unsigned int modemirm_iso_en : 1;
        unsigned int ivp32dsp_iso_en : 1;
        unsigned int usb_refclk_iso_en : 1;
        unsigned int mmc1_subsys_iso_en : 1;
        unsigned int isp_srt_iso_en : 1;
        unsigned int isp_bpe_iso_en : 1;
        unsigned int ics2_iso_en : 1;
        unsigned int reserved_2 : 2;
    } reg;
} SOC_CRGPERIPH_ISODIS_UNION;
#endif
#define SOC_CRGPERIPH_ISODIS_isp_iso_en_START (0)
#define SOC_CRGPERIPH_ISODIS_isp_iso_en_END (0)
#define SOC_CRGPERIPH_ISODIS_venc_iso_en_START (1)
#define SOC_CRGPERIPH_ISODIS_venc_iso_en_END (1)
#define SOC_CRGPERIPH_ISODIS_vdec_iso_en_START (2)
#define SOC_CRGPERIPH_ISODIS_vdec_iso_en_END (2)
#define SOC_CRGPERIPH_ISODIS_modemsubsys_iso_en_START (4)
#define SOC_CRGPERIPH_ISODIS_modemsubsys_iso_en_END (4)
#define SOC_CRGPERIPH_ISODIS_g3d_iso_en_START (5)
#define SOC_CRGPERIPH_ISODIS_g3d_iso_en_END (5)
#define SOC_CRGPERIPH_ISODIS_mediasubsys_iso_en_START (6)
#define SOC_CRGPERIPH_ISODIS_mediasubsys_iso_en_END (6)
#define SOC_CRGPERIPH_ISODIS_dmc_iso_en_START (7)
#define SOC_CRGPERIPH_ISODIS_dmc_iso_en_END (7)
#define SOC_CRGPERIPH_ISODIS_ics_iso_en_START (8)
#define SOC_CRGPERIPH_ISODIS_ics_iso_en_END (8)
#define SOC_CRGPERIPH_ISODIS_isp_cpu_iso_en_START (9)
#define SOC_CRGPERIPH_ISODIS_isp_cpu_iso_en_END (9)
#define SOC_CRGPERIPH_ISODIS_isp_fe_iso_en_START (10)
#define SOC_CRGPERIPH_ISODIS_isp_fe_iso_en_END (10)
#define SOC_CRGPERIPH_ISODIS_cci_iso_en_START (11)
#define SOC_CRGPERIPH_ISODIS_cci_iso_en_END (11)
#define SOC_CRGPERIPH_ISODIS_fcm_core_0_iso_en_START (12)
#define SOC_CRGPERIPH_ISODIS_fcm_core_0_iso_en_END (15)
#define SOC_CRGPERIPH_ISODIS_fcm_cluster_iso_en_START (16)
#define SOC_CRGPERIPH_ISODIS_fcm_cluster_iso_en_END (16)
#define SOC_CRGPERIPH_ISODIS_fcm_core_1_iso_en_START (17)
#define SOC_CRGPERIPH_ISODIS_fcm_core_1_iso_en_END (20)
#define SOC_CRGPERIPH_ISODIS_modemperi_iso_en_START (22)
#define SOC_CRGPERIPH_ISODIS_modemperi_iso_en_END (22)
#define SOC_CRGPERIPH_ISODIS_modemirm_iso_en_START (23)
#define SOC_CRGPERIPH_ISODIS_modemirm_iso_en_END (23)
#define SOC_CRGPERIPH_ISODIS_ivp32dsp_iso_en_START (24)
#define SOC_CRGPERIPH_ISODIS_ivp32dsp_iso_en_END (24)
#define SOC_CRGPERIPH_ISODIS_usb_refclk_iso_en_START (25)
#define SOC_CRGPERIPH_ISODIS_usb_refclk_iso_en_END (25)
#define SOC_CRGPERIPH_ISODIS_mmc1_subsys_iso_en_START (26)
#define SOC_CRGPERIPH_ISODIS_mmc1_subsys_iso_en_END (26)
#define SOC_CRGPERIPH_ISODIS_isp_srt_iso_en_START (27)
#define SOC_CRGPERIPH_ISODIS_isp_srt_iso_en_END (27)
#define SOC_CRGPERIPH_ISODIS_isp_bpe_iso_en_START (28)
#define SOC_CRGPERIPH_ISODIS_isp_bpe_iso_en_END (28)
#define SOC_CRGPERIPH_ISODIS_ics2_iso_en_START (29)
#define SOC_CRGPERIPH_ISODIS_ics2_iso_en_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int isp_iso_en : 1;
        unsigned int venc_iso_en : 1;
        unsigned int vdec_iso_en : 1;
        unsigned int reserved_0 : 1;
        unsigned int modemsubsys_iso_en : 1;
        unsigned int g3d_iso_en : 1;
        unsigned int mediasubsys_iso_en : 1;
        unsigned int dmc_iso_en : 1;
        unsigned int ics_iso_en : 1;
        unsigned int isp_cpu_iso_en : 1;
        unsigned int isp_fe_iso_en : 1;
        unsigned int cci_iso_en : 1;
        unsigned int fcm_core_0_iso_en : 4;
        unsigned int fcm_cluster_iso_en : 1;
        unsigned int fcm_core_1_iso_en : 4;
        unsigned int reserved_1 : 1;
        unsigned int modemperi_iso_en : 1;
        unsigned int modemirm_iso_en : 1;
        unsigned int ivp32dsp_iso_en : 1;
        unsigned int usb_refclk_iso_en : 1;
        unsigned int mmc1_subsys_iso_en : 1;
        unsigned int isp_srt_iso_en : 1;
        unsigned int isp_bpe_iso_en : 1;
        unsigned int ics2_iso_en : 1;
        unsigned int reserved_2 : 2;
    } reg;
} SOC_CRGPERIPH_ISOSTAT_UNION;
#endif
#define SOC_CRGPERIPH_ISOSTAT_isp_iso_en_START (0)
#define SOC_CRGPERIPH_ISOSTAT_isp_iso_en_END (0)
#define SOC_CRGPERIPH_ISOSTAT_venc_iso_en_START (1)
#define SOC_CRGPERIPH_ISOSTAT_venc_iso_en_END (1)
#define SOC_CRGPERIPH_ISOSTAT_vdec_iso_en_START (2)
#define SOC_CRGPERIPH_ISOSTAT_vdec_iso_en_END (2)
#define SOC_CRGPERIPH_ISOSTAT_modemsubsys_iso_en_START (4)
#define SOC_CRGPERIPH_ISOSTAT_modemsubsys_iso_en_END (4)
#define SOC_CRGPERIPH_ISOSTAT_g3d_iso_en_START (5)
#define SOC_CRGPERIPH_ISOSTAT_g3d_iso_en_END (5)
#define SOC_CRGPERIPH_ISOSTAT_mediasubsys_iso_en_START (6)
#define SOC_CRGPERIPH_ISOSTAT_mediasubsys_iso_en_END (6)
#define SOC_CRGPERIPH_ISOSTAT_dmc_iso_en_START (7)
#define SOC_CRGPERIPH_ISOSTAT_dmc_iso_en_END (7)
#define SOC_CRGPERIPH_ISOSTAT_ics_iso_en_START (8)
#define SOC_CRGPERIPH_ISOSTAT_ics_iso_en_END (8)
#define SOC_CRGPERIPH_ISOSTAT_isp_cpu_iso_en_START (9)
#define SOC_CRGPERIPH_ISOSTAT_isp_cpu_iso_en_END (9)
#define SOC_CRGPERIPH_ISOSTAT_isp_fe_iso_en_START (10)
#define SOC_CRGPERIPH_ISOSTAT_isp_fe_iso_en_END (10)
#define SOC_CRGPERIPH_ISOSTAT_cci_iso_en_START (11)
#define SOC_CRGPERIPH_ISOSTAT_cci_iso_en_END (11)
#define SOC_CRGPERIPH_ISOSTAT_fcm_core_0_iso_en_START (12)
#define SOC_CRGPERIPH_ISOSTAT_fcm_core_0_iso_en_END (15)
#define SOC_CRGPERIPH_ISOSTAT_fcm_cluster_iso_en_START (16)
#define SOC_CRGPERIPH_ISOSTAT_fcm_cluster_iso_en_END (16)
#define SOC_CRGPERIPH_ISOSTAT_fcm_core_1_iso_en_START (17)
#define SOC_CRGPERIPH_ISOSTAT_fcm_core_1_iso_en_END (20)
#define SOC_CRGPERIPH_ISOSTAT_modemperi_iso_en_START (22)
#define SOC_CRGPERIPH_ISOSTAT_modemperi_iso_en_END (22)
#define SOC_CRGPERIPH_ISOSTAT_modemirm_iso_en_START (23)
#define SOC_CRGPERIPH_ISOSTAT_modemirm_iso_en_END (23)
#define SOC_CRGPERIPH_ISOSTAT_ivp32dsp_iso_en_START (24)
#define SOC_CRGPERIPH_ISOSTAT_ivp32dsp_iso_en_END (24)
#define SOC_CRGPERIPH_ISOSTAT_usb_refclk_iso_en_START (25)
#define SOC_CRGPERIPH_ISOSTAT_usb_refclk_iso_en_END (25)
#define SOC_CRGPERIPH_ISOSTAT_mmc1_subsys_iso_en_START (26)
#define SOC_CRGPERIPH_ISOSTAT_mmc1_subsys_iso_en_END (26)
#define SOC_CRGPERIPH_ISOSTAT_isp_srt_iso_en_START (27)
#define SOC_CRGPERIPH_ISOSTAT_isp_srt_iso_en_END (27)
#define SOC_CRGPERIPH_ISOSTAT_isp_bpe_iso_en_START (28)
#define SOC_CRGPERIPH_ISOSTAT_isp_bpe_iso_en_END (28)
#define SOC_CRGPERIPH_ISOSTAT_ics2_iso_en_START (29)
#define SOC_CRGPERIPH_ISOSTAT_ics2_iso_en_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int isppwren : 1;
        unsigned int vencpwren : 1;
        unsigned int vdecpwren : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int mediasubsyspwren : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int icspwren : 1;
        unsigned int reserved_4 : 1;
        unsigned int cci_pwren : 1;
        unsigned int fcm_pwren : 8;
        unsigned int modemperipwren : 1;
        unsigned int modemirmpwren : 1;
        unsigned int ivp32dsppwren : 1;
        unsigned int ispsrtpwren : 1;
        unsigned int ispbpepwren : 1;
        unsigned int ispcpupwren : 1;
        unsigned int ispfepwren : 1;
        unsigned int ics2pwren : 1;
        unsigned int reserved_5 : 5;
    } reg;
} SOC_CRGPERIPH_PERPWREN_UNION;
#endif
#define SOC_CRGPERIPH_PERPWREN_isppwren_START (0)
#define SOC_CRGPERIPH_PERPWREN_isppwren_END (0)
#define SOC_CRGPERIPH_PERPWREN_vencpwren_START (1)
#define SOC_CRGPERIPH_PERPWREN_vencpwren_END (1)
#define SOC_CRGPERIPH_PERPWREN_vdecpwren_START (2)
#define SOC_CRGPERIPH_PERPWREN_vdecpwren_END (2)
#define SOC_CRGPERIPH_PERPWREN_mediasubsyspwren_START (5)
#define SOC_CRGPERIPH_PERPWREN_mediasubsyspwren_END (5)
#define SOC_CRGPERIPH_PERPWREN_icspwren_START (8)
#define SOC_CRGPERIPH_PERPWREN_icspwren_END (8)
#define SOC_CRGPERIPH_PERPWREN_cci_pwren_START (10)
#define SOC_CRGPERIPH_PERPWREN_cci_pwren_END (10)
#define SOC_CRGPERIPH_PERPWREN_fcm_pwren_START (11)
#define SOC_CRGPERIPH_PERPWREN_fcm_pwren_END (18)
#define SOC_CRGPERIPH_PERPWREN_modemperipwren_START (19)
#define SOC_CRGPERIPH_PERPWREN_modemperipwren_END (19)
#define SOC_CRGPERIPH_PERPWREN_modemirmpwren_START (20)
#define SOC_CRGPERIPH_PERPWREN_modemirmpwren_END (20)
#define SOC_CRGPERIPH_PERPWREN_ivp32dsppwren_START (21)
#define SOC_CRGPERIPH_PERPWREN_ivp32dsppwren_END (21)
#define SOC_CRGPERIPH_PERPWREN_ispsrtpwren_START (22)
#define SOC_CRGPERIPH_PERPWREN_ispsrtpwren_END (22)
#define SOC_CRGPERIPH_PERPWREN_ispbpepwren_START (23)
#define SOC_CRGPERIPH_PERPWREN_ispbpepwren_END (23)
#define SOC_CRGPERIPH_PERPWREN_ispcpupwren_START (24)
#define SOC_CRGPERIPH_PERPWREN_ispcpupwren_END (24)
#define SOC_CRGPERIPH_PERPWREN_ispfepwren_START (25)
#define SOC_CRGPERIPH_PERPWREN_ispfepwren_END (25)
#define SOC_CRGPERIPH_PERPWREN_ics2pwren_START (26)
#define SOC_CRGPERIPH_PERPWREN_ics2pwren_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int isppwrdis : 1;
        unsigned int vencpwrdis : 1;
        unsigned int vdecpwrdis : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int mediasubsyspwrdis : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int icspwrdis : 1;
        unsigned int reserved_4 : 1;
        unsigned int cci_pwrdis : 1;
        unsigned int fcm_pwrdis : 8;
        unsigned int modemperipwrdis : 1;
        unsigned int modemirmpwrdis : 1;
        unsigned int ivp32dsppwrdis : 1;
        unsigned int ispsrtpwrdis : 1;
        unsigned int ispbpepwrdis : 1;
        unsigned int ispcpupwrdis : 1;
        unsigned int ispfepwrdis : 1;
        unsigned int ics2pwrdis : 1;
        unsigned int reserved_5 : 5;
    } reg;
} SOC_CRGPERIPH_PERPWRDIS_UNION;
#endif
#define SOC_CRGPERIPH_PERPWRDIS_isppwrdis_START (0)
#define SOC_CRGPERIPH_PERPWRDIS_isppwrdis_END (0)
#define SOC_CRGPERIPH_PERPWRDIS_vencpwrdis_START (1)
#define SOC_CRGPERIPH_PERPWRDIS_vencpwrdis_END (1)
#define SOC_CRGPERIPH_PERPWRDIS_vdecpwrdis_START (2)
#define SOC_CRGPERIPH_PERPWRDIS_vdecpwrdis_END (2)
#define SOC_CRGPERIPH_PERPWRDIS_mediasubsyspwrdis_START (5)
#define SOC_CRGPERIPH_PERPWRDIS_mediasubsyspwrdis_END (5)
#define SOC_CRGPERIPH_PERPWRDIS_icspwrdis_START (8)
#define SOC_CRGPERIPH_PERPWRDIS_icspwrdis_END (8)
#define SOC_CRGPERIPH_PERPWRDIS_cci_pwrdis_START (10)
#define SOC_CRGPERIPH_PERPWRDIS_cci_pwrdis_END (10)
#define SOC_CRGPERIPH_PERPWRDIS_fcm_pwrdis_START (11)
#define SOC_CRGPERIPH_PERPWRDIS_fcm_pwrdis_END (18)
#define SOC_CRGPERIPH_PERPWRDIS_modemperipwrdis_START (19)
#define SOC_CRGPERIPH_PERPWRDIS_modemperipwrdis_END (19)
#define SOC_CRGPERIPH_PERPWRDIS_modemirmpwrdis_START (20)
#define SOC_CRGPERIPH_PERPWRDIS_modemirmpwrdis_END (20)
#define SOC_CRGPERIPH_PERPWRDIS_ivp32dsppwrdis_START (21)
#define SOC_CRGPERIPH_PERPWRDIS_ivp32dsppwrdis_END (21)
#define SOC_CRGPERIPH_PERPWRDIS_ispsrtpwrdis_START (22)
#define SOC_CRGPERIPH_PERPWRDIS_ispsrtpwrdis_END (22)
#define SOC_CRGPERIPH_PERPWRDIS_ispbpepwrdis_START (23)
#define SOC_CRGPERIPH_PERPWRDIS_ispbpepwrdis_END (23)
#define SOC_CRGPERIPH_PERPWRDIS_ispcpupwrdis_START (24)
#define SOC_CRGPERIPH_PERPWRDIS_ispcpupwrdis_END (24)
#define SOC_CRGPERIPH_PERPWRDIS_ispfepwrdis_START (25)
#define SOC_CRGPERIPH_PERPWRDIS_ispfepwrdis_END (25)
#define SOC_CRGPERIPH_PERPWRDIS_ics2pwrdis_START (26)
#define SOC_CRGPERIPH_PERPWRDIS_ics2pwrdis_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int isppwrstat : 1;
        unsigned int vencpwrstat : 1;
        unsigned int vdecpwrstat : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int mediasubsyspwrstat : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int icspwrstat : 1;
        unsigned int reserved_4 : 1;
        unsigned int cci_pwrstat : 1;
        unsigned int fcm_pwrstat : 8;
        unsigned int modemperipwrstat : 1;
        unsigned int modemirmpwrstat : 1;
        unsigned int ivp32dsppwrstat : 1;
        unsigned int ispstrpwrstat : 1;
        unsigned int ispbpepwrstat : 1;
        unsigned int ispcpupwrstat : 1;
        unsigned int ispfepwrstat : 1;
        unsigned int ics2pwrstat : 1;
        unsigned int reserved_5 : 5;
    } reg;
} SOC_CRGPERIPH_PERPWRSTAT_UNION;
#endif
#define SOC_CRGPERIPH_PERPWRSTAT_isppwrstat_START (0)
#define SOC_CRGPERIPH_PERPWRSTAT_isppwrstat_END (0)
#define SOC_CRGPERIPH_PERPWRSTAT_vencpwrstat_START (1)
#define SOC_CRGPERIPH_PERPWRSTAT_vencpwrstat_END (1)
#define SOC_CRGPERIPH_PERPWRSTAT_vdecpwrstat_START (2)
#define SOC_CRGPERIPH_PERPWRSTAT_vdecpwrstat_END (2)
#define SOC_CRGPERIPH_PERPWRSTAT_mediasubsyspwrstat_START (5)
#define SOC_CRGPERIPH_PERPWRSTAT_mediasubsyspwrstat_END (5)
#define SOC_CRGPERIPH_PERPWRSTAT_icspwrstat_START (8)
#define SOC_CRGPERIPH_PERPWRSTAT_icspwrstat_END (8)
#define SOC_CRGPERIPH_PERPWRSTAT_cci_pwrstat_START (10)
#define SOC_CRGPERIPH_PERPWRSTAT_cci_pwrstat_END (10)
#define SOC_CRGPERIPH_PERPWRSTAT_fcm_pwrstat_START (11)
#define SOC_CRGPERIPH_PERPWRSTAT_fcm_pwrstat_END (18)
#define SOC_CRGPERIPH_PERPWRSTAT_modemperipwrstat_START (19)
#define SOC_CRGPERIPH_PERPWRSTAT_modemperipwrstat_END (19)
#define SOC_CRGPERIPH_PERPWRSTAT_modemirmpwrstat_START (20)
#define SOC_CRGPERIPH_PERPWRSTAT_modemirmpwrstat_END (20)
#define SOC_CRGPERIPH_PERPWRSTAT_ivp32dsppwrstat_START (21)
#define SOC_CRGPERIPH_PERPWRSTAT_ivp32dsppwrstat_END (21)
#define SOC_CRGPERIPH_PERPWRSTAT_ispstrpwrstat_START (22)
#define SOC_CRGPERIPH_PERPWRSTAT_ispstrpwrstat_END (22)
#define SOC_CRGPERIPH_PERPWRSTAT_ispbpepwrstat_START (23)
#define SOC_CRGPERIPH_PERPWRSTAT_ispbpepwrstat_END (23)
#define SOC_CRGPERIPH_PERPWRSTAT_ispcpupwrstat_START (24)
#define SOC_CRGPERIPH_PERPWRSTAT_ispcpupwrstat_END (24)
#define SOC_CRGPERIPH_PERPWRSTAT_ispfepwrstat_START (25)
#define SOC_CRGPERIPH_PERPWRSTAT_ispfepwrstat_END (25)
#define SOC_CRGPERIPH_PERPWRSTAT_ics2pwrstat_START (26)
#define SOC_CRGPERIPH_PERPWRSTAT_ics2pwrstat_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int isppwrack : 1;
        unsigned int vencpwrack : 1;
        unsigned int vdecpwrack : 1;
        unsigned int ispsrtpwrack : 1;
        unsigned int ispbpepwrack : 1;
        unsigned int mediasubsyspwrack : 1;
        unsigned int g3dshpwrack6 : 1;
        unsigned int g3dshpwrack7 : 1;
        unsigned int icspwrack : 1;
        unsigned int ics2_pwrack : 1;
        unsigned int cci_pwrack : 1;
        unsigned int fcm_little_core0_pwrack : 1;
        unsigned int fcm_little_core1_pwrack : 1;
        unsigned int fcm_little_core2_pwrack : 1;
        unsigned int fcm_little_core3_pwrack : 1;
        unsigned int fcm_middle_core0_pwrack : 1;
        unsigned int fcm_middle_core1_pwrack : 1;
        unsigned int fcm_big_core0_pwrack : 1;
        unsigned int fcm_big_core1_pwrack : 1;
        unsigned int reserved : 1;
        unsigned int g3dshpwrack0 : 1;
        unsigned int g3dshpwrack1 : 1;
        unsigned int g3dshpwrack2 : 1;
        unsigned int g3dshpwrack3 : 1;
        unsigned int g3dshpwrack4 : 1;
        unsigned int g3dshpwrack5 : 1;
        unsigned int g3dcg0en : 1;
        unsigned int modemperipwrack : 1;
        unsigned int modemirmpwrack : 1;
        unsigned int ivp32dsppwrack : 1;
        unsigned int ispcpupwrack : 1;
        unsigned int ispfepwrack : 1;
    } reg;
} SOC_CRGPERIPH_PERPWRACK_UNION;
#endif
#define SOC_CRGPERIPH_PERPWRACK_isppwrack_START (0)
#define SOC_CRGPERIPH_PERPWRACK_isppwrack_END (0)
#define SOC_CRGPERIPH_PERPWRACK_vencpwrack_START (1)
#define SOC_CRGPERIPH_PERPWRACK_vencpwrack_END (1)
#define SOC_CRGPERIPH_PERPWRACK_vdecpwrack_START (2)
#define SOC_CRGPERIPH_PERPWRACK_vdecpwrack_END (2)
#define SOC_CRGPERIPH_PERPWRACK_ispsrtpwrack_START (3)
#define SOC_CRGPERIPH_PERPWRACK_ispsrtpwrack_END (3)
#define SOC_CRGPERIPH_PERPWRACK_ispbpepwrack_START (4)
#define SOC_CRGPERIPH_PERPWRACK_ispbpepwrack_END (4)
#define SOC_CRGPERIPH_PERPWRACK_mediasubsyspwrack_START (5)
#define SOC_CRGPERIPH_PERPWRACK_mediasubsyspwrack_END (5)
#define SOC_CRGPERIPH_PERPWRACK_g3dshpwrack6_START (6)
#define SOC_CRGPERIPH_PERPWRACK_g3dshpwrack6_END (6)
#define SOC_CRGPERIPH_PERPWRACK_g3dshpwrack7_START (7)
#define SOC_CRGPERIPH_PERPWRACK_g3dshpwrack7_END (7)
#define SOC_CRGPERIPH_PERPWRACK_icspwrack_START (8)
#define SOC_CRGPERIPH_PERPWRACK_icspwrack_END (8)
#define SOC_CRGPERIPH_PERPWRACK_ics2_pwrack_START (9)
#define SOC_CRGPERIPH_PERPWRACK_ics2_pwrack_END (9)
#define SOC_CRGPERIPH_PERPWRACK_cci_pwrack_START (10)
#define SOC_CRGPERIPH_PERPWRACK_cci_pwrack_END (10)
#define SOC_CRGPERIPH_PERPWRACK_fcm_little_core0_pwrack_START (11)
#define SOC_CRGPERIPH_PERPWRACK_fcm_little_core0_pwrack_END (11)
#define SOC_CRGPERIPH_PERPWRACK_fcm_little_core1_pwrack_START (12)
#define SOC_CRGPERIPH_PERPWRACK_fcm_little_core1_pwrack_END (12)
#define SOC_CRGPERIPH_PERPWRACK_fcm_little_core2_pwrack_START (13)
#define SOC_CRGPERIPH_PERPWRACK_fcm_little_core2_pwrack_END (13)
#define SOC_CRGPERIPH_PERPWRACK_fcm_little_core3_pwrack_START (14)
#define SOC_CRGPERIPH_PERPWRACK_fcm_little_core3_pwrack_END (14)
#define SOC_CRGPERIPH_PERPWRACK_fcm_middle_core0_pwrack_START (15)
#define SOC_CRGPERIPH_PERPWRACK_fcm_middle_core0_pwrack_END (15)
#define SOC_CRGPERIPH_PERPWRACK_fcm_middle_core1_pwrack_START (16)
#define SOC_CRGPERIPH_PERPWRACK_fcm_middle_core1_pwrack_END (16)
#define SOC_CRGPERIPH_PERPWRACK_fcm_big_core0_pwrack_START (17)
#define SOC_CRGPERIPH_PERPWRACK_fcm_big_core0_pwrack_END (17)
#define SOC_CRGPERIPH_PERPWRACK_fcm_big_core1_pwrack_START (18)
#define SOC_CRGPERIPH_PERPWRACK_fcm_big_core1_pwrack_END (18)
#define SOC_CRGPERIPH_PERPWRACK_g3dshpwrack0_START (20)
#define SOC_CRGPERIPH_PERPWRACK_g3dshpwrack0_END (20)
#define SOC_CRGPERIPH_PERPWRACK_g3dshpwrack1_START (21)
#define SOC_CRGPERIPH_PERPWRACK_g3dshpwrack1_END (21)
#define SOC_CRGPERIPH_PERPWRACK_g3dshpwrack2_START (22)
#define SOC_CRGPERIPH_PERPWRACK_g3dshpwrack2_END (22)
#define SOC_CRGPERIPH_PERPWRACK_g3dshpwrack3_START (23)
#define SOC_CRGPERIPH_PERPWRACK_g3dshpwrack3_END (23)
#define SOC_CRGPERIPH_PERPWRACK_g3dshpwrack4_START (24)
#define SOC_CRGPERIPH_PERPWRACK_g3dshpwrack4_END (24)
#define SOC_CRGPERIPH_PERPWRACK_g3dshpwrack5_START (25)
#define SOC_CRGPERIPH_PERPWRACK_g3dshpwrack5_END (25)
#define SOC_CRGPERIPH_PERPWRACK_g3dcg0en_START (26)
#define SOC_CRGPERIPH_PERPWRACK_g3dcg0en_END (26)
#define SOC_CRGPERIPH_PERPWRACK_modemperipwrack_START (27)
#define SOC_CRGPERIPH_PERPWRACK_modemperipwrack_END (27)
#define SOC_CRGPERIPH_PERPWRACK_modemirmpwrack_START (28)
#define SOC_CRGPERIPH_PERPWRACK_modemirmpwrack_END (28)
#define SOC_CRGPERIPH_PERPWRACK_ivp32dsppwrack_START (29)
#define SOC_CRGPERIPH_PERPWRACK_ivp32dsppwrack_END (29)
#define SOC_CRGPERIPH_PERPWRACK_ispcpupwrack_START (30)
#define SOC_CRGPERIPH_PERPWRACK_ispcpupwrack_END (30)
#define SOC_CRGPERIPH_PERPWRACK_ispfepwrack_START (31)
#define SOC_CRGPERIPH_PERPWRACK_ispfepwrack_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clkon_pclkdbg : 1;
        unsigned int clkon_pclkdbg_top : 1;
        unsigned int reserved : 10;
        unsigned int gt_clk_cpu_l3 : 1;
        unsigned int gt_clk_cpu_big : 1;
        unsigned int gt_clk_cpu_middle : 1;
        unsigned int gt_clk_cpu_little : 1;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_FCM_CLKEN_UNION;
#endif
#define SOC_CRGPERIPH_FCM_CLKEN_clkon_pclkdbg_START (0)
#define SOC_CRGPERIPH_FCM_CLKEN_clkon_pclkdbg_END (0)
#define SOC_CRGPERIPH_FCM_CLKEN_clkon_pclkdbg_top_START (1)
#define SOC_CRGPERIPH_FCM_CLKEN_clkon_pclkdbg_top_END (1)
#define SOC_CRGPERIPH_FCM_CLKEN_gt_clk_cpu_l3_START (12)
#define SOC_CRGPERIPH_FCM_CLKEN_gt_clk_cpu_l3_END (12)
#define SOC_CRGPERIPH_FCM_CLKEN_gt_clk_cpu_big_START (13)
#define SOC_CRGPERIPH_FCM_CLKEN_gt_clk_cpu_big_END (13)
#define SOC_CRGPERIPH_FCM_CLKEN_gt_clk_cpu_middle_START (14)
#define SOC_CRGPERIPH_FCM_CLKEN_gt_clk_cpu_middle_END (14)
#define SOC_CRGPERIPH_FCM_CLKEN_gt_clk_cpu_little_START (15)
#define SOC_CRGPERIPH_FCM_CLKEN_gt_clk_cpu_little_END (15)
#define SOC_CRGPERIPH_FCM_CLKEN_bitmasken_START (16)
#define SOC_CRGPERIPH_FCM_CLKEN_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core_por_rst_req_little : 4;
        unsigned int core_por_rst_req_middle : 2;
        unsigned int core_por_rst_req_big : 2;
        unsigned int presetdbg_rst_req : 1;
        unsigned int coresight_soft_rst_req : 1;
        unsigned int cluster_soft_rst_req : 1;
        unsigned int scu_soft_rst_req : 1;
        unsigned int reserved : 20;
    } reg;
} SOC_CRGPERIPH_FCM_RSTEN_UNION;
#endif
#define SOC_CRGPERIPH_FCM_RSTEN_core_por_rst_req_little_START (0)
#define SOC_CRGPERIPH_FCM_RSTEN_core_por_rst_req_little_END (3)
#define SOC_CRGPERIPH_FCM_RSTEN_core_por_rst_req_middle_START (4)
#define SOC_CRGPERIPH_FCM_RSTEN_core_por_rst_req_middle_END (5)
#define SOC_CRGPERIPH_FCM_RSTEN_core_por_rst_req_big_START (6)
#define SOC_CRGPERIPH_FCM_RSTEN_core_por_rst_req_big_END (7)
#define SOC_CRGPERIPH_FCM_RSTEN_presetdbg_rst_req_START (8)
#define SOC_CRGPERIPH_FCM_RSTEN_presetdbg_rst_req_END (8)
#define SOC_CRGPERIPH_FCM_RSTEN_coresight_soft_rst_req_START (9)
#define SOC_CRGPERIPH_FCM_RSTEN_coresight_soft_rst_req_END (9)
#define SOC_CRGPERIPH_FCM_RSTEN_cluster_soft_rst_req_START (10)
#define SOC_CRGPERIPH_FCM_RSTEN_cluster_soft_rst_req_END (10)
#define SOC_CRGPERIPH_FCM_RSTEN_scu_soft_rst_req_START (11)
#define SOC_CRGPERIPH_FCM_RSTEN_scu_soft_rst_req_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core_por_rst_req_little : 4;
        unsigned int core_por_rst_req_middle : 2;
        unsigned int core_por_rst_req_big : 2;
        unsigned int presetdbg_rst_req : 1;
        unsigned int coresight_soft_rst_req : 1;
        unsigned int cluster_soft_rst_req : 1;
        unsigned int scu_soft_rst_req : 1;
        unsigned int reserved : 20;
    } reg;
} SOC_CRGPERIPH_FCM_RSTDIS_UNION;
#endif
#define SOC_CRGPERIPH_FCM_RSTDIS_core_por_rst_req_little_START (0)
#define SOC_CRGPERIPH_FCM_RSTDIS_core_por_rst_req_little_END (3)
#define SOC_CRGPERIPH_FCM_RSTDIS_core_por_rst_req_middle_START (4)
#define SOC_CRGPERIPH_FCM_RSTDIS_core_por_rst_req_middle_END (5)
#define SOC_CRGPERIPH_FCM_RSTDIS_core_por_rst_req_big_START (6)
#define SOC_CRGPERIPH_FCM_RSTDIS_core_por_rst_req_big_END (7)
#define SOC_CRGPERIPH_FCM_RSTDIS_presetdbg_rst_req_START (8)
#define SOC_CRGPERIPH_FCM_RSTDIS_presetdbg_rst_req_END (8)
#define SOC_CRGPERIPH_FCM_RSTDIS_coresight_soft_rst_req_START (9)
#define SOC_CRGPERIPH_FCM_RSTDIS_coresight_soft_rst_req_END (9)
#define SOC_CRGPERIPH_FCM_RSTDIS_cluster_soft_rst_req_START (10)
#define SOC_CRGPERIPH_FCM_RSTDIS_cluster_soft_rst_req_END (10)
#define SOC_CRGPERIPH_FCM_RSTDIS_scu_soft_rst_req_START (11)
#define SOC_CRGPERIPH_FCM_RSTDIS_scu_soft_rst_req_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core_por_rst_req_little : 4;
        unsigned int core_por_rst_req_middle : 2;
        unsigned int core_por_rst_req_big : 2;
        unsigned int presetdbg_rst_req : 1;
        unsigned int coresight_soft_rst_req : 1;
        unsigned int cluster_soft_rst_req : 1;
        unsigned int scu_soft_rst_req : 1;
        unsigned int reserved : 20;
    } reg;
} SOC_CRGPERIPH_FCM_RSTSTAT_UNION;
#endif
#define SOC_CRGPERIPH_FCM_RSTSTAT_core_por_rst_req_little_START (0)
#define SOC_CRGPERIPH_FCM_RSTSTAT_core_por_rst_req_little_END (3)
#define SOC_CRGPERIPH_FCM_RSTSTAT_core_por_rst_req_middle_START (4)
#define SOC_CRGPERIPH_FCM_RSTSTAT_core_por_rst_req_middle_END (5)
#define SOC_CRGPERIPH_FCM_RSTSTAT_core_por_rst_req_big_START (6)
#define SOC_CRGPERIPH_FCM_RSTSTAT_core_por_rst_req_big_END (7)
#define SOC_CRGPERIPH_FCM_RSTSTAT_presetdbg_rst_req_START (8)
#define SOC_CRGPERIPH_FCM_RSTSTAT_presetdbg_rst_req_END (8)
#define SOC_CRGPERIPH_FCM_RSTSTAT_coresight_soft_rst_req_START (9)
#define SOC_CRGPERIPH_FCM_RSTSTAT_coresight_soft_rst_req_END (9)
#define SOC_CRGPERIPH_FCM_RSTSTAT_cluster_soft_rst_req_START (10)
#define SOC_CRGPERIPH_FCM_RSTSTAT_cluster_soft_rst_req_END (10)
#define SOC_CRGPERIPH_FCM_RSTSTAT_scu_soft_rst_req_START (11)
#define SOC_CRGPERIPH_FCM_RSTSTAT_scu_soft_rst_req_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int d_pwrdnreqn : 1;
        unsigned int reserved_0 : 1;
        unsigned int d_cactives : 1;
        unsigned int pwrqacceptns : 1;
        unsigned int pwrqdeneys : 1;
        unsigned int reserved_1 : 27;
    } reg;
} SOC_CRGPERIPH_FCM0_ADBLPSTAT_UNION;
#endif
#define SOC_CRGPERIPH_FCM0_ADBLPSTAT_d_pwrdnreqn_START (0)
#define SOC_CRGPERIPH_FCM0_ADBLPSTAT_d_pwrdnreqn_END (0)
#define SOC_CRGPERIPH_FCM0_ADBLPSTAT_d_cactives_START (2)
#define SOC_CRGPERIPH_FCM0_ADBLPSTAT_d_cactives_END (2)
#define SOC_CRGPERIPH_FCM0_ADBLPSTAT_pwrqacceptns_START (3)
#define SOC_CRGPERIPH_FCM0_ADBLPSTAT_pwrqacceptns_END (3)
#define SOC_CRGPERIPH_FCM0_ADBLPSTAT_pwrqdeneys_START (4)
#define SOC_CRGPERIPH_FCM0_ADBLPSTAT_pwrqdeneys_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cpu_little_core_dbgpwrdup : 4;
        unsigned int cpu_middle_core_dbgpwrdup : 2;
        unsigned int cpu_big_core_dbgpwrdup : 2;
        unsigned int reserved : 24;
    } reg;
} SOC_CRGPERIPH_FCM_DBGPWRDUP_UNION;
#endif
#define SOC_CRGPERIPH_FCM_DBGPWRDUP_cpu_little_core_dbgpwrdup_START (0)
#define SOC_CRGPERIPH_FCM_DBGPWRDUP_cpu_little_core_dbgpwrdup_END (3)
#define SOC_CRGPERIPH_FCM_DBGPWRDUP_cpu_middle_core_dbgpwrdup_START (4)
#define SOC_CRGPERIPH_FCM_DBGPWRDUP_cpu_middle_core_dbgpwrdup_END (5)
#define SOC_CRGPERIPH_FCM_DBGPWRDUP_cpu_big_core_dbgpwrdup_START (6)
#define SOC_CRGPERIPH_FCM_DBGPWRDUP_cpu_big_core_dbgpwrdup_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 3;
        unsigned int reserved_1: 3;
        unsigned int reserved_2: 3;
        unsigned int reserved_3: 3;
        unsigned int reserved_4: 4;
        unsigned int reserved_5: 7;
        unsigned int reserved_6: 1;
        unsigned int reserved_7: 8;
    } reg;
} SOC_CRGPERIPH_A53_OCLDOVSET_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int a53_ocldo_req : 4;
        unsigned int a53_core0_ocldo_stat : 3;
        unsigned int a53_core0_mtcmos_stat : 1;
        unsigned int a53_core1_ocldo_stat : 3;
        unsigned int a53_core1_mtcmos_stat : 1;
        unsigned int a53_core2_ocldo_stat : 3;
        unsigned int a53_core2_mtcmos_stat : 1;
        unsigned int a53_core3_ocldo_stat : 3;
        unsigned int a53_core3_mtcmos_stat : 1;
        unsigned int reserved_0 : 10;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_CRGPERIPH_A53_OCLDO_STAT_UNION;
#endif
#define SOC_CRGPERIPH_A53_OCLDO_STAT_a53_ocldo_req_START (0)
#define SOC_CRGPERIPH_A53_OCLDO_STAT_a53_ocldo_req_END (3)
#define SOC_CRGPERIPH_A53_OCLDO_STAT_a53_core0_ocldo_stat_START (4)
#define SOC_CRGPERIPH_A53_OCLDO_STAT_a53_core0_ocldo_stat_END (6)
#define SOC_CRGPERIPH_A53_OCLDO_STAT_a53_core0_mtcmos_stat_START (7)
#define SOC_CRGPERIPH_A53_OCLDO_STAT_a53_core0_mtcmos_stat_END (7)
#define SOC_CRGPERIPH_A53_OCLDO_STAT_a53_core1_ocldo_stat_START (8)
#define SOC_CRGPERIPH_A53_OCLDO_STAT_a53_core1_ocldo_stat_END (10)
#define SOC_CRGPERIPH_A53_OCLDO_STAT_a53_core1_mtcmos_stat_START (11)
#define SOC_CRGPERIPH_A53_OCLDO_STAT_a53_core1_mtcmos_stat_END (11)
#define SOC_CRGPERIPH_A53_OCLDO_STAT_a53_core2_ocldo_stat_START (12)
#define SOC_CRGPERIPH_A53_OCLDO_STAT_a53_core2_ocldo_stat_END (14)
#define SOC_CRGPERIPH_A53_OCLDO_STAT_a53_core2_mtcmos_stat_START (15)
#define SOC_CRGPERIPH_A53_OCLDO_STAT_a53_core2_mtcmos_stat_END (15)
#define SOC_CRGPERIPH_A53_OCLDO_STAT_a53_core3_ocldo_stat_START (16)
#define SOC_CRGPERIPH_A53_OCLDO_STAT_a53_core3_ocldo_stat_END (18)
#define SOC_CRGPERIPH_A53_OCLDO_STAT_a53_core3_mtcmos_stat_START (19)
#define SOC_CRGPERIPH_A53_OCLDO_STAT_a53_core3_mtcmos_stat_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int d_pwrdnreqn : 1;
        unsigned int reserved_0 : 1;
        unsigned int d_cactives : 1;
        unsigned int pwrqacceptns : 1;
        unsigned int pwrqdeneys : 1;
        unsigned int reserved_1 : 27;
    } reg;
} SOC_CRGPERIPH_FCM1_ADBLPSTAT_UNION;
#endif
#define SOC_CRGPERIPH_FCM1_ADBLPSTAT_d_pwrdnreqn_START (0)
#define SOC_CRGPERIPH_FCM1_ADBLPSTAT_d_pwrdnreqn_END (0)
#define SOC_CRGPERIPH_FCM1_ADBLPSTAT_d_cactives_START (2)
#define SOC_CRGPERIPH_FCM1_ADBLPSTAT_d_cactives_END (2)
#define SOC_CRGPERIPH_FCM1_ADBLPSTAT_pwrqacceptns_START (3)
#define SOC_CRGPERIPH_FCM1_ADBLPSTAT_pwrqacceptns_END (3)
#define SOC_CRGPERIPH_FCM1_ADBLPSTAT_pwrqdeneys_START (4)
#define SOC_CRGPERIPH_FCM1_ADBLPSTAT_pwrqdeneys_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int d_pwrdnreqn : 1;
        unsigned int reserved_0 : 1;
        unsigned int d_cactives : 1;
        unsigned int pwrqacceptns : 1;
        unsigned int pwrqdeneys : 1;
        unsigned int reserved_1 : 27;
    } reg;
} SOC_CRGPERIPH_FCM_PERIPH_ADBLPSTAT_UNION;
#endif
#define SOC_CRGPERIPH_FCM_PERIPH_ADBLPSTAT_d_pwrdnreqn_START (0)
#define SOC_CRGPERIPH_FCM_PERIPH_ADBLPSTAT_d_pwrdnreqn_END (0)
#define SOC_CRGPERIPH_FCM_PERIPH_ADBLPSTAT_d_cactives_START (2)
#define SOC_CRGPERIPH_FCM_PERIPH_ADBLPSTAT_d_cactives_END (2)
#define SOC_CRGPERIPH_FCM_PERIPH_ADBLPSTAT_pwrqacceptns_START (3)
#define SOC_CRGPERIPH_FCM_PERIPH_ADBLPSTAT_pwrqacceptns_END (3)
#define SOC_CRGPERIPH_FCM_PERIPH_ADBLPSTAT_pwrqdeneys_START (4)
#define SOC_CRGPERIPH_FCM_PERIPH_ADBLPSTAT_pwrqdeneys_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int d_pwrdnreqn : 1;
        unsigned int reserved_0 : 1;
        unsigned int d_cactives : 1;
        unsigned int pwrqacceptns : 1;
        unsigned int pwrqdeneys : 1;
        unsigned int reserved_1 : 27;
    } reg;
} SOC_CRGPERIPH_FCM_ACP_ADBLPSTAT_UNION;
#endif
#define SOC_CRGPERIPH_FCM_ACP_ADBLPSTAT_d_pwrdnreqn_START (0)
#define SOC_CRGPERIPH_FCM_ACP_ADBLPSTAT_d_pwrdnreqn_END (0)
#define SOC_CRGPERIPH_FCM_ACP_ADBLPSTAT_d_cactives_START (2)
#define SOC_CRGPERIPH_FCM_ACP_ADBLPSTAT_d_cactives_END (2)
#define SOC_CRGPERIPH_FCM_ACP_ADBLPSTAT_pwrqacceptns_START (3)
#define SOC_CRGPERIPH_FCM_ACP_ADBLPSTAT_pwrqacceptns_END (3)
#define SOC_CRGPERIPH_FCM_ACP_ADBLPSTAT_pwrqdeneys_START (4)
#define SOC_CRGPERIPH_FCM_ACP_ADBLPSTAT_pwrqdeneys_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int a57_core0_ocldo_vset : 3;
        unsigned int a57_core1_ocldo_vset : 3;
        unsigned int a57_core2_ocldo_vset : 3;
        unsigned int a57_core3_ocldo_vset : 3;
        unsigned int a57_ocldo_bypass : 4;
        unsigned int ocldo_a_sel : 4;
        unsigned int reserved_0 : 4;
        unsigned int reserved_1 : 8;
    } reg;
} SOC_CRGPERIPH_MAIA_OCLDOVSET_UNION;
#endif
#define SOC_CRGPERIPH_MAIA_OCLDOVSET_a57_core0_ocldo_vset_START (0)
#define SOC_CRGPERIPH_MAIA_OCLDOVSET_a57_core0_ocldo_vset_END (2)
#define SOC_CRGPERIPH_MAIA_OCLDOVSET_a57_core1_ocldo_vset_START (3)
#define SOC_CRGPERIPH_MAIA_OCLDOVSET_a57_core1_ocldo_vset_END (5)
#define SOC_CRGPERIPH_MAIA_OCLDOVSET_a57_core2_ocldo_vset_START (6)
#define SOC_CRGPERIPH_MAIA_OCLDOVSET_a57_core2_ocldo_vset_END (8)
#define SOC_CRGPERIPH_MAIA_OCLDOVSET_a57_core3_ocldo_vset_START (9)
#define SOC_CRGPERIPH_MAIA_OCLDOVSET_a57_core3_ocldo_vset_END (11)
#define SOC_CRGPERIPH_MAIA_OCLDOVSET_a57_ocldo_bypass_START (12)
#define SOC_CRGPERIPH_MAIA_OCLDOVSET_a57_ocldo_bypass_END (15)
#define SOC_CRGPERIPH_MAIA_OCLDOVSET_ocldo_a_sel_START (16)
#define SOC_CRGPERIPH_MAIA_OCLDOVSET_ocldo_a_sel_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int eco_pm_ccnt_q_63bit : 8;
        unsigned int l2_idle_big : 1;
        unsigned int l2_idle_little : 1;
        unsigned int l2_idle_middle : 1;
        unsigned int l3_idle : 1;
        unsigned int cpu_load_big : 1;
        unsigned int cpu_load_little : 1;
        unsigned int cpu_load_middle : 1;
        unsigned int reserved : 1;
        unsigned int core_standbywfe : 8;
        unsigned int core_standbywfi : 8;
    } reg;
} SOC_CRGPERIPH_FCM_STAT0_UNION;
#endif
#define SOC_CRGPERIPH_FCM_STAT0_eco_pm_ccnt_q_63bit_START (0)
#define SOC_CRGPERIPH_FCM_STAT0_eco_pm_ccnt_q_63bit_END (7)
#define SOC_CRGPERIPH_FCM_STAT0_l2_idle_big_START (8)
#define SOC_CRGPERIPH_FCM_STAT0_l2_idle_big_END (8)
#define SOC_CRGPERIPH_FCM_STAT0_l2_idle_little_START (9)
#define SOC_CRGPERIPH_FCM_STAT0_l2_idle_little_END (9)
#define SOC_CRGPERIPH_FCM_STAT0_l2_idle_middle_START (10)
#define SOC_CRGPERIPH_FCM_STAT0_l2_idle_middle_END (10)
#define SOC_CRGPERIPH_FCM_STAT0_l3_idle_START (11)
#define SOC_CRGPERIPH_FCM_STAT0_l3_idle_END (11)
#define SOC_CRGPERIPH_FCM_STAT0_cpu_load_big_START (12)
#define SOC_CRGPERIPH_FCM_STAT0_cpu_load_big_END (12)
#define SOC_CRGPERIPH_FCM_STAT0_cpu_load_little_START (13)
#define SOC_CRGPERIPH_FCM_STAT0_cpu_load_little_END (13)
#define SOC_CRGPERIPH_FCM_STAT0_cpu_load_middle_START (14)
#define SOC_CRGPERIPH_FCM_STAT0_cpu_load_middle_END (14)
#define SOC_CRGPERIPH_FCM_STAT0_core_standbywfe_START (16)
#define SOC_CRGPERIPH_FCM_STAT0_core_standbywfe_END (23)
#define SOC_CRGPERIPH_FCM_STAT0_core_standbywfi_START (24)
#define SOC_CRGPERIPH_FCM_STAT0_core_standbywfi_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fcm_standbywfe : 1;
        unsigned int fcm_dbgack : 1;
        unsigned int etf_fcm_full : 1;
        unsigned int fcm_standbywfi : 1;
        unsigned int vdm_standbywfi_core : 8;
        unsigned int vdm_standbywfi_fcm : 1;
        unsigned int reserved : 19;
    } reg;
} SOC_CRGPERIPH_FCM_STAT1_UNION;
#endif
#define SOC_CRGPERIPH_FCM_STAT1_fcm_standbywfe_START (0)
#define SOC_CRGPERIPH_FCM_STAT1_fcm_standbywfe_END (0)
#define SOC_CRGPERIPH_FCM_STAT1_fcm_dbgack_START (1)
#define SOC_CRGPERIPH_FCM_STAT1_fcm_dbgack_END (1)
#define SOC_CRGPERIPH_FCM_STAT1_etf_fcm_full_START (2)
#define SOC_CRGPERIPH_FCM_STAT1_etf_fcm_full_END (2)
#define SOC_CRGPERIPH_FCM_STAT1_fcm_standbywfi_START (3)
#define SOC_CRGPERIPH_FCM_STAT1_fcm_standbywfi_END (3)
#define SOC_CRGPERIPH_FCM_STAT1_vdm_standbywfi_core_START (4)
#define SOC_CRGPERIPH_FCM_STAT1_vdm_standbywfi_core_END (11)
#define SOC_CRGPERIPH_FCM_STAT1_vdm_standbywfi_fcm_START (12)
#define SOC_CRGPERIPH_FCM_STAT1_vdm_standbywfi_fcm_END (12)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int a57_ocldo_req : 4;
        unsigned int a57_core0_retention_stat : 3;
        unsigned int a57_core0_ocldo_req : 1;
        unsigned int a57_core0_ocldo_ack : 1;
        unsigned int a57_core0_qreq_n : 1;
        unsigned int a57_core0_qaccept_n : 1;
        unsigned int a57_core1_retention_stat : 3;
        unsigned int a57_core1_ocldo_req : 1;
        unsigned int a57_core1_ocldo_ack : 1;
        unsigned int a57_core1_qreq_n : 1;
        unsigned int a57_core1_qaccept_n : 1;
        unsigned int a57_core2_retention_stat : 3;
        unsigned int a57_core2_ocldo_req : 1;
        unsigned int a57_core2_ocldo_ack : 1;
        unsigned int a57_core2_qreq_n : 1;
        unsigned int a57_core2_qaccept_n : 1;
        unsigned int a57_core3_retention_stat : 3;
        unsigned int a57_core3_ocldo_req : 1;
        unsigned int a57_core3_ocldo_ack : 1;
        unsigned int a57_core3_qreq_n : 1;
        unsigned int a57_core3_qaccept_n : 1;
    } reg;
} SOC_CRGPERIPH_MAIA_OCLDO_STAT_UNION;
#endif
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_ocldo_req_START (0)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_ocldo_req_END (3)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core0_retention_stat_START (4)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core0_retention_stat_END (6)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core0_ocldo_req_START (7)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core0_ocldo_req_END (7)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core0_ocldo_ack_START (8)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core0_ocldo_ack_END (8)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core0_qreq_n_START (9)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core0_qreq_n_END (9)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core0_qaccept_n_START (10)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core0_qaccept_n_END (10)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core1_retention_stat_START (11)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core1_retention_stat_END (13)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core1_ocldo_req_START (14)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core1_ocldo_req_END (14)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core1_ocldo_ack_START (15)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core1_ocldo_ack_END (15)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core1_qreq_n_START (16)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core1_qreq_n_END (16)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core1_qaccept_n_START (17)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core1_qaccept_n_END (17)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core2_retention_stat_START (18)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core2_retention_stat_END (20)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core2_ocldo_req_START (21)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core2_ocldo_req_END (21)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core2_ocldo_ack_START (22)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core2_ocldo_ack_END (22)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core2_qreq_n_START (23)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core2_qreq_n_END (23)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core2_qaccept_n_START (24)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core2_qaccept_n_END (24)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core3_retention_stat_START (25)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core3_retention_stat_END (27)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core3_ocldo_req_START (28)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core3_ocldo_req_END (28)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core3_ocldo_ack_START (29)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core3_ocldo_ack_END (29)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core3_qreq_n_START (30)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core3_qreq_n_END (30)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core3_qaccept_n_START (31)
#define SOC_CRGPERIPH_MAIA_OCLDO_STAT_a57_core3_qaccept_n_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_CRGPERIPH_CORESIGHT_STAT_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int csysreq_etr_lpi : 1;
        unsigned int csysack_etr_lpi : 1;
        unsigned int cactive_etr_lpi : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_CRGPERIPH_CORESIGHTLPSTAT_UNION;
#endif
#define SOC_CRGPERIPH_CORESIGHTLPSTAT_csysreq_etr_lpi_START (0)
#define SOC_CRGPERIPH_CORESIGHTLPSTAT_csysreq_etr_lpi_END (0)
#define SOC_CRGPERIPH_CORESIGHTLPSTAT_csysack_etr_lpi_START (1)
#define SOC_CRGPERIPH_CORESIGHTLPSTAT_csysack_etr_lpi_END (1)
#define SOC_CRGPERIPH_CORESIGHTLPSTAT_cactive_etr_lpi_START (2)
#define SOC_CRGPERIPH_CORESIGHTLPSTAT_cactive_etr_lpi_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mem_ctrl_s_cssys : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_CRGPERIPH_CORESIGHT_CTRL_UNION;
#endif
#define SOC_CRGPERIPH_CORESIGHT_CTRL_mem_ctrl_s_cssys_START (0)
#define SOC_CRGPERIPH_CORESIGHT_CTRL_mem_ctrl_s_cssys_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int etf_a53_1_full : 1;
        unsigned int etf_a53_0_full : 1;
        unsigned int etf_top_full : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_CRGPERIPH_CORESIGHTETFINT_UNION;
#endif
#define SOC_CRGPERIPH_CORESIGHTETFINT_etf_a53_1_full_START (0)
#define SOC_CRGPERIPH_CORESIGHTETFINT_etf_a53_1_full_END (0)
#define SOC_CRGPERIPH_CORESIGHTETFINT_etf_a53_0_full_START (1)
#define SOC_CRGPERIPH_CORESIGHTETFINT_etf_a53_0_full_END (1)
#define SOC_CRGPERIPH_CORESIGHTETFINT_etf_top_full_START (2)
#define SOC_CRGPERIPH_CORESIGHTETFINT_etf_top_full_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int etr_top_full : 1;
        unsigned int intr_a53_0_core0_gic : 1;
        unsigned int intr_a53_0_core1_gic : 1;
        unsigned int intr_a53_0_core2_gic : 1;
        unsigned int intr_a53_0_core3_gic : 1;
        unsigned int intr_a53_1_core0_gic : 1;
        unsigned int intr_a53_1_core1_gic : 1;
        unsigned int intr_a53_1_core2_gic : 1;
        unsigned int intr_a53_1_core3_gic : 1;
        unsigned int reserved : 23;
    } reg;
} SOC_CRGPERIPH_CORESIGHTETRINT_UNION;
#endif
#define SOC_CRGPERIPH_CORESIGHTETRINT_etr_top_full_START (0)
#define SOC_CRGPERIPH_CORESIGHTETRINT_etr_top_full_END (0)
#define SOC_CRGPERIPH_CORESIGHTETRINT_intr_a53_0_core0_gic_START (1)
#define SOC_CRGPERIPH_CORESIGHTETRINT_intr_a53_0_core0_gic_END (1)
#define SOC_CRGPERIPH_CORESIGHTETRINT_intr_a53_0_core1_gic_START (2)
#define SOC_CRGPERIPH_CORESIGHTETRINT_intr_a53_0_core1_gic_END (2)
#define SOC_CRGPERIPH_CORESIGHTETRINT_intr_a53_0_core2_gic_START (3)
#define SOC_CRGPERIPH_CORESIGHTETRINT_intr_a53_0_core2_gic_END (3)
#define SOC_CRGPERIPH_CORESIGHTETRINT_intr_a53_0_core3_gic_START (4)
#define SOC_CRGPERIPH_CORESIGHTETRINT_intr_a53_0_core3_gic_END (4)
#define SOC_CRGPERIPH_CORESIGHTETRINT_intr_a53_1_core0_gic_START (5)
#define SOC_CRGPERIPH_CORESIGHTETRINT_intr_a53_1_core0_gic_END (5)
#define SOC_CRGPERIPH_CORESIGHTETRINT_intr_a53_1_core1_gic_START (6)
#define SOC_CRGPERIPH_CORESIGHTETRINT_intr_a53_1_core1_gic_END (6)
#define SOC_CRGPERIPH_CORESIGHTETRINT_intr_a53_1_core2_gic_START (7)
#define SOC_CRGPERIPH_CORESIGHTETRINT_intr_a53_1_core2_gic_END (7)
#define SOC_CRGPERIPH_CORESIGHTETRINT_intr_a53_1_core3_gic_START (8)
#define SOC_CRGPERIPH_CORESIGHTETRINT_intr_a53_1_core3_gic_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cactivem_adb400_fcm_0 : 1;
        unsigned int cactivem_adb400_fcm_1 : 1;
        unsigned int cactivem_adb400_g3d_0 : 1;
        unsigned int cactivem_adb400_g3d_1 : 1;
        unsigned int cactivem_adb400_mdm : 1;
        unsigned int reserved : 27;
    } reg;
} SOC_CRGPERIPH_ADB400_STAT_UNION;
#endif
#define SOC_CRGPERIPH_ADB400_STAT_cactivem_adb400_fcm_0_START (0)
#define SOC_CRGPERIPH_ADB400_STAT_cactivem_adb400_fcm_0_END (0)
#define SOC_CRGPERIPH_ADB400_STAT_cactivem_adb400_fcm_1_START (1)
#define SOC_CRGPERIPH_ADB400_STAT_cactivem_adb400_fcm_1_END (1)
#define SOC_CRGPERIPH_ADB400_STAT_cactivem_adb400_g3d_0_START (2)
#define SOC_CRGPERIPH_ADB400_STAT_cactivem_adb400_g3d_0_END (2)
#define SOC_CRGPERIPH_ADB400_STAT_cactivem_adb400_g3d_1_START (3)
#define SOC_CRGPERIPH_ADB400_STAT_cactivem_adb400_g3d_1_END (3)
#define SOC_CRGPERIPH_ADB400_STAT_cactivem_adb400_mdm_START (4)
#define SOC_CRGPERIPH_ADB400_STAT_cactivem_adb400_mdm_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int g3d_d_pwrdnreqn : 1;
        unsigned int reserved_0 : 1;
        unsigned int g3d_d_cactives : 1;
        unsigned int pwrqacceptns : 1;
        unsigned int pwrqdeneys : 1;
        unsigned int reserved_1 : 27;
    } reg;
} SOC_CRGPERIPH_G3D_0_ADBLPSTAT_UNION;
#endif
#define SOC_CRGPERIPH_G3D_0_ADBLPSTAT_g3d_d_pwrdnreqn_START (0)
#define SOC_CRGPERIPH_G3D_0_ADBLPSTAT_g3d_d_pwrdnreqn_END (0)
#define SOC_CRGPERIPH_G3D_0_ADBLPSTAT_g3d_d_cactives_START (2)
#define SOC_CRGPERIPH_G3D_0_ADBLPSTAT_g3d_d_cactives_END (2)
#define SOC_CRGPERIPH_G3D_0_ADBLPSTAT_pwrqacceptns_START (3)
#define SOC_CRGPERIPH_G3D_0_ADBLPSTAT_pwrqacceptns_END (3)
#define SOC_CRGPERIPH_G3D_0_ADBLPSTAT_pwrqdeneys_START (4)
#define SOC_CRGPERIPH_G3D_0_ADBLPSTAT_pwrqdeneys_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int g3d_d_pwrdnreqn : 1;
        unsigned int reserved_0 : 1;
        unsigned int g3d_d_cactives : 1;
        unsigned int pwrqacceptns : 1;
        unsigned int pwrqdeneys : 1;
        unsigned int reserved_1 : 27;
    } reg;
} SOC_CRGPERIPH_G3D_1_ADBLPSTAT_UNION;
#endif
#define SOC_CRGPERIPH_G3D_1_ADBLPSTAT_g3d_d_pwrdnreqn_START (0)
#define SOC_CRGPERIPH_G3D_1_ADBLPSTAT_g3d_d_pwrdnreqn_END (0)
#define SOC_CRGPERIPH_G3D_1_ADBLPSTAT_g3d_d_cactives_START (2)
#define SOC_CRGPERIPH_G3D_1_ADBLPSTAT_g3d_d_cactives_END (2)
#define SOC_CRGPERIPH_G3D_1_ADBLPSTAT_pwrqacceptns_START (3)
#define SOC_CRGPERIPH_G3D_1_ADBLPSTAT_pwrqacceptns_END (3)
#define SOC_CRGPERIPH_G3D_1_ADBLPSTAT_pwrqdeneys_START (4)
#define SOC_CRGPERIPH_G3D_1_ADBLPSTAT_pwrqdeneys_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 1;
        unsigned int pctrl_clkrst_bypass : 1;
        unsigned int pwm_clkrst_bypass : 1;
        unsigned int blpwm_peri_clkrst_bypass : 1;
        unsigned int wd0_clkrst_bypass : 1;
        unsigned int wd1_clkrst_bypass : 1;
        unsigned int gpio0_clkrst_bypass : 1;
        unsigned int gpio1_clkrst_bypass : 1;
        unsigned int gpio2_clkrst_bypass : 1;
        unsigned int gpio3_clkrst_bypass : 1;
        unsigned int gpio4_clkrst_bypass : 1;
        unsigned int gpio5_clkrst_bypass : 1;
        unsigned int gpio6_clkrst_bypass : 1;
        unsigned int gpio7_clkrst_bypass : 1;
        unsigned int gpio8_clkrst_bypass : 1;
        unsigned int gpio9_clkrst_bypass : 1;
        unsigned int gpio10_clkrst_bypass : 1;
        unsigned int gpio11_clkrst_bypass : 1;
        unsigned int gpio12_clkrst_bypass : 1;
        unsigned int gpio13_clkrst_bypass : 1;
        unsigned int gpio14_clkrst_bypass : 1;
        unsigned int gpio15_clkrst_bypass : 1;
        unsigned int gpio16_clkrst_bypass : 1;
        unsigned int gpio17_clkrst_bypass : 1;
        unsigned int gpio18_clkrst_bypass : 1;
        unsigned int gpio19_clkrst_bypass : 1;
        unsigned int gpio20_clkrst_bypass : 1;
        unsigned int gpio21_clkrst_bypass : 1;
        unsigned int timer9_clkrst_bypass : 1;
        unsigned int timer10_clkrst_bypass : 1;
        unsigned int timer11_clkrst_bypass : 1;
        unsigned int timer12_clkrst_bypass : 1;
    } reg;
} SOC_CRGPERIPH_IPCLKRST_BYPASS0_UNION;
#endif
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_pctrl_clkrst_bypass_START (1)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_pctrl_clkrst_bypass_END (1)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_pwm_clkrst_bypass_START (2)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_pwm_clkrst_bypass_END (2)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_blpwm_peri_clkrst_bypass_START (3)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_blpwm_peri_clkrst_bypass_END (3)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_wd0_clkrst_bypass_START (4)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_wd0_clkrst_bypass_END (4)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_wd1_clkrst_bypass_START (5)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_wd1_clkrst_bypass_END (5)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio0_clkrst_bypass_START (6)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio0_clkrst_bypass_END (6)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio1_clkrst_bypass_START (7)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio1_clkrst_bypass_END (7)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio2_clkrst_bypass_START (8)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio2_clkrst_bypass_END (8)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio3_clkrst_bypass_START (9)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio3_clkrst_bypass_END (9)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio4_clkrst_bypass_START (10)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio4_clkrst_bypass_END (10)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio5_clkrst_bypass_START (11)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio5_clkrst_bypass_END (11)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio6_clkrst_bypass_START (12)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio6_clkrst_bypass_END (12)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio7_clkrst_bypass_START (13)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio7_clkrst_bypass_END (13)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio8_clkrst_bypass_START (14)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio8_clkrst_bypass_END (14)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio9_clkrst_bypass_START (15)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio9_clkrst_bypass_END (15)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio10_clkrst_bypass_START (16)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio10_clkrst_bypass_END (16)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio11_clkrst_bypass_START (17)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio11_clkrst_bypass_END (17)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio12_clkrst_bypass_START (18)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio12_clkrst_bypass_END (18)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio13_clkrst_bypass_START (19)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio13_clkrst_bypass_END (19)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio14_clkrst_bypass_START (20)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio14_clkrst_bypass_END (20)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio15_clkrst_bypass_START (21)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio15_clkrst_bypass_END (21)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio16_clkrst_bypass_START (22)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio16_clkrst_bypass_END (22)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio17_clkrst_bypass_START (23)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio17_clkrst_bypass_END (23)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio18_clkrst_bypass_START (24)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio18_clkrst_bypass_END (24)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio19_clkrst_bypass_START (25)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio19_clkrst_bypass_END (25)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio20_clkrst_bypass_START (26)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio20_clkrst_bypass_END (26)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio21_clkrst_bypass_START (27)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_gpio21_clkrst_bypass_END (27)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_timer9_clkrst_bypass_START (28)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_timer9_clkrst_bypass_END (28)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_timer10_clkrst_bypass_START (29)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_timer10_clkrst_bypass_END (29)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_timer11_clkrst_bypass_START (30)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_timer11_clkrst_bypass_END (30)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_timer12_clkrst_bypass_START (31)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS0_timer12_clkrst_bypass_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tzpc_clkrst_bypass : 1;
        unsigned int ipc0_clkrst_bypass : 1;
        unsigned int ipc1_clkrst_bypass : 1;
        unsigned int ioc_clkrst_bypass : 1;
        unsigned int codecssi_clkrst_bypass : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int ipc_mdm_clkrst_bypass : 1;
        unsigned int uart0_clkrst_bypass : 1;
        unsigned int uart1_clkrst_bypass : 1;
        unsigned int uart2_clkrst_bypass : 1;
        unsigned int reserved_2 : 1;
        unsigned int uart4_clkrst_bypass : 1;
        unsigned int uart5_clkrst_bypass : 1;
        unsigned int reserved_3 : 1;
        unsigned int spi1_clkrst_bypass : 1;
        unsigned int spi4_clkrst_bypass : 1;
        unsigned int reserved_4 : 1;
        unsigned int i2c6_clkrst_bypass : 1;
        unsigned int i2c3_clkrst_bypass : 1;
        unsigned int i2c4_clkrst_bypass : 1;
        unsigned int dmac_clkrst_bypass : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int sd_clkrst_bypass : 1;
        unsigned int reserved_7 : 1;
        unsigned int socp_clkrst_bypass : 1;
        unsigned int reserved_8 : 1;
        unsigned int media_crg_clkrst_bypass : 1;
        unsigned int media2_crg_clkrst_bypass : 1;
        unsigned int dpctrl_clkrst_bypass : 1;
        unsigned int mmc0_sysctrl_clkrst_bypass : 1;
    } reg;
} SOC_CRGPERIPH_IPCLKRST_BYPASS1_UNION;
#endif
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_tzpc_clkrst_bypass_START (0)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_tzpc_clkrst_bypass_END (0)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_ipc0_clkrst_bypass_START (1)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_ipc0_clkrst_bypass_END (1)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_ipc1_clkrst_bypass_START (2)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_ipc1_clkrst_bypass_END (2)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_ioc_clkrst_bypass_START (3)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_ioc_clkrst_bypass_END (3)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_codecssi_clkrst_bypass_START (4)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_codecssi_clkrst_bypass_END (4)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_ipc_mdm_clkrst_bypass_START (7)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_ipc_mdm_clkrst_bypass_END (7)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_uart0_clkrst_bypass_START (8)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_uart0_clkrst_bypass_END (8)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_uart1_clkrst_bypass_START (9)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_uart1_clkrst_bypass_END (9)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_uart2_clkrst_bypass_START (10)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_uart2_clkrst_bypass_END (10)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_uart4_clkrst_bypass_START (12)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_uart4_clkrst_bypass_END (12)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_uart5_clkrst_bypass_START (13)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_uart5_clkrst_bypass_END (13)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_spi1_clkrst_bypass_START (15)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_spi1_clkrst_bypass_END (15)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_spi4_clkrst_bypass_START (16)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_spi4_clkrst_bypass_END (16)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_i2c6_clkrst_bypass_START (18)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_i2c6_clkrst_bypass_END (18)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_i2c3_clkrst_bypass_START (19)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_i2c3_clkrst_bypass_END (19)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_i2c4_clkrst_bypass_START (20)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_i2c4_clkrst_bypass_END (20)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_dmac_clkrst_bypass_START (21)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_dmac_clkrst_bypass_END (21)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_sd_clkrst_bypass_START (24)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_sd_clkrst_bypass_END (24)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_socp_clkrst_bypass_START (26)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_socp_clkrst_bypass_END (26)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_media_crg_clkrst_bypass_START (28)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_media_crg_clkrst_bypass_END (28)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_media2_crg_clkrst_bypass_START (29)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_media2_crg_clkrst_bypass_END (29)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_dpctrl_clkrst_bypass_START (30)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_dpctrl_clkrst_bypass_END (30)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_mmc0_sysctrl_clkrst_bypass_START (31)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS1_mmc0_sysctrl_clkrst_bypass_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mmc1_sysctrl_clkrst_bypass : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int usb3otg_misc_clkrst_bypass : 1;
        unsigned int reserved_2 : 1;
        unsigned int pimon_clkrst_bypass : 1;
        unsigned int dsi0_clkrst_bypass : 1;
        unsigned int dsi1_clkrst_bypass : 1;
        unsigned int sdio_clkrst_bypass : 1;
        unsigned int perf_clkrst_bypass : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int psam_clkrst_bypass : 1;
        unsigned int ipf_mdm_clkrst_bypass : 1;
        unsigned int loadmonitor_clkrst_bypass : 1;
        unsigned int ctf_clkrst_bypass : 1;
        unsigned int i2c7_clkrst_bypass : 1;
        unsigned int loadmonitor_1_clkrst_bypass : 1;
        unsigned int pciectrl_clkrst_bypass : 1;
        unsigned int pciephy_clkrst_bypass : 1;
        unsigned int reserved_5 : 1;
        unsigned int atgc_clkrst_bypass : 1;
        unsigned int reserved_6 : 1;
        unsigned int mmc0_ioc_clkrst_bypass : 1;
        unsigned int mmc1_ioc_clkrst_bypass : 1;
        unsigned int reserved_7 : 1;
        unsigned int gpio0_emmc_ioc_clkrst_bypass : 1;
        unsigned int gpio1_emmc_ioc_clkrst_bypass : 1;
        unsigned int dmc_a_clkrst_bypass : 1;
        unsigned int dmc_b_clkrst_bypass : 1;
        unsigned int dmc_c_clkrst_bypass : 1;
        unsigned int dmc_d_clkrst_bypass : 1;
    } reg;
} SOC_CRGPERIPH_IPCLKRST_BYPASS2_UNION;
#endif
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_mmc1_sysctrl_clkrst_bypass_START (0)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_mmc1_sysctrl_clkrst_bypass_END (0)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_usb3otg_misc_clkrst_bypass_START (3)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_usb3otg_misc_clkrst_bypass_END (3)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_pimon_clkrst_bypass_START (5)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_pimon_clkrst_bypass_END (5)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_dsi0_clkrst_bypass_START (6)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_dsi0_clkrst_bypass_END (6)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_dsi1_clkrst_bypass_START (7)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_dsi1_clkrst_bypass_END (7)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_sdio_clkrst_bypass_START (8)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_sdio_clkrst_bypass_END (8)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_perf_clkrst_bypass_START (9)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_perf_clkrst_bypass_END (9)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_psam_clkrst_bypass_START (12)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_psam_clkrst_bypass_END (12)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_ipf_mdm_clkrst_bypass_START (13)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_ipf_mdm_clkrst_bypass_END (13)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_loadmonitor_clkrst_bypass_START (14)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_loadmonitor_clkrst_bypass_END (14)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_ctf_clkrst_bypass_START (15)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_ctf_clkrst_bypass_END (15)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_i2c7_clkrst_bypass_START (16)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_i2c7_clkrst_bypass_END (16)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_loadmonitor_1_clkrst_bypass_START (17)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_loadmonitor_1_clkrst_bypass_END (17)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_pciectrl_clkrst_bypass_START (18)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_pciectrl_clkrst_bypass_END (18)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_pciephy_clkrst_bypass_START (19)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_pciephy_clkrst_bypass_END (19)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_atgc_clkrst_bypass_START (21)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_atgc_clkrst_bypass_END (21)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_mmc0_ioc_clkrst_bypass_START (23)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_mmc0_ioc_clkrst_bypass_END (23)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_mmc1_ioc_clkrst_bypass_START (24)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_mmc1_ioc_clkrst_bypass_END (24)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_gpio0_emmc_ioc_clkrst_bypass_START (26)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_gpio0_emmc_ioc_clkrst_bypass_END (26)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_gpio1_emmc_ioc_clkrst_bypass_START (27)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_gpio1_emmc_ioc_clkrst_bypass_END (27)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_dmc_a_clkrst_bypass_START (28)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_dmc_a_clkrst_bypass_END (28)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_dmc_b_clkrst_bypass_START (29)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_dmc_b_clkrst_bypass_END (29)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_dmc_c_clkrst_bypass_START (30)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_dmc_c_clkrst_bypass_END (30)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_dmc_d_clkrst_bypass_START (31)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS2_dmc_d_clkrst_bypass_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cpu_little_pdc_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_CRGPERIPH_A53_PDCEN_UNION;
#endif
#define SOC_CRGPERIPH_A53_PDCEN_cpu_little_pdc_en_START (0)
#define SOC_CRGPERIPH_A53_PDCEN_cpu_little_pdc_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intr_cpu_little_core0_pwr_en : 1;
        unsigned int intr_cpu_little_core1_pwr_en : 1;
        unsigned int intr_cpu_little_core2_pwr_en : 1;
        unsigned int intr_cpu_little_core3_pwr_en : 1;
        unsigned int reserved : 12;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_A53_COREPWRINTEN_UNION;
#endif
#define SOC_CRGPERIPH_A53_COREPWRINTEN_intr_cpu_little_core0_pwr_en_START (0)
#define SOC_CRGPERIPH_A53_COREPWRINTEN_intr_cpu_little_core0_pwr_en_END (0)
#define SOC_CRGPERIPH_A53_COREPWRINTEN_intr_cpu_little_core1_pwr_en_START (1)
#define SOC_CRGPERIPH_A53_COREPWRINTEN_intr_cpu_little_core1_pwr_en_END (1)
#define SOC_CRGPERIPH_A53_COREPWRINTEN_intr_cpu_little_core2_pwr_en_START (2)
#define SOC_CRGPERIPH_A53_COREPWRINTEN_intr_cpu_little_core2_pwr_en_END (2)
#define SOC_CRGPERIPH_A53_COREPWRINTEN_intr_cpu_little_core3_pwr_en_START (3)
#define SOC_CRGPERIPH_A53_COREPWRINTEN_intr_cpu_little_core3_pwr_en_END (3)
#define SOC_CRGPERIPH_A53_COREPWRINTEN_bitmasken_START (16)
#define SOC_CRGPERIPH_A53_COREPWRINTEN_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intr_cpu_little_core0_pwr_stat : 1;
        unsigned int intr_cpu_little_core1_pwr_stat : 1;
        unsigned int intr_cpu_little_core2_pwr_stat : 1;
        unsigned int intr_cpu_little_core3_pwr_stat : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_CRGPERIPH_A53_COREPWRINTSTAT_UNION;
#endif
#define SOC_CRGPERIPH_A53_COREPWRINTSTAT_intr_cpu_little_core0_pwr_stat_START (0)
#define SOC_CRGPERIPH_A53_COREPWRINTSTAT_intr_cpu_little_core0_pwr_stat_END (0)
#define SOC_CRGPERIPH_A53_COREPWRINTSTAT_intr_cpu_little_core1_pwr_stat_START (1)
#define SOC_CRGPERIPH_A53_COREPWRINTSTAT_intr_cpu_little_core1_pwr_stat_END (1)
#define SOC_CRGPERIPH_A53_COREPWRINTSTAT_intr_cpu_little_core2_pwr_stat_START (2)
#define SOC_CRGPERIPH_A53_COREPWRINTSTAT_intr_cpu_little_core2_pwr_stat_END (2)
#define SOC_CRGPERIPH_A53_COREPWRINTSTAT_intr_cpu_little_core3_pwr_stat_START (3)
#define SOC_CRGPERIPH_A53_COREPWRINTSTAT_intr_cpu_little_core3_pwr_stat_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intr_cpu_little_core0_gic_mask : 1;
        unsigned int intr_cpu_little_core1_gic_mask : 1;
        unsigned int intr_cpu_little_core2_gic_mask : 1;
        unsigned int intr_cpu_little_core3_gic_mask : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_CRGPERIPH_A53_COREGICMASK_UNION;
#endif
#define SOC_CRGPERIPH_A53_COREGICMASK_intr_cpu_little_core0_gic_mask_START (0)
#define SOC_CRGPERIPH_A53_COREGICMASK_intr_cpu_little_core0_gic_mask_END (0)
#define SOC_CRGPERIPH_A53_COREGICMASK_intr_cpu_little_core1_gic_mask_START (1)
#define SOC_CRGPERIPH_A53_COREGICMASK_intr_cpu_little_core1_gic_mask_END (1)
#define SOC_CRGPERIPH_A53_COREGICMASK_intr_cpu_little_core2_gic_mask_START (2)
#define SOC_CRGPERIPH_A53_COREGICMASK_intr_cpu_little_core2_gic_mask_END (2)
#define SOC_CRGPERIPH_A53_COREGICMASK_intr_cpu_little_core3_gic_mask_START (3)
#define SOC_CRGPERIPH_A53_COREGICMASK_intr_cpu_little_core3_gic_mask_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cpu_little_core0_pwrup_req : 1;
        unsigned int cpu_little_core1_pwrup_req : 1;
        unsigned int cpu_little_core2_pwrup_req : 1;
        unsigned int cpu_little_core3_pwrup_req : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_CRGPERIPH_A53_COREPOWERUP_UNION;
#endif
#define SOC_CRGPERIPH_A53_COREPOWERUP_cpu_little_core0_pwrup_req_START (0)
#define SOC_CRGPERIPH_A53_COREPOWERUP_cpu_little_core0_pwrup_req_END (0)
#define SOC_CRGPERIPH_A53_COREPOWERUP_cpu_little_core1_pwrup_req_START (1)
#define SOC_CRGPERIPH_A53_COREPOWERUP_cpu_little_core1_pwrup_req_END (1)
#define SOC_CRGPERIPH_A53_COREPOWERUP_cpu_little_core2_pwrup_req_START (2)
#define SOC_CRGPERIPH_A53_COREPOWERUP_cpu_little_core2_pwrup_req_END (2)
#define SOC_CRGPERIPH_A53_COREPOWERUP_cpu_little_core3_pwrup_req_START (3)
#define SOC_CRGPERIPH_A53_COREPOWERUP_cpu_little_core3_pwrup_req_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cpu_little_core0_pwrdn_req : 1;
        unsigned int cpu_little_core1_pwrdn_req : 1;
        unsigned int cpu_little_core2_pwrdn_req : 1;
        unsigned int cpu_little_core3_pwrdn_req : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_CRGPERIPH_A53_COREPOWERDN_UNION;
#endif
#define SOC_CRGPERIPH_A53_COREPOWERDN_cpu_little_core0_pwrdn_req_START (0)
#define SOC_CRGPERIPH_A53_COREPOWERDN_cpu_little_core0_pwrdn_req_END (0)
#define SOC_CRGPERIPH_A53_COREPOWERDN_cpu_little_core1_pwrdn_req_START (1)
#define SOC_CRGPERIPH_A53_COREPOWERDN_cpu_little_core1_pwrdn_req_END (1)
#define SOC_CRGPERIPH_A53_COREPOWERDN_cpu_little_core2_pwrdn_req_START (2)
#define SOC_CRGPERIPH_A53_COREPOWERDN_cpu_little_core2_pwrdn_req_END (2)
#define SOC_CRGPERIPH_A53_COREPOWERDN_cpu_little_core3_pwrdn_req_START (3)
#define SOC_CRGPERIPH_A53_COREPOWERDN_cpu_little_core3_pwrdn_req_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cpu_little_core0_pwr_stat : 4;
        unsigned int cpu_little_core1_pwr_stat : 4;
        unsigned int cpu_little_core2_pwr_stat : 4;
        unsigned int cpu_little_core3_pwr_stat : 4;
        unsigned int reserved : 16;
    } reg;
} SOC_CRGPERIPH_A53_COREPOWERSTAT_UNION;
#endif
#define SOC_CRGPERIPH_A53_COREPOWERSTAT_cpu_little_core0_pwr_stat_START (0)
#define SOC_CRGPERIPH_A53_COREPOWERSTAT_cpu_little_core0_pwr_stat_END (3)
#define SOC_CRGPERIPH_A53_COREPOWERSTAT_cpu_little_core1_pwr_stat_START (4)
#define SOC_CRGPERIPH_A53_COREPOWERSTAT_cpu_little_core1_pwr_stat_END (7)
#define SOC_CRGPERIPH_A53_COREPOWERSTAT_cpu_little_core2_pwr_stat_START (8)
#define SOC_CRGPERIPH_A53_COREPOWERSTAT_cpu_little_core2_pwr_stat_END (11)
#define SOC_CRGPERIPH_A53_COREPOWERSTAT_cpu_little_core3_pwr_stat_START (12)
#define SOC_CRGPERIPH_A53_COREPOWERSTAT_cpu_little_core3_pwr_stat_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cpu_little_core_pwrup_time : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_CRGPERIPH_A53_COREPWRUPTIME_UNION;
#endif
#define SOC_CRGPERIPH_A53_COREPWRUPTIME_cpu_little_core_pwrup_time_START (0)
#define SOC_CRGPERIPH_A53_COREPWRUPTIME_cpu_little_core_pwrup_time_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cpu_little_core_pwrdn_time : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_CRGPERIPH_A53_COREPWRDNTIME_UNION;
#endif
#define SOC_CRGPERIPH_A53_COREPWRDNTIME_cpu_little_core_pwrdn_time_START (0)
#define SOC_CRGPERIPH_A53_COREPWRDNTIME_cpu_little_core_pwrdn_time_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cpu_little_core_iso_time : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_CRGPERIPH_A53_COREISOTIME_UNION;
#endif
#define SOC_CRGPERIPH_A53_COREISOTIME_cpu_little_core_iso_time_START (0)
#define SOC_CRGPERIPH_A53_COREISOTIME_cpu_little_core_iso_time_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cpu_little_core_dbg_time : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_CRGPERIPH_A53_COREDBGTIME_UNION;
#endif
#define SOC_CRGPERIPH_A53_COREDBGTIME_cpu_little_core_dbg_time_START (0)
#define SOC_CRGPERIPH_A53_COREDBGTIME_cpu_little_core_dbg_time_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cpu_little_core_rst_time : 3;
        unsigned int reserved : 29;
    } reg;
} SOC_CRGPERIPH_A53_CORERSTTIME_UNION;
#endif
#define SOC_CRGPERIPH_A53_CORERSTTIME_cpu_little_core_rst_time_START (0)
#define SOC_CRGPERIPH_A53_CORERSTTIME_cpu_little_core_rst_time_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cpu_little_core_urst_time : 6;
        unsigned int reserved : 26;
    } reg;
} SOC_CRGPERIPH_A53_COREURSTTIME_UNION;
#endif
#define SOC_CRGPERIPH_A53_COREURSTTIME_cpu_little_core_urst_time_START (0)
#define SOC_CRGPERIPH_A53_COREURSTTIME_cpu_little_core_urst_time_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cpu_little_core_ocldo_dis_time : 16;
        unsigned int cpu_little_core_ocldo_en_time : 16;
    } reg;
} SOC_CRGPERIPH_A53_COREOCLDOTIME0_UNION;
#endif
#define SOC_CRGPERIPH_A53_COREOCLDOTIME0_cpu_little_core_ocldo_dis_time_START (0)
#define SOC_CRGPERIPH_A53_COREOCLDOTIME0_cpu_little_core_ocldo_dis_time_END (15)
#define SOC_CRGPERIPH_A53_COREOCLDOTIME0_cpu_little_core_ocldo_en_time_START (16)
#define SOC_CRGPERIPH_A53_COREOCLDOTIME0_cpu_little_core_ocldo_en_time_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cpu_little_core_ocldo_pwrdn_time : 16;
        unsigned int cpu_little_core_ocldo_pwrup_time : 16;
    } reg;
} SOC_CRGPERIPH_A53_COREOCLDOTIME1_UNION;
#endif
#define SOC_CRGPERIPH_A53_COREOCLDOTIME1_cpu_little_core_ocldo_pwrdn_time_START (0)
#define SOC_CRGPERIPH_A53_COREOCLDOTIME1_cpu_little_core_ocldo_pwrdn_time_END (15)
#define SOC_CRGPERIPH_A53_COREOCLDOTIME1_cpu_little_core_ocldo_pwrup_time_START (16)
#define SOC_CRGPERIPH_A53_COREOCLDOTIME1_cpu_little_core_ocldo_pwrup_time_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int a53_0_core0_ocdlo_stat : 3;
        unsigned int a53_0_core1_ocdlo_stat : 3;
        unsigned int a53_0_core2_ocdlo_stat : 3;
        unsigned int a53_0_core3_ocdlo_stat : 3;
        unsigned int reserved : 20;
    } reg;
} SOC_CRGPERIPH_A53_COREOCLDOSTAT_UNION;
#endif
#define SOC_CRGPERIPH_A53_COREOCLDOSTAT_a53_0_core0_ocdlo_stat_START (0)
#define SOC_CRGPERIPH_A53_COREOCLDOSTAT_a53_0_core0_ocdlo_stat_END (2)
#define SOC_CRGPERIPH_A53_COREOCLDOSTAT_a53_0_core1_ocdlo_stat_START (3)
#define SOC_CRGPERIPH_A53_COREOCLDOSTAT_a53_0_core1_ocdlo_stat_END (5)
#define SOC_CRGPERIPH_A53_COREOCLDOSTAT_a53_0_core2_ocdlo_stat_START (6)
#define SOC_CRGPERIPH_A53_COREOCLDOSTAT_a53_0_core2_ocdlo_stat_END (8)
#define SOC_CRGPERIPH_A53_COREOCLDOSTAT_a53_0_core3_ocdlo_stat_START (9)
#define SOC_CRGPERIPH_A53_COREOCLDOSTAT_a53_0_core3_ocdlo_stat_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fcm_big_pdc_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_CRGPERIPH_MAIA_PDCEN_UNION;
#endif
#define SOC_CRGPERIPH_MAIA_PDCEN_fcm_big_pdc_en_START (0)
#define SOC_CRGPERIPH_MAIA_PDCEN_fcm_big_pdc_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intr_a53_1_core0_pwr_en : 1;
        unsigned int intr_a53_1_core1_pwr_en : 1;
        unsigned int intr_a53_1_core2_pwr_en : 1;
        unsigned int intr_a53_1_core3_pwr_en : 1;
        unsigned int fcm_middle_pdc_en : 1;
        unsigned int reserved : 11;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_MAIA_COREPWRINTEN_UNION;
#endif
#define SOC_CRGPERIPH_MAIA_COREPWRINTEN_intr_a53_1_core0_pwr_en_START (0)
#define SOC_CRGPERIPH_MAIA_COREPWRINTEN_intr_a53_1_core0_pwr_en_END (0)
#define SOC_CRGPERIPH_MAIA_COREPWRINTEN_intr_a53_1_core1_pwr_en_START (1)
#define SOC_CRGPERIPH_MAIA_COREPWRINTEN_intr_a53_1_core1_pwr_en_END (1)
#define SOC_CRGPERIPH_MAIA_COREPWRINTEN_intr_a53_1_core2_pwr_en_START (2)
#define SOC_CRGPERIPH_MAIA_COREPWRINTEN_intr_a53_1_core2_pwr_en_END (2)
#define SOC_CRGPERIPH_MAIA_COREPWRINTEN_intr_a53_1_core3_pwr_en_START (3)
#define SOC_CRGPERIPH_MAIA_COREPWRINTEN_intr_a53_1_core3_pwr_en_END (3)
#define SOC_CRGPERIPH_MAIA_COREPWRINTEN_fcm_middle_pdc_en_START (4)
#define SOC_CRGPERIPH_MAIA_COREPWRINTEN_fcm_middle_pdc_en_END (4)
#define SOC_CRGPERIPH_MAIA_COREPWRINTEN_bitmasken_START (16)
#define SOC_CRGPERIPH_MAIA_COREPWRINTEN_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intr_a53_1_core0_pwr_stat : 1;
        unsigned int intr_a53_1_core1_pwr_stat : 1;
        unsigned int intr_a53_1_core2_pwr_stat : 1;
        unsigned int intr_a53_1_core3_pwr_stat : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_CRGPERIPH_MAIA_COREPWRINTSTAT_UNION;
#endif
#define SOC_CRGPERIPH_MAIA_COREPWRINTSTAT_intr_a53_1_core0_pwr_stat_START (0)
#define SOC_CRGPERIPH_MAIA_COREPWRINTSTAT_intr_a53_1_core0_pwr_stat_END (0)
#define SOC_CRGPERIPH_MAIA_COREPWRINTSTAT_intr_a53_1_core1_pwr_stat_START (1)
#define SOC_CRGPERIPH_MAIA_COREPWRINTSTAT_intr_a53_1_core1_pwr_stat_END (1)
#define SOC_CRGPERIPH_MAIA_COREPWRINTSTAT_intr_a53_1_core2_pwr_stat_START (2)
#define SOC_CRGPERIPH_MAIA_COREPWRINTSTAT_intr_a53_1_core2_pwr_stat_END (2)
#define SOC_CRGPERIPH_MAIA_COREPWRINTSTAT_intr_a53_1_core3_pwr_stat_START (3)
#define SOC_CRGPERIPH_MAIA_COREPWRINTSTAT_intr_a53_1_core3_pwr_stat_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intr_a53_1_core0_gic_mask : 1;
        unsigned int intr_a53_1_core1_gic_mask : 1;
        unsigned int intr_a53_1_core2_gic_mask : 1;
        unsigned int intr_a53_1_core3_gic_mask : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_CRGPERIPH_MAIA_COREGICMASK_UNION;
#endif
#define SOC_CRGPERIPH_MAIA_COREGICMASK_intr_a53_1_core0_gic_mask_START (0)
#define SOC_CRGPERIPH_MAIA_COREGICMASK_intr_a53_1_core0_gic_mask_END (0)
#define SOC_CRGPERIPH_MAIA_COREGICMASK_intr_a53_1_core1_gic_mask_START (1)
#define SOC_CRGPERIPH_MAIA_COREGICMASK_intr_a53_1_core1_gic_mask_END (1)
#define SOC_CRGPERIPH_MAIA_COREGICMASK_intr_a53_1_core2_gic_mask_START (2)
#define SOC_CRGPERIPH_MAIA_COREGICMASK_intr_a53_1_core2_gic_mask_END (2)
#define SOC_CRGPERIPH_MAIA_COREGICMASK_intr_a53_1_core3_gic_mask_START (3)
#define SOC_CRGPERIPH_MAIA_COREGICMASK_intr_a53_1_core3_gic_mask_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int a53_1_core0_pwrup_req : 1;
        unsigned int a53_1_core1_pwrup_req : 1;
        unsigned int a53_1_core2_pwrup_req : 1;
        unsigned int a53_1_core3_pwrup_req : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_CRGPERIPH_MAIA_COREPOWERUP_UNION;
#endif
#define SOC_CRGPERIPH_MAIA_COREPOWERUP_a53_1_core0_pwrup_req_START (0)
#define SOC_CRGPERIPH_MAIA_COREPOWERUP_a53_1_core0_pwrup_req_END (0)
#define SOC_CRGPERIPH_MAIA_COREPOWERUP_a53_1_core1_pwrup_req_START (1)
#define SOC_CRGPERIPH_MAIA_COREPOWERUP_a53_1_core1_pwrup_req_END (1)
#define SOC_CRGPERIPH_MAIA_COREPOWERUP_a53_1_core2_pwrup_req_START (2)
#define SOC_CRGPERIPH_MAIA_COREPOWERUP_a53_1_core2_pwrup_req_END (2)
#define SOC_CRGPERIPH_MAIA_COREPOWERUP_a53_1_core3_pwrup_req_START (3)
#define SOC_CRGPERIPH_MAIA_COREPOWERUP_a53_1_core3_pwrup_req_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int a53_1_core0_pwrdn_req : 1;
        unsigned int a53_1_core1_pwrdn_req : 1;
        unsigned int a53_1_core2_pwrdn_req : 1;
        unsigned int a53_1_core3_pwrdn_req : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_CRGPERIPH_MAIA_COREPOWERDN_UNION;
#endif
#define SOC_CRGPERIPH_MAIA_COREPOWERDN_a53_1_core0_pwrdn_req_START (0)
#define SOC_CRGPERIPH_MAIA_COREPOWERDN_a53_1_core0_pwrdn_req_END (0)
#define SOC_CRGPERIPH_MAIA_COREPOWERDN_a53_1_core1_pwrdn_req_START (1)
#define SOC_CRGPERIPH_MAIA_COREPOWERDN_a53_1_core1_pwrdn_req_END (1)
#define SOC_CRGPERIPH_MAIA_COREPOWERDN_a53_1_core2_pwrdn_req_START (2)
#define SOC_CRGPERIPH_MAIA_COREPOWERDN_a53_1_core2_pwrdn_req_END (2)
#define SOC_CRGPERIPH_MAIA_COREPOWERDN_a53_1_core3_pwrdn_req_START (3)
#define SOC_CRGPERIPH_MAIA_COREPOWERDN_a53_1_core3_pwrdn_req_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int a53_1_core0_pwr_stat : 4;
        unsigned int a53_1_core1_pwr_stat : 4;
        unsigned int a53_1_core2_pwr_stat : 4;
        unsigned int a53_1_core3_pwr_stat : 4;
        unsigned int reserved : 16;
    } reg;
} SOC_CRGPERIPH_MAIA_COREPOWERSTAT_UNION;
#endif
#define SOC_CRGPERIPH_MAIA_COREPOWERSTAT_a53_1_core0_pwr_stat_START (0)
#define SOC_CRGPERIPH_MAIA_COREPOWERSTAT_a53_1_core0_pwr_stat_END (3)
#define SOC_CRGPERIPH_MAIA_COREPOWERSTAT_a53_1_core1_pwr_stat_START (4)
#define SOC_CRGPERIPH_MAIA_COREPOWERSTAT_a53_1_core1_pwr_stat_END (7)
#define SOC_CRGPERIPH_MAIA_COREPOWERSTAT_a53_1_core2_pwr_stat_START (8)
#define SOC_CRGPERIPH_MAIA_COREPOWERSTAT_a53_1_core2_pwr_stat_END (11)
#define SOC_CRGPERIPH_MAIA_COREPOWERSTAT_a53_1_core3_pwr_stat_START (12)
#define SOC_CRGPERIPH_MAIA_COREPOWERSTAT_a53_1_core3_pwr_stat_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int a53_1_core_pwrup_time : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_CRGPERIPH_MAIA_COREPWRUPTIME_UNION;
#endif
#define SOC_CRGPERIPH_MAIA_COREPWRUPTIME_a53_1_core_pwrup_time_START (0)
#define SOC_CRGPERIPH_MAIA_COREPWRUPTIME_a53_1_core_pwrup_time_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int a53_1_core_pwrdn_time : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_CRGPERIPH_MAIA_COREPWRDNTIME_UNION;
#endif
#define SOC_CRGPERIPH_MAIA_COREPWRDNTIME_a53_1_core_pwrdn_time_START (0)
#define SOC_CRGPERIPH_MAIA_COREPWRDNTIME_a53_1_core_pwrdn_time_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int a53_1_core_iso_time : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_CRGPERIPH_MAIA_COREISOTIME_UNION;
#endif
#define SOC_CRGPERIPH_MAIA_COREISOTIME_a53_1_core_iso_time_START (0)
#define SOC_CRGPERIPH_MAIA_COREISOTIME_a53_1_core_iso_time_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int a53_1_core_dbg_time : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_CRGPERIPH_MAIA_COREDBGTIME_UNION;
#endif
#define SOC_CRGPERIPH_MAIA_COREDBGTIME_a53_1_core_dbg_time_START (0)
#define SOC_CRGPERIPH_MAIA_COREDBGTIME_a53_1_core_dbg_time_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int a53_1_core_rst_time : 3;
        unsigned int reserved : 29;
    } reg;
} SOC_CRGPERIPH_MAIA_CORERSTTIME_UNION;
#endif
#define SOC_CRGPERIPH_MAIA_CORERSTTIME_a53_1_core_rst_time_START (0)
#define SOC_CRGPERIPH_MAIA_CORERSTTIME_a53_1_core_rst_time_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int a53_1_core_urst_time : 6;
        unsigned int reserved : 26;
    } reg;
} SOC_CRGPERIPH_MAIA_COREURSTTIME_UNION;
#endif
#define SOC_CRGPERIPH_MAIA_COREURSTTIME_a53_1_core_urst_time_START (0)
#define SOC_CRGPERIPH_MAIA_COREURSTTIME_a53_1_core_urst_time_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int a53_1_core_ocldo_dis_time : 16;
        unsigned int a53_1_core_ocldo_en_time : 16;
    } reg;
} SOC_CRGPERIPH_MAIA_COREOCLDOTIME0_UNION;
#endif
#define SOC_CRGPERIPH_MAIA_COREOCLDOTIME0_a53_1_core_ocldo_dis_time_START (0)
#define SOC_CRGPERIPH_MAIA_COREOCLDOTIME0_a53_1_core_ocldo_dis_time_END (15)
#define SOC_CRGPERIPH_MAIA_COREOCLDOTIME0_a53_1_core_ocldo_en_time_START (16)
#define SOC_CRGPERIPH_MAIA_COREOCLDOTIME0_a53_1_core_ocldo_en_time_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int a53_1_core_ocldo_pwrdn_time : 16;
        unsigned int a53_1_core_ocldo_pwrup_time : 16;
    } reg;
} SOC_CRGPERIPH_MAIA_COREOCLDOTIME1_UNION;
#endif
#define SOC_CRGPERIPH_MAIA_COREOCLDOTIME1_a53_1_core_ocldo_pwrdn_time_START (0)
#define SOC_CRGPERIPH_MAIA_COREOCLDOTIME1_a53_1_core_ocldo_pwrdn_time_END (15)
#define SOC_CRGPERIPH_MAIA_COREOCLDOTIME1_a53_1_core_ocldo_pwrup_time_START (16)
#define SOC_CRGPERIPH_MAIA_COREOCLDOTIME1_a53_1_core_ocldo_pwrup_time_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int a53_1_core0_ocdlo_stat : 3;
        unsigned int a53_1_core1_ocdlo_stat : 3;
        unsigned int a53_1_core2_ocdlo_stat : 3;
        unsigned int a53_1_core3_ocdlo_stat : 3;
        unsigned int reserved : 20;
    } reg;
} SOC_CRGPERIPH_MAIA_COREOCLDOSTAT_UNION;
#endif
#define SOC_CRGPERIPH_MAIA_COREOCLDOSTAT_a53_1_core0_ocdlo_stat_START (0)
#define SOC_CRGPERIPH_MAIA_COREOCLDOSTAT_a53_1_core0_ocdlo_stat_END (2)
#define SOC_CRGPERIPH_MAIA_COREOCLDOSTAT_a53_1_core1_ocdlo_stat_START (3)
#define SOC_CRGPERIPH_MAIA_COREOCLDOSTAT_a53_1_core1_ocdlo_stat_END (5)
#define SOC_CRGPERIPH_MAIA_COREOCLDOSTAT_a53_1_core2_ocdlo_stat_START (6)
#define SOC_CRGPERIPH_MAIA_COREOCLDOSTAT_a53_1_core2_ocdlo_stat_END (8)
#define SOC_CRGPERIPH_MAIA_COREOCLDOSTAT_a53_1_core3_ocdlo_stat_START (9)
#define SOC_CRGPERIPH_MAIA_COREOCLDOSTAT_a53_1_core3_ocdlo_stat_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int big_core0_dvfs_dis_req_bypass : 1;
        unsigned int big_core1_dvfs_dis_req_bypass : 1;
        unsigned int big_core2_dvfs_dis_req_bypass : 1;
        unsigned int big_core3_dvfs_dis_req_bypass : 1;
        unsigned int big_core0_sw2ocldo_req_bypass : 1;
        unsigned int big_core1_sw2ocldo_req_bypass : 1;
        unsigned int big_core2_sw2ocldo_req_bypass : 1;
        unsigned int big_core3_sw2ocldo_req_bypass : 1;
        unsigned int big_core0_ocldo_dis_req_bypass : 1;
        unsigned int big_core1_ocldo_dis_req_bypass : 1;
        unsigned int big_core2_ocldo_dis_req_bypass : 1;
        unsigned int big_core3_ocldo_dis_req_bypass : 1;
        unsigned int reserved : 4;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_BIG_CORE_PDC_PMC_CTRL_UNION;
#endif
#define SOC_CRGPERIPH_BIG_CORE_PDC_PMC_CTRL_big_core0_dvfs_dis_req_bypass_START (0)
#define SOC_CRGPERIPH_BIG_CORE_PDC_PMC_CTRL_big_core0_dvfs_dis_req_bypass_END (0)
#define SOC_CRGPERIPH_BIG_CORE_PDC_PMC_CTRL_big_core1_dvfs_dis_req_bypass_START (1)
#define SOC_CRGPERIPH_BIG_CORE_PDC_PMC_CTRL_big_core1_dvfs_dis_req_bypass_END (1)
#define SOC_CRGPERIPH_BIG_CORE_PDC_PMC_CTRL_big_core2_dvfs_dis_req_bypass_START (2)
#define SOC_CRGPERIPH_BIG_CORE_PDC_PMC_CTRL_big_core2_dvfs_dis_req_bypass_END (2)
#define SOC_CRGPERIPH_BIG_CORE_PDC_PMC_CTRL_big_core3_dvfs_dis_req_bypass_START (3)
#define SOC_CRGPERIPH_BIG_CORE_PDC_PMC_CTRL_big_core3_dvfs_dis_req_bypass_END (3)
#define SOC_CRGPERIPH_BIG_CORE_PDC_PMC_CTRL_big_core0_sw2ocldo_req_bypass_START (4)
#define SOC_CRGPERIPH_BIG_CORE_PDC_PMC_CTRL_big_core0_sw2ocldo_req_bypass_END (4)
#define SOC_CRGPERIPH_BIG_CORE_PDC_PMC_CTRL_big_core1_sw2ocldo_req_bypass_START (5)
#define SOC_CRGPERIPH_BIG_CORE_PDC_PMC_CTRL_big_core1_sw2ocldo_req_bypass_END (5)
#define SOC_CRGPERIPH_BIG_CORE_PDC_PMC_CTRL_big_core2_sw2ocldo_req_bypass_START (6)
#define SOC_CRGPERIPH_BIG_CORE_PDC_PMC_CTRL_big_core2_sw2ocldo_req_bypass_END (6)
#define SOC_CRGPERIPH_BIG_CORE_PDC_PMC_CTRL_big_core3_sw2ocldo_req_bypass_START (7)
#define SOC_CRGPERIPH_BIG_CORE_PDC_PMC_CTRL_big_core3_sw2ocldo_req_bypass_END (7)
#define SOC_CRGPERIPH_BIG_CORE_PDC_PMC_CTRL_big_core0_ocldo_dis_req_bypass_START (8)
#define SOC_CRGPERIPH_BIG_CORE_PDC_PMC_CTRL_big_core0_ocldo_dis_req_bypass_END (8)
#define SOC_CRGPERIPH_BIG_CORE_PDC_PMC_CTRL_big_core1_ocldo_dis_req_bypass_START (9)
#define SOC_CRGPERIPH_BIG_CORE_PDC_PMC_CTRL_big_core1_ocldo_dis_req_bypass_END (9)
#define SOC_CRGPERIPH_BIG_CORE_PDC_PMC_CTRL_big_core2_ocldo_dis_req_bypass_START (10)
#define SOC_CRGPERIPH_BIG_CORE_PDC_PMC_CTRL_big_core2_ocldo_dis_req_bypass_END (10)
#define SOC_CRGPERIPH_BIG_CORE_PDC_PMC_CTRL_big_core3_ocldo_dis_req_bypass_START (11)
#define SOC_CRGPERIPH_BIG_CORE_PDC_PMC_CTRL_big_core3_ocldo_dis_req_bypass_END (11)
#define SOC_CRGPERIPH_BIG_CORE_PDC_PMC_CTRL_bitmasken_START (16)
#define SOC_CRGPERIPH_BIG_CORE_PDC_PMC_CTRL_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dmc_peri_autogt_mode : 1;
        unsigned int dmc_peri_autogt_cnt_cfg : 6;
        unsigned int dmc_peri_autogt_bypass : 1;
        unsigned int reserved : 8;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_DMC_PERI_AUTOGT_CTRL_UNION;
#endif
#define SOC_CRGPERIPH_DMC_PERI_AUTOGT_CTRL_dmc_peri_autogt_mode_START (0)
#define SOC_CRGPERIPH_DMC_PERI_AUTOGT_CTRL_dmc_peri_autogt_mode_END (0)
#define SOC_CRGPERIPH_DMC_PERI_AUTOGT_CTRL_dmc_peri_autogt_cnt_cfg_START (1)
#define SOC_CRGPERIPH_DMC_PERI_AUTOGT_CTRL_dmc_peri_autogt_cnt_cfg_END (6)
#define SOC_CRGPERIPH_DMC_PERI_AUTOGT_CTRL_dmc_peri_autogt_bypass_START (7)
#define SOC_CRGPERIPH_DMC_PERI_AUTOGT_CTRL_dmc_peri_autogt_bypass_END (7)
#define SOC_CRGPERIPH_DMC_PERI_AUTOGT_CTRL_bitmasken_START (16)
#define SOC_CRGPERIPH_DMC_PERI_AUTOGT_CTRL_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddrc_core_r_auto_gt_bypass : 1;
        unsigned int ddrc_lp_waitcfg_in : 10;
        unsigned int ddrc_lp_waitcfg_out : 10;
        unsigned int ddrc_autogt_mode : 1;
        unsigned int ddrc_autogt_cnt_cfg : 6;
        unsigned int mddrc_idle_bypass : 1;
        unsigned int ddrc_atgs_mon_bypass : 1;
        unsigned int ddrc_sys_clk_auto_gt_bypass : 1;
        unsigned int ddrc_core_l_auto_gt_bypass : 1;
    } reg;
} SOC_CRGPERIPH_DDRC_AUTOGT_CTRL_UNION;
#endif
#define SOC_CRGPERIPH_DDRC_AUTOGT_CTRL_ddrc_core_r_auto_gt_bypass_START (0)
#define SOC_CRGPERIPH_DDRC_AUTOGT_CTRL_ddrc_core_r_auto_gt_bypass_END (0)
#define SOC_CRGPERIPH_DDRC_AUTOGT_CTRL_ddrc_lp_waitcfg_in_START (1)
#define SOC_CRGPERIPH_DDRC_AUTOGT_CTRL_ddrc_lp_waitcfg_in_END (10)
#define SOC_CRGPERIPH_DDRC_AUTOGT_CTRL_ddrc_lp_waitcfg_out_START (11)
#define SOC_CRGPERIPH_DDRC_AUTOGT_CTRL_ddrc_lp_waitcfg_out_END (20)
#define SOC_CRGPERIPH_DDRC_AUTOGT_CTRL_ddrc_autogt_mode_START (21)
#define SOC_CRGPERIPH_DDRC_AUTOGT_CTRL_ddrc_autogt_mode_END (21)
#define SOC_CRGPERIPH_DDRC_AUTOGT_CTRL_ddrc_autogt_cnt_cfg_START (22)
#define SOC_CRGPERIPH_DDRC_AUTOGT_CTRL_ddrc_autogt_cnt_cfg_END (27)
#define SOC_CRGPERIPH_DDRC_AUTOGT_CTRL_mddrc_idle_bypass_START (28)
#define SOC_CRGPERIPH_DDRC_AUTOGT_CTRL_mddrc_idle_bypass_END (28)
#define SOC_CRGPERIPH_DDRC_AUTOGT_CTRL_ddrc_atgs_mon_bypass_START (29)
#define SOC_CRGPERIPH_DDRC_AUTOGT_CTRL_ddrc_atgs_mon_bypass_END (29)
#define SOC_CRGPERIPH_DDRC_AUTOGT_CTRL_ddrc_sys_clk_auto_gt_bypass_START (30)
#define SOC_CRGPERIPH_DDRC_AUTOGT_CTRL_ddrc_sys_clk_auto_gt_bypass_END (30)
#define SOC_CRGPERIPH_DDRC_AUTOGT_CTRL_ddrc_core_l_auto_gt_bypass_START (31)
#define SOC_CRGPERIPH_DDRC_AUTOGT_CTRL_ddrc_core_l_auto_gt_bypass_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 1;
        unsigned int reserved_1: 10;
        unsigned int reserved_2: 9;
        unsigned int reserved_3: 1;
        unsigned int reserved_4: 6;
        unsigned int reserved_5: 1;
        unsigned int reserved_6: 1;
        unsigned int reserved_7: 1;
        unsigned int reserved_8: 1;
        unsigned int reserved_9: 1;
    } reg;
} SOC_CRGPERIPH_PERI_AUTODIV0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 1;
        unsigned int reserved_1: 10;
        unsigned int reserved_2: 10;
        unsigned int reserved_3: 6;
        unsigned int reserved_4: 5;
    } reg;
} SOC_CRGPERIPH_PERI_AUTODIV1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int venc_div_auto_reduce_bypass : 1;
        unsigned int reserved_0 : 10;
        unsigned int reserved_1 : 10;
        unsigned int venc_div_auto_cfg : 6;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 4;
    } reg;
} SOC_CRGPERIPH_PERI_AUTODIV2_UNION;
#endif
#define SOC_CRGPERIPH_PERI_AUTODIV2_venc_div_auto_reduce_bypass_START (0)
#define SOC_CRGPERIPH_PERI_AUTODIV2_venc_div_auto_reduce_bypass_END (0)
#define SOC_CRGPERIPH_PERI_AUTODIV2_venc_div_auto_cfg_START (21)
#define SOC_CRGPERIPH_PERI_AUTODIV2_venc_div_auto_cfg_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vdec_div_auto_reduce_bypass : 1;
        unsigned int reserved_0 : 10;
        unsigned int reserved_1 : 10;
        unsigned int vdec_div_auto_cfg : 6;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 4;
    } reg;
} SOC_CRGPERIPH_PERI_AUTODIV3_UNION;
#endif
#define SOC_CRGPERIPH_PERI_AUTODIV3_vdec_div_auto_reduce_bypass_START (0)
#define SOC_CRGPERIPH_PERI_AUTODIV3_vdec_div_auto_reduce_bypass_END (0)
#define SOC_CRGPERIPH_PERI_AUTODIV3_vdec_div_auto_cfg_START (21)
#define SOC_CRGPERIPH_PERI_AUTODIV3_vdec_div_auto_cfg_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 1;
        unsigned int reserved_1: 10;
        unsigned int reserved_2: 8;
        unsigned int reserved_3: 1;
        unsigned int reserved_4: 1;
        unsigned int reserved_5: 6;
        unsigned int reserved_6: 1;
        unsigned int reserved_7: 1;
        unsigned int reserved_8: 1;
        unsigned int reserved_9: 1;
        unsigned int reserved_10: 1;
    } reg;
} SOC_CRGPERIPH_PERI_AUTODIV4_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcodecbus_div_auto_reduce_bypass : 1;
        unsigned int reserved_0 : 10;
        unsigned int reserved_1 : 10;
        unsigned int vcodecbus_div_auto_cfg : 6;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
    } reg;
} SOC_CRGPERIPH_PERI_AUTODIV5_UNION;
#endif
#define SOC_CRGPERIPH_PERI_AUTODIV5_vcodecbus_div_auto_reduce_bypass_START (0)
#define SOC_CRGPERIPH_PERI_AUTODIV5_vcodecbus_div_auto_reduce_bypass_END (0)
#define SOC_CRGPERIPH_PERI_AUTODIV5_vcodecbus_div_auto_cfg_START (21)
#define SOC_CRGPERIPH_PERI_AUTODIV5_vcodecbus_div_auto_cfg_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sysbus_div_auto_reduce_bypass_lpm3 : 1;
        unsigned int sysbus_auto_waitcfg_in : 10;
        unsigned int sysbus_auto_waitcfg_out : 10;
        unsigned int sysbus_div_auto_cfg : 6;
        unsigned int sysbus_ufs_hibernate_bypass : 1;
        unsigned int sysbus_hisee_bypass : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int sysbus_dpctrl_bypass : 1;
    } reg;
} SOC_CRGPERIPH_PERI_AUTODIV6_UNION;
#endif
#define SOC_CRGPERIPH_PERI_AUTODIV6_sysbus_div_auto_reduce_bypass_lpm3_START (0)
#define SOC_CRGPERIPH_PERI_AUTODIV6_sysbus_div_auto_reduce_bypass_lpm3_END (0)
#define SOC_CRGPERIPH_PERI_AUTODIV6_sysbus_auto_waitcfg_in_START (1)
#define SOC_CRGPERIPH_PERI_AUTODIV6_sysbus_auto_waitcfg_in_END (10)
#define SOC_CRGPERIPH_PERI_AUTODIV6_sysbus_auto_waitcfg_out_START (11)
#define SOC_CRGPERIPH_PERI_AUTODIV6_sysbus_auto_waitcfg_out_END (20)
#define SOC_CRGPERIPH_PERI_AUTODIV6_sysbus_div_auto_cfg_START (21)
#define SOC_CRGPERIPH_PERI_AUTODIV6_sysbus_div_auto_cfg_END (26)
#define SOC_CRGPERIPH_PERI_AUTODIV6_sysbus_ufs_hibernate_bypass_START (27)
#define SOC_CRGPERIPH_PERI_AUTODIV6_sysbus_ufs_hibernate_bypass_END (27)
#define SOC_CRGPERIPH_PERI_AUTODIV6_sysbus_hisee_bypass_START (28)
#define SOC_CRGPERIPH_PERI_AUTODIV6_sysbus_hisee_bypass_END (28)
#define SOC_CRGPERIPH_PERI_AUTODIV6_sysbus_dpctrl_bypass_START (31)
#define SOC_CRGPERIPH_PERI_AUTODIV6_sysbus_dpctrl_bypass_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sysbus_aobus_bypass : 1;
        unsigned int sysbus_top_cssys_bypass : 1;
        unsigned int sysbus_perf_stat_bypass : 1;
        unsigned int sysbus_usb3_bypass : 1;
        unsigned int reserved_0 : 1;
        unsigned int sysbus_sec_bypass : 1;
        unsigned int sysbus_socp_bypass : 1;
        unsigned int sysbus_dmac_mst_bypass : 1;
        unsigned int sysbus_cfg2media_bypass : 1;
        unsigned int sysbus_pcie_bypass : 1;
        unsigned int sysbus_sd3_bypass : 1;
        unsigned int sysbus_ipf_bypass : 1;
        unsigned int sysbus_cci2sysbus_bypass : 1;
        unsigned int sysbus_modem_mst_bypass : 1;
        unsigned int sysbus_ufs_bypass : 1;
        unsigned int sysbus_djtag_mst_bypass : 1;
        unsigned int sysbus_lpm3_mst_bypass : 1;
        unsigned int sysbus_mediatocfg_bypass : 1;
        unsigned int sysbus_ivp32_mst_bypass : 1;
        unsigned int sysbus_mmc1bus_sdio_bypass : 1;
        unsigned int dambus_perf_stat_bypass : 1;
        unsigned int dmabus_ipf_bypass : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int dmabus_socp_bypass : 1;
        unsigned int dmabus_top_cssys_bypass : 1;
        unsigned int reserved_3 : 1;
        unsigned int sysbus_vcodec_cfg_bypass : 1;
        unsigned int sysbus_ispcpu_cfg_bypass : 1;
        unsigned int cfgbus_djtag_mst_bypass : 1;
        unsigned int cfgbus_lpm3_mst_bypass : 1;
        unsigned int cfgbus_mediatocfg_bypass : 1;
    } reg;
} SOC_CRGPERIPH_PERI_AUTODIV7_UNION;
#endif
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_aobus_bypass_START (0)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_aobus_bypass_END (0)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_top_cssys_bypass_START (1)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_top_cssys_bypass_END (1)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_perf_stat_bypass_START (2)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_perf_stat_bypass_END (2)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_usb3_bypass_START (3)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_usb3_bypass_END (3)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_sec_bypass_START (5)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_sec_bypass_END (5)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_socp_bypass_START (6)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_socp_bypass_END (6)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_dmac_mst_bypass_START (7)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_dmac_mst_bypass_END (7)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_cfg2media_bypass_START (8)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_cfg2media_bypass_END (8)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_pcie_bypass_START (9)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_pcie_bypass_END (9)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_sd3_bypass_START (10)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_sd3_bypass_END (10)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_ipf_bypass_START (11)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_ipf_bypass_END (11)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_cci2sysbus_bypass_START (12)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_cci2sysbus_bypass_END (12)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_modem_mst_bypass_START (13)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_modem_mst_bypass_END (13)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_ufs_bypass_START (14)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_ufs_bypass_END (14)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_djtag_mst_bypass_START (15)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_djtag_mst_bypass_END (15)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_lpm3_mst_bypass_START (16)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_lpm3_mst_bypass_END (16)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_mediatocfg_bypass_START (17)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_mediatocfg_bypass_END (17)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_ivp32_mst_bypass_START (18)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_ivp32_mst_bypass_END (18)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_mmc1bus_sdio_bypass_START (19)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_mmc1bus_sdio_bypass_END (19)
#define SOC_CRGPERIPH_PERI_AUTODIV7_dambus_perf_stat_bypass_START (20)
#define SOC_CRGPERIPH_PERI_AUTODIV7_dambus_perf_stat_bypass_END (20)
#define SOC_CRGPERIPH_PERI_AUTODIV7_dmabus_ipf_bypass_START (21)
#define SOC_CRGPERIPH_PERI_AUTODIV7_dmabus_ipf_bypass_END (21)
#define SOC_CRGPERIPH_PERI_AUTODIV7_dmabus_socp_bypass_START (24)
#define SOC_CRGPERIPH_PERI_AUTODIV7_dmabus_socp_bypass_END (24)
#define SOC_CRGPERIPH_PERI_AUTODIV7_dmabus_top_cssys_bypass_START (25)
#define SOC_CRGPERIPH_PERI_AUTODIV7_dmabus_top_cssys_bypass_END (25)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_vcodec_cfg_bypass_START (27)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_vcodec_cfg_bypass_END (27)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_ispcpu_cfg_bypass_START (28)
#define SOC_CRGPERIPH_PERI_AUTODIV7_sysbus_ispcpu_cfg_bypass_END (28)
#define SOC_CRGPERIPH_PERI_AUTODIV7_cfgbus_djtag_mst_bypass_START (29)
#define SOC_CRGPERIPH_PERI_AUTODIV7_cfgbus_djtag_mst_bypass_END (29)
#define SOC_CRGPERIPH_PERI_AUTODIV7_cfgbus_lpm3_mst_bypass_START (30)
#define SOC_CRGPERIPH_PERI_AUTODIV7_cfgbus_lpm3_mst_bypass_END (30)
#define SOC_CRGPERIPH_PERI_AUTODIV7_cfgbus_mediatocfg_bypass_START (31)
#define SOC_CRGPERIPH_PERI_AUTODIV7_cfgbus_mediatocfg_bypass_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cfgbus_div_auto_reduce_bypass_lpm3 : 1;
        unsigned int cfgbus_auto_waitcfg_in : 10;
        unsigned int cfgbus_auto_waitcfg_out : 10;
        unsigned int cfgbus_div_auto_cfg : 6;
        unsigned int cfgbus_sysbus_relate_auto_reduce_bypass : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_CRGPERIPH_PERI_AUTODIV8_UNION;
#endif
#define SOC_CRGPERIPH_PERI_AUTODIV8_cfgbus_div_auto_reduce_bypass_lpm3_START (0)
#define SOC_CRGPERIPH_PERI_AUTODIV8_cfgbus_div_auto_reduce_bypass_lpm3_END (0)
#define SOC_CRGPERIPH_PERI_AUTODIV8_cfgbus_auto_waitcfg_in_START (1)
#define SOC_CRGPERIPH_PERI_AUTODIV8_cfgbus_auto_waitcfg_in_END (10)
#define SOC_CRGPERIPH_PERI_AUTODIV8_cfgbus_auto_waitcfg_out_START (11)
#define SOC_CRGPERIPH_PERI_AUTODIV8_cfgbus_auto_waitcfg_out_END (20)
#define SOC_CRGPERIPH_PERI_AUTODIV8_cfgbus_div_auto_cfg_START (21)
#define SOC_CRGPERIPH_PERI_AUTODIV8_cfgbus_div_auto_cfg_END (26)
#define SOC_CRGPERIPH_PERI_AUTODIV8_cfgbus_sysbus_relate_auto_reduce_bypass_START (27)
#define SOC_CRGPERIPH_PERI_AUTODIV8_cfgbus_sysbus_relate_auto_reduce_bypass_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dmabus_div_auto_reduce_bypass_lpm3 : 1;
        unsigned int dmabus_auto_waitcfg_in : 10;
        unsigned int dmabus_auto_waitcfg_out : 10;
        unsigned int dmabus_div_auto_cfg : 6;
        unsigned int dmabus_dmac_mst_bypass : 1;
        unsigned int dmabus_sysbus_relate_auto_reduce_bypass : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
    } reg;
} SOC_CRGPERIPH_PERI_AUTODIV9_UNION;
#endif
#define SOC_CRGPERIPH_PERI_AUTODIV9_dmabus_div_auto_reduce_bypass_lpm3_START (0)
#define SOC_CRGPERIPH_PERI_AUTODIV9_dmabus_div_auto_reduce_bypass_lpm3_END (0)
#define SOC_CRGPERIPH_PERI_AUTODIV9_dmabus_auto_waitcfg_in_START (1)
#define SOC_CRGPERIPH_PERI_AUTODIV9_dmabus_auto_waitcfg_in_END (10)
#define SOC_CRGPERIPH_PERI_AUTODIV9_dmabus_auto_waitcfg_out_START (11)
#define SOC_CRGPERIPH_PERI_AUTODIV9_dmabus_auto_waitcfg_out_END (20)
#define SOC_CRGPERIPH_PERI_AUTODIV9_dmabus_div_auto_cfg_START (21)
#define SOC_CRGPERIPH_PERI_AUTODIV9_dmabus_div_auto_cfg_END (26)
#define SOC_CRGPERIPH_PERI_AUTODIV9_dmabus_dmac_mst_bypass_START (27)
#define SOC_CRGPERIPH_PERI_AUTODIV9_dmabus_dmac_mst_bypass_END (27)
#define SOC_CRGPERIPH_PERI_AUTODIV9_dmabus_sysbus_relate_auto_reduce_bypass_START (28)
#define SOC_CRGPERIPH_PERI_AUTODIV9_dmabus_sysbus_relate_auto_reduce_bypass_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ics_div_auto_reduce_bypass : 1;
        unsigned int ics_auto_waitcfg_in : 10;
        unsigned int ics_auto_waitcfg_out : 10;
        unsigned int ics_div_auto_cfg : 6;
        unsigned int ics_idle_bypass : 1;
        unsigned int reserved : 4;
    } reg;
} SOC_CRGPERIPH_PERI_AUTODIV10_UNION;
#endif
#define SOC_CRGPERIPH_PERI_AUTODIV10_ics_div_auto_reduce_bypass_START (0)
#define SOC_CRGPERIPH_PERI_AUTODIV10_ics_div_auto_reduce_bypass_END (0)
#define SOC_CRGPERIPH_PERI_AUTODIV10_ics_auto_waitcfg_in_START (1)
#define SOC_CRGPERIPH_PERI_AUTODIV10_ics_auto_waitcfg_in_END (10)
#define SOC_CRGPERIPH_PERI_AUTODIV10_ics_auto_waitcfg_out_START (11)
#define SOC_CRGPERIPH_PERI_AUTODIV10_ics_auto_waitcfg_out_END (20)
#define SOC_CRGPERIPH_PERI_AUTODIV10_ics_div_auto_cfg_START (21)
#define SOC_CRGPERIPH_PERI_AUTODIV10_ics_div_auto_cfg_END (26)
#define SOC_CRGPERIPH_PERI_AUTODIV10_ics_idle_bypass_START (27)
#define SOC_CRGPERIPH_PERI_AUTODIV10_ics_idle_bypass_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mmc0bus_div_auto_reduce_bypass_lpm3 : 1;
        unsigned int mmc0bus_auto_waitcfg_in : 10;
        unsigned int mmc0bus_auto_waitcfg_out : 10;
        unsigned int mmc0bus_div_auto_cfg : 6;
        unsigned int mmc0bus_usb3_bypass : 1;
        unsigned int mmc0bus_sysbus_relate_auto_reduce_bypass : 1;
        unsigned int mmc0bus_sd3_bypass : 1;
        unsigned int mmc0bus_dpctrl_bypass : 1;
        unsigned int reserved : 1;
    } reg;
} SOC_CRGPERIPH_PERI_AUTODIV11_UNION;
#endif
#define SOC_CRGPERIPH_PERI_AUTODIV11_mmc0bus_div_auto_reduce_bypass_lpm3_START (0)
#define SOC_CRGPERIPH_PERI_AUTODIV11_mmc0bus_div_auto_reduce_bypass_lpm3_END (0)
#define SOC_CRGPERIPH_PERI_AUTODIV11_mmc0bus_auto_waitcfg_in_START (1)
#define SOC_CRGPERIPH_PERI_AUTODIV11_mmc0bus_auto_waitcfg_in_END (10)
#define SOC_CRGPERIPH_PERI_AUTODIV11_mmc0bus_auto_waitcfg_out_START (11)
#define SOC_CRGPERIPH_PERI_AUTODIV11_mmc0bus_auto_waitcfg_out_END (20)
#define SOC_CRGPERIPH_PERI_AUTODIV11_mmc0bus_div_auto_cfg_START (21)
#define SOC_CRGPERIPH_PERI_AUTODIV11_mmc0bus_div_auto_cfg_END (26)
#define SOC_CRGPERIPH_PERI_AUTODIV11_mmc0bus_usb3_bypass_START (27)
#define SOC_CRGPERIPH_PERI_AUTODIV11_mmc0bus_usb3_bypass_END (27)
#define SOC_CRGPERIPH_PERI_AUTODIV11_mmc0bus_sysbus_relate_auto_reduce_bypass_START (28)
#define SOC_CRGPERIPH_PERI_AUTODIV11_mmc0bus_sysbus_relate_auto_reduce_bypass_END (28)
#define SOC_CRGPERIPH_PERI_AUTODIV11_mmc0bus_sd3_bypass_START (29)
#define SOC_CRGPERIPH_PERI_AUTODIV11_mmc0bus_sd3_bypass_END (29)
#define SOC_CRGPERIPH_PERI_AUTODIV11_mmc0bus_dpctrl_bypass_START (30)
#define SOC_CRGPERIPH_PERI_AUTODIV11_mmc0bus_dpctrl_bypass_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mmc1bus_div_auto_reduce_bypass_lpm3 : 1;
        unsigned int mmc1bus_auto_waitcfg_in : 10;
        unsigned int mmc1bus_auto_waitcfg_out : 10;
        unsigned int mmc1bus_div_auto_cfg : 6;
        unsigned int mmc1bus_ufs_bypass : 1;
        unsigned int mmc1bus_pcie_bypass : 1;
        unsigned int mmc1bus_sdio_bypass : 1;
        unsigned int mmc1bus_sysbus_relate_auto_reduce_bypass : 1;
        unsigned int mmc1bus_sec_bypass : 1;
    } reg;
} SOC_CRGPERIPH_PERI_AUTODIV12_UNION;
#endif
#define SOC_CRGPERIPH_PERI_AUTODIV12_mmc1bus_div_auto_reduce_bypass_lpm3_START (0)
#define SOC_CRGPERIPH_PERI_AUTODIV12_mmc1bus_div_auto_reduce_bypass_lpm3_END (0)
#define SOC_CRGPERIPH_PERI_AUTODIV12_mmc1bus_auto_waitcfg_in_START (1)
#define SOC_CRGPERIPH_PERI_AUTODIV12_mmc1bus_auto_waitcfg_in_END (10)
#define SOC_CRGPERIPH_PERI_AUTODIV12_mmc1bus_auto_waitcfg_out_START (11)
#define SOC_CRGPERIPH_PERI_AUTODIV12_mmc1bus_auto_waitcfg_out_END (20)
#define SOC_CRGPERIPH_PERI_AUTODIV12_mmc1bus_div_auto_cfg_START (21)
#define SOC_CRGPERIPH_PERI_AUTODIV12_mmc1bus_div_auto_cfg_END (26)
#define SOC_CRGPERIPH_PERI_AUTODIV12_mmc1bus_ufs_bypass_START (27)
#define SOC_CRGPERIPH_PERI_AUTODIV12_mmc1bus_ufs_bypass_END (27)
#define SOC_CRGPERIPH_PERI_AUTODIV12_mmc1bus_pcie_bypass_START (28)
#define SOC_CRGPERIPH_PERI_AUTODIV12_mmc1bus_pcie_bypass_END (28)
#define SOC_CRGPERIPH_PERI_AUTODIV12_mmc1bus_sdio_bypass_START (29)
#define SOC_CRGPERIPH_PERI_AUTODIV12_mmc1bus_sdio_bypass_END (29)
#define SOC_CRGPERIPH_PERI_AUTODIV12_mmc1bus_sysbus_relate_auto_reduce_bypass_START (30)
#define SOC_CRGPERIPH_PERI_AUTODIV12_mmc1bus_sysbus_relate_auto_reduce_bypass_END (30)
#define SOC_CRGPERIPH_PERI_AUTODIV12_mmc1bus_sec_bypass_START (31)
#define SOC_CRGPERIPH_PERI_AUTODIV12_mmc1bus_sec_bypass_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lpmcu_div_auto_reduce_bypass : 1;
        unsigned int lpmcu_auto_waitcfg_in : 10;
        unsigned int lpmcu_auto_waitcfg_out : 10;
        unsigned int lpmcu_div_auto_cfg : 6;
        unsigned int lpmcu_idle_bypass : 1;
        unsigned int lpmcu_bus_slv_idle_bypass : 1;
        unsigned int reserved : 3;
    } reg;
} SOC_CRGPERIPH_PERI_AUTODIV13_UNION;
#endif
#define SOC_CRGPERIPH_PERI_AUTODIV13_lpmcu_div_auto_reduce_bypass_START (0)
#define SOC_CRGPERIPH_PERI_AUTODIV13_lpmcu_div_auto_reduce_bypass_END (0)
#define SOC_CRGPERIPH_PERI_AUTODIV13_lpmcu_auto_waitcfg_in_START (1)
#define SOC_CRGPERIPH_PERI_AUTODIV13_lpmcu_auto_waitcfg_in_END (10)
#define SOC_CRGPERIPH_PERI_AUTODIV13_lpmcu_auto_waitcfg_out_START (11)
#define SOC_CRGPERIPH_PERI_AUTODIV13_lpmcu_auto_waitcfg_out_END (20)
#define SOC_CRGPERIPH_PERI_AUTODIV13_lpmcu_div_auto_cfg_START (21)
#define SOC_CRGPERIPH_PERI_AUTODIV13_lpmcu_div_auto_cfg_END (26)
#define SOC_CRGPERIPH_PERI_AUTODIV13_lpmcu_idle_bypass_START (27)
#define SOC_CRGPERIPH_PERI_AUTODIV13_lpmcu_idle_bypass_END (27)
#define SOC_CRGPERIPH_PERI_AUTODIV13_lpmcu_bus_slv_idle_bypass_START (28)
#define SOC_CRGPERIPH_PERI_AUTODIV13_lpmcu_bus_slv_idle_bypass_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int a57_auto_swtotcxo_bypass : 1;
        unsigned int a57_auto_waitcfg_in : 10;
        unsigned int a57_auto_waitcfg_out : 10;
        unsigned int reserved : 11;
    } reg;
} SOC_CRGPERIPH_PERI_AUTODIV14_UNION;
#endif
#define SOC_CRGPERIPH_PERI_AUTODIV14_a57_auto_swtotcxo_bypass_START (0)
#define SOC_CRGPERIPH_PERI_AUTODIV14_a57_auto_swtotcxo_bypass_END (0)
#define SOC_CRGPERIPH_PERI_AUTODIV14_a57_auto_waitcfg_in_START (1)
#define SOC_CRGPERIPH_PERI_AUTODIV14_a57_auto_waitcfg_in_END (10)
#define SOC_CRGPERIPH_PERI_AUTODIV14_a57_auto_waitcfg_out_START (11)
#define SOC_CRGPERIPH_PERI_AUTODIV14_a57_auto_waitcfg_out_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int a53_auto_swtotcxo_bypass : 1;
        unsigned int a53_auto_waitcfg_in : 10;
        unsigned int a53_auto_waitcfg_out : 10;
        unsigned int reserved : 11;
    } reg;
} SOC_CRGPERIPH_PERI_AUTODIV15_UNION;
#endif
#define SOC_CRGPERIPH_PERI_AUTODIV15_a53_auto_swtotcxo_bypass_START (0)
#define SOC_CRGPERIPH_PERI_AUTODIV15_a53_auto_swtotcxo_bypass_END (0)
#define SOC_CRGPERIPH_PERI_AUTODIV15_a53_auto_waitcfg_in_START (1)
#define SOC_CRGPERIPH_PERI_AUTODIV15_a53_auto_waitcfg_in_END (10)
#define SOC_CRGPERIPH_PERI_AUTODIV15_a53_auto_waitcfg_out_START (11)
#define SOC_CRGPERIPH_PERI_AUTODIV15_a53_auto_waitcfg_out_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mmc1bus_div_auto_reduce_bypass_acpu : 1;
        unsigned int mmc0bus_div_auto_reduce_bypass_acpu : 1;
        unsigned int reserved_0 : 1;
        unsigned int dmabus_div_auto_reduce_bypass_acpu : 1;
        unsigned int cfgbus_div_auto_reduce_bypass_acpu : 1;
        unsigned int sysbus_div_auto_reduce_bypass_acpu : 1;
        unsigned int reserved_1 : 2;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_PERI_AUTODIV_ACPU_UNION;
#endif
#define SOC_CRGPERIPH_PERI_AUTODIV_ACPU_mmc1bus_div_auto_reduce_bypass_acpu_START (0)
#define SOC_CRGPERIPH_PERI_AUTODIV_ACPU_mmc1bus_div_auto_reduce_bypass_acpu_END (0)
#define SOC_CRGPERIPH_PERI_AUTODIV_ACPU_mmc0bus_div_auto_reduce_bypass_acpu_START (1)
#define SOC_CRGPERIPH_PERI_AUTODIV_ACPU_mmc0bus_div_auto_reduce_bypass_acpu_END (1)
#define SOC_CRGPERIPH_PERI_AUTODIV_ACPU_dmabus_div_auto_reduce_bypass_acpu_START (3)
#define SOC_CRGPERIPH_PERI_AUTODIV_ACPU_dmabus_div_auto_reduce_bypass_acpu_END (3)
#define SOC_CRGPERIPH_PERI_AUTODIV_ACPU_cfgbus_div_auto_reduce_bypass_acpu_START (4)
#define SOC_CRGPERIPH_PERI_AUTODIV_ACPU_cfgbus_div_auto_reduce_bypass_acpu_END (4)
#define SOC_CRGPERIPH_PERI_AUTODIV_ACPU_sysbus_div_auto_reduce_bypass_acpu_START (5)
#define SOC_CRGPERIPH_PERI_AUTODIV_ACPU_sysbus_div_auto_reduce_bypass_acpu_END (5)
#define SOC_CRGPERIPH_PERI_AUTODIV_ACPU_bitmasken_START (16)
#define SOC_CRGPERIPH_PERI_AUTODIV_ACPU_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mmc1bus_div_auto_reduce_bypass_mcpu : 1;
        unsigned int mmc0bus_div_auto_reduce_bypass_mcpu : 1;
        unsigned int reserved_0 : 1;
        unsigned int dmabus_div_auto_reduce_bypass_mcpu : 1;
        unsigned int cfgbus_div_auto_reduce_bypass_mcpu : 1;
        unsigned int sysbus_div_auto_reduce_bypass_mcpu : 1;
        unsigned int reserved_1 : 2;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_PERI_AUTODIV_MCPU_UNION;
#endif
#define SOC_CRGPERIPH_PERI_AUTODIV_MCPU_mmc1bus_div_auto_reduce_bypass_mcpu_START (0)
#define SOC_CRGPERIPH_PERI_AUTODIV_MCPU_mmc1bus_div_auto_reduce_bypass_mcpu_END (0)
#define SOC_CRGPERIPH_PERI_AUTODIV_MCPU_mmc0bus_div_auto_reduce_bypass_mcpu_START (1)
#define SOC_CRGPERIPH_PERI_AUTODIV_MCPU_mmc0bus_div_auto_reduce_bypass_mcpu_END (1)
#define SOC_CRGPERIPH_PERI_AUTODIV_MCPU_dmabus_div_auto_reduce_bypass_mcpu_START (3)
#define SOC_CRGPERIPH_PERI_AUTODIV_MCPU_dmabus_div_auto_reduce_bypass_mcpu_END (3)
#define SOC_CRGPERIPH_PERI_AUTODIV_MCPU_cfgbus_div_auto_reduce_bypass_mcpu_START (4)
#define SOC_CRGPERIPH_PERI_AUTODIV_MCPU_cfgbus_div_auto_reduce_bypass_mcpu_END (4)
#define SOC_CRGPERIPH_PERI_AUTODIV_MCPU_sysbus_div_auto_reduce_bypass_mcpu_START (5)
#define SOC_CRGPERIPH_PERI_AUTODIV_MCPU_sysbus_div_auto_reduce_bypass_mcpu_END (5)
#define SOC_CRGPERIPH_PERI_AUTODIV_MCPU_bitmasken_START (16)
#define SOC_CRGPERIPH_PERI_AUTODIV_MCPU_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int autodiv_sysbus_stat : 1;
        unsigned int autodiv_lpmcu_stat : 1;
        unsigned int autodiv_ics_stat : 1;
        unsigned int autodiv_vdec_stat : 1;
        unsigned int autodiv_venc_stat : 1;
        unsigned int autodiv_cfgbus_stat : 1;
        unsigned int autodiv_dmabus_stat : 1;
        unsigned int reserved_0 : 1;
        unsigned int autogt_dmc_peri_stat : 1;
        unsigned int autodiv_vcodecbus_stat : 1;
        unsigned int autodiv_mmc0_peribus_stat : 1;
        unsigned int autodiv_mmc1_peribus_stat : 1;
        unsigned int autogt_ddrc_stat : 1;
        unsigned int ics_dbat_drop_freq_down_stat : 1;
        unsigned int reserved_1 : 18;
    } reg;
} SOC_CRGPERIPH_PERI_AUTODIV_INUSE_STAT_UNION;
#endif
#define SOC_CRGPERIPH_PERI_AUTODIV_INUSE_STAT_autodiv_sysbus_stat_START (0)
#define SOC_CRGPERIPH_PERI_AUTODIV_INUSE_STAT_autodiv_sysbus_stat_END (0)
#define SOC_CRGPERIPH_PERI_AUTODIV_INUSE_STAT_autodiv_lpmcu_stat_START (1)
#define SOC_CRGPERIPH_PERI_AUTODIV_INUSE_STAT_autodiv_lpmcu_stat_END (1)
#define SOC_CRGPERIPH_PERI_AUTODIV_INUSE_STAT_autodiv_ics_stat_START (2)
#define SOC_CRGPERIPH_PERI_AUTODIV_INUSE_STAT_autodiv_ics_stat_END (2)
#define SOC_CRGPERIPH_PERI_AUTODIV_INUSE_STAT_autodiv_vdec_stat_START (3)
#define SOC_CRGPERIPH_PERI_AUTODIV_INUSE_STAT_autodiv_vdec_stat_END (3)
#define SOC_CRGPERIPH_PERI_AUTODIV_INUSE_STAT_autodiv_venc_stat_START (4)
#define SOC_CRGPERIPH_PERI_AUTODIV_INUSE_STAT_autodiv_venc_stat_END (4)
#define SOC_CRGPERIPH_PERI_AUTODIV_INUSE_STAT_autodiv_cfgbus_stat_START (5)
#define SOC_CRGPERIPH_PERI_AUTODIV_INUSE_STAT_autodiv_cfgbus_stat_END (5)
#define SOC_CRGPERIPH_PERI_AUTODIV_INUSE_STAT_autodiv_dmabus_stat_START (6)
#define SOC_CRGPERIPH_PERI_AUTODIV_INUSE_STAT_autodiv_dmabus_stat_END (6)
#define SOC_CRGPERIPH_PERI_AUTODIV_INUSE_STAT_autogt_dmc_peri_stat_START (8)
#define SOC_CRGPERIPH_PERI_AUTODIV_INUSE_STAT_autogt_dmc_peri_stat_END (8)
#define SOC_CRGPERIPH_PERI_AUTODIV_INUSE_STAT_autodiv_vcodecbus_stat_START (9)
#define SOC_CRGPERIPH_PERI_AUTODIV_INUSE_STAT_autodiv_vcodecbus_stat_END (9)
#define SOC_CRGPERIPH_PERI_AUTODIV_INUSE_STAT_autodiv_mmc0_peribus_stat_START (10)
#define SOC_CRGPERIPH_PERI_AUTODIV_INUSE_STAT_autodiv_mmc0_peribus_stat_END (10)
#define SOC_CRGPERIPH_PERI_AUTODIV_INUSE_STAT_autodiv_mmc1_peribus_stat_START (11)
#define SOC_CRGPERIPH_PERI_AUTODIV_INUSE_STAT_autodiv_mmc1_peribus_stat_END (11)
#define SOC_CRGPERIPH_PERI_AUTODIV_INUSE_STAT_autogt_ddrc_stat_START (12)
#define SOC_CRGPERIPH_PERI_AUTODIV_INUSE_STAT_autogt_ddrc_stat_END (12)
#define SOC_CRGPERIPH_PERI_AUTODIV_INUSE_STAT_ics_dbat_drop_freq_down_stat_START (13)
#define SOC_CRGPERIPH_PERI_AUTODIV_INUSE_STAT_ics_dbat_drop_freq_down_stat_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_clk_peri_avs_mon : 1;
        unsigned int gt_clk_autofs_ddrsys_mon : 1;
        unsigned int gt_clk_fnpll_cfg : 1;
        unsigned int gt_clk_media2cfgbus : 1;
        unsigned int gt_clk_autogt_dmc_peri : 1;
        unsigned int gt_pclk_media_crg : 1;
        unsigned int gt_pclk_autodiv_sysbus : 1;
        unsigned int gt_pclk_autodiv_cfgbus : 1;
        unsigned int gt_pclk_autodiv_dmabus : 1;
        unsigned int gt_clk_cfgbus_media2 : 1;
        unsigned int gt_pclk_autodiv_mmc0bus : 1;
        unsigned int gt_pclk_autodiv_mmc1bus : 1;
        unsigned int gt_pclk_autodiv_lpmcu : 1;
        unsigned int gt_clk_cfgbus_media : 1;
        unsigned int gt_clk_atgs_mon_ddrc : 1;
        unsigned int gt_clk_autogt_ddrc : 1;
        unsigned int gt_pclk_media2_crg : 1;
        unsigned int gt_pclk_autodiv_ics : 1;
        unsigned int reserved_0 : 2;
        unsigned int gt_clk_ppll6_sscg : 1;
        unsigned int gt_clk_ppll7_sscg : 1;
        unsigned int gt_clk_apll6_sscg : 1;
        unsigned int gt_clk_apll5_sscg : 1;
        unsigned int gt_clk_apll4_sscg : 1;
        unsigned int gt_clk_apll3_sscg : 1;
        unsigned int gt_clk_ppll4_media : 1;
        unsigned int gt_clk_ppll2_media : 1;
        unsigned int gt_clk_ppll3_media : 1;
        unsigned int gt_clk_ppll7_media : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
    } reg;
} SOC_CRGPERIPH_PEREN6_UNION;
#endif
#define SOC_CRGPERIPH_PEREN6_gt_clk_peri_avs_mon_START (0)
#define SOC_CRGPERIPH_PEREN6_gt_clk_peri_avs_mon_END (0)
#define SOC_CRGPERIPH_PEREN6_gt_clk_autofs_ddrsys_mon_START (1)
#define SOC_CRGPERIPH_PEREN6_gt_clk_autofs_ddrsys_mon_END (1)
#define SOC_CRGPERIPH_PEREN6_gt_clk_fnpll_cfg_START (2)
#define SOC_CRGPERIPH_PEREN6_gt_clk_fnpll_cfg_END (2)
#define SOC_CRGPERIPH_PEREN6_gt_clk_media2cfgbus_START (3)
#define SOC_CRGPERIPH_PEREN6_gt_clk_media2cfgbus_END (3)
#define SOC_CRGPERIPH_PEREN6_gt_clk_autogt_dmc_peri_START (4)
#define SOC_CRGPERIPH_PEREN6_gt_clk_autogt_dmc_peri_END (4)
#define SOC_CRGPERIPH_PEREN6_gt_pclk_media_crg_START (5)
#define SOC_CRGPERIPH_PEREN6_gt_pclk_media_crg_END (5)
#define SOC_CRGPERIPH_PEREN6_gt_pclk_autodiv_sysbus_START (6)
#define SOC_CRGPERIPH_PEREN6_gt_pclk_autodiv_sysbus_END (6)
#define SOC_CRGPERIPH_PEREN6_gt_pclk_autodiv_cfgbus_START (7)
#define SOC_CRGPERIPH_PEREN6_gt_pclk_autodiv_cfgbus_END (7)
#define SOC_CRGPERIPH_PEREN6_gt_pclk_autodiv_dmabus_START (8)
#define SOC_CRGPERIPH_PEREN6_gt_pclk_autodiv_dmabus_END (8)
#define SOC_CRGPERIPH_PEREN6_gt_clk_cfgbus_media2_START (9)
#define SOC_CRGPERIPH_PEREN6_gt_clk_cfgbus_media2_END (9)
#define SOC_CRGPERIPH_PEREN6_gt_pclk_autodiv_mmc0bus_START (10)
#define SOC_CRGPERIPH_PEREN6_gt_pclk_autodiv_mmc0bus_END (10)
#define SOC_CRGPERIPH_PEREN6_gt_pclk_autodiv_mmc1bus_START (11)
#define SOC_CRGPERIPH_PEREN6_gt_pclk_autodiv_mmc1bus_END (11)
#define SOC_CRGPERIPH_PEREN6_gt_pclk_autodiv_lpmcu_START (12)
#define SOC_CRGPERIPH_PEREN6_gt_pclk_autodiv_lpmcu_END (12)
#define SOC_CRGPERIPH_PEREN6_gt_clk_cfgbus_media_START (13)
#define SOC_CRGPERIPH_PEREN6_gt_clk_cfgbus_media_END (13)
#define SOC_CRGPERIPH_PEREN6_gt_clk_atgs_mon_ddrc_START (14)
#define SOC_CRGPERIPH_PEREN6_gt_clk_atgs_mon_ddrc_END (14)
#define SOC_CRGPERIPH_PEREN6_gt_clk_autogt_ddrc_START (15)
#define SOC_CRGPERIPH_PEREN6_gt_clk_autogt_ddrc_END (15)
#define SOC_CRGPERIPH_PEREN6_gt_pclk_media2_crg_START (16)
#define SOC_CRGPERIPH_PEREN6_gt_pclk_media2_crg_END (16)
#define SOC_CRGPERIPH_PEREN6_gt_pclk_autodiv_ics_START (17)
#define SOC_CRGPERIPH_PEREN6_gt_pclk_autodiv_ics_END (17)
#define SOC_CRGPERIPH_PEREN6_gt_clk_ppll6_sscg_START (20)
#define SOC_CRGPERIPH_PEREN6_gt_clk_ppll6_sscg_END (20)
#define SOC_CRGPERIPH_PEREN6_gt_clk_ppll7_sscg_START (21)
#define SOC_CRGPERIPH_PEREN6_gt_clk_ppll7_sscg_END (21)
#define SOC_CRGPERIPH_PEREN6_gt_clk_apll6_sscg_START (22)
#define SOC_CRGPERIPH_PEREN6_gt_clk_apll6_sscg_END (22)
#define SOC_CRGPERIPH_PEREN6_gt_clk_apll5_sscg_START (23)
#define SOC_CRGPERIPH_PEREN6_gt_clk_apll5_sscg_END (23)
#define SOC_CRGPERIPH_PEREN6_gt_clk_apll4_sscg_START (24)
#define SOC_CRGPERIPH_PEREN6_gt_clk_apll4_sscg_END (24)
#define SOC_CRGPERIPH_PEREN6_gt_clk_apll3_sscg_START (25)
#define SOC_CRGPERIPH_PEREN6_gt_clk_apll3_sscg_END (25)
#define SOC_CRGPERIPH_PEREN6_gt_clk_ppll4_media_START (26)
#define SOC_CRGPERIPH_PEREN6_gt_clk_ppll4_media_END (26)
#define SOC_CRGPERIPH_PEREN6_gt_clk_ppll2_media_START (27)
#define SOC_CRGPERIPH_PEREN6_gt_clk_ppll2_media_END (27)
#define SOC_CRGPERIPH_PEREN6_gt_clk_ppll3_media_START (28)
#define SOC_CRGPERIPH_PEREN6_gt_clk_ppll3_media_END (28)
#define SOC_CRGPERIPH_PEREN6_gt_clk_ppll7_media_START (29)
#define SOC_CRGPERIPH_PEREN6_gt_clk_ppll7_media_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_clk_peri_avs_mon : 1;
        unsigned int gt_clk_autofs_ddrsys_mon : 1;
        unsigned int gt_clk_fnpll_cfg : 1;
        unsigned int gt_clk_media2cfgbus : 1;
        unsigned int gt_clk_autogt_dmc_peri : 1;
        unsigned int gt_pclk_media_crg : 1;
        unsigned int gt_pclk_autodiv_sysbus : 1;
        unsigned int gt_pclk_autodiv_cfgbus : 1;
        unsigned int gt_pclk_autodiv_dmabus : 1;
        unsigned int gt_clk_cfgbus_media2 : 1;
        unsigned int gt_pclk_autodiv_mmc0bus : 1;
        unsigned int gt_pclk_autodiv_mmc1bus : 1;
        unsigned int gt_pclk_autodiv_lpmcu : 1;
        unsigned int gt_clk_cfgbus_media : 1;
        unsigned int gt_clk_atgs_mon_ddrc : 1;
        unsigned int gt_clk_autogt_ddrc : 1;
        unsigned int gt_pclk_media2_crg : 1;
        unsigned int gt_pclk_autodiv_ics : 1;
        unsigned int reserved_0 : 2;
        unsigned int gt_clk_ppll6_sscg : 1;
        unsigned int gt_clk_ppll7_sscg : 1;
        unsigned int gt_clk_apll6_sscg : 1;
        unsigned int gt_clk_apll5_sscg : 1;
        unsigned int gt_clk_apll4_sscg : 1;
        unsigned int gt_clk_apll3_sscg : 1;
        unsigned int gt_clk_ppll4_media : 1;
        unsigned int gt_clk_ppll2_media : 1;
        unsigned int gt_clk_ppll3_media : 1;
        unsigned int gt_clk_ppll7_media : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
    } reg;
} SOC_CRGPERIPH_PERDIS6_UNION;
#endif
#define SOC_CRGPERIPH_PERDIS6_gt_clk_peri_avs_mon_START (0)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_peri_avs_mon_END (0)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_autofs_ddrsys_mon_START (1)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_autofs_ddrsys_mon_END (1)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_fnpll_cfg_START (2)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_fnpll_cfg_END (2)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_media2cfgbus_START (3)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_media2cfgbus_END (3)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_autogt_dmc_peri_START (4)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_autogt_dmc_peri_END (4)
#define SOC_CRGPERIPH_PERDIS6_gt_pclk_media_crg_START (5)
#define SOC_CRGPERIPH_PERDIS6_gt_pclk_media_crg_END (5)
#define SOC_CRGPERIPH_PERDIS6_gt_pclk_autodiv_sysbus_START (6)
#define SOC_CRGPERIPH_PERDIS6_gt_pclk_autodiv_sysbus_END (6)
#define SOC_CRGPERIPH_PERDIS6_gt_pclk_autodiv_cfgbus_START (7)
#define SOC_CRGPERIPH_PERDIS6_gt_pclk_autodiv_cfgbus_END (7)
#define SOC_CRGPERIPH_PERDIS6_gt_pclk_autodiv_dmabus_START (8)
#define SOC_CRGPERIPH_PERDIS6_gt_pclk_autodiv_dmabus_END (8)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_cfgbus_media2_START (9)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_cfgbus_media2_END (9)
#define SOC_CRGPERIPH_PERDIS6_gt_pclk_autodiv_mmc0bus_START (10)
#define SOC_CRGPERIPH_PERDIS6_gt_pclk_autodiv_mmc0bus_END (10)
#define SOC_CRGPERIPH_PERDIS6_gt_pclk_autodiv_mmc1bus_START (11)
#define SOC_CRGPERIPH_PERDIS6_gt_pclk_autodiv_mmc1bus_END (11)
#define SOC_CRGPERIPH_PERDIS6_gt_pclk_autodiv_lpmcu_START (12)
#define SOC_CRGPERIPH_PERDIS6_gt_pclk_autodiv_lpmcu_END (12)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_cfgbus_media_START (13)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_cfgbus_media_END (13)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_atgs_mon_ddrc_START (14)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_atgs_mon_ddrc_END (14)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_autogt_ddrc_START (15)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_autogt_ddrc_END (15)
#define SOC_CRGPERIPH_PERDIS6_gt_pclk_media2_crg_START (16)
#define SOC_CRGPERIPH_PERDIS6_gt_pclk_media2_crg_END (16)
#define SOC_CRGPERIPH_PERDIS6_gt_pclk_autodiv_ics_START (17)
#define SOC_CRGPERIPH_PERDIS6_gt_pclk_autodiv_ics_END (17)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_ppll6_sscg_START (20)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_ppll6_sscg_END (20)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_ppll7_sscg_START (21)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_ppll7_sscg_END (21)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_apll6_sscg_START (22)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_apll6_sscg_END (22)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_apll5_sscg_START (23)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_apll5_sscg_END (23)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_apll4_sscg_START (24)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_apll4_sscg_END (24)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_apll3_sscg_START (25)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_apll3_sscg_END (25)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_ppll4_media_START (26)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_ppll4_media_END (26)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_ppll2_media_START (27)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_ppll2_media_END (27)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_ppll3_media_START (28)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_ppll3_media_END (28)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_ppll7_media_START (29)
#define SOC_CRGPERIPH_PERDIS6_gt_clk_ppll7_media_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_clk_peri_avs_mon : 1;
        unsigned int gt_clk_autofs_ddrsys_mon : 1;
        unsigned int gt_clk_fnpll_cfg : 1;
        unsigned int gt_clk_media2cfgbus : 1;
        unsigned int gt_clk_autogt_dmc_peri : 1;
        unsigned int gt_pclk_media_crg : 1;
        unsigned int gt_pclk_autodiv_sysbus : 1;
        unsigned int gt_pclk_autodiv_cfgbus : 1;
        unsigned int gt_pclk_autodiv_dmabus : 1;
        unsigned int gt_clk_cfgbus_media2 : 1;
        unsigned int gt_pclk_autodiv_mmc0bus : 1;
        unsigned int gt_pclk_autodiv_mmc1bus : 1;
        unsigned int gt_pclk_autodiv_lpmcu : 1;
        unsigned int gt_clk_cfgbus_media : 1;
        unsigned int gt_clk_atgs_mon_ddrc : 1;
        unsigned int gt_clk_autogt_ddrc : 1;
        unsigned int gt_pclk_media2_crg : 1;
        unsigned int gt_pclk_autodiv_ics : 1;
        unsigned int reserved_0 : 2;
        unsigned int gt_clk_ppll6_sscg : 1;
        unsigned int gt_clk_ppll7_sscg : 1;
        unsigned int gt_clk_apll6_sscg : 1;
        unsigned int gt_clk_apll5_sscg : 1;
        unsigned int gt_clk_apll4_sscg : 1;
        unsigned int gt_clk_apll3_sscg : 1;
        unsigned int gt_clk_ppll4_media : 1;
        unsigned int gt_clk_ppll2_media : 1;
        unsigned int gt_clk_ppll3_media : 1;
        unsigned int gt_clk_ppll7_media : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
    } reg;
} SOC_CRGPERIPH_PERCLKEN6_UNION;
#endif
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_peri_avs_mon_START (0)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_peri_avs_mon_END (0)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_autofs_ddrsys_mon_START (1)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_autofs_ddrsys_mon_END (1)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_fnpll_cfg_START (2)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_fnpll_cfg_END (2)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_media2cfgbus_START (3)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_media2cfgbus_END (3)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_autogt_dmc_peri_START (4)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_autogt_dmc_peri_END (4)
#define SOC_CRGPERIPH_PERCLKEN6_gt_pclk_media_crg_START (5)
#define SOC_CRGPERIPH_PERCLKEN6_gt_pclk_media_crg_END (5)
#define SOC_CRGPERIPH_PERCLKEN6_gt_pclk_autodiv_sysbus_START (6)
#define SOC_CRGPERIPH_PERCLKEN6_gt_pclk_autodiv_sysbus_END (6)
#define SOC_CRGPERIPH_PERCLKEN6_gt_pclk_autodiv_cfgbus_START (7)
#define SOC_CRGPERIPH_PERCLKEN6_gt_pclk_autodiv_cfgbus_END (7)
#define SOC_CRGPERIPH_PERCLKEN6_gt_pclk_autodiv_dmabus_START (8)
#define SOC_CRGPERIPH_PERCLKEN6_gt_pclk_autodiv_dmabus_END (8)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_cfgbus_media2_START (9)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_cfgbus_media2_END (9)
#define SOC_CRGPERIPH_PERCLKEN6_gt_pclk_autodiv_mmc0bus_START (10)
#define SOC_CRGPERIPH_PERCLKEN6_gt_pclk_autodiv_mmc0bus_END (10)
#define SOC_CRGPERIPH_PERCLKEN6_gt_pclk_autodiv_mmc1bus_START (11)
#define SOC_CRGPERIPH_PERCLKEN6_gt_pclk_autodiv_mmc1bus_END (11)
#define SOC_CRGPERIPH_PERCLKEN6_gt_pclk_autodiv_lpmcu_START (12)
#define SOC_CRGPERIPH_PERCLKEN6_gt_pclk_autodiv_lpmcu_END (12)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_cfgbus_media_START (13)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_cfgbus_media_END (13)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_atgs_mon_ddrc_START (14)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_atgs_mon_ddrc_END (14)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_autogt_ddrc_START (15)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_autogt_ddrc_END (15)
#define SOC_CRGPERIPH_PERCLKEN6_gt_pclk_media2_crg_START (16)
#define SOC_CRGPERIPH_PERCLKEN6_gt_pclk_media2_crg_END (16)
#define SOC_CRGPERIPH_PERCLKEN6_gt_pclk_autodiv_ics_START (17)
#define SOC_CRGPERIPH_PERCLKEN6_gt_pclk_autodiv_ics_END (17)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_ppll6_sscg_START (20)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_ppll6_sscg_END (20)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_ppll7_sscg_START (21)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_ppll7_sscg_END (21)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_apll6_sscg_START (22)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_apll6_sscg_END (22)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_apll5_sscg_START (23)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_apll5_sscg_END (23)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_apll4_sscg_START (24)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_apll4_sscg_END (24)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_apll3_sscg_START (25)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_apll3_sscg_END (25)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_ppll4_media_START (26)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_ppll4_media_END (26)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_ppll2_media_START (27)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_ppll2_media_END (27)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_ppll3_media_START (28)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_ppll3_media_END (28)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_ppll7_media_START (29)
#define SOC_CRGPERIPH_PERCLKEN6_gt_clk_ppll7_media_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int st_clk_peri_avs_mon : 1;
        unsigned int st_clk_autofs_ddrsys_mon : 1;
        unsigned int st_clk_fnpll_cfg : 1;
        unsigned int st_clk_media2cfgbus : 1;
        unsigned int st_clk_autogt_dmc_peri : 1;
        unsigned int st_pclk_media_crg : 1;
        unsigned int st_pclk_autodiv_sysbus : 1;
        unsigned int st_pclk_autodiv_cfgbus : 1;
        unsigned int st_pclk_autodiv_dmabus : 1;
        unsigned int st_clk_cfgbus_media2 : 1;
        unsigned int st_pclk_autodiv_mmc0bus : 1;
        unsigned int st_pclk_autodiv_mmc1bus : 1;
        unsigned int st_pclk_autodiv_lpmcu : 1;
        unsigned int st_clk_cfgbus_media : 1;
        unsigned int st_clk_atgs_mon_ddrc : 1;
        unsigned int st_clk_autogt_ddrc : 1;
        unsigned int st_pclk_media2_crg : 1;
        unsigned int st_pclk_autodiv_ics : 1;
        unsigned int reserved_0 : 2;
        unsigned int st_clk_ppll6_sscg : 1;
        unsigned int st_clk_ppll7_sscg : 1;
        unsigned int st_clk_apll6_sscg : 1;
        unsigned int st_clk_apll5_sscg : 1;
        unsigned int st_clk_apll4_sscg : 1;
        unsigned int st_clk_apll3_sscg : 1;
        unsigned int st_clk_ppll4_media : 1;
        unsigned int st_clk_ppll2_media : 1;
        unsigned int st_clk_ppll3_media : 1;
        unsigned int st_clk_ppll7_media : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
    } reg;
} SOC_CRGPERIPH_PERSTAT6_UNION;
#endif
#define SOC_CRGPERIPH_PERSTAT6_st_clk_peri_avs_mon_START (0)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_peri_avs_mon_END (0)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_autofs_ddrsys_mon_START (1)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_autofs_ddrsys_mon_END (1)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_fnpll_cfg_START (2)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_fnpll_cfg_END (2)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_media2cfgbus_START (3)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_media2cfgbus_END (3)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_autogt_dmc_peri_START (4)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_autogt_dmc_peri_END (4)
#define SOC_CRGPERIPH_PERSTAT6_st_pclk_media_crg_START (5)
#define SOC_CRGPERIPH_PERSTAT6_st_pclk_media_crg_END (5)
#define SOC_CRGPERIPH_PERSTAT6_st_pclk_autodiv_sysbus_START (6)
#define SOC_CRGPERIPH_PERSTAT6_st_pclk_autodiv_sysbus_END (6)
#define SOC_CRGPERIPH_PERSTAT6_st_pclk_autodiv_cfgbus_START (7)
#define SOC_CRGPERIPH_PERSTAT6_st_pclk_autodiv_cfgbus_END (7)
#define SOC_CRGPERIPH_PERSTAT6_st_pclk_autodiv_dmabus_START (8)
#define SOC_CRGPERIPH_PERSTAT6_st_pclk_autodiv_dmabus_END (8)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_cfgbus_media2_START (9)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_cfgbus_media2_END (9)
#define SOC_CRGPERIPH_PERSTAT6_st_pclk_autodiv_mmc0bus_START (10)
#define SOC_CRGPERIPH_PERSTAT6_st_pclk_autodiv_mmc0bus_END (10)
#define SOC_CRGPERIPH_PERSTAT6_st_pclk_autodiv_mmc1bus_START (11)
#define SOC_CRGPERIPH_PERSTAT6_st_pclk_autodiv_mmc1bus_END (11)
#define SOC_CRGPERIPH_PERSTAT6_st_pclk_autodiv_lpmcu_START (12)
#define SOC_CRGPERIPH_PERSTAT6_st_pclk_autodiv_lpmcu_END (12)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_cfgbus_media_START (13)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_cfgbus_media_END (13)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_atgs_mon_ddrc_START (14)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_atgs_mon_ddrc_END (14)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_autogt_ddrc_START (15)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_autogt_ddrc_END (15)
#define SOC_CRGPERIPH_PERSTAT6_st_pclk_media2_crg_START (16)
#define SOC_CRGPERIPH_PERSTAT6_st_pclk_media2_crg_END (16)
#define SOC_CRGPERIPH_PERSTAT6_st_pclk_autodiv_ics_START (17)
#define SOC_CRGPERIPH_PERSTAT6_st_pclk_autodiv_ics_END (17)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_ppll6_sscg_START (20)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_ppll6_sscg_END (20)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_ppll7_sscg_START (21)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_ppll7_sscg_END (21)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_apll6_sscg_START (22)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_apll6_sscg_END (22)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_apll5_sscg_START (23)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_apll5_sscg_END (23)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_apll4_sscg_START (24)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_apll4_sscg_END (24)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_apll3_sscg_START (25)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_apll3_sscg_END (25)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_ppll4_media_START (26)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_ppll4_media_END (26)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_ppll2_media_START (27)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_ppll2_media_END (27)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_ppll3_media_START (28)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_ppll3_media_END (28)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_ppll7_media_START (29)
#define SOC_CRGPERIPH_PERSTAT6_st_clk_ppll7_media_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_clk_ddrc_acp_rs_peri : 1;
        unsigned int sc_abb_pll_gps_gt_en2 : 1;
        unsigned int sc_abb_pll_audio_gt_en2 : 1;
        unsigned int sc_abb_pll_gps_en2 : 1;
        unsigned int sc_abb_pll_audio_en2 : 1;
        unsigned int gt_clk_dmss_to_vcodec_rs : 1;
        unsigned int gt_clk_dmss_to_vivo_rs : 1;
        unsigned int gt_clk_dmss_to_ivp_rs : 1;
        unsigned int gt_clk_pcieaux : 1;
        unsigned int reserved_0 : 1;
        unsigned int gt_clk_noc_hiseebus : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int gt_clk_cpu_gic : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int reserved_12 : 1;
        unsigned int reserved_13 : 1;
        unsigned int reserved_14 : 1;
        unsigned int reserved_15 : 1;
        unsigned int reserved_16 : 5;
    } reg;
} SOC_CRGPERIPH_PEREN7_UNION;
#endif
#define SOC_CRGPERIPH_PEREN7_gt_clk_ddrc_acp_rs_peri_START (0)
#define SOC_CRGPERIPH_PEREN7_gt_clk_ddrc_acp_rs_peri_END (0)
#define SOC_CRGPERIPH_PEREN7_sc_abb_pll_gps_gt_en2_START (1)
#define SOC_CRGPERIPH_PEREN7_sc_abb_pll_gps_gt_en2_END (1)
#define SOC_CRGPERIPH_PEREN7_sc_abb_pll_audio_gt_en2_START (2)
#define SOC_CRGPERIPH_PEREN7_sc_abb_pll_audio_gt_en2_END (2)
#define SOC_CRGPERIPH_PEREN7_sc_abb_pll_gps_en2_START (3)
#define SOC_CRGPERIPH_PEREN7_sc_abb_pll_gps_en2_END (3)
#define SOC_CRGPERIPH_PEREN7_sc_abb_pll_audio_en2_START (4)
#define SOC_CRGPERIPH_PEREN7_sc_abb_pll_audio_en2_END (4)
#define SOC_CRGPERIPH_PEREN7_gt_clk_dmss_to_vcodec_rs_START (5)
#define SOC_CRGPERIPH_PEREN7_gt_clk_dmss_to_vcodec_rs_END (5)
#define SOC_CRGPERIPH_PEREN7_gt_clk_dmss_to_vivo_rs_START (6)
#define SOC_CRGPERIPH_PEREN7_gt_clk_dmss_to_vivo_rs_END (6)
#define SOC_CRGPERIPH_PEREN7_gt_clk_dmss_to_ivp_rs_START (7)
#define SOC_CRGPERIPH_PEREN7_gt_clk_dmss_to_ivp_rs_END (7)
#define SOC_CRGPERIPH_PEREN7_gt_clk_pcieaux_START (8)
#define SOC_CRGPERIPH_PEREN7_gt_clk_pcieaux_END (8)
#define SOC_CRGPERIPH_PEREN7_gt_clk_noc_hiseebus_START (10)
#define SOC_CRGPERIPH_PEREN7_gt_clk_noc_hiseebus_END (10)
#define SOC_CRGPERIPH_PEREN7_gt_clk_cpu_gic_START (15)
#define SOC_CRGPERIPH_PEREN7_gt_clk_cpu_gic_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_clk_ddrc_acp_rs_peri : 1;
        unsigned int sc_abb_pll_gps_gt_en2 : 1;
        unsigned int sc_abb_pll_audio_gt_en2 : 1;
        unsigned int sc_abb_pll_gps_en2 : 1;
        unsigned int sc_abb_pll_audio_en2 : 1;
        unsigned int gt_clk_dmss_to_vcodec_rs : 1;
        unsigned int gt_clk_dmss_to_vivo_rs : 1;
        unsigned int gt_clk_dmss_to_ivp_rs : 1;
        unsigned int gt_clk_pcieaux : 1;
        unsigned int reserved_0 : 1;
        unsigned int gt_clk_noc_hiseebus : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int gt_clk_cpu_gic : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int reserved_12 : 1;
        unsigned int reserved_13 : 1;
        unsigned int reserved_14 : 1;
        unsigned int reserved_15 : 1;
        unsigned int reserved_16 : 5;
    } reg;
} SOC_CRGPERIPH_PERDIS7_UNION;
#endif
#define SOC_CRGPERIPH_PERDIS7_gt_clk_ddrc_acp_rs_peri_START (0)
#define SOC_CRGPERIPH_PERDIS7_gt_clk_ddrc_acp_rs_peri_END (0)
#define SOC_CRGPERIPH_PERDIS7_sc_abb_pll_gps_gt_en2_START (1)
#define SOC_CRGPERIPH_PERDIS7_sc_abb_pll_gps_gt_en2_END (1)
#define SOC_CRGPERIPH_PERDIS7_sc_abb_pll_audio_gt_en2_START (2)
#define SOC_CRGPERIPH_PERDIS7_sc_abb_pll_audio_gt_en2_END (2)
#define SOC_CRGPERIPH_PERDIS7_sc_abb_pll_gps_en2_START (3)
#define SOC_CRGPERIPH_PERDIS7_sc_abb_pll_gps_en2_END (3)
#define SOC_CRGPERIPH_PERDIS7_sc_abb_pll_audio_en2_START (4)
#define SOC_CRGPERIPH_PERDIS7_sc_abb_pll_audio_en2_END (4)
#define SOC_CRGPERIPH_PERDIS7_gt_clk_dmss_to_vcodec_rs_START (5)
#define SOC_CRGPERIPH_PERDIS7_gt_clk_dmss_to_vcodec_rs_END (5)
#define SOC_CRGPERIPH_PERDIS7_gt_clk_dmss_to_vivo_rs_START (6)
#define SOC_CRGPERIPH_PERDIS7_gt_clk_dmss_to_vivo_rs_END (6)
#define SOC_CRGPERIPH_PERDIS7_gt_clk_dmss_to_ivp_rs_START (7)
#define SOC_CRGPERIPH_PERDIS7_gt_clk_dmss_to_ivp_rs_END (7)
#define SOC_CRGPERIPH_PERDIS7_gt_clk_pcieaux_START (8)
#define SOC_CRGPERIPH_PERDIS7_gt_clk_pcieaux_END (8)
#define SOC_CRGPERIPH_PERDIS7_gt_clk_noc_hiseebus_START (10)
#define SOC_CRGPERIPH_PERDIS7_gt_clk_noc_hiseebus_END (10)
#define SOC_CRGPERIPH_PERDIS7_gt_clk_cpu_gic_START (15)
#define SOC_CRGPERIPH_PERDIS7_gt_clk_cpu_gic_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_clk_ddrc_acp_rs_peri : 1;
        unsigned int sc_abb_pll_gps_gt_en2 : 1;
        unsigned int sc_abb_pll_audio_gt_en2 : 1;
        unsigned int sc_abb_pll_gps_en2 : 1;
        unsigned int sc_abb_pll_audio_en2 : 1;
        unsigned int gt_clk_dmss_to_vcodec_rs : 1;
        unsigned int gt_clk_dmss_to_vivo_rs : 1;
        unsigned int gt_clk_dmss_to_ivp_rs : 1;
        unsigned int gt_clk_pcieaux : 1;
        unsigned int reserved_0 : 1;
        unsigned int gt_clk_noc_hiseebus : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int gt_clk_cpu_gic : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int reserved_12 : 1;
        unsigned int reserved_13 : 1;
        unsigned int reserved_14 : 1;
        unsigned int reserved_15 : 1;
        unsigned int reserved_16 : 5;
    } reg;
} SOC_CRGPERIPH_PERCLKEN7_UNION;
#endif
#define SOC_CRGPERIPH_PERCLKEN7_gt_clk_ddrc_acp_rs_peri_START (0)
#define SOC_CRGPERIPH_PERCLKEN7_gt_clk_ddrc_acp_rs_peri_END (0)
#define SOC_CRGPERIPH_PERCLKEN7_sc_abb_pll_gps_gt_en2_START (1)
#define SOC_CRGPERIPH_PERCLKEN7_sc_abb_pll_gps_gt_en2_END (1)
#define SOC_CRGPERIPH_PERCLKEN7_sc_abb_pll_audio_gt_en2_START (2)
#define SOC_CRGPERIPH_PERCLKEN7_sc_abb_pll_audio_gt_en2_END (2)
#define SOC_CRGPERIPH_PERCLKEN7_sc_abb_pll_gps_en2_START (3)
#define SOC_CRGPERIPH_PERCLKEN7_sc_abb_pll_gps_en2_END (3)
#define SOC_CRGPERIPH_PERCLKEN7_sc_abb_pll_audio_en2_START (4)
#define SOC_CRGPERIPH_PERCLKEN7_sc_abb_pll_audio_en2_END (4)
#define SOC_CRGPERIPH_PERCLKEN7_gt_clk_dmss_to_vcodec_rs_START (5)
#define SOC_CRGPERIPH_PERCLKEN7_gt_clk_dmss_to_vcodec_rs_END (5)
#define SOC_CRGPERIPH_PERCLKEN7_gt_clk_dmss_to_vivo_rs_START (6)
#define SOC_CRGPERIPH_PERCLKEN7_gt_clk_dmss_to_vivo_rs_END (6)
#define SOC_CRGPERIPH_PERCLKEN7_gt_clk_dmss_to_ivp_rs_START (7)
#define SOC_CRGPERIPH_PERCLKEN7_gt_clk_dmss_to_ivp_rs_END (7)
#define SOC_CRGPERIPH_PERCLKEN7_gt_clk_pcieaux_START (8)
#define SOC_CRGPERIPH_PERCLKEN7_gt_clk_pcieaux_END (8)
#define SOC_CRGPERIPH_PERCLKEN7_gt_clk_noc_hiseebus_START (10)
#define SOC_CRGPERIPH_PERCLKEN7_gt_clk_noc_hiseebus_END (10)
#define SOC_CRGPERIPH_PERCLKEN7_gt_clk_cpu_gic_START (15)
#define SOC_CRGPERIPH_PERCLKEN7_gt_clk_cpu_gic_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int st_clk_ddrc_acp_rs_peri : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int st_clk_dmss_to_vcodec_rs : 1;
        unsigned int st_clk_dmss_to_vivo_rs : 1;
        unsigned int st_clk_dmss_to_ivp_rs : 1;
        unsigned int st_clk_pcieaux : 1;
        unsigned int reserved_4 : 1;
        unsigned int st_clk_noc_hiseebus : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int st_clk_cpu_gic : 1;
        unsigned int reserved_9 : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int reserved_12 : 1;
        unsigned int reserved_13 : 1;
        unsigned int reserved_14 : 1;
        unsigned int reserved_15 : 1;
        unsigned int reserved_16 : 1;
        unsigned int reserved_17 : 1;
        unsigned int reserved_18 : 1;
        unsigned int reserved_19 : 1;
        unsigned int reserved_20 : 5;
    } reg;
} SOC_CRGPERIPH_PERSTAT7_UNION;
#endif
#define SOC_CRGPERIPH_PERSTAT7_st_clk_ddrc_acp_rs_peri_START (0)
#define SOC_CRGPERIPH_PERSTAT7_st_clk_ddrc_acp_rs_peri_END (0)
#define SOC_CRGPERIPH_PERSTAT7_st_clk_dmss_to_vcodec_rs_START (5)
#define SOC_CRGPERIPH_PERSTAT7_st_clk_dmss_to_vcodec_rs_END (5)
#define SOC_CRGPERIPH_PERSTAT7_st_clk_dmss_to_vivo_rs_START (6)
#define SOC_CRGPERIPH_PERSTAT7_st_clk_dmss_to_vivo_rs_END (6)
#define SOC_CRGPERIPH_PERSTAT7_st_clk_dmss_to_ivp_rs_START (7)
#define SOC_CRGPERIPH_PERSTAT7_st_clk_dmss_to_ivp_rs_END (7)
#define SOC_CRGPERIPH_PERSTAT7_st_clk_pcieaux_START (8)
#define SOC_CRGPERIPH_PERSTAT7_st_clk_pcieaux_END (8)
#define SOC_CRGPERIPH_PERSTAT7_st_clk_noc_hiseebus_START (10)
#define SOC_CRGPERIPH_PERSTAT7_st_clk_noc_hiseebus_END (10)
#define SOC_CRGPERIPH_PERSTAT7_st_clk_cpu_gic_START (15)
#define SOC_CRGPERIPH_PERSTAT7_st_clk_cpu_gic_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_aclk_ddrphy_dfi_r : 1;
        unsigned int gt_aclk_ddrphy_dfi_l : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int gt_clk_peri_dmc_l : 1;
        unsigned int gt_clk_peri_dmc_r : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_a_0 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_a_0 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_a_1 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_a_1 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_a_2 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_a_2 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_a_peri : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_a_peri : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_b_0 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_b_0 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_b_1 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_b_1 : 1;
        unsigned int gt_hclk_dmc : 1;
        unsigned int gt_clk_dcdrbus_dmc_a : 1;
        unsigned int gt_clk_dcdrbus_dmc_b : 1;
        unsigned int gt_clk_dcdrbus_dmc_c : 1;
        unsigned int gt_clk_dcdrbus_dmc_d : 1;
        unsigned int gt_clk_ddrc_a_sys : 1;
        unsigned int gt_clk_ddrc_b_sys : 1;
        unsigned int gt_clk_ddrc_c_sys : 1;
        unsigned int gt_clk_ddrc_d_sys : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_b_2 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_b_2 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_b_peri : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_b_peri : 1;
        unsigned int reserved_2 : 1;
    } reg;
} SOC_CRGPERIPH_PEREN8_UNION;
#endif
#define SOC_CRGPERIPH_PEREN8_gt_aclk_ddrphy_dfi_r_START (0)
#define SOC_CRGPERIPH_PEREN8_gt_aclk_ddrphy_dfi_r_END (0)
#define SOC_CRGPERIPH_PEREN8_gt_aclk_ddrphy_dfi_l_START (1)
#define SOC_CRGPERIPH_PEREN8_gt_aclk_ddrphy_dfi_l_END (1)
#define SOC_CRGPERIPH_PEREN8_gt_clk_peri_dmc_l_START (4)
#define SOC_CRGPERIPH_PEREN8_gt_clk_peri_dmc_l_END (4)
#define SOC_CRGPERIPH_PEREN8_gt_clk_peri_dmc_r_START (5)
#define SOC_CRGPERIPH_PEREN8_gt_clk_peri_dmc_r_END (5)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_wr_a_0_START (6)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_wr_a_0_END (6)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_rd_a_0_START (7)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_rd_a_0_END (7)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_wr_a_1_START (8)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_wr_a_1_END (8)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_rd_a_1_START (9)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_rd_a_1_END (9)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_wr_a_2_START (10)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_wr_a_2_END (10)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_rd_a_2_START (11)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_rd_a_2_END (11)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_wr_a_peri_START (12)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_wr_a_peri_END (12)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_rd_a_peri_START (13)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_rd_a_peri_END (13)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_wr_b_0_START (14)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_wr_b_0_END (14)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_rd_b_0_START (15)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_rd_b_0_END (15)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_wr_b_1_START (16)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_wr_b_1_END (16)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_rd_b_1_START (17)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_rd_b_1_END (17)
#define SOC_CRGPERIPH_PEREN8_gt_hclk_dmc_START (18)
#define SOC_CRGPERIPH_PEREN8_gt_hclk_dmc_END (18)
#define SOC_CRGPERIPH_PEREN8_gt_clk_dcdrbus_dmc_a_START (19)
#define SOC_CRGPERIPH_PEREN8_gt_clk_dcdrbus_dmc_a_END (19)
#define SOC_CRGPERIPH_PEREN8_gt_clk_dcdrbus_dmc_b_START (20)
#define SOC_CRGPERIPH_PEREN8_gt_clk_dcdrbus_dmc_b_END (20)
#define SOC_CRGPERIPH_PEREN8_gt_clk_dcdrbus_dmc_c_START (21)
#define SOC_CRGPERIPH_PEREN8_gt_clk_dcdrbus_dmc_c_END (21)
#define SOC_CRGPERIPH_PEREN8_gt_clk_dcdrbus_dmc_d_START (22)
#define SOC_CRGPERIPH_PEREN8_gt_clk_dcdrbus_dmc_d_END (22)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_a_sys_START (23)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_a_sys_END (23)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_b_sys_START (24)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_b_sys_END (24)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_c_sys_START (25)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_c_sys_END (25)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_d_sys_START (26)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_d_sys_END (26)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_wr_b_2_START (27)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_wr_b_2_END (27)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_rd_b_2_START (28)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_rd_b_2_END (28)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_wr_b_peri_START (29)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_wr_b_peri_END (29)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_rd_b_peri_START (30)
#define SOC_CRGPERIPH_PEREN8_gt_clk_ddrc_pipereg_rd_b_peri_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_aclk_ddrphy_dfi_r : 1;
        unsigned int gt_aclk_ddrphy_dfi_l : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int gt_clk_peri_dmc_l : 1;
        unsigned int gt_clk_peri_dmc_r : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_a_0 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_a_0 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_a_1 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_a_1 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_a_2 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_a_2 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_a_peri : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_a_peri : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_b_0 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_b_0 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_b_1 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_b_1 : 1;
        unsigned int gt_hclk_dmc : 1;
        unsigned int gt_clk_dcdrbus_dmc_a : 1;
        unsigned int gt_clk_dcdrbus_dmc_b : 1;
        unsigned int gt_clk_dcdrbus_dmc_c : 1;
        unsigned int gt_clk_dcdrbus_dmc_d : 1;
        unsigned int gt_clk_ddrc_a_sys : 1;
        unsigned int gt_clk_ddrc_b_sys : 1;
        unsigned int gt_clk_ddrc_c_sys : 1;
        unsigned int gt_clk_ddrc_d_sys : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_b_2 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_b_2 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_b_peri : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_b_peri : 1;
        unsigned int reserved_2 : 1;
    } reg;
} SOC_CRGPERIPH_PERDIS8_UNION;
#endif
#define SOC_CRGPERIPH_PERDIS8_gt_aclk_ddrphy_dfi_r_START (0)
#define SOC_CRGPERIPH_PERDIS8_gt_aclk_ddrphy_dfi_r_END (0)
#define SOC_CRGPERIPH_PERDIS8_gt_aclk_ddrphy_dfi_l_START (1)
#define SOC_CRGPERIPH_PERDIS8_gt_aclk_ddrphy_dfi_l_END (1)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_peri_dmc_l_START (4)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_peri_dmc_l_END (4)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_peri_dmc_r_START (5)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_peri_dmc_r_END (5)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_wr_a_0_START (6)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_wr_a_0_END (6)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_rd_a_0_START (7)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_rd_a_0_END (7)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_wr_a_1_START (8)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_wr_a_1_END (8)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_rd_a_1_START (9)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_rd_a_1_END (9)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_wr_a_2_START (10)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_wr_a_2_END (10)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_rd_a_2_START (11)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_rd_a_2_END (11)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_wr_a_peri_START (12)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_wr_a_peri_END (12)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_rd_a_peri_START (13)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_rd_a_peri_END (13)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_wr_b_0_START (14)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_wr_b_0_END (14)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_rd_b_0_START (15)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_rd_b_0_END (15)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_wr_b_1_START (16)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_wr_b_1_END (16)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_rd_b_1_START (17)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_rd_b_1_END (17)
#define SOC_CRGPERIPH_PERDIS8_gt_hclk_dmc_START (18)
#define SOC_CRGPERIPH_PERDIS8_gt_hclk_dmc_END (18)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_dcdrbus_dmc_a_START (19)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_dcdrbus_dmc_a_END (19)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_dcdrbus_dmc_b_START (20)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_dcdrbus_dmc_b_END (20)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_dcdrbus_dmc_c_START (21)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_dcdrbus_dmc_c_END (21)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_dcdrbus_dmc_d_START (22)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_dcdrbus_dmc_d_END (22)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_a_sys_START (23)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_a_sys_END (23)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_b_sys_START (24)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_b_sys_END (24)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_c_sys_START (25)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_c_sys_END (25)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_d_sys_START (26)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_d_sys_END (26)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_wr_b_2_START (27)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_wr_b_2_END (27)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_rd_b_2_START (28)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_rd_b_2_END (28)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_wr_b_peri_START (29)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_wr_b_peri_END (29)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_rd_b_peri_START (30)
#define SOC_CRGPERIPH_PERDIS8_gt_clk_ddrc_pipereg_rd_b_peri_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_aclk_ddrphy_dfi_r : 1;
        unsigned int gt_aclk_ddrphy_dfi_l : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int gt_clk_peri_dmc_l : 1;
        unsigned int gt_clk_peri_dmc_r : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_a_0 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_a_0 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_a_1 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_a_1 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_a_2 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_a_2 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_a_peri : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_a_peri : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_b_0 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_b_0 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_b_1 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_b_1 : 1;
        unsigned int gt_hclk_dmc : 1;
        unsigned int gt_clk_dcdrbus_dmc_a : 1;
        unsigned int gt_clk_dcdrbus_dmc_b : 1;
        unsigned int gt_clk_dcdrbus_dmc_c : 1;
        unsigned int gt_clk_dcdrbus_dmc_d : 1;
        unsigned int gt_clk_ddrc_a_sys : 1;
        unsigned int gt_clk_ddrc_b_sys : 1;
        unsigned int gt_clk_ddrc_c_sys : 1;
        unsigned int gt_clk_ddrc_d_sys : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_b_2 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_b_2 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_b_peri : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_b_peri : 1;
        unsigned int reserved_2 : 1;
    } reg;
} SOC_CRGPERIPH_PERCLKEN8_UNION;
#endif
#define SOC_CRGPERIPH_PERCLKEN8_gt_aclk_ddrphy_dfi_r_START (0)
#define SOC_CRGPERIPH_PERCLKEN8_gt_aclk_ddrphy_dfi_r_END (0)
#define SOC_CRGPERIPH_PERCLKEN8_gt_aclk_ddrphy_dfi_l_START (1)
#define SOC_CRGPERIPH_PERCLKEN8_gt_aclk_ddrphy_dfi_l_END (1)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_peri_dmc_l_START (4)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_peri_dmc_l_END (4)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_peri_dmc_r_START (5)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_peri_dmc_r_END (5)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_wr_a_0_START (6)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_wr_a_0_END (6)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_rd_a_0_START (7)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_rd_a_0_END (7)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_wr_a_1_START (8)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_wr_a_1_END (8)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_rd_a_1_START (9)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_rd_a_1_END (9)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_wr_a_2_START (10)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_wr_a_2_END (10)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_rd_a_2_START (11)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_rd_a_2_END (11)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_wr_a_peri_START (12)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_wr_a_peri_END (12)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_rd_a_peri_START (13)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_rd_a_peri_END (13)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_wr_b_0_START (14)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_wr_b_0_END (14)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_rd_b_0_START (15)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_rd_b_0_END (15)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_wr_b_1_START (16)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_wr_b_1_END (16)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_rd_b_1_START (17)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_rd_b_1_END (17)
#define SOC_CRGPERIPH_PERCLKEN8_gt_hclk_dmc_START (18)
#define SOC_CRGPERIPH_PERCLKEN8_gt_hclk_dmc_END (18)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_dcdrbus_dmc_a_START (19)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_dcdrbus_dmc_a_END (19)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_dcdrbus_dmc_b_START (20)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_dcdrbus_dmc_b_END (20)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_dcdrbus_dmc_c_START (21)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_dcdrbus_dmc_c_END (21)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_dcdrbus_dmc_d_START (22)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_dcdrbus_dmc_d_END (22)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_a_sys_START (23)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_a_sys_END (23)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_b_sys_START (24)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_b_sys_END (24)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_c_sys_START (25)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_c_sys_END (25)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_d_sys_START (26)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_d_sys_END (26)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_wr_b_2_START (27)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_wr_b_2_END (27)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_rd_b_2_START (28)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_rd_b_2_END (28)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_wr_b_peri_START (29)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_wr_b_peri_END (29)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_rd_b_peri_START (30)
#define SOC_CRGPERIPH_PERCLKEN8_gt_clk_ddrc_pipereg_rd_b_peri_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int st_aclk_ddrphy_dfi_r : 1;
        unsigned int st_aclk_ddrphy_dfi_l : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int st_clk_peri_dmc_l : 1;
        unsigned int st_clk_peri_dmc_r : 1;
        unsigned int st_clk_ddrc_pipereg_wr_a_0 : 1;
        unsigned int st_clk_ddrc_pipereg_rd_a_0 : 1;
        unsigned int st_clk_ddrc_pipereg_wr_a_1 : 1;
        unsigned int st_clk_ddrc_pipereg_rd_a_1 : 1;
        unsigned int st_clk_ddrc_pipereg_wr_a_2 : 1;
        unsigned int st_clk_ddrc_pipereg_rd_a_2 : 1;
        unsigned int st_clk_ddrc_pipereg_wr_a_peri : 1;
        unsigned int st_clk_ddrc_pipereg_rd_a_peri : 1;
        unsigned int st_clk_ddrc_pipereg_wr_b_0 : 1;
        unsigned int st_clk_ddrc_pipereg_rd_b_0 : 1;
        unsigned int st_clk_ddrc_pipereg_wr_b_1 : 1;
        unsigned int st_clk_ddrc_pipereg_rd_b_1 : 1;
        unsigned int st_hclk_dmc : 1;
        unsigned int st_clk_dcdrbus_dmc_a : 1;
        unsigned int st_clk_dcdrbus_dmc_b : 1;
        unsigned int st_clk_dcdrbus_dmc_c : 1;
        unsigned int st_clk_dcdrbus_dmc_d : 1;
        unsigned int st_clk_ddrc_a_sys : 1;
        unsigned int st_clk_ddrc_b_sys : 1;
        unsigned int st_clk_ddrc_c_sys : 1;
        unsigned int st_clk_ddrc_d_sys : 1;
        unsigned int st_clk_ddrc_pipereg_wr_b_2 : 1;
        unsigned int st_clk_ddrc_pipereg_rd_b_2 : 1;
        unsigned int st_clk_ddrc_pipereg_wr_b_peri : 1;
        unsigned int st_clk_ddrc_pipereg_rd_b_peri : 1;
        unsigned int reserved_2 : 1;
    } reg;
} SOC_CRGPERIPH_PERSTAT8_UNION;
#endif
#define SOC_CRGPERIPH_PERSTAT8_st_aclk_ddrphy_dfi_r_START (0)
#define SOC_CRGPERIPH_PERSTAT8_st_aclk_ddrphy_dfi_r_END (0)
#define SOC_CRGPERIPH_PERSTAT8_st_aclk_ddrphy_dfi_l_START (1)
#define SOC_CRGPERIPH_PERSTAT8_st_aclk_ddrphy_dfi_l_END (1)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_peri_dmc_l_START (4)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_peri_dmc_l_END (4)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_peri_dmc_r_START (5)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_peri_dmc_r_END (5)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_wr_a_0_START (6)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_wr_a_0_END (6)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_rd_a_0_START (7)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_rd_a_0_END (7)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_wr_a_1_START (8)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_wr_a_1_END (8)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_rd_a_1_START (9)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_rd_a_1_END (9)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_wr_a_2_START (10)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_wr_a_2_END (10)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_rd_a_2_START (11)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_rd_a_2_END (11)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_wr_a_peri_START (12)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_wr_a_peri_END (12)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_rd_a_peri_START (13)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_rd_a_peri_END (13)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_wr_b_0_START (14)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_wr_b_0_END (14)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_rd_b_0_START (15)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_rd_b_0_END (15)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_wr_b_1_START (16)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_wr_b_1_END (16)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_rd_b_1_START (17)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_rd_b_1_END (17)
#define SOC_CRGPERIPH_PERSTAT8_st_hclk_dmc_START (18)
#define SOC_CRGPERIPH_PERSTAT8_st_hclk_dmc_END (18)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_dcdrbus_dmc_a_START (19)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_dcdrbus_dmc_a_END (19)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_dcdrbus_dmc_b_START (20)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_dcdrbus_dmc_b_END (20)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_dcdrbus_dmc_c_START (21)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_dcdrbus_dmc_c_END (21)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_dcdrbus_dmc_d_START (22)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_dcdrbus_dmc_d_END (22)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_a_sys_START (23)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_a_sys_END (23)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_b_sys_START (24)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_b_sys_END (24)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_c_sys_START (25)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_c_sys_END (25)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_d_sys_START (26)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_d_sys_END (26)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_wr_b_2_START (27)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_wr_b_2_END (27)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_rd_b_2_START (28)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_rd_b_2_END (28)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_wr_b_peri_START (29)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_wr_b_peri_END (29)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_rd_b_peri_START (30)
#define SOC_CRGPERIPH_PERSTAT8_st_clk_ddrc_pipereg_rd_b_peri_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_clk_p2p_m_a : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_a_3 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_a_3 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_b_3 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_b_3 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_c_3 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_c_3 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_d_3 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_d_3 : 1;
        unsigned int reserved_0 : 1;
        unsigned int gt_clk_p2p_s_a : 1;
        unsigned int gt_clk_uce_subsys_a : 1;
        unsigned int gt_clk_ddrc_a_ref : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int gt_clk_p2p_m_b : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int reserved_12 : 1;
        unsigned int gt_clk_p2p_s_b : 1;
        unsigned int gt_clk_uce_subsys_b : 1;
        unsigned int gt_clk_ddrc_b_ref : 1;
        unsigned int reserved_13 : 1;
        unsigned int reserved_14 : 1;
        unsigned int reserved_15 : 1;
    } reg;
} SOC_CRGPERIPH_PEREN9_UNION;
#endif
#define SOC_CRGPERIPH_PEREN9_gt_clk_p2p_m_a_START (0)
#define SOC_CRGPERIPH_PEREN9_gt_clk_p2p_m_a_END (0)
#define SOC_CRGPERIPH_PEREN9_gt_clk_ddrc_pipereg_wr_a_3_START (1)
#define SOC_CRGPERIPH_PEREN9_gt_clk_ddrc_pipereg_wr_a_3_END (1)
#define SOC_CRGPERIPH_PEREN9_gt_clk_ddrc_pipereg_rd_a_3_START (2)
#define SOC_CRGPERIPH_PEREN9_gt_clk_ddrc_pipereg_rd_a_3_END (2)
#define SOC_CRGPERIPH_PEREN9_gt_clk_ddrc_pipereg_wr_b_3_START (3)
#define SOC_CRGPERIPH_PEREN9_gt_clk_ddrc_pipereg_wr_b_3_END (3)
#define SOC_CRGPERIPH_PEREN9_gt_clk_ddrc_pipereg_rd_b_3_START (4)
#define SOC_CRGPERIPH_PEREN9_gt_clk_ddrc_pipereg_rd_b_3_END (4)
#define SOC_CRGPERIPH_PEREN9_gt_clk_ddrc_pipereg_wr_c_3_START (5)
#define SOC_CRGPERIPH_PEREN9_gt_clk_ddrc_pipereg_wr_c_3_END (5)
#define SOC_CRGPERIPH_PEREN9_gt_clk_ddrc_pipereg_rd_c_3_START (6)
#define SOC_CRGPERIPH_PEREN9_gt_clk_ddrc_pipereg_rd_c_3_END (6)
#define SOC_CRGPERIPH_PEREN9_gt_clk_ddrc_pipereg_wr_d_3_START (7)
#define SOC_CRGPERIPH_PEREN9_gt_clk_ddrc_pipereg_wr_d_3_END (7)
#define SOC_CRGPERIPH_PEREN9_gt_clk_ddrc_pipereg_rd_d_3_START (8)
#define SOC_CRGPERIPH_PEREN9_gt_clk_ddrc_pipereg_rd_d_3_END (8)
#define SOC_CRGPERIPH_PEREN9_gt_clk_p2p_s_a_START (10)
#define SOC_CRGPERIPH_PEREN9_gt_clk_p2p_s_a_END (10)
#define SOC_CRGPERIPH_PEREN9_gt_clk_uce_subsys_a_START (11)
#define SOC_CRGPERIPH_PEREN9_gt_clk_uce_subsys_a_END (11)
#define SOC_CRGPERIPH_PEREN9_gt_clk_ddrc_a_ref_START (12)
#define SOC_CRGPERIPH_PEREN9_gt_clk_ddrc_a_ref_END (12)
#define SOC_CRGPERIPH_PEREN9_gt_clk_p2p_m_b_START (16)
#define SOC_CRGPERIPH_PEREN9_gt_clk_p2p_m_b_END (16)
#define SOC_CRGPERIPH_PEREN9_gt_clk_p2p_s_b_START (26)
#define SOC_CRGPERIPH_PEREN9_gt_clk_p2p_s_b_END (26)
#define SOC_CRGPERIPH_PEREN9_gt_clk_uce_subsys_b_START (27)
#define SOC_CRGPERIPH_PEREN9_gt_clk_uce_subsys_b_END (27)
#define SOC_CRGPERIPH_PEREN9_gt_clk_ddrc_b_ref_START (28)
#define SOC_CRGPERIPH_PEREN9_gt_clk_ddrc_b_ref_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_clk_p2p_m_a : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_a_3 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_a_3 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_b_3 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_b_3 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_c_3 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_c_3 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_d_3 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_d_3 : 1;
        unsigned int reserved_0 : 1;
        unsigned int gt_clk_p2p_s_a : 1;
        unsigned int gt_clk_uce_subsys_a : 1;
        unsigned int gt_clk_ddrc_a_ref : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int gt_clk_p2p_m_b : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int reserved_12 : 1;
        unsigned int gt_clk_p2p_s_b : 1;
        unsigned int gt_clk_uce_subsys_b : 1;
        unsigned int gt_clk_ddrc_b_ref : 1;
        unsigned int reserved_13 : 1;
        unsigned int reserved_14 : 1;
        unsigned int reserved_15 : 1;
    } reg;
} SOC_CRGPERIPH_PERDIS9_UNION;
#endif
#define SOC_CRGPERIPH_PERDIS9_gt_clk_p2p_m_a_START (0)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_p2p_m_a_END (0)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_ddrc_pipereg_wr_a_3_START (1)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_ddrc_pipereg_wr_a_3_END (1)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_ddrc_pipereg_rd_a_3_START (2)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_ddrc_pipereg_rd_a_3_END (2)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_ddrc_pipereg_wr_b_3_START (3)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_ddrc_pipereg_wr_b_3_END (3)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_ddrc_pipereg_rd_b_3_START (4)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_ddrc_pipereg_rd_b_3_END (4)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_ddrc_pipereg_wr_c_3_START (5)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_ddrc_pipereg_wr_c_3_END (5)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_ddrc_pipereg_rd_c_3_START (6)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_ddrc_pipereg_rd_c_3_END (6)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_ddrc_pipereg_wr_d_3_START (7)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_ddrc_pipereg_wr_d_3_END (7)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_ddrc_pipereg_rd_d_3_START (8)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_ddrc_pipereg_rd_d_3_END (8)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_p2p_s_a_START (10)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_p2p_s_a_END (10)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_uce_subsys_a_START (11)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_uce_subsys_a_END (11)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_ddrc_a_ref_START (12)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_ddrc_a_ref_END (12)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_p2p_m_b_START (16)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_p2p_m_b_END (16)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_p2p_s_b_START (26)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_p2p_s_b_END (26)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_uce_subsys_b_START (27)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_uce_subsys_b_END (27)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_ddrc_b_ref_START (28)
#define SOC_CRGPERIPH_PERDIS9_gt_clk_ddrc_b_ref_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_clk_p2p_m_a : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_a_3 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_a_3 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_b_3 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_b_3 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_c_3 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_c_3 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_d_3 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_d_3 : 1;
        unsigned int reserved_0 : 1;
        unsigned int gt_clk_p2p_s_a : 1;
        unsigned int gt_clk_uce_subsys_a : 1;
        unsigned int gt_clk_ddrc_a_ref : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int gt_clk_p2p_m_b : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int reserved_12 : 1;
        unsigned int gt_clk_p2p_s_b : 1;
        unsigned int gt_clk_uce_subsys_b : 1;
        unsigned int gt_clk_ddrc_b_ref : 1;
        unsigned int reserved_13 : 1;
        unsigned int reserved_14 : 1;
        unsigned int reserved_15 : 1;
    } reg;
} SOC_CRGPERIPH_PERCLKEN9_UNION;
#endif
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_p2p_m_a_START (0)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_p2p_m_a_END (0)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_ddrc_pipereg_wr_a_3_START (1)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_ddrc_pipereg_wr_a_3_END (1)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_ddrc_pipereg_rd_a_3_START (2)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_ddrc_pipereg_rd_a_3_END (2)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_ddrc_pipereg_wr_b_3_START (3)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_ddrc_pipereg_wr_b_3_END (3)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_ddrc_pipereg_rd_b_3_START (4)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_ddrc_pipereg_rd_b_3_END (4)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_ddrc_pipereg_wr_c_3_START (5)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_ddrc_pipereg_wr_c_3_END (5)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_ddrc_pipereg_rd_c_3_START (6)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_ddrc_pipereg_rd_c_3_END (6)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_ddrc_pipereg_wr_d_3_START (7)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_ddrc_pipereg_wr_d_3_END (7)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_ddrc_pipereg_rd_d_3_START (8)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_ddrc_pipereg_rd_d_3_END (8)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_p2p_s_a_START (10)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_p2p_s_a_END (10)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_uce_subsys_a_START (11)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_uce_subsys_a_END (11)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_ddrc_a_ref_START (12)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_ddrc_a_ref_END (12)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_p2p_m_b_START (16)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_p2p_m_b_END (16)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_p2p_s_b_START (26)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_p2p_s_b_END (26)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_uce_subsys_b_START (27)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_uce_subsys_b_END (27)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_ddrc_b_ref_START (28)
#define SOC_CRGPERIPH_PERCLKEN9_gt_clk_ddrc_b_ref_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int st_clk_p2p_m_a : 1;
        unsigned int st_clk_ddrc_pipereg_wr_a_3 : 1;
        unsigned int st_clk_ddrc_pipereg_rd_a_3 : 1;
        unsigned int st_clk_ddrc_pipereg_wr_b_3 : 1;
        unsigned int st_clk_ddrc_pipereg_rd_b_3 : 1;
        unsigned int st_clk_ddrc_pipereg_wr_c_3 : 1;
        unsigned int st_clk_ddrc_pipereg_rd_c_3 : 1;
        unsigned int st_clk_ddrc_pipereg_wr_d_3 : 1;
        unsigned int st_clk_ddrc_pipereg_rd_d_3 : 1;
        unsigned int reserved_0 : 1;
        unsigned int st_clk_p2p_s_a : 1;
        unsigned int st_clk_uce_subsys_a : 1;
        unsigned int st_clk_ddrc_a_ref : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int st_clk_p2p_m_b : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int reserved_12 : 1;
        unsigned int st_clk_p2p_s_b : 1;
        unsigned int st_clk_uce_subsys_b : 1;
        unsigned int st_clk_ddrc_b_ref : 1;
        unsigned int reserved_13 : 1;
        unsigned int reserved_14 : 1;
        unsigned int reserved_15 : 1;
    } reg;
} SOC_CRGPERIPH_PERSTAT9_UNION;
#endif
#define SOC_CRGPERIPH_PERSTAT9_st_clk_p2p_m_a_START (0)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_p2p_m_a_END (0)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_ddrc_pipereg_wr_a_3_START (1)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_ddrc_pipereg_wr_a_3_END (1)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_ddrc_pipereg_rd_a_3_START (2)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_ddrc_pipereg_rd_a_3_END (2)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_ddrc_pipereg_wr_b_3_START (3)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_ddrc_pipereg_wr_b_3_END (3)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_ddrc_pipereg_rd_b_3_START (4)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_ddrc_pipereg_rd_b_3_END (4)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_ddrc_pipereg_wr_c_3_START (5)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_ddrc_pipereg_wr_c_3_END (5)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_ddrc_pipereg_rd_c_3_START (6)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_ddrc_pipereg_rd_c_3_END (6)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_ddrc_pipereg_wr_d_3_START (7)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_ddrc_pipereg_wr_d_3_END (7)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_ddrc_pipereg_rd_d_3_START (8)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_ddrc_pipereg_rd_d_3_END (8)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_p2p_s_a_START (10)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_p2p_s_a_END (10)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_uce_subsys_a_START (11)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_uce_subsys_a_END (11)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_ddrc_a_ref_START (12)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_ddrc_a_ref_END (12)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_p2p_m_b_START (16)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_p2p_m_b_END (16)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_p2p_s_b_START (26)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_p2p_s_b_END (26)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_uce_subsys_b_START (27)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_uce_subsys_b_END (27)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_ddrc_b_ref_START (28)
#define SOC_CRGPERIPH_PERSTAT9_st_clk_ddrc_b_ref_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_clk_p2p_m_c : 1;
        unsigned int atgs_lp_ack_bypass_sysbus : 1;
        unsigned int atgs_lp_ack_bypass_mdm : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int gt_clk_p2p_s_c : 1;
        unsigned int gt_clk_uce_subsys_c : 1;
        unsigned int gt_clk_ddrc_c_ref : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int gt_clk_p2p_m_d : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int reserved_12 : 1;
        unsigned int reserved_13 : 1;
        unsigned int reserved_14 : 1;
        unsigned int reserved_15 : 1;
        unsigned int reserved_16 : 1;
        unsigned int reserved_17 : 1;
        unsigned int reserved_18 : 1;
        unsigned int gt_clk_p2p_s_d : 1;
        unsigned int gt_clk_uce_subsys_d : 1;
        unsigned int gt_clk_ddrc_d_ref : 1;
        unsigned int reserved_19 : 1;
        unsigned int reserved_20 : 1;
        unsigned int reserved_21 : 1;
    } reg;
} SOC_CRGPERIPH_PEREN10_UNION;
#endif
#define SOC_CRGPERIPH_PEREN10_gt_clk_p2p_m_c_START (0)
#define SOC_CRGPERIPH_PEREN10_gt_clk_p2p_m_c_END (0)
#define SOC_CRGPERIPH_PEREN10_atgs_lp_ack_bypass_sysbus_START (1)
#define SOC_CRGPERIPH_PEREN10_atgs_lp_ack_bypass_sysbus_END (1)
#define SOC_CRGPERIPH_PEREN10_atgs_lp_ack_bypass_mdm_START (2)
#define SOC_CRGPERIPH_PEREN10_atgs_lp_ack_bypass_mdm_END (2)
#define SOC_CRGPERIPH_PEREN10_gt_clk_p2p_s_c_START (10)
#define SOC_CRGPERIPH_PEREN10_gt_clk_p2p_s_c_END (10)
#define SOC_CRGPERIPH_PEREN10_gt_clk_uce_subsys_c_START (11)
#define SOC_CRGPERIPH_PEREN10_gt_clk_uce_subsys_c_END (11)
#define SOC_CRGPERIPH_PEREN10_gt_clk_ddrc_c_ref_START (12)
#define SOC_CRGPERIPH_PEREN10_gt_clk_ddrc_c_ref_END (12)
#define SOC_CRGPERIPH_PEREN10_gt_clk_p2p_m_d_START (16)
#define SOC_CRGPERIPH_PEREN10_gt_clk_p2p_m_d_END (16)
#define SOC_CRGPERIPH_PEREN10_gt_clk_p2p_s_d_START (26)
#define SOC_CRGPERIPH_PEREN10_gt_clk_p2p_s_d_END (26)
#define SOC_CRGPERIPH_PEREN10_gt_clk_uce_subsys_d_START (27)
#define SOC_CRGPERIPH_PEREN10_gt_clk_uce_subsys_d_END (27)
#define SOC_CRGPERIPH_PEREN10_gt_clk_ddrc_d_ref_START (28)
#define SOC_CRGPERIPH_PEREN10_gt_clk_ddrc_d_ref_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_clk_p2p_m_c : 1;
        unsigned int atgs_lp_ack_bypass_sysbus : 1;
        unsigned int atgs_lp_ack_bypass_mdm : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int gt_clk_p2p_s_c : 1;
        unsigned int gt_clk_uce_subsys_c : 1;
        unsigned int gt_clk_ddrc_c_ref : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int gt_clk_p2p_m_d : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int reserved_12 : 1;
        unsigned int reserved_13 : 1;
        unsigned int reserved_14 : 1;
        unsigned int reserved_15 : 1;
        unsigned int reserved_16 : 1;
        unsigned int reserved_17 : 1;
        unsigned int reserved_18 : 1;
        unsigned int gt_clk_p2p_s_d : 1;
        unsigned int gt_clk_uce_subsys_d : 1;
        unsigned int gt_clk_ddrc_d_ref : 1;
        unsigned int reserved_19 : 1;
        unsigned int reserved_20 : 1;
        unsigned int reserved_21 : 1;
    } reg;
} SOC_CRGPERIPH_PERDIS10_UNION;
#endif
#define SOC_CRGPERIPH_PERDIS10_gt_clk_p2p_m_c_START (0)
#define SOC_CRGPERIPH_PERDIS10_gt_clk_p2p_m_c_END (0)
#define SOC_CRGPERIPH_PERDIS10_atgs_lp_ack_bypass_sysbus_START (1)
#define SOC_CRGPERIPH_PERDIS10_atgs_lp_ack_bypass_sysbus_END (1)
#define SOC_CRGPERIPH_PERDIS10_atgs_lp_ack_bypass_mdm_START (2)
#define SOC_CRGPERIPH_PERDIS10_atgs_lp_ack_bypass_mdm_END (2)
#define SOC_CRGPERIPH_PERDIS10_gt_clk_p2p_s_c_START (10)
#define SOC_CRGPERIPH_PERDIS10_gt_clk_p2p_s_c_END (10)
#define SOC_CRGPERIPH_PERDIS10_gt_clk_uce_subsys_c_START (11)
#define SOC_CRGPERIPH_PERDIS10_gt_clk_uce_subsys_c_END (11)
#define SOC_CRGPERIPH_PERDIS10_gt_clk_ddrc_c_ref_START (12)
#define SOC_CRGPERIPH_PERDIS10_gt_clk_ddrc_c_ref_END (12)
#define SOC_CRGPERIPH_PERDIS10_gt_clk_p2p_m_d_START (16)
#define SOC_CRGPERIPH_PERDIS10_gt_clk_p2p_m_d_END (16)
#define SOC_CRGPERIPH_PERDIS10_gt_clk_p2p_s_d_START (26)
#define SOC_CRGPERIPH_PERDIS10_gt_clk_p2p_s_d_END (26)
#define SOC_CRGPERIPH_PERDIS10_gt_clk_uce_subsys_d_START (27)
#define SOC_CRGPERIPH_PERDIS10_gt_clk_uce_subsys_d_END (27)
#define SOC_CRGPERIPH_PERDIS10_gt_clk_ddrc_d_ref_START (28)
#define SOC_CRGPERIPH_PERDIS10_gt_clk_ddrc_d_ref_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_clk_p2p_m_c : 1;
        unsigned int atgs_lp_ack_bypass_sysbus : 1;
        unsigned int atgs_lp_ack_bypass_mdm : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int gt_clk_p2p_s_c : 1;
        unsigned int gt_clk_uce_subsys_c : 1;
        unsigned int gt_clk_ddrc_c_ref : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int gt_clk_p2p_m_d : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int reserved_12 : 1;
        unsigned int reserved_13 : 1;
        unsigned int reserved_14 : 1;
        unsigned int reserved_15 : 1;
        unsigned int reserved_16 : 1;
        unsigned int reserved_17 : 1;
        unsigned int reserved_18 : 1;
        unsigned int gt_clk_p2p_s_d : 1;
        unsigned int gt_clk_uce_subsys_d : 1;
        unsigned int gt_clk_ddrc_d_ref : 1;
        unsigned int reserved_19 : 1;
        unsigned int reserved_20 : 1;
        unsigned int reserved_21 : 1;
    } reg;
} SOC_CRGPERIPH_PERCLKEN10_UNION;
#endif
#define SOC_CRGPERIPH_PERCLKEN10_gt_clk_p2p_m_c_START (0)
#define SOC_CRGPERIPH_PERCLKEN10_gt_clk_p2p_m_c_END (0)
#define SOC_CRGPERIPH_PERCLKEN10_atgs_lp_ack_bypass_sysbus_START (1)
#define SOC_CRGPERIPH_PERCLKEN10_atgs_lp_ack_bypass_sysbus_END (1)
#define SOC_CRGPERIPH_PERCLKEN10_atgs_lp_ack_bypass_mdm_START (2)
#define SOC_CRGPERIPH_PERCLKEN10_atgs_lp_ack_bypass_mdm_END (2)
#define SOC_CRGPERIPH_PERCLKEN10_gt_clk_p2p_s_c_START (10)
#define SOC_CRGPERIPH_PERCLKEN10_gt_clk_p2p_s_c_END (10)
#define SOC_CRGPERIPH_PERCLKEN10_gt_clk_uce_subsys_c_START (11)
#define SOC_CRGPERIPH_PERCLKEN10_gt_clk_uce_subsys_c_END (11)
#define SOC_CRGPERIPH_PERCLKEN10_gt_clk_ddrc_c_ref_START (12)
#define SOC_CRGPERIPH_PERCLKEN10_gt_clk_ddrc_c_ref_END (12)
#define SOC_CRGPERIPH_PERCLKEN10_gt_clk_p2p_m_d_START (16)
#define SOC_CRGPERIPH_PERCLKEN10_gt_clk_p2p_m_d_END (16)
#define SOC_CRGPERIPH_PERCLKEN10_gt_clk_p2p_s_d_START (26)
#define SOC_CRGPERIPH_PERCLKEN10_gt_clk_p2p_s_d_END (26)
#define SOC_CRGPERIPH_PERCLKEN10_gt_clk_uce_subsys_d_START (27)
#define SOC_CRGPERIPH_PERCLKEN10_gt_clk_uce_subsys_d_END (27)
#define SOC_CRGPERIPH_PERCLKEN10_gt_clk_ddrc_d_ref_START (28)
#define SOC_CRGPERIPH_PERCLKEN10_gt_clk_ddrc_d_ref_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int st_clk_p2p_m_c : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int st_clk_p2p_s_c : 1;
        unsigned int st_clk_uce_subsys_c : 1;
        unsigned int st_clk_ddrc_c_ref : 1;
        unsigned int reserved_9 : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int st_clk_p2p_m_d : 1;
        unsigned int reserved_12 : 1;
        unsigned int reserved_13 : 1;
        unsigned int reserved_14 : 1;
        unsigned int reserved_15 : 1;
        unsigned int reserved_16 : 1;
        unsigned int reserved_17 : 1;
        unsigned int reserved_18 : 1;
        unsigned int reserved_19 : 1;
        unsigned int reserved_20 : 1;
        unsigned int st_clk_p2p_s_d : 1;
        unsigned int st_clk_uce_subsys_d : 1;
        unsigned int st_clk_ddrc_d_ref : 1;
        unsigned int reserved_21 : 1;
        unsigned int reserved_22 : 1;
        unsigned int reserved_23 : 1;
    } reg;
} SOC_CRGPERIPH_PERSTAT10_UNION;
#endif
#define SOC_CRGPERIPH_PERSTAT10_st_clk_p2p_m_c_START (0)
#define SOC_CRGPERIPH_PERSTAT10_st_clk_p2p_m_c_END (0)
#define SOC_CRGPERIPH_PERSTAT10_st_clk_p2p_s_c_START (10)
#define SOC_CRGPERIPH_PERSTAT10_st_clk_p2p_s_c_END (10)
#define SOC_CRGPERIPH_PERSTAT10_st_clk_uce_subsys_c_START (11)
#define SOC_CRGPERIPH_PERSTAT10_st_clk_uce_subsys_c_END (11)
#define SOC_CRGPERIPH_PERSTAT10_st_clk_ddrc_c_ref_START (12)
#define SOC_CRGPERIPH_PERSTAT10_st_clk_ddrc_c_ref_END (12)
#define SOC_CRGPERIPH_PERSTAT10_st_clk_p2p_m_d_START (16)
#define SOC_CRGPERIPH_PERSTAT10_st_clk_p2p_m_d_END (16)
#define SOC_CRGPERIPH_PERSTAT10_st_clk_p2p_s_d_START (26)
#define SOC_CRGPERIPH_PERSTAT10_st_clk_p2p_s_d_END (26)
#define SOC_CRGPERIPH_PERSTAT10_st_clk_uce_subsys_d_START (27)
#define SOC_CRGPERIPH_PERSTAT10_st_clk_uce_subsys_d_END (27)
#define SOC_CRGPERIPH_PERSTAT10_st_clk_ddrc_d_ref_START (28)
#define SOC_CRGPERIPH_PERSTAT10_st_clk_ddrc_d_ref_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_clk_ddrc_pipereg_wr_c_0 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_c_0 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_c_1 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_c_1 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_c_2 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_c_2 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_c_peri : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_c_peri : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_d_0 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_d_0 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_d_1 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_d_1 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_d_2 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_d_2 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_d_peri : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_d_peri : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int peri_auto_bypass_a : 1;
        unsigned int peri_auto_bypass_b : 1;
        unsigned int peri_auto_bypass_c : 1;
        unsigned int peri_auto_bypass_d : 1;
        unsigned int ddrc_autogt_bypass : 1;
        unsigned int reserved_10 : 1;
    } reg;
} SOC_CRGPERIPH_PEREN11_UNION;
#endif
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_wr_c_0_START (0)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_wr_c_0_END (0)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_rd_c_0_START (1)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_rd_c_0_END (1)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_wr_c_1_START (2)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_wr_c_1_END (2)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_rd_c_1_START (3)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_rd_c_1_END (3)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_wr_c_2_START (4)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_wr_c_2_END (4)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_rd_c_2_START (5)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_rd_c_2_END (5)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_wr_c_peri_START (6)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_wr_c_peri_END (6)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_rd_c_peri_START (7)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_rd_c_peri_END (7)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_wr_d_0_START (8)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_wr_d_0_END (8)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_rd_d_0_START (9)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_rd_d_0_END (9)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_wr_d_1_START (10)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_wr_d_1_END (10)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_rd_d_1_START (11)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_rd_d_1_END (11)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_wr_d_2_START (12)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_wr_d_2_END (12)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_rd_d_2_START (13)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_rd_d_2_END (13)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_wr_d_peri_START (14)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_wr_d_peri_END (14)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_rd_d_peri_START (15)
#define SOC_CRGPERIPH_PEREN11_gt_clk_ddrc_pipereg_rd_d_peri_END (15)
#define SOC_CRGPERIPH_PEREN11_peri_auto_bypass_a_START (26)
#define SOC_CRGPERIPH_PEREN11_peri_auto_bypass_a_END (26)
#define SOC_CRGPERIPH_PEREN11_peri_auto_bypass_b_START (27)
#define SOC_CRGPERIPH_PEREN11_peri_auto_bypass_b_END (27)
#define SOC_CRGPERIPH_PEREN11_peri_auto_bypass_c_START (28)
#define SOC_CRGPERIPH_PEREN11_peri_auto_bypass_c_END (28)
#define SOC_CRGPERIPH_PEREN11_peri_auto_bypass_d_START (29)
#define SOC_CRGPERIPH_PEREN11_peri_auto_bypass_d_END (29)
#define SOC_CRGPERIPH_PEREN11_ddrc_autogt_bypass_START (30)
#define SOC_CRGPERIPH_PEREN11_ddrc_autogt_bypass_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_clk_ddrc_pipereg_wr_c_0 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_c_0 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_c_1 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_c_1 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_c_2 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_c_2 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_c_peri : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_c_peri : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_d_0 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_d_0 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_d_1 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_d_1 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_d_2 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_d_2 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_d_peri : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_d_peri : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int peri_auto_bypass_a : 1;
        unsigned int peri_auto_bypass_b : 1;
        unsigned int peri_auto_bypass_c : 1;
        unsigned int peri_auto_bypass_d : 1;
        unsigned int ddrc_autogt_bypass : 1;
        unsigned int reserved_10 : 1;
    } reg;
} SOC_CRGPERIPH_PERDIS11_UNION;
#endif
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_wr_c_0_START (0)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_wr_c_0_END (0)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_rd_c_0_START (1)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_rd_c_0_END (1)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_wr_c_1_START (2)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_wr_c_1_END (2)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_rd_c_1_START (3)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_rd_c_1_END (3)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_wr_c_2_START (4)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_wr_c_2_END (4)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_rd_c_2_START (5)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_rd_c_2_END (5)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_wr_c_peri_START (6)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_wr_c_peri_END (6)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_rd_c_peri_START (7)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_rd_c_peri_END (7)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_wr_d_0_START (8)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_wr_d_0_END (8)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_rd_d_0_START (9)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_rd_d_0_END (9)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_wr_d_1_START (10)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_wr_d_1_END (10)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_rd_d_1_START (11)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_rd_d_1_END (11)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_wr_d_2_START (12)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_wr_d_2_END (12)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_rd_d_2_START (13)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_rd_d_2_END (13)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_wr_d_peri_START (14)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_wr_d_peri_END (14)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_rd_d_peri_START (15)
#define SOC_CRGPERIPH_PERDIS11_gt_clk_ddrc_pipereg_rd_d_peri_END (15)
#define SOC_CRGPERIPH_PERDIS11_peri_auto_bypass_a_START (26)
#define SOC_CRGPERIPH_PERDIS11_peri_auto_bypass_a_END (26)
#define SOC_CRGPERIPH_PERDIS11_peri_auto_bypass_b_START (27)
#define SOC_CRGPERIPH_PERDIS11_peri_auto_bypass_b_END (27)
#define SOC_CRGPERIPH_PERDIS11_peri_auto_bypass_c_START (28)
#define SOC_CRGPERIPH_PERDIS11_peri_auto_bypass_c_END (28)
#define SOC_CRGPERIPH_PERDIS11_peri_auto_bypass_d_START (29)
#define SOC_CRGPERIPH_PERDIS11_peri_auto_bypass_d_END (29)
#define SOC_CRGPERIPH_PERDIS11_ddrc_autogt_bypass_START (30)
#define SOC_CRGPERIPH_PERDIS11_ddrc_autogt_bypass_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_clk_ddrc_pipereg_wr_c_0 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_c_0 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_c_1 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_c_1 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_c_2 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_c_2 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_c_peri : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_c_peri : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_d_0 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_d_0 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_d_1 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_d_1 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_d_2 : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_d_2 : 1;
        unsigned int gt_clk_ddrc_pipereg_wr_d_peri : 1;
        unsigned int gt_clk_ddrc_pipereg_rd_d_peri : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int peri_auto_bypass_a : 1;
        unsigned int peri_auto_bypass_b : 1;
        unsigned int peri_auto_bypass_c : 1;
        unsigned int peri_auto_bypass_d : 1;
        unsigned int ddrc_autogt_bypass : 1;
        unsigned int reserved_10 : 1;
    } reg;
} SOC_CRGPERIPH_PERCLKEN11_UNION;
#endif
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_wr_c_0_START (0)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_wr_c_0_END (0)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_rd_c_0_START (1)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_rd_c_0_END (1)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_wr_c_1_START (2)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_wr_c_1_END (2)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_rd_c_1_START (3)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_rd_c_1_END (3)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_wr_c_2_START (4)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_wr_c_2_END (4)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_rd_c_2_START (5)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_rd_c_2_END (5)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_wr_c_peri_START (6)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_wr_c_peri_END (6)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_rd_c_peri_START (7)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_rd_c_peri_END (7)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_wr_d_0_START (8)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_wr_d_0_END (8)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_rd_d_0_START (9)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_rd_d_0_END (9)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_wr_d_1_START (10)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_wr_d_1_END (10)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_rd_d_1_START (11)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_rd_d_1_END (11)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_wr_d_2_START (12)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_wr_d_2_END (12)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_rd_d_2_START (13)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_rd_d_2_END (13)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_wr_d_peri_START (14)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_wr_d_peri_END (14)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_rd_d_peri_START (15)
#define SOC_CRGPERIPH_PERCLKEN11_gt_clk_ddrc_pipereg_rd_d_peri_END (15)
#define SOC_CRGPERIPH_PERCLKEN11_peri_auto_bypass_a_START (26)
#define SOC_CRGPERIPH_PERCLKEN11_peri_auto_bypass_a_END (26)
#define SOC_CRGPERIPH_PERCLKEN11_peri_auto_bypass_b_START (27)
#define SOC_CRGPERIPH_PERCLKEN11_peri_auto_bypass_b_END (27)
#define SOC_CRGPERIPH_PERCLKEN11_peri_auto_bypass_c_START (28)
#define SOC_CRGPERIPH_PERCLKEN11_peri_auto_bypass_c_END (28)
#define SOC_CRGPERIPH_PERCLKEN11_peri_auto_bypass_d_START (29)
#define SOC_CRGPERIPH_PERCLKEN11_peri_auto_bypass_d_END (29)
#define SOC_CRGPERIPH_PERCLKEN11_ddrc_autogt_bypass_START (30)
#define SOC_CRGPERIPH_PERCLKEN11_ddrc_autogt_bypass_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int st_clk_ddrc_pipereg_wr_c_0 : 1;
        unsigned int st_clk_ddrc_pipereg_rd_c_0 : 1;
        unsigned int st_clk_ddrc_pipereg_wr_c_1 : 1;
        unsigned int st_clk_ddrc_pipereg_rd_c_1 : 1;
        unsigned int st_clk_ddrc_pipereg_wr_c_2 : 1;
        unsigned int st_clk_ddrc_pipereg_rd_c_2 : 1;
        unsigned int st_clk_ddrc_pipereg_wr_c_peri : 1;
        unsigned int st_clk_ddrc_pipereg_rd_c_peri : 1;
        unsigned int st_clk_ddrc_pipereg_wr_d_0 : 1;
        unsigned int st_clk_ddrc_pipereg_rd_d_0 : 1;
        unsigned int st_clk_ddrc_pipereg_wr_d_1 : 1;
        unsigned int st_clk_ddrc_pipereg_rd_d_1 : 1;
        unsigned int st_clk_ddrc_pipereg_wr_d_2 : 1;
        unsigned int st_clk_ddrc_pipereg_rd_d_2 : 1;
        unsigned int st_clk_ddrc_pipereg_wr_d_peri : 1;
        unsigned int st_clk_ddrc_pipereg_rd_d_peri : 1;
        unsigned int ppll1_gt_stat : 1;
        unsigned int ppll2_gt_stat : 1;
        unsigned int ppll3_gt_stat : 1;
        unsigned int ppll1_en_stat : 1;
        unsigned int ppll2_en_stat : 1;
        unsigned int ppll3_en_stat : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
    } reg;
} SOC_CRGPERIPH_PERSTAT11_UNION;
#endif
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_wr_c_0_START (0)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_wr_c_0_END (0)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_rd_c_0_START (1)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_rd_c_0_END (1)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_wr_c_1_START (2)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_wr_c_1_END (2)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_rd_c_1_START (3)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_rd_c_1_END (3)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_wr_c_2_START (4)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_wr_c_2_END (4)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_rd_c_2_START (5)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_rd_c_2_END (5)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_wr_c_peri_START (6)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_wr_c_peri_END (6)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_rd_c_peri_START (7)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_rd_c_peri_END (7)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_wr_d_0_START (8)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_wr_d_0_END (8)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_rd_d_0_START (9)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_rd_d_0_END (9)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_wr_d_1_START (10)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_wr_d_1_END (10)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_rd_d_1_START (11)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_rd_d_1_END (11)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_wr_d_2_START (12)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_wr_d_2_END (12)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_rd_d_2_START (13)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_rd_d_2_END (13)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_wr_d_peri_START (14)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_wr_d_peri_END (14)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_rd_d_peri_START (15)
#define SOC_CRGPERIPH_PERSTAT11_st_clk_ddrc_pipereg_rd_d_peri_END (15)
#define SOC_CRGPERIPH_PERSTAT11_ppll1_gt_stat_START (16)
#define SOC_CRGPERIPH_PERSTAT11_ppll1_gt_stat_END (16)
#define SOC_CRGPERIPH_PERSTAT11_ppll2_gt_stat_START (17)
#define SOC_CRGPERIPH_PERSTAT11_ppll2_gt_stat_END (17)
#define SOC_CRGPERIPH_PERSTAT11_ppll3_gt_stat_START (18)
#define SOC_CRGPERIPH_PERSTAT11_ppll3_gt_stat_END (18)
#define SOC_CRGPERIPH_PERSTAT11_ppll1_en_stat_START (19)
#define SOC_CRGPERIPH_PERSTAT11_ppll1_en_stat_END (19)
#define SOC_CRGPERIPH_PERSTAT11_ppll2_en_stat_START (20)
#define SOC_CRGPERIPH_PERSTAT11_ppll2_en_stat_END (20)
#define SOC_CRGPERIPH_PERSTAT11_ppll3_en_stat_START (21)
#define SOC_CRGPERIPH_PERSTAT11_ppll3_en_stat_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int gt_pclk_atgs_sys : 1;
        unsigned int gt_pclk_dpctrl : 1;
        unsigned int gt_aclk_dpctrl : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int reserved_12 : 1;
        unsigned int reserved_13 : 1;
        unsigned int reserved_14 : 1;
        unsigned int reserved_15 : 1;
        unsigned int reserved_16 : 1;
        unsigned int reserved_17 : 1;
        unsigned int gt_clk_dpctrl_16m : 1;
        unsigned int reserved_18 : 10;
    } reg;
} SOC_CRGPERIPH_PEREN12_UNION;
#endif
#define SOC_CRGPERIPH_PEREN12_gt_pclk_atgs_sys_START (3)
#define SOC_CRGPERIPH_PEREN12_gt_pclk_atgs_sys_END (3)
#define SOC_CRGPERIPH_PEREN12_gt_pclk_dpctrl_START (4)
#define SOC_CRGPERIPH_PEREN12_gt_pclk_dpctrl_END (4)
#define SOC_CRGPERIPH_PEREN12_gt_aclk_dpctrl_START (5)
#define SOC_CRGPERIPH_PEREN12_gt_aclk_dpctrl_END (5)
#define SOC_CRGPERIPH_PEREN12_gt_clk_dpctrl_16m_START (21)
#define SOC_CRGPERIPH_PEREN12_gt_clk_dpctrl_16m_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int gt_pclk_atgs_sys : 1;
        unsigned int gt_pclk_dpctrl : 1;
        unsigned int gt_aclk_dpctrl : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int reserved_12 : 1;
        unsigned int reserved_13 : 1;
        unsigned int reserved_14 : 1;
        unsigned int reserved_15 : 1;
        unsigned int reserved_16 : 1;
        unsigned int reserved_17 : 1;
        unsigned int gt_clk_dpctrl_16m : 1;
        unsigned int reserved_18 : 10;
    } reg;
} SOC_CRGPERIPH_PERDIS12_UNION;
#endif
#define SOC_CRGPERIPH_PERDIS12_gt_pclk_atgs_sys_START (3)
#define SOC_CRGPERIPH_PERDIS12_gt_pclk_atgs_sys_END (3)
#define SOC_CRGPERIPH_PERDIS12_gt_pclk_dpctrl_START (4)
#define SOC_CRGPERIPH_PERDIS12_gt_pclk_dpctrl_END (4)
#define SOC_CRGPERIPH_PERDIS12_gt_aclk_dpctrl_START (5)
#define SOC_CRGPERIPH_PERDIS12_gt_aclk_dpctrl_END (5)
#define SOC_CRGPERIPH_PERDIS12_gt_clk_dpctrl_16m_START (21)
#define SOC_CRGPERIPH_PERDIS12_gt_clk_dpctrl_16m_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int gt_pclk_atgs_sys : 1;
        unsigned int gt_pclk_dpctrl : 1;
        unsigned int gt_aclk_dpctrl : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int reserved_12 : 1;
        unsigned int reserved_13 : 1;
        unsigned int reserved_14 : 1;
        unsigned int reserved_15 : 1;
        unsigned int reserved_16 : 1;
        unsigned int reserved_17 : 1;
        unsigned int gt_clk_dpctrl_16m : 1;
        unsigned int reserved_18 : 10;
    } reg;
} SOC_CRGPERIPH_PERCLKEN12_UNION;
#endif
#define SOC_CRGPERIPH_PERCLKEN12_gt_pclk_atgs_sys_START (3)
#define SOC_CRGPERIPH_PERCLKEN12_gt_pclk_atgs_sys_END (3)
#define SOC_CRGPERIPH_PERCLKEN12_gt_pclk_dpctrl_START (4)
#define SOC_CRGPERIPH_PERCLKEN12_gt_pclk_dpctrl_END (4)
#define SOC_CRGPERIPH_PERCLKEN12_gt_aclk_dpctrl_START (5)
#define SOC_CRGPERIPH_PERCLKEN12_gt_aclk_dpctrl_END (5)
#define SOC_CRGPERIPH_PERCLKEN12_gt_clk_dpctrl_16m_START (21)
#define SOC_CRGPERIPH_PERCLKEN12_gt_clk_dpctrl_16m_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int st_pclk_atgs_sys : 1;
        unsigned int st_pclk_dpctrl : 1;
        unsigned int st_aclk_dpctrl : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int reserved_12 : 1;
        unsigned int reserved_13 : 1;
        unsigned int reserved_14 : 1;
        unsigned int reserved_15 : 1;
        unsigned int reserved_16 : 1;
        unsigned int reserved_17 : 1;
        unsigned int st_clk_dpctrl_16m : 1;
        unsigned int reserved_18 : 10;
    } reg;
} SOC_CRGPERIPH_PERSTAT12_UNION;
#endif
#define SOC_CRGPERIPH_PERSTAT12_st_pclk_atgs_sys_START (3)
#define SOC_CRGPERIPH_PERSTAT12_st_pclk_atgs_sys_END (3)
#define SOC_CRGPERIPH_PERSTAT12_st_pclk_dpctrl_START (4)
#define SOC_CRGPERIPH_PERSTAT12_st_pclk_dpctrl_END (4)
#define SOC_CRGPERIPH_PERSTAT12_st_aclk_dpctrl_START (5)
#define SOC_CRGPERIPH_PERSTAT12_st_aclk_dpctrl_END (5)
#define SOC_CRGPERIPH_PERSTAT12_st_clk_dpctrl_16m_START (21)
#define SOC_CRGPERIPH_PERSTAT12_st_clk_dpctrl_16m_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_clk_process_monitor0 : 1;
        unsigned int gt_clk_process_monitor1 : 1;
        unsigned int gt_clk_process_monitor2 : 1;
        unsigned int gt_clk_process_monitor3 : 1;
        unsigned int gt_clk_process_monitor4 : 1;
        unsigned int gt_clk_process_monitor5 : 1;
        unsigned int gt_clk_tidm_core : 1;
        unsigned int gt_clk_dmc_hpm : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int gt_clk_lpm_cpu_big : 1;
        unsigned int gt_clk_lpm_cpu_middle : 1;
        unsigned int gt_clk_lpm_cpu_little : 1;
        unsigned int gt_clk_tidm_gpu : 1;
        unsigned int gt_clk_pa_gpu : 1;
        unsigned int reserved_3 : 16;
    } reg;
} SOC_CRGPERIPH_PEREN13_UNION;
#endif
#define SOC_CRGPERIPH_PEREN13_gt_clk_process_monitor0_START (0)
#define SOC_CRGPERIPH_PEREN13_gt_clk_process_monitor0_END (0)
#define SOC_CRGPERIPH_PEREN13_gt_clk_process_monitor1_START (1)
#define SOC_CRGPERIPH_PEREN13_gt_clk_process_monitor1_END (1)
#define SOC_CRGPERIPH_PEREN13_gt_clk_process_monitor2_START (2)
#define SOC_CRGPERIPH_PEREN13_gt_clk_process_monitor2_END (2)
#define SOC_CRGPERIPH_PEREN13_gt_clk_process_monitor3_START (3)
#define SOC_CRGPERIPH_PEREN13_gt_clk_process_monitor3_END (3)
#define SOC_CRGPERIPH_PEREN13_gt_clk_process_monitor4_START (4)
#define SOC_CRGPERIPH_PEREN13_gt_clk_process_monitor4_END (4)
#define SOC_CRGPERIPH_PEREN13_gt_clk_process_monitor5_START (5)
#define SOC_CRGPERIPH_PEREN13_gt_clk_process_monitor5_END (5)
#define SOC_CRGPERIPH_PEREN13_gt_clk_tidm_core_START (6)
#define SOC_CRGPERIPH_PEREN13_gt_clk_tidm_core_END (6)
#define SOC_CRGPERIPH_PEREN13_gt_clk_dmc_hpm_START (7)
#define SOC_CRGPERIPH_PEREN13_gt_clk_dmc_hpm_END (7)
#define SOC_CRGPERIPH_PEREN13_gt_clk_lpm_cpu_big_START (11)
#define SOC_CRGPERIPH_PEREN13_gt_clk_lpm_cpu_big_END (11)
#define SOC_CRGPERIPH_PEREN13_gt_clk_lpm_cpu_middle_START (12)
#define SOC_CRGPERIPH_PEREN13_gt_clk_lpm_cpu_middle_END (12)
#define SOC_CRGPERIPH_PEREN13_gt_clk_lpm_cpu_little_START (13)
#define SOC_CRGPERIPH_PEREN13_gt_clk_lpm_cpu_little_END (13)
#define SOC_CRGPERIPH_PEREN13_gt_clk_tidm_gpu_START (14)
#define SOC_CRGPERIPH_PEREN13_gt_clk_tidm_gpu_END (14)
#define SOC_CRGPERIPH_PEREN13_gt_clk_pa_gpu_START (15)
#define SOC_CRGPERIPH_PEREN13_gt_clk_pa_gpu_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_clk_process_monitor0 : 1;
        unsigned int gt_clk_process_monitor1 : 1;
        unsigned int gt_clk_process_monitor2 : 1;
        unsigned int gt_clk_process_monitor3 : 1;
        unsigned int gt_clk_process_monitor4 : 1;
        unsigned int gt_clk_process_monitor5 : 1;
        unsigned int gt_clk_tidm_core : 1;
        unsigned int gt_clk_dmc_hpm : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int gt_clk_lpm_cpu_big : 1;
        unsigned int gt_clk_lpm_cpu_middle : 1;
        unsigned int gt_clk_lpm_cpu_little : 1;
        unsigned int gt_clk_tidm_gpu : 1;
        unsigned int gt_clk_pa_gpu : 1;
        unsigned int reserved_3 : 16;
    } reg;
} SOC_CRGPERIPH_PERDIS13_UNION;
#endif
#define SOC_CRGPERIPH_PERDIS13_gt_clk_process_monitor0_START (0)
#define SOC_CRGPERIPH_PERDIS13_gt_clk_process_monitor0_END (0)
#define SOC_CRGPERIPH_PERDIS13_gt_clk_process_monitor1_START (1)
#define SOC_CRGPERIPH_PERDIS13_gt_clk_process_monitor1_END (1)
#define SOC_CRGPERIPH_PERDIS13_gt_clk_process_monitor2_START (2)
#define SOC_CRGPERIPH_PERDIS13_gt_clk_process_monitor2_END (2)
#define SOC_CRGPERIPH_PERDIS13_gt_clk_process_monitor3_START (3)
#define SOC_CRGPERIPH_PERDIS13_gt_clk_process_monitor3_END (3)
#define SOC_CRGPERIPH_PERDIS13_gt_clk_process_monitor4_START (4)
#define SOC_CRGPERIPH_PERDIS13_gt_clk_process_monitor4_END (4)
#define SOC_CRGPERIPH_PERDIS13_gt_clk_process_monitor5_START (5)
#define SOC_CRGPERIPH_PERDIS13_gt_clk_process_monitor5_END (5)
#define SOC_CRGPERIPH_PERDIS13_gt_clk_tidm_core_START (6)
#define SOC_CRGPERIPH_PERDIS13_gt_clk_tidm_core_END (6)
#define SOC_CRGPERIPH_PERDIS13_gt_clk_dmc_hpm_START (7)
#define SOC_CRGPERIPH_PERDIS13_gt_clk_dmc_hpm_END (7)
#define SOC_CRGPERIPH_PERDIS13_gt_clk_lpm_cpu_big_START (11)
#define SOC_CRGPERIPH_PERDIS13_gt_clk_lpm_cpu_big_END (11)
#define SOC_CRGPERIPH_PERDIS13_gt_clk_lpm_cpu_middle_START (12)
#define SOC_CRGPERIPH_PERDIS13_gt_clk_lpm_cpu_middle_END (12)
#define SOC_CRGPERIPH_PERDIS13_gt_clk_lpm_cpu_little_START (13)
#define SOC_CRGPERIPH_PERDIS13_gt_clk_lpm_cpu_little_END (13)
#define SOC_CRGPERIPH_PERDIS13_gt_clk_tidm_gpu_START (14)
#define SOC_CRGPERIPH_PERDIS13_gt_clk_tidm_gpu_END (14)
#define SOC_CRGPERIPH_PERDIS13_gt_clk_pa_gpu_START (15)
#define SOC_CRGPERIPH_PERDIS13_gt_clk_pa_gpu_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_clk_process_monitor0 : 1;
        unsigned int gt_clk_process_monitor1 : 1;
        unsigned int gt_clk_process_monitor2 : 1;
        unsigned int gt_clk_process_monitor3 : 1;
        unsigned int gt_clk_process_monitor4 : 1;
        unsigned int gt_clk_process_monitor5 : 1;
        unsigned int gt_clk_tidm_core : 1;
        unsigned int gt_clk_dmc_hpm : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int gt_clk_lpm_cpu_big : 1;
        unsigned int gt_clk_lpm_cpu_middle : 1;
        unsigned int gt_clk_lpm_cpu_little : 1;
        unsigned int gt_clk_tidm_gpu : 1;
        unsigned int gt_clk_pa_gpu : 1;
        unsigned int reserved_3 : 16;
    } reg;
} SOC_CRGPERIPH_PERCLKEN13_UNION;
#endif
#define SOC_CRGPERIPH_PERCLKEN13_gt_clk_process_monitor0_START (0)
#define SOC_CRGPERIPH_PERCLKEN13_gt_clk_process_monitor0_END (0)
#define SOC_CRGPERIPH_PERCLKEN13_gt_clk_process_monitor1_START (1)
#define SOC_CRGPERIPH_PERCLKEN13_gt_clk_process_monitor1_END (1)
#define SOC_CRGPERIPH_PERCLKEN13_gt_clk_process_monitor2_START (2)
#define SOC_CRGPERIPH_PERCLKEN13_gt_clk_process_monitor2_END (2)
#define SOC_CRGPERIPH_PERCLKEN13_gt_clk_process_monitor3_START (3)
#define SOC_CRGPERIPH_PERCLKEN13_gt_clk_process_monitor3_END (3)
#define SOC_CRGPERIPH_PERCLKEN13_gt_clk_process_monitor4_START (4)
#define SOC_CRGPERIPH_PERCLKEN13_gt_clk_process_monitor4_END (4)
#define SOC_CRGPERIPH_PERCLKEN13_gt_clk_process_monitor5_START (5)
#define SOC_CRGPERIPH_PERCLKEN13_gt_clk_process_monitor5_END (5)
#define SOC_CRGPERIPH_PERCLKEN13_gt_clk_tidm_core_START (6)
#define SOC_CRGPERIPH_PERCLKEN13_gt_clk_tidm_core_END (6)
#define SOC_CRGPERIPH_PERCLKEN13_gt_clk_dmc_hpm_START (7)
#define SOC_CRGPERIPH_PERCLKEN13_gt_clk_dmc_hpm_END (7)
#define SOC_CRGPERIPH_PERCLKEN13_gt_clk_lpm_cpu_big_START (11)
#define SOC_CRGPERIPH_PERCLKEN13_gt_clk_lpm_cpu_big_END (11)
#define SOC_CRGPERIPH_PERCLKEN13_gt_clk_lpm_cpu_middle_START (12)
#define SOC_CRGPERIPH_PERCLKEN13_gt_clk_lpm_cpu_middle_END (12)
#define SOC_CRGPERIPH_PERCLKEN13_gt_clk_lpm_cpu_little_START (13)
#define SOC_CRGPERIPH_PERCLKEN13_gt_clk_lpm_cpu_little_END (13)
#define SOC_CRGPERIPH_PERCLKEN13_gt_clk_tidm_gpu_START (14)
#define SOC_CRGPERIPH_PERCLKEN13_gt_clk_tidm_gpu_END (14)
#define SOC_CRGPERIPH_PERCLKEN13_gt_clk_pa_gpu_START (15)
#define SOC_CRGPERIPH_PERCLKEN13_gt_clk_pa_gpu_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int st_clk_process_monitor0 : 1;
        unsigned int st_clk_process_monitor1 : 1;
        unsigned int st_clk_process_monitor2 : 1;
        unsigned int st_clk_process_monitor3 : 1;
        unsigned int st_clk_process_monitor4 : 1;
        unsigned int st_clk_process_monitor5 : 1;
        unsigned int st_clk_tidm_core : 1;
        unsigned int st_clk_dmc_hpm : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int st_clk_lpm_cpu_big : 1;
        unsigned int st_clk_lpm_cpu_middle : 1;
        unsigned int st_clk_lpm_cpu_little : 1;
        unsigned int st_clk_tidm_gpu : 1;
        unsigned int st_clk_pa_gpu : 1;
        unsigned int reserved_3 : 16;
    } reg;
} SOC_CRGPERIPH_PERSTAT13_UNION;
#endif
#define SOC_CRGPERIPH_PERSTAT13_st_clk_process_monitor0_START (0)
#define SOC_CRGPERIPH_PERSTAT13_st_clk_process_monitor0_END (0)
#define SOC_CRGPERIPH_PERSTAT13_st_clk_process_monitor1_START (1)
#define SOC_CRGPERIPH_PERSTAT13_st_clk_process_monitor1_END (1)
#define SOC_CRGPERIPH_PERSTAT13_st_clk_process_monitor2_START (2)
#define SOC_CRGPERIPH_PERSTAT13_st_clk_process_monitor2_END (2)
#define SOC_CRGPERIPH_PERSTAT13_st_clk_process_monitor3_START (3)
#define SOC_CRGPERIPH_PERSTAT13_st_clk_process_monitor3_END (3)
#define SOC_CRGPERIPH_PERSTAT13_st_clk_process_monitor4_START (4)
#define SOC_CRGPERIPH_PERSTAT13_st_clk_process_monitor4_END (4)
#define SOC_CRGPERIPH_PERSTAT13_st_clk_process_monitor5_START (5)
#define SOC_CRGPERIPH_PERSTAT13_st_clk_process_monitor5_END (5)
#define SOC_CRGPERIPH_PERSTAT13_st_clk_tidm_core_START (6)
#define SOC_CRGPERIPH_PERSTAT13_st_clk_tidm_core_END (6)
#define SOC_CRGPERIPH_PERSTAT13_st_clk_dmc_hpm_START (7)
#define SOC_CRGPERIPH_PERSTAT13_st_clk_dmc_hpm_END (7)
#define SOC_CRGPERIPH_PERSTAT13_st_clk_lpm_cpu_big_START (11)
#define SOC_CRGPERIPH_PERSTAT13_st_clk_lpm_cpu_big_END (11)
#define SOC_CRGPERIPH_PERSTAT13_st_clk_lpm_cpu_middle_START (12)
#define SOC_CRGPERIPH_PERSTAT13_st_clk_lpm_cpu_middle_END (12)
#define SOC_CRGPERIPH_PERSTAT13_st_clk_lpm_cpu_little_START (13)
#define SOC_CRGPERIPH_PERSTAT13_st_clk_lpm_cpu_little_END (13)
#define SOC_CRGPERIPH_PERSTAT13_st_clk_tidm_gpu_START (14)
#define SOC_CRGPERIPH_PERSTAT13_st_clk_tidm_gpu_END (14)
#define SOC_CRGPERIPH_PERSTAT13_st_clk_pa_gpu_START (15)
#define SOC_CRGPERIPH_PERSTAT13_st_clk_pa_gpu_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 2;
        unsigned int swdone_clk_g3d_ppll0_div : 1;
        unsigned int swdone_clk_uart0_div : 1;
        unsigned int swdone_clk_uartl_div : 1;
        unsigned int swdone_clk_uarth_div : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int swdone_clk_cssysdbg_div : 1;
        unsigned int reserved_6 : 1;
        unsigned int swdone_clk_ddrc_sys_div : 1;
        unsigned int swdone_clk_sysbus_sys_div : 1;
        unsigned int swdone_clk_hisee_pll_div : 1;
        unsigned int swdone_clk_ao_asp : 1;
        unsigned int swdone_clk_socp_defalte_div : 1;
        unsigned int swdone_clk_mmc_dpctrl_div : 1;
        unsigned int reserved_7 : 1;
        unsigned int swdone_clk_dmc_sys_div : 1;
        unsigned int swdone_clk_dmc_pll_div : 1;
        unsigned int swdone_clk_mmc0_peribus_div : 1;
        unsigned int swdone_clk_mmc1_peribus_div : 1;
        unsigned int swdone_clk_abb_pll_div : 1;
        unsigned int swdone_clk_dp_audio_pll_ao_div : 1;
        unsigned int reserved_8 : 6;
    } reg;
} SOC_CRGPERIPH_PERI_STAT4_UNION;
#endif
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_g3d_ppll0_div_START (3)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_g3d_ppll0_div_END (3)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_uart0_div_START (4)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_uart0_div_END (4)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_uartl_div_START (5)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_uartl_div_END (5)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_uarth_div_START (6)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_uarth_div_END (6)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_cssysdbg_div_START (11)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_cssysdbg_div_END (11)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_ddrc_sys_div_START (13)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_ddrc_sys_div_END (13)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_sysbus_sys_div_START (14)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_sysbus_sys_div_END (14)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_hisee_pll_div_START (15)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_hisee_pll_div_END (15)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_ao_asp_START (16)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_ao_asp_END (16)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_socp_defalte_div_START (17)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_socp_defalte_div_END (17)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_mmc_dpctrl_div_START (18)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_mmc_dpctrl_div_END (18)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_dmc_sys_div_START (20)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_dmc_sys_div_END (20)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_dmc_pll_div_START (21)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_dmc_pll_div_END (21)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_mmc0_peribus_div_START (22)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_mmc0_peribus_div_END (22)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_mmc1_peribus_div_START (23)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_mmc1_peribus_div_END (23)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_abb_pll_div_START (24)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_abb_pll_div_END (24)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_dp_audio_pll_ao_div_START (25)
#define SOC_CRGPERIPH_PERI_STAT4_swdone_clk_dp_audio_pll_ao_div_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int st_pclk_codecssi : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int sw_ack_clk_vcodecbus_sw : 4;
        unsigned int sw_ack_clk_cpu_gic_sw : 3;
        unsigned int lpmcu_invar_sw_ack : 2;
        unsigned int sw_ack_clk_ao_asp_pll_mux : 2;
        unsigned int reserved_2 : 5;
        unsigned int sw_ack_clk_320m_mux : 2;
        unsigned int reserved_3 : 2;
        unsigned int st_clk_ddrsys_noc : 1;
        unsigned int st_clk_ddrsys_ao : 1;
        unsigned int st_clk_g3d_ppll0_div : 1;
        unsigned int st_clk_cpul_ppll0_div : 1;
        unsigned int st_clk_l3_ppll0_div : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 3;
    } reg;
} SOC_CRGPERIPH_PERI_STAT5_UNION;
#endif
#define SOC_CRGPERIPH_PERI_STAT5_st_pclk_codecssi_START (0)
#define SOC_CRGPERIPH_PERI_STAT5_st_pclk_codecssi_END (0)
#define SOC_CRGPERIPH_PERI_STAT5_sw_ack_clk_vcodecbus_sw_START (3)
#define SOC_CRGPERIPH_PERI_STAT5_sw_ack_clk_vcodecbus_sw_END (6)
#define SOC_CRGPERIPH_PERI_STAT5_sw_ack_clk_cpu_gic_sw_START (7)
#define SOC_CRGPERIPH_PERI_STAT5_sw_ack_clk_cpu_gic_sw_END (9)
#define SOC_CRGPERIPH_PERI_STAT5_lpmcu_invar_sw_ack_START (10)
#define SOC_CRGPERIPH_PERI_STAT5_lpmcu_invar_sw_ack_END (11)
#define SOC_CRGPERIPH_PERI_STAT5_sw_ack_clk_ao_asp_pll_mux_START (12)
#define SOC_CRGPERIPH_PERI_STAT5_sw_ack_clk_ao_asp_pll_mux_END (13)
#define SOC_CRGPERIPH_PERI_STAT5_sw_ack_clk_320m_mux_START (19)
#define SOC_CRGPERIPH_PERI_STAT5_sw_ack_clk_320m_mux_END (20)
#define SOC_CRGPERIPH_PERI_STAT5_st_clk_ddrsys_noc_START (23)
#define SOC_CRGPERIPH_PERI_STAT5_st_clk_ddrsys_noc_END (23)
#define SOC_CRGPERIPH_PERI_STAT5_st_clk_ddrsys_ao_START (24)
#define SOC_CRGPERIPH_PERI_STAT5_st_clk_ddrsys_ao_END (24)
#define SOC_CRGPERIPH_PERI_STAT5_st_clk_g3d_ppll0_div_START (25)
#define SOC_CRGPERIPH_PERI_STAT5_st_clk_g3d_ppll0_div_END (25)
#define SOC_CRGPERIPH_PERI_STAT5_st_clk_cpul_ppll0_div_START (26)
#define SOC_CRGPERIPH_PERI_STAT5_st_clk_cpul_ppll0_div_END (26)
#define SOC_CRGPERIPH_PERI_STAT5_st_clk_l3_ppll0_div_START (27)
#define SOC_CRGPERIPH_PERI_STAT5_st_clk_l3_ppll0_div_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int st_clk_ace1_mst_g3d : 1;
        unsigned int st_clk_ace0_mst_g3d : 1;
        unsigned int st_clk_modem_bbp2 : 1;
        unsigned int st_clk_modem_bbp3 : 1;
        unsigned int st_clk_cpu_l3 : 1;
        unsigned int st_clk_modem_ccpu_tp : 1;
        unsigned int st_pclk_uart025_bridge : 1;
        unsigned int st_pclk_uart14_bridge : 1;
        unsigned int st_pclk_spi_bridge : 1;
        unsigned int st_pclk_i2c_bridge : 1;
        unsigned int st_clk_cssys_atclk : 1;
        unsigned int st_aclk_ctf_bridge : 1;
        unsigned int st_clk_cci_rs : 1;
        unsigned int reserved_0 : 1;
        unsigned int st_clk_cpu_big : 1;
        unsigned int st_clk_cpu_little : 1;
        unsigned int st_clk_cpu_middle : 1;
        unsigned int st_pclk_mmc1_dcdr_stage : 1;
        unsigned int st_tclk_socp : 1;
        unsigned int st_clk_socp_deflate : 1;
        unsigned int st_clk_dmss_to_vcodec_rs_core : 1;
        unsigned int st_clk_dmss_to_vivo_rs_core : 1;
        unsigned int st_clk_dmss_to_ivp_rs_core : 1;
        unsigned int reserved_1 : 1;
        unsigned int st_clk_modem_ccpu : 1;
        unsigned int st_clk_modem_dsp : 1;
        unsigned int st_clk_modem_peri : 1;
        unsigned int st_clk_modem_bbp0 : 1;
        unsigned int st_clk_modem_bbp1 : 1;
        unsigned int st_pclk_uart0 : 1;
        unsigned int st_clk_time_stamp : 1;
        unsigned int st_clk_noc_mmc2dpctrl : 1;
    } reg;
} SOC_CRGPERIPH_PERI_STAT6_UNION;
#endif
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_ace1_mst_g3d_START (0)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_ace1_mst_g3d_END (0)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_ace0_mst_g3d_START (1)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_ace0_mst_g3d_END (1)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_modem_bbp2_START (2)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_modem_bbp2_END (2)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_modem_bbp3_START (3)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_modem_bbp3_END (3)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_cpu_l3_START (4)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_cpu_l3_END (4)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_modem_ccpu_tp_START (5)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_modem_ccpu_tp_END (5)
#define SOC_CRGPERIPH_PERI_STAT6_st_pclk_uart025_bridge_START (6)
#define SOC_CRGPERIPH_PERI_STAT6_st_pclk_uart025_bridge_END (6)
#define SOC_CRGPERIPH_PERI_STAT6_st_pclk_uart14_bridge_START (7)
#define SOC_CRGPERIPH_PERI_STAT6_st_pclk_uart14_bridge_END (7)
#define SOC_CRGPERIPH_PERI_STAT6_st_pclk_spi_bridge_START (8)
#define SOC_CRGPERIPH_PERI_STAT6_st_pclk_spi_bridge_END (8)
#define SOC_CRGPERIPH_PERI_STAT6_st_pclk_i2c_bridge_START (9)
#define SOC_CRGPERIPH_PERI_STAT6_st_pclk_i2c_bridge_END (9)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_cssys_atclk_START (10)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_cssys_atclk_END (10)
#define SOC_CRGPERIPH_PERI_STAT6_st_aclk_ctf_bridge_START (11)
#define SOC_CRGPERIPH_PERI_STAT6_st_aclk_ctf_bridge_END (11)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_cci_rs_START (12)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_cci_rs_END (12)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_cpu_big_START (14)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_cpu_big_END (14)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_cpu_little_START (15)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_cpu_little_END (15)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_cpu_middle_START (16)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_cpu_middle_END (16)
#define SOC_CRGPERIPH_PERI_STAT6_st_pclk_mmc1_dcdr_stage_START (17)
#define SOC_CRGPERIPH_PERI_STAT6_st_pclk_mmc1_dcdr_stage_END (17)
#define SOC_CRGPERIPH_PERI_STAT6_st_tclk_socp_START (18)
#define SOC_CRGPERIPH_PERI_STAT6_st_tclk_socp_END (18)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_socp_deflate_START (19)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_socp_deflate_END (19)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_dmss_to_vcodec_rs_core_START (20)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_dmss_to_vcodec_rs_core_END (20)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_dmss_to_vivo_rs_core_START (21)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_dmss_to_vivo_rs_core_END (21)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_dmss_to_ivp_rs_core_START (22)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_dmss_to_ivp_rs_core_END (22)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_modem_ccpu_START (24)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_modem_ccpu_END (24)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_modem_dsp_START (25)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_modem_dsp_END (25)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_modem_peri_START (26)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_modem_peri_END (26)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_modem_bbp0_START (27)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_modem_bbp0_END (27)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_modem_bbp1_START (28)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_modem_bbp1_END (28)
#define SOC_CRGPERIPH_PERI_STAT6_st_pclk_uart0_START (29)
#define SOC_CRGPERIPH_PERI_STAT6_st_pclk_uart0_END (29)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_time_stamp_START (30)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_time_stamp_END (30)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_noc_mmc2dpctrl_START (31)
#define SOC_CRGPERIPH_PERI_STAT6_st_clk_noc_mmc2dpctrl_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sw_ack_clk_venc_sw : 4;
        unsigned int sw_ack_clk_vdec_sw : 4;
        unsigned int sw_ack_clk_ics_sw : 4;
        unsigned int sw_ack_clk_dmc_pll_sw : 4;
        unsigned int sw_ack_clk_dmc_sw : 3;
        unsigned int sw_ack_clk_l3_pll_sw : 2;
        unsigned int sw_ack_clk_cpul_pll_sw : 2;
        unsigned int reserved : 9;
    } reg;
} SOC_CRGPERIPH_PERI_STAT7_UNION;
#endif
#define SOC_CRGPERIPH_PERI_STAT7_sw_ack_clk_venc_sw_START (0)
#define SOC_CRGPERIPH_PERI_STAT7_sw_ack_clk_venc_sw_END (3)
#define SOC_CRGPERIPH_PERI_STAT7_sw_ack_clk_vdec_sw_START (4)
#define SOC_CRGPERIPH_PERI_STAT7_sw_ack_clk_vdec_sw_END (7)
#define SOC_CRGPERIPH_PERI_STAT7_sw_ack_clk_ics_sw_START (8)
#define SOC_CRGPERIPH_PERI_STAT7_sw_ack_clk_ics_sw_END (11)
#define SOC_CRGPERIPH_PERI_STAT7_sw_ack_clk_dmc_pll_sw_START (12)
#define SOC_CRGPERIPH_PERI_STAT7_sw_ack_clk_dmc_pll_sw_END (15)
#define SOC_CRGPERIPH_PERI_STAT7_sw_ack_clk_dmc_sw_START (16)
#define SOC_CRGPERIPH_PERI_STAT7_sw_ack_clk_dmc_sw_END (18)
#define SOC_CRGPERIPH_PERI_STAT7_sw_ack_clk_l3_pll_sw_START (19)
#define SOC_CRGPERIPH_PERI_STAT7_sw_ack_clk_l3_pll_sw_END (20)
#define SOC_CRGPERIPH_PERI_STAT7_sw_ack_clk_cpul_pll_sw_START (21)
#define SOC_CRGPERIPH_PERI_STAT7_sw_ack_clk_cpul_pll_sw_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int g3dshpwrack8 : 1;
        unsigned int g3dshpwrack9 : 1;
        unsigned int g3dshpwrack10 : 1;
        unsigned int g3dshpwrack11 : 1;
        unsigned int g3dshpwrack12 : 1;
        unsigned int g3dshpwrack13 : 1;
        unsigned int g3dshpwrack14 : 1;
        unsigned int g3dshpwrack15 : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_CRGPERIPH_PERPWRACK1_UNION;
#endif
#define SOC_CRGPERIPH_PERPWRACK1_g3dshpwrack8_START (0)
#define SOC_CRGPERIPH_PERPWRACK1_g3dshpwrack8_END (0)
#define SOC_CRGPERIPH_PERPWRACK1_g3dshpwrack9_START (1)
#define SOC_CRGPERIPH_PERPWRACK1_g3dshpwrack9_END (1)
#define SOC_CRGPERIPH_PERPWRACK1_g3dshpwrack10_START (2)
#define SOC_CRGPERIPH_PERPWRACK1_g3dshpwrack10_END (2)
#define SOC_CRGPERIPH_PERPWRACK1_g3dshpwrack11_START (3)
#define SOC_CRGPERIPH_PERPWRACK1_g3dshpwrack11_END (3)
#define SOC_CRGPERIPH_PERPWRACK1_g3dshpwrack12_START (4)
#define SOC_CRGPERIPH_PERPWRACK1_g3dshpwrack12_END (4)
#define SOC_CRGPERIPH_PERPWRACK1_g3dshpwrack13_START (5)
#define SOC_CRGPERIPH_PERPWRACK1_g3dshpwrack13_END (5)
#define SOC_CRGPERIPH_PERPWRACK1_g3dshpwrack14_START (6)
#define SOC_CRGPERIPH_PERPWRACK1_g3dshpwrack14_END (6)
#define SOC_CRGPERIPH_PERPWRACK1_g3dshpwrack15_START (7)
#define SOC_CRGPERIPH_PERPWRACK1_g3dshpwrack15_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intr_mask_sysbus_nonidle_pend : 1;
        unsigned int intr_mask_cfgbus_nonidle_pend : 1;
        unsigned int intr_mask_dmabus_nonidle_pend : 1;
        unsigned int intr_mask_mmc0bus_nonidle_pend : 1;
        unsigned int intr_mask_mmc1bus_nonidle_pend : 1;
        unsigned int intr_mask_mdmbus_nonidle_pend : 1;
        unsigned int intr_mask_hiseebus_nonidle_pend : 1;
        unsigned int reserved : 9;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_INTR_MASK_NOCBUS_NONIDLE_PEND_UNION;
#endif
#define SOC_CRGPERIPH_INTR_MASK_NOCBUS_NONIDLE_PEND_intr_mask_sysbus_nonidle_pend_START (0)
#define SOC_CRGPERIPH_INTR_MASK_NOCBUS_NONIDLE_PEND_intr_mask_sysbus_nonidle_pend_END (0)
#define SOC_CRGPERIPH_INTR_MASK_NOCBUS_NONIDLE_PEND_intr_mask_cfgbus_nonidle_pend_START (1)
#define SOC_CRGPERIPH_INTR_MASK_NOCBUS_NONIDLE_PEND_intr_mask_cfgbus_nonidle_pend_END (1)
#define SOC_CRGPERIPH_INTR_MASK_NOCBUS_NONIDLE_PEND_intr_mask_dmabus_nonidle_pend_START (2)
#define SOC_CRGPERIPH_INTR_MASK_NOCBUS_NONIDLE_PEND_intr_mask_dmabus_nonidle_pend_END (2)
#define SOC_CRGPERIPH_INTR_MASK_NOCBUS_NONIDLE_PEND_intr_mask_mmc0bus_nonidle_pend_START (3)
#define SOC_CRGPERIPH_INTR_MASK_NOCBUS_NONIDLE_PEND_intr_mask_mmc0bus_nonidle_pend_END (3)
#define SOC_CRGPERIPH_INTR_MASK_NOCBUS_NONIDLE_PEND_intr_mask_mmc1bus_nonidle_pend_START (4)
#define SOC_CRGPERIPH_INTR_MASK_NOCBUS_NONIDLE_PEND_intr_mask_mmc1bus_nonidle_pend_END (4)
#define SOC_CRGPERIPH_INTR_MASK_NOCBUS_NONIDLE_PEND_intr_mask_mdmbus_nonidle_pend_START (5)
#define SOC_CRGPERIPH_INTR_MASK_NOCBUS_NONIDLE_PEND_intr_mask_mdmbus_nonidle_pend_END (5)
#define SOC_CRGPERIPH_INTR_MASK_NOCBUS_NONIDLE_PEND_intr_mask_hiseebus_nonidle_pend_START (6)
#define SOC_CRGPERIPH_INTR_MASK_NOCBUS_NONIDLE_PEND_intr_mask_hiseebus_nonidle_pend_END (6)
#define SOC_CRGPERIPH_INTR_MASK_NOCBUS_NONIDLE_PEND_bitmasken_START (16)
#define SOC_CRGPERIPH_INTR_MASK_NOCBUS_NONIDLE_PEND_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intr_clr_sysbus_nonidle_pend : 1;
        unsigned int intr_clr_cfgbus_nonidle_pend : 1;
        unsigned int intr_clr_dmabus_nonidle_pend : 1;
        unsigned int intr_clr_mmc0bus_nonidle_pend : 1;
        unsigned int intr_clr_mmc1bus_nonidle_pend : 1;
        unsigned int intr_clr_mdmbus_nonidle_pend : 1;
        unsigned int intr_clr_hiseebus_nonidle_pend : 1;
        unsigned int reserved : 9;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_INTR_CLR_NOCBUS_NONIDLE_PEND_UNION;
#endif
#define SOC_CRGPERIPH_INTR_CLR_NOCBUS_NONIDLE_PEND_intr_clr_sysbus_nonidle_pend_START (0)
#define SOC_CRGPERIPH_INTR_CLR_NOCBUS_NONIDLE_PEND_intr_clr_sysbus_nonidle_pend_END (0)
#define SOC_CRGPERIPH_INTR_CLR_NOCBUS_NONIDLE_PEND_intr_clr_cfgbus_nonidle_pend_START (1)
#define SOC_CRGPERIPH_INTR_CLR_NOCBUS_NONIDLE_PEND_intr_clr_cfgbus_nonidle_pend_END (1)
#define SOC_CRGPERIPH_INTR_CLR_NOCBUS_NONIDLE_PEND_intr_clr_dmabus_nonidle_pend_START (2)
#define SOC_CRGPERIPH_INTR_CLR_NOCBUS_NONIDLE_PEND_intr_clr_dmabus_nonidle_pend_END (2)
#define SOC_CRGPERIPH_INTR_CLR_NOCBUS_NONIDLE_PEND_intr_clr_mmc0bus_nonidle_pend_START (3)
#define SOC_CRGPERIPH_INTR_CLR_NOCBUS_NONIDLE_PEND_intr_clr_mmc0bus_nonidle_pend_END (3)
#define SOC_CRGPERIPH_INTR_CLR_NOCBUS_NONIDLE_PEND_intr_clr_mmc1bus_nonidle_pend_START (4)
#define SOC_CRGPERIPH_INTR_CLR_NOCBUS_NONIDLE_PEND_intr_clr_mmc1bus_nonidle_pend_END (4)
#define SOC_CRGPERIPH_INTR_CLR_NOCBUS_NONIDLE_PEND_intr_clr_mdmbus_nonidle_pend_START (5)
#define SOC_CRGPERIPH_INTR_CLR_NOCBUS_NONIDLE_PEND_intr_clr_mdmbus_nonidle_pend_END (5)
#define SOC_CRGPERIPH_INTR_CLR_NOCBUS_NONIDLE_PEND_intr_clr_hiseebus_nonidle_pend_START (6)
#define SOC_CRGPERIPH_INTR_CLR_NOCBUS_NONIDLE_PEND_intr_clr_hiseebus_nonidle_pend_END (6)
#define SOC_CRGPERIPH_INTR_CLR_NOCBUS_NONIDLE_PEND_bitmasken_START (16)
#define SOC_CRGPERIPH_INTR_CLR_NOCBUS_NONIDLE_PEND_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intr_stat_sysbus_nonidle_pend : 1;
        unsigned int intr_stat_cfgbus_nonidle_pend : 1;
        unsigned int intr_stat_dmabus_nonidle_pend : 1;
        unsigned int intr_stat_mmc0bus_nonidle_pend : 1;
        unsigned int intr_stat_mmc1bus_nonidle_pend : 1;
        unsigned int intr_stat_mediabus_nonidle_pend : 1;
        unsigned int intr_stat_media2bus_nonidle_pend : 1;
        unsigned int intr_stat_mdmbus_nonidle_pend : 1;
        unsigned int intr_stat_hiseebus_nonidle_pend : 1;
        unsigned int intr_stat_ao_nocbus_nonidle_pend : 1;
        unsigned int reserved : 22;
    } reg;
} SOC_CRGPERIPH_INTR_STAT_NOCBUS_NONIDLE_PEND_UNION;
#endif
#define SOC_CRGPERIPH_INTR_STAT_NOCBUS_NONIDLE_PEND_intr_stat_sysbus_nonidle_pend_START (0)
#define SOC_CRGPERIPH_INTR_STAT_NOCBUS_NONIDLE_PEND_intr_stat_sysbus_nonidle_pend_END (0)
#define SOC_CRGPERIPH_INTR_STAT_NOCBUS_NONIDLE_PEND_intr_stat_cfgbus_nonidle_pend_START (1)
#define SOC_CRGPERIPH_INTR_STAT_NOCBUS_NONIDLE_PEND_intr_stat_cfgbus_nonidle_pend_END (1)
#define SOC_CRGPERIPH_INTR_STAT_NOCBUS_NONIDLE_PEND_intr_stat_dmabus_nonidle_pend_START (2)
#define SOC_CRGPERIPH_INTR_STAT_NOCBUS_NONIDLE_PEND_intr_stat_dmabus_nonidle_pend_END (2)
#define SOC_CRGPERIPH_INTR_STAT_NOCBUS_NONIDLE_PEND_intr_stat_mmc0bus_nonidle_pend_START (3)
#define SOC_CRGPERIPH_INTR_STAT_NOCBUS_NONIDLE_PEND_intr_stat_mmc0bus_nonidle_pend_END (3)
#define SOC_CRGPERIPH_INTR_STAT_NOCBUS_NONIDLE_PEND_intr_stat_mmc1bus_nonidle_pend_START (4)
#define SOC_CRGPERIPH_INTR_STAT_NOCBUS_NONIDLE_PEND_intr_stat_mmc1bus_nonidle_pend_END (4)
#define SOC_CRGPERIPH_INTR_STAT_NOCBUS_NONIDLE_PEND_intr_stat_mediabus_nonidle_pend_START (5)
#define SOC_CRGPERIPH_INTR_STAT_NOCBUS_NONIDLE_PEND_intr_stat_mediabus_nonidle_pend_END (5)
#define SOC_CRGPERIPH_INTR_STAT_NOCBUS_NONIDLE_PEND_intr_stat_media2bus_nonidle_pend_START (6)
#define SOC_CRGPERIPH_INTR_STAT_NOCBUS_NONIDLE_PEND_intr_stat_media2bus_nonidle_pend_END (6)
#define SOC_CRGPERIPH_INTR_STAT_NOCBUS_NONIDLE_PEND_intr_stat_mdmbus_nonidle_pend_START (7)
#define SOC_CRGPERIPH_INTR_STAT_NOCBUS_NONIDLE_PEND_intr_stat_mdmbus_nonidle_pend_END (7)
#define SOC_CRGPERIPH_INTR_STAT_NOCBUS_NONIDLE_PEND_intr_stat_hiseebus_nonidle_pend_START (8)
#define SOC_CRGPERIPH_INTR_STAT_NOCBUS_NONIDLE_PEND_intr_stat_hiseebus_nonidle_pend_END (8)
#define SOC_CRGPERIPH_INTR_STAT_NOCBUS_NONIDLE_PEND_intr_stat_ao_nocbus_nonidle_pend_START (9)
#define SOC_CRGPERIPH_INTR_STAT_NOCBUS_NONIDLE_PEND_intr_stat_ao_nocbus_nonidle_pend_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_jm_clk_en : 1;
        unsigned int reserved_0 : 1;
        unsigned int sc_jm_rst_n : 1;
        unsigned int sc_one2two_cyc : 1;
        unsigned int sc_timing_ctrl_en : 1;
        unsigned int sc_dtc_start : 1;
        unsigned int sc_fdtc_rev : 1;
        unsigned int sc_cdtc_rev : 1;
        unsigned int sc_max2min_cyc : 5;
        unsigned int reserved_1 : 3;
        unsigned int sc_dtc_margin : 10;
        unsigned int reserved_2 : 1;
        unsigned int sc_cdtc_gap : 5;
    } reg;
} SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG0_UNION;
#endif
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG0_sc_jm_clk_en_START (0)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG0_sc_jm_clk_en_END (0)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG0_sc_jm_rst_n_START (2)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG0_sc_jm_rst_n_END (2)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG0_sc_one2two_cyc_START (3)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG0_sc_one2two_cyc_END (3)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG0_sc_timing_ctrl_en_START (4)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG0_sc_timing_ctrl_en_END (4)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG0_sc_dtc_start_START (5)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG0_sc_dtc_start_END (5)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG0_sc_fdtc_rev_START (6)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG0_sc_fdtc_rev_END (6)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG0_sc_cdtc_rev_START (7)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG0_sc_cdtc_rev_END (7)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG0_sc_max2min_cyc_START (8)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG0_sc_max2min_cyc_END (12)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG0_sc_dtc_margin_START (16)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG0_sc_dtc_margin_END (25)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG0_sc_cdtc_gap_START (27)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG0_sc_cdtc_gap_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_fdtc_code_init : 8;
        unsigned int sc_cdtc_code_init : 8;
        unsigned int sc_fdtc_cyc : 5;
        unsigned int reserved_0 : 3;
        unsigned int sc_cdtc_cyc : 5;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG1_UNION;
#endif
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG1_sc_fdtc_code_init_START (0)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG1_sc_fdtc_code_init_END (7)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG1_sc_cdtc_code_init_START (8)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG1_sc_cdtc_code_init_END (15)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG1_sc_fdtc_cyc_START (16)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG1_sc_fdtc_cyc_END (20)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG1_sc_cdtc_cyc_START (24)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG1_sc_cdtc_cyc_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_fdtc_step : 7;
        unsigned int reserved_0 : 1;
        unsigned int sc_cdtc_step : 6;
        unsigned int reserved_1 : 18;
    } reg;
} SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG2_UNION;
#endif
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG2_sc_fdtc_step_START (0)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG2_sc_fdtc_step_END (6)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG2_sc_cdtc_step_START (8)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_CFG2_sc_cdtc_step_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int jm_code_b : 8;
        unsigned int jm_code_a : 8;
        unsigned int jm_code_d : 8;
        unsigned int jm_code_c : 8;
    } reg;
} SOC_CRGPERIPH_JITTER_MONITOR_APLL3_STATE0_UNION;
#endif
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_STATE0_jm_code_b_START (0)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_STATE0_jm_code_b_END (7)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_STATE0_jm_code_a_START (8)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_STATE0_jm_code_a_END (15)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_STATE0_jm_code_d_START (16)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_STATE0_jm_code_d_END (23)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_STATE0_jm_code_c_START (24)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_STATE0_jm_code_c_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int jm_dtc_mea_done : 1;
        unsigned int test_comp : 1;
        unsigned int jm_underflow : 1;
        unsigned int jm_overflow : 1;
        unsigned int test_dtc_curr_st : 3;
        unsigned int reserved : 1;
        unsigned int jm_code_e : 8;
        unsigned int jm_code_min : 8;
        unsigned int jm_code_max : 8;
    } reg;
} SOC_CRGPERIPH_JITTER_MONITOR_APLL3_STATE1_UNION;
#endif
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_STATE1_jm_dtc_mea_done_START (0)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_STATE1_jm_dtc_mea_done_END (0)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_STATE1_test_comp_START (1)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_STATE1_test_comp_END (1)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_STATE1_jm_underflow_START (2)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_STATE1_jm_underflow_END (2)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_STATE1_jm_overflow_START (3)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_STATE1_jm_overflow_END (3)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_STATE1_test_dtc_curr_st_START (4)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_STATE1_test_dtc_curr_st_END (6)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_STATE1_jm_code_e_START (8)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_STATE1_jm_code_e_END (15)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_STATE1_jm_code_min_START (16)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_STATE1_jm_code_min_END (23)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_STATE1_jm_code_max_START (24)
#define SOC_CRGPERIPH_JITTER_MONITOR_APLL3_STATE1_jm_code_max_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int div_atgc : 4;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 4;
        unsigned int div_socp_deflate : 5;
        unsigned int div_dpctrl_16m : 2;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_CLKDIV26_UNION;
#endif
#define SOC_CRGPERIPH_CLKDIV26_div_atgc_START (0)
#define SOC_CRGPERIPH_CLKDIV26_div_atgc_END (3)
#define SOC_CRGPERIPH_CLKDIV26_div_socp_deflate_START (9)
#define SOC_CRGPERIPH_CLKDIV26_div_socp_deflate_END (13)
#define SOC_CRGPERIPH_CLKDIV26_div_dpctrl_16m_START (14)
#define SOC_CRGPERIPH_CLKDIV26_div_dpctrl_16m_END (15)
#define SOC_CRGPERIPH_CLKDIV26_bitmasken_START (16)
#define SOC_CRGPERIPH_CLKDIV26_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fcm_pll_ref_src_sel0 : 1;
        unsigned int fcm_pll_ref_src_sel1 : 1;
        unsigned int dvfs_gate_ctrl_cpul_bypass : 1;
        unsigned int dvfs_gate_ctrl_g3d_bypass : 1;
        unsigned int ics_dbat_drop_freq_down_bp : 1;
        unsigned int ics_dbat_drop_freq_down_div : 5;
        unsigned int dvfs_gate_ctrl_l3_bypass : 1;
        unsigned int reserved : 5;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_PERI_COMMON_CTRL0_UNION;
#endif
#define SOC_CRGPERIPH_PERI_COMMON_CTRL0_fcm_pll_ref_src_sel0_START (0)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL0_fcm_pll_ref_src_sel0_END (0)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL0_fcm_pll_ref_src_sel1_START (1)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL0_fcm_pll_ref_src_sel1_END (1)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL0_dvfs_gate_ctrl_cpul_bypass_START (2)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL0_dvfs_gate_ctrl_cpul_bypass_END (2)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL0_dvfs_gate_ctrl_g3d_bypass_START (3)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL0_dvfs_gate_ctrl_g3d_bypass_END (3)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL0_ics_dbat_drop_freq_down_bp_START (4)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL0_ics_dbat_drop_freq_down_bp_END (4)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL0_ics_dbat_drop_freq_down_div_START (5)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL0_ics_dbat_drop_freq_down_div_END (9)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL0_dvfs_gate_ctrl_l3_bypass_START (10)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL0_dvfs_gate_ctrl_l3_bypass_END (10)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL0_bitmasken_START (16)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL0_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddrc_autogt_bypass_lpmcu : 1;
        unsigned int ddrc_autogt_bypass_acpu_l_0 : 1;
        unsigned int ddrc_autogt_bypass_acpu_l_1 : 1;
        unsigned int ddrc_autogt_bypass_acpu_l_2 : 1;
        unsigned int ddrc_autogt_bypass_acpu_l_3 : 1;
        unsigned int ddrc_autogt_bypass_acpu_b_0 : 1;
        unsigned int ddrc_autogt_bypass_acpu_b_1 : 1;
        unsigned int ddrc_autogt_bypass_acpu_b_2 : 1;
        unsigned int ddrc_autogt_bypass_acpu_b_3 : 1;
        unsigned int ddrc_autogt_bypass_ccpu : 1;
        unsigned int ddrc_autogt_bypass_mdm_bbe0 : 1;
        unsigned int ddrc_autogt_bypass_mdm_bbe1 : 1;
        unsigned int ddrc_autogt_bypass_mdm_bbe2 : 1;
        unsigned int ddrc_autogt_bypass_other_cpu0 : 1;
        unsigned int ddrc_autogt_bypass_other_cpu1 : 1;
        unsigned int ddrc_autogt_bypass_other_cpu2 : 1;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_PERI_COMMON_CTRL1_UNION;
#endif
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_lpmcu_START (0)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_lpmcu_END (0)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_acpu_l_0_START (1)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_acpu_l_0_END (1)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_acpu_l_1_START (2)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_acpu_l_1_END (2)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_acpu_l_2_START (3)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_acpu_l_2_END (3)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_acpu_l_3_START (4)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_acpu_l_3_END (4)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_acpu_b_0_START (5)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_acpu_b_0_END (5)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_acpu_b_1_START (6)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_acpu_b_1_END (6)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_acpu_b_2_START (7)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_acpu_b_2_END (7)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_acpu_b_3_START (8)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_acpu_b_3_END (8)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_ccpu_START (9)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_ccpu_END (9)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_mdm_bbe0_START (10)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_mdm_bbe0_END (10)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_mdm_bbe1_START (11)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_mdm_bbe1_END (11)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_mdm_bbe2_START (12)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_mdm_bbe2_END (12)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_other_cpu0_START (13)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_other_cpu0_END (13)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_other_cpu1_START (14)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_other_cpu1_END (14)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_other_cpu2_START (15)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_ddrc_autogt_bypass_other_cpu2_END (15)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_bitmasken_START (16)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL1_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddrsys_autogt_bypass_lpmcu : 1;
        unsigned int ddrsys_autogt_bypass_acpu_l_0 : 1;
        unsigned int ddrsys_autogt_bypass_acpu_l_1 : 1;
        unsigned int ddrsys_autogt_bypass_acpu_l_2 : 1;
        unsigned int ddrsys_autogt_bypass_acpu_l_3 : 1;
        unsigned int ddrsys_autogt_bypass_acpu_b_0 : 1;
        unsigned int ddrsys_autogt_bypass_acpu_b_1 : 1;
        unsigned int ddrsys_autogt_bypass_acpu_b_2 : 1;
        unsigned int ddrsys_autogt_bypass_acpu_b_3 : 1;
        unsigned int ddrsys_autogt_bypass_ccpu : 1;
        unsigned int ddrsys_autogt_bypass_mdm_bbe0 : 1;
        unsigned int ddrsys_autogt_bypass_mdm_bbe1 : 1;
        unsigned int ddrsys_autogt_bypass_mdm_bbe2 : 1;
        unsigned int ddrsys_autogt_bypass_other_cpu0 : 1;
        unsigned int ddrsys_autogt_bypass_other_cpu1 : 1;
        unsigned int ddrsys_autogt_bypass_other_cpu2 : 1;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_PERI_COMMON_CTRL2_UNION;
#endif
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_lpmcu_START (0)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_lpmcu_END (0)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_acpu_l_0_START (1)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_acpu_l_0_END (1)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_acpu_l_1_START (2)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_acpu_l_1_END (2)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_acpu_l_2_START (3)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_acpu_l_2_END (3)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_acpu_l_3_START (4)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_acpu_l_3_END (4)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_acpu_b_0_START (5)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_acpu_b_0_END (5)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_acpu_b_1_START (6)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_acpu_b_1_END (6)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_acpu_b_2_START (7)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_acpu_b_2_END (7)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_acpu_b_3_START (8)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_acpu_b_3_END (8)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_ccpu_START (9)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_ccpu_END (9)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_mdm_bbe0_START (10)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_mdm_bbe0_END (10)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_mdm_bbe1_START (11)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_mdm_bbe1_END (11)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_mdm_bbe2_START (12)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_mdm_bbe2_END (12)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_other_cpu0_START (13)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_other_cpu0_END (13)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_other_cpu1_START (14)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_other_cpu1_END (14)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_other_cpu2_START (15)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_ddrsys_autogt_bypass_other_cpu2_END (15)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_bitmasken_START (16)
#define SOC_CRGPERIPH_PERI_COMMON_CTRL2_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int ddrsys_idle_waitcfg_in : 10;
        unsigned int ddrsys_idle_waitcfg_out : 10;
        unsigned int ddrsys_autofs_cnt_cfg : 6;
        unsigned int reserved_1 : 5;
    } reg;
} SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL0_UNION;
#endif
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL0_ddrsys_idle_waitcfg_in_START (1)
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL0_ddrsys_idle_waitcfg_in_END (10)
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL0_ddrsys_idle_waitcfg_out_START (11)
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL0_ddrsys_idle_waitcfg_out_END (20)
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL0_ddrsys_autofs_cnt_cfg_START (21)
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL0_ddrsys_autofs_cnt_cfg_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddrsys_atgs_asi8_bypass : 1;
        unsigned int ddrsys_aonoc_bypass : 1;
        unsigned int ddrsys_sysbus_bypass : 1;
        unsigned int ddrsys_usb3_bypass : 1;
        unsigned int ddrsys_dpctrl_bypass : 1;
        unsigned int ddrsys_sd3_bypass : 1;
        unsigned int ddrsys_pcie_bypass : 1;
        unsigned int ddrsys_ufs_bypass : 1;
        unsigned int ddrsys_sdio_bypass : 1;
        unsigned int ddrsys_modem_mst_bypass : 1;
        unsigned int ddrsys_modem_axi_bypass : 1;
        unsigned int ddrsys_sec_bypass : 1;
        unsigned int reserved : 20;
    } reg;
} SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL1_UNION;
#endif
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL1_ddrsys_atgs_asi8_bypass_START (0)
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL1_ddrsys_atgs_asi8_bypass_END (0)
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL1_ddrsys_aonoc_bypass_START (1)
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL1_ddrsys_aonoc_bypass_END (1)
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL1_ddrsys_sysbus_bypass_START (2)
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL1_ddrsys_sysbus_bypass_END (2)
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL1_ddrsys_usb3_bypass_START (3)
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL1_ddrsys_usb3_bypass_END (3)
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL1_ddrsys_dpctrl_bypass_START (4)
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL1_ddrsys_dpctrl_bypass_END (4)
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL1_ddrsys_sd3_bypass_START (5)
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL1_ddrsys_sd3_bypass_END (5)
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL1_ddrsys_pcie_bypass_START (6)
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL1_ddrsys_pcie_bypass_END (6)
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL1_ddrsys_ufs_bypass_START (7)
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL1_ddrsys_ufs_bypass_END (7)
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL1_ddrsys_sdio_bypass_START (8)
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL1_ddrsys_sdio_bypass_END (8)
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL1_ddrsys_modem_mst_bypass_START (9)
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL1_ddrsys_modem_mst_bypass_END (9)
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL1_ddrsys_modem_axi_bypass_START (10)
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL1_ddrsys_modem_axi_bypass_END (10)
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL1_ddrsys_sec_bypass_START (11)
#define SOC_CRGPERIPH_DDRSYS_AUTOFS_CTRL1_ddrsys_sec_bypass_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int peri_avs_disable_vote : 11;
        unsigned int peri_avs_pmu_sel : 1;
        unsigned int peri_avs_vol_up_wait_down_finish_bypass : 1;
        unsigned int peri_avs_vol_down_wait_up_finish_bypass : 1;
        unsigned int reserved : 2;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_PERI_AVS_CTRL0_UNION;
#endif
#define SOC_CRGPERIPH_PERI_AVS_CTRL0_peri_avs_disable_vote_START (0)
#define SOC_CRGPERIPH_PERI_AVS_CTRL0_peri_avs_disable_vote_END (10)
#define SOC_CRGPERIPH_PERI_AVS_CTRL0_peri_avs_pmu_sel_START (11)
#define SOC_CRGPERIPH_PERI_AVS_CTRL0_peri_avs_pmu_sel_END (11)
#define SOC_CRGPERIPH_PERI_AVS_CTRL0_peri_avs_vol_up_wait_down_finish_bypass_START (12)
#define SOC_CRGPERIPH_PERI_AVS_CTRL0_peri_avs_vol_up_wait_down_finish_bypass_END (12)
#define SOC_CRGPERIPH_PERI_AVS_CTRL0_peri_avs_vol_down_wait_up_finish_bypass_START (13)
#define SOC_CRGPERIPH_PERI_AVS_CTRL0_peri_avs_vol_down_wait_up_finish_bypass_END (13)
#define SOC_CRGPERIPH_PERI_AVS_CTRL0_bitmasken_START (16)
#define SOC_CRGPERIPH_PERI_AVS_CTRL0_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int peri_avs_vol_down_timeout_cfg : 12;
        unsigned int peri_avs_vol_up_timeout_cfg : 12;
        unsigned int reserved : 8;
    } reg;
} SOC_CRGPERIPH_PERI_AVS_CTRL1_UNION;
#endif
#define SOC_CRGPERIPH_PERI_AVS_CTRL1_peri_avs_vol_down_timeout_cfg_START (0)
#define SOC_CRGPERIPH_PERI_AVS_CTRL1_peri_avs_vol_down_timeout_cfg_END (11)
#define SOC_CRGPERIPH_PERI_AVS_CTRL1_peri_avs_vol_up_timeout_cfg_START (12)
#define SOC_CRGPERIPH_PERI_AVS_CTRL1_peri_avs_vol_up_timeout_cfg_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int peri_avs_vol_down_idx : 8;
        unsigned int peri_avs_vol_up_idx : 8;
        unsigned int reserved : 16;
    } reg;
} SOC_CRGPERIPH_PERI_AVS_CTRL2_UNION;
#endif
#define SOC_CRGPERIPH_PERI_AVS_CTRL2_peri_avs_vol_down_idx_START (0)
#define SOC_CRGPERIPH_PERI_AVS_CTRL2_peri_avs_vol_down_idx_END (7)
#define SOC_CRGPERIPH_PERI_AVS_CTRL2_peri_avs_vol_up_idx_START (8)
#define SOC_CRGPERIPH_PERI_AVS_CTRL2_peri_avs_vol_up_idx_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddrc_lp_en_waitcfg_in : 10;
        unsigned int ddrc_lp_en_waitcfg_out : 10;
        unsigned int reserved : 12;
    } reg;
} SOC_CRGPERIPH_PERI_AVS_CTRL3_UNION;
#endif
#define SOC_CRGPERIPH_PERI_AVS_CTRL3_ddrc_lp_en_waitcfg_in_START (0)
#define SOC_CRGPERIPH_PERI_AVS_CTRL3_ddrc_lp_en_waitcfg_in_END (9)
#define SOC_CRGPERIPH_PERI_AVS_CTRL3_ddrc_lp_en_waitcfg_out_START (10)
#define SOC_CRGPERIPH_PERI_AVS_CTRL3_ddrc_lp_en_waitcfg_out_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fnpll_cfg_data : 8;
        unsigned int fnpll_cfg_addr : 5;
        unsigned int fnpll_cfg_wr_en : 1;
        unsigned int fnpll_cfg_rd_en : 1;
        unsigned int cpub_pll_sel : 1;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_PERI_FNPLL_CTRL_UNION;
#endif
#define SOC_CRGPERIPH_PERI_FNPLL_CTRL_fnpll_cfg_data_START (0)
#define SOC_CRGPERIPH_PERI_FNPLL_CTRL_fnpll_cfg_data_END (7)
#define SOC_CRGPERIPH_PERI_FNPLL_CTRL_fnpll_cfg_addr_START (8)
#define SOC_CRGPERIPH_PERI_FNPLL_CTRL_fnpll_cfg_addr_END (12)
#define SOC_CRGPERIPH_PERI_FNPLL_CTRL_fnpll_cfg_wr_en_START (13)
#define SOC_CRGPERIPH_PERI_FNPLL_CTRL_fnpll_cfg_wr_en_END (13)
#define SOC_CRGPERIPH_PERI_FNPLL_CTRL_fnpll_cfg_rd_en_START (14)
#define SOC_CRGPERIPH_PERI_FNPLL_CTRL_fnpll_cfg_rd_en_END (14)
#define SOC_CRGPERIPH_PERI_FNPLL_CTRL_cpub_pll_sel_START (15)
#define SOC_CRGPERIPH_PERI_FNPLL_CTRL_cpub_pll_sel_END (15)
#define SOC_CRGPERIPH_PERI_FNPLL_CTRL_bitmasken_START (16)
#define SOC_CRGPERIPH_PERI_FNPLL_CTRL_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fnpll_stat : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_CRGPERIPH_PERI_FNPLL_STAT_UNION;
#endif
#define SOC_CRGPERIPH_PERI_FNPLL_STAT_fnpll_stat_START (0)
#define SOC_CRGPERIPH_PERI_FNPLL_STAT_fnpll_stat_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int qactive_cfgcnt_mst_fcm0 : 7;
        unsigned int gt_clk_bypass_mst_fcm0 : 1;
        unsigned int qactive_cfgcnt_mst_fcm1 : 7;
        unsigned int gt_clk_bypass_mst_fcm1 : 1;
        unsigned int qactive_cfgcnt_slv_acp : 7;
        unsigned int gt_clk_bypass_slv_acp : 1;
        unsigned int reserved : 8;
    } reg;
} SOC_CRGPERIPH_FCM_ADB_LPCTRL_CORE_UNION;
#endif
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_CORE_qactive_cfgcnt_mst_fcm0_START (0)
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_CORE_qactive_cfgcnt_mst_fcm0_END (6)
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_CORE_gt_clk_bypass_mst_fcm0_START (7)
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_CORE_gt_clk_bypass_mst_fcm0_END (7)
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_CORE_qactive_cfgcnt_mst_fcm1_START (8)
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_CORE_qactive_cfgcnt_mst_fcm1_END (14)
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_CORE_gt_clk_bypass_mst_fcm1_START (15)
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_CORE_gt_clk_bypass_mst_fcm1_END (15)
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_CORE_qactive_cfgcnt_slv_acp_START (16)
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_CORE_qactive_cfgcnt_slv_acp_END (22)
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_CORE_gt_clk_bypass_slv_acp_START (23)
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_CORE_gt_clk_bypass_slv_acp_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int qactive_cfgcnt_slv_fcm : 7;
        unsigned int gt_clk_bypass_slv_fcm0 : 1;
        unsigned int gt_clk_bypass_slv_fcm1 : 1;
        unsigned int gt_clk_bypass_slv_periph : 1;
        unsigned int reserved : 6;
        unsigned int qactive_cfgcnt_mst_acp : 7;
        unsigned int gt_clk_bypass_mst_acp : 1;
        unsigned int qactive_cfgcnt_mst_periph : 7;
        unsigned int gt_clk_bypass_mst_periph : 1;
    } reg;
} SOC_CRGPERIPH_FCM_ADB_LPCTRL_UNION;
#endif
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_qactive_cfgcnt_slv_fcm_START (0)
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_qactive_cfgcnt_slv_fcm_END (6)
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_gt_clk_bypass_slv_fcm0_START (7)
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_gt_clk_bypass_slv_fcm0_END (7)
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_gt_clk_bypass_slv_fcm1_START (8)
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_gt_clk_bypass_slv_fcm1_END (8)
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_gt_clk_bypass_slv_periph_START (9)
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_gt_clk_bypass_slv_periph_END (9)
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_qactive_cfgcnt_mst_acp_START (16)
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_qactive_cfgcnt_mst_acp_END (22)
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_gt_clk_bypass_mst_acp_START (23)
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_gt_clk_bypass_mst_acp_END (23)
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_qactive_cfgcnt_mst_periph_START (24)
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_qactive_cfgcnt_mst_periph_END (30)
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_gt_clk_bypass_mst_periph_START (31)
#define SOC_CRGPERIPH_FCM_ADB_LPCTRL_gt_clk_bypass_mst_periph_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int qactive_cfgcnt_mst : 7;
        unsigned int gt_clk_bypass_mst : 1;
        unsigned int qactive_cfgcnt_slv : 7;
        unsigned int gt_clk_bypass_slv : 1;
        unsigned int reserved : 16;
    } reg;
} SOC_CRGPERIPH_G3D_0_ADBLPCTRL_UNION;
#endif
#define SOC_CRGPERIPH_G3D_0_ADBLPCTRL_qactive_cfgcnt_mst_START (0)
#define SOC_CRGPERIPH_G3D_0_ADBLPCTRL_qactive_cfgcnt_mst_END (6)
#define SOC_CRGPERIPH_G3D_0_ADBLPCTRL_gt_clk_bypass_mst_START (7)
#define SOC_CRGPERIPH_G3D_0_ADBLPCTRL_gt_clk_bypass_mst_END (7)
#define SOC_CRGPERIPH_G3D_0_ADBLPCTRL_qactive_cfgcnt_slv_START (8)
#define SOC_CRGPERIPH_G3D_0_ADBLPCTRL_qactive_cfgcnt_slv_END (14)
#define SOC_CRGPERIPH_G3D_0_ADBLPCTRL_gt_clk_bypass_slv_START (15)
#define SOC_CRGPERIPH_G3D_0_ADBLPCTRL_gt_clk_bypass_slv_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int qactive_cfgcnt_mst : 7;
        unsigned int gt_clk_bypass_mst : 1;
        unsigned int qactive_cfgcnt_slv : 7;
        unsigned int gt_clk_bypass_slv : 1;
        unsigned int reserved : 16;
    } reg;
} SOC_CRGPERIPH_G3D_1_ADBLPCTRL_UNION;
#endif
#define SOC_CRGPERIPH_G3D_1_ADBLPCTRL_qactive_cfgcnt_mst_START (0)
#define SOC_CRGPERIPH_G3D_1_ADBLPCTRL_qactive_cfgcnt_mst_END (6)
#define SOC_CRGPERIPH_G3D_1_ADBLPCTRL_gt_clk_bypass_mst_START (7)
#define SOC_CRGPERIPH_G3D_1_ADBLPCTRL_gt_clk_bypass_mst_END (7)
#define SOC_CRGPERIPH_G3D_1_ADBLPCTRL_qactive_cfgcnt_slv_START (8)
#define SOC_CRGPERIPH_G3D_1_ADBLPCTRL_qactive_cfgcnt_slv_END (14)
#define SOC_CRGPERIPH_G3D_1_ADBLPCTRL_gt_clk_bypass_slv_START (15)
#define SOC_CRGPERIPH_G3D_1_ADBLPCTRL_gt_clk_bypass_slv_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int qactive_cfgcnt_mst_0 : 7;
        unsigned int gt_clk_bypass_mst_0 : 1;
        unsigned int qactive_cfgcnt_mst_1 : 7;
        unsigned int gt_clk_bypass_mst_1 : 1;
        unsigned int reserved : 16;
    } reg;
} SOC_CRGPERIPH_MDM_ADBLPCTRL_UNION;
#endif
#define SOC_CRGPERIPH_MDM_ADBLPCTRL_qactive_cfgcnt_mst_0_START (0)
#define SOC_CRGPERIPH_MDM_ADBLPCTRL_qactive_cfgcnt_mst_0_END (6)
#define SOC_CRGPERIPH_MDM_ADBLPCTRL_gt_clk_bypass_mst_0_START (7)
#define SOC_CRGPERIPH_MDM_ADBLPCTRL_gt_clk_bypass_mst_0_END (7)
#define SOC_CRGPERIPH_MDM_ADBLPCTRL_qactive_cfgcnt_mst_1_START (8)
#define SOC_CRGPERIPH_MDM_ADBLPCTRL_qactive_cfgcnt_mst_1_END (14)
#define SOC_CRGPERIPH_MDM_ADBLPCTRL_gt_clk_bypass_mst_1_START (15)
#define SOC_CRGPERIPH_MDM_ADBLPCTRL_gt_clk_bypass_mst_1_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pll_lock_debounce_cfg : 10;
        unsigned int pll_unlock_debounce_cfg : 10;
        unsigned int pll_unlock_intr_clr : 1;
        unsigned int reserved : 11;
    } reg;
} SOC_CRGPERIPH_PLL_UNLOCK_DETECT_CTRL_UNION;
#endif
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_CTRL_pll_lock_debounce_cfg_START (0)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_CTRL_pll_lock_debounce_cfg_END (9)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_CTRL_pll_unlock_debounce_cfg_START (10)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_CTRL_pll_unlock_debounce_cfg_END (19)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_CTRL_pll_unlock_intr_clr_START (20)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_CTRL_pll_unlock_intr_clr_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lpfll_unlock_intr_bypass : 1;
        unsigned int lbintpll_unlock_intr_bypass : 1;
        unsigned int ppll0_unlock_intr_bypass : 1;
        unsigned int apll0_unlock_intr_bypass : 1;
        unsigned int apll1_unlock_intr_bypass : 1;
        unsigned int apll2_unlock_intr_bypass : 1;
        unsigned int apll3_unlock_intr_bypass : 1;
        unsigned int ppll4_unlock_intr_bypass : 1;
        unsigned int apll5_unlock_intr_bypass : 1;
        unsigned int apll6_unlock_intr_bypass : 1;
        unsigned int ppll1_unlock_intr_bypass : 1;
        unsigned int ppll2_unlock_intr_bypass : 1;
        unsigned int ppll3_unlock_intr_bypass : 1;
        unsigned int mpll0_unlock_intr_bypass : 1;
        unsigned int mpll1_unlock_intr_bypass : 1;
        unsigned int mpll2_unlock_intr_bypass : 1;
        unsigned int pcie_fnpll_unlock_intr_bypass : 1;
        unsigned int ppll6_unlock_intr_bypass : 1;
        unsigned int ppll7_unlock_intr_bypass : 1;
        unsigned int pcieppll_unlock_intr_bypass : 1;
        unsigned int allpll_unlock_intr_bypass : 1;
        unsigned int reserved : 11;
    } reg;
} SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_UNION;
#endif
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_lpfll_unlock_intr_bypass_START (0)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_lpfll_unlock_intr_bypass_END (0)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_lbintpll_unlock_intr_bypass_START (1)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_lbintpll_unlock_intr_bypass_END (1)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_ppll0_unlock_intr_bypass_START (2)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_ppll0_unlock_intr_bypass_END (2)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_apll0_unlock_intr_bypass_START (3)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_apll0_unlock_intr_bypass_END (3)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_apll1_unlock_intr_bypass_START (4)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_apll1_unlock_intr_bypass_END (4)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_apll2_unlock_intr_bypass_START (5)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_apll2_unlock_intr_bypass_END (5)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_apll3_unlock_intr_bypass_START (6)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_apll3_unlock_intr_bypass_END (6)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_ppll4_unlock_intr_bypass_START (7)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_ppll4_unlock_intr_bypass_END (7)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_apll5_unlock_intr_bypass_START (8)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_apll5_unlock_intr_bypass_END (8)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_apll6_unlock_intr_bypass_START (9)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_apll6_unlock_intr_bypass_END (9)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_ppll1_unlock_intr_bypass_START (10)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_ppll1_unlock_intr_bypass_END (10)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_ppll2_unlock_intr_bypass_START (11)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_ppll2_unlock_intr_bypass_END (11)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_ppll3_unlock_intr_bypass_START (12)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_ppll3_unlock_intr_bypass_END (12)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_mpll0_unlock_intr_bypass_START (13)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_mpll0_unlock_intr_bypass_END (13)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_mpll1_unlock_intr_bypass_START (14)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_mpll1_unlock_intr_bypass_END (14)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_mpll2_unlock_intr_bypass_START (15)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_mpll2_unlock_intr_bypass_END (15)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_pcie_fnpll_unlock_intr_bypass_START (16)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_pcie_fnpll_unlock_intr_bypass_END (16)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_ppll6_unlock_intr_bypass_START (17)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_ppll6_unlock_intr_bypass_END (17)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_ppll7_unlock_intr_bypass_START (18)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_ppll7_unlock_intr_bypass_END (18)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_pcieppll_unlock_intr_bypass_START (19)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_pcieppll_unlock_intr_bypass_END (19)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_allpll_unlock_intr_bypass_START (20)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_BYPSS_allpll_unlock_intr_bypass_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lpfll_unlock_intr_stat : 1;
        unsigned int lbintpll_unlock_intr_stat : 1;
        unsigned int ppll0_unlock_intr_stat : 1;
        unsigned int apll0_unlock_intr_stat : 1;
        unsigned int apll1_unlock_intr_stat : 1;
        unsigned int apll2_unlock_intr_stat : 1;
        unsigned int apll3_unlock_intr_stat : 1;
        unsigned int ppll4_unlock_intr_stat : 1;
        unsigned int apll5_unlock_intr_stat : 1;
        unsigned int apll6_unlock_intr_stat : 1;
        unsigned int ppll1_unlock_intr_stat : 1;
        unsigned int ppll2_unlock_intr_stat : 1;
        unsigned int ppll3_unlock_intr_stat : 1;
        unsigned int mpll0_unlock_intr_stat : 1;
        unsigned int mpll1_unlock_intr_stat : 1;
        unsigned int mpll2_unlock_intr_stat : 1;
        unsigned int pcie_fnpll_unlock_intr_stat : 1;
        unsigned int ppll6_unlock_intr_stat : 1;
        unsigned int ppll7_unlock_intr_stat : 1;
        unsigned int pcieppll_unlock_intr_stat : 1;
        unsigned int reserved : 12;
    } reg;
} SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_UNION;
#endif
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_lpfll_unlock_intr_stat_START (0)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_lpfll_unlock_intr_stat_END (0)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_lbintpll_unlock_intr_stat_START (1)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_lbintpll_unlock_intr_stat_END (1)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_ppll0_unlock_intr_stat_START (2)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_ppll0_unlock_intr_stat_END (2)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_apll0_unlock_intr_stat_START (3)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_apll0_unlock_intr_stat_END (3)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_apll1_unlock_intr_stat_START (4)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_apll1_unlock_intr_stat_END (4)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_apll2_unlock_intr_stat_START (5)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_apll2_unlock_intr_stat_END (5)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_apll3_unlock_intr_stat_START (6)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_apll3_unlock_intr_stat_END (6)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_ppll4_unlock_intr_stat_START (7)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_ppll4_unlock_intr_stat_END (7)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_apll5_unlock_intr_stat_START (8)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_apll5_unlock_intr_stat_END (8)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_apll6_unlock_intr_stat_START (9)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_apll6_unlock_intr_stat_END (9)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_ppll1_unlock_intr_stat_START (10)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_ppll1_unlock_intr_stat_END (10)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_ppll2_unlock_intr_stat_START (11)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_ppll2_unlock_intr_stat_END (11)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_ppll3_unlock_intr_stat_START (12)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_ppll3_unlock_intr_stat_END (12)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_mpll0_unlock_intr_stat_START (13)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_mpll0_unlock_intr_stat_END (13)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_mpll1_unlock_intr_stat_START (14)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_mpll1_unlock_intr_stat_END (14)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_mpll2_unlock_intr_stat_START (15)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_mpll2_unlock_intr_stat_END (15)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_pcie_fnpll_unlock_intr_stat_START (16)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_pcie_fnpll_unlock_intr_stat_END (16)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_ppll6_unlock_intr_stat_START (17)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_ppll6_unlock_intr_stat_END (17)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_ppll7_unlock_intr_stat_START (18)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_ppll7_unlock_intr_stat_END (18)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_pcieppll_unlock_intr_stat_START (19)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECT_INTR_STAT_pcieppll_unlock_intr_stat_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lpfll_unlock_intr_cnt : 8;
        unsigned int lbintpll_unlock_intr_cnt : 8;
        unsigned int ppll0_unlock_intr_cnt : 8;
        unsigned int apll0_unlock_intr_cnt : 8;
    } reg;
} SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT0_UNION;
#endif
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT0_lpfll_unlock_intr_cnt_START (0)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT0_lpfll_unlock_intr_cnt_END (7)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT0_lbintpll_unlock_intr_cnt_START (8)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT0_lbintpll_unlock_intr_cnt_END (15)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT0_ppll0_unlock_intr_cnt_START (16)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT0_ppll0_unlock_intr_cnt_END (23)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT0_apll0_unlock_intr_cnt_START (24)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT0_apll0_unlock_intr_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int apll1_unlock_intr_cnt : 8;
        unsigned int apll2_unlock_intr_cnt : 8;
        unsigned int apll3_unlock_intr_cnt : 8;
        unsigned int ppll4_unlock_intr_cnt : 8;
    } reg;
} SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT1_UNION;
#endif
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT1_apll1_unlock_intr_cnt_START (0)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT1_apll1_unlock_intr_cnt_END (7)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT1_apll2_unlock_intr_cnt_START (8)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT1_apll2_unlock_intr_cnt_END (15)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT1_apll3_unlock_intr_cnt_START (16)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT1_apll3_unlock_intr_cnt_END (23)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT1_ppll4_unlock_intr_cnt_START (24)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT1_ppll4_unlock_intr_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int apll5_unlock_intr_cnt : 8;
        unsigned int apll6_unlock_intr_cnt : 8;
        unsigned int ppll1_unlock_intr_cnt : 8;
        unsigned int ppll2_unlock_intr_cnt : 8;
    } reg;
} SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT2_UNION;
#endif
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT2_apll5_unlock_intr_cnt_START (0)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT2_apll5_unlock_intr_cnt_END (7)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT2_apll6_unlock_intr_cnt_START (8)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT2_apll6_unlock_intr_cnt_END (15)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT2_ppll1_unlock_intr_cnt_START (16)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT2_ppll1_unlock_intr_cnt_END (23)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT2_ppll2_unlock_intr_cnt_START (24)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT2_ppll2_unlock_intr_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ppll3_unlock_intr_cnt : 8;
        unsigned int mpll0_unlock_intr_cnt : 8;
        unsigned int mpll1_unlock_intr_cnt : 8;
        unsigned int mpll2_unlock_intr_cnt : 8;
    } reg;
} SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT3_UNION;
#endif
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT3_ppll3_unlock_intr_cnt_START (0)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT3_ppll3_unlock_intr_cnt_END (7)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT3_mpll0_unlock_intr_cnt_START (8)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT3_mpll0_unlock_intr_cnt_END (15)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT3_mpll1_unlock_intr_cnt_START (16)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT3_mpll1_unlock_intr_cnt_END (23)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT3_mpll2_unlock_intr_cnt_START (24)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT3_mpll2_unlock_intr_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pcie_fnpll_unlock_intr_cnt : 8;
        unsigned int ppll6_unlock_intr_cnt : 8;
        unsigned int ppll7_unlock_intr_cnt : 8;
        unsigned int pcieppll_unlock_intr_cnt : 8;
    } reg;
} SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT4_UNION;
#endif
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT4_pcie_fnpll_unlock_intr_cnt_START (0)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT4_pcie_fnpll_unlock_intr_cnt_END (7)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT4_ppll6_unlock_intr_cnt_START (8)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT4_ppll6_unlock_intr_cnt_END (15)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT4_ppll7_unlock_intr_cnt_START (16)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT4_ppll7_unlock_intr_cnt_END (23)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT4_pcieppll_unlock_intr_cnt_START (24)
#define SOC_CRGPERIPH_PLL_UNLOCK_DETECTCNT4_pcieppll_unlock_intr_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ppll1_gt_stat : 1;
        unsigned int ppll2_gt_stat : 1;
        unsigned int ppll3_gt_stat : 1;
        unsigned int ppll4_gt_stat : 1;
        unsigned int ppll6_gt_stat : 1;
        unsigned int ppll7_gt_stat : 1;
        unsigned int ppll1_bypass : 1;
        unsigned int ppll2_bypass : 1;
        unsigned int ppll3_bypass : 1;
        unsigned int ppll4_bypass : 1;
        unsigned int ppll6_bypass : 1;
        unsigned int ppll7_bypass : 1;
        unsigned int ppll1_en_stat : 1;
        unsigned int ppll2_en_stat : 1;
        unsigned int ppll3_en_stat : 1;
        unsigned int ppll4_en_stat : 1;
        unsigned int ppll6_en_stat : 1;
        unsigned int ppll7_en_stat : 1;
        unsigned int reserved : 14;
    } reg;
} SOC_CRGPERIPH_PLL_VOTE_STAT0_UNION;
#endif
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll1_gt_stat_START (0)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll1_gt_stat_END (0)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll2_gt_stat_START (1)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll2_gt_stat_END (1)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll3_gt_stat_START (2)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll3_gt_stat_END (2)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll4_gt_stat_START (3)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll4_gt_stat_END (3)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll6_gt_stat_START (4)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll6_gt_stat_END (4)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll7_gt_stat_START (5)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll7_gt_stat_END (5)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll1_bypass_START (6)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll1_bypass_END (6)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll2_bypass_START (7)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll2_bypass_END (7)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll3_bypass_START (8)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll3_bypass_END (8)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll4_bypass_START (9)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll4_bypass_END (9)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll6_bypass_START (10)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll6_bypass_END (10)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll7_bypass_START (11)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll7_bypass_END (11)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll1_en_stat_START (12)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll1_en_stat_END (12)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll2_en_stat_START (13)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll2_en_stat_END (13)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll3_en_stat_START (14)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll3_en_stat_END (14)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll4_en_stat_START (15)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll4_en_stat_END (15)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll6_en_stat_START (16)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll6_en_stat_END (16)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll7_en_stat_START (17)
#define SOC_CRGPERIPH_PLL_VOTE_STAT0_ppll7_en_stat_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ppll1_en_vote : 5;
        unsigned int ppll2_en_vote : 5;
        unsigned int ppll3_en_vote : 5;
        unsigned int reserved : 1;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_PLL_EN_VOTE_CTRL0_UNION;
#endif
#define SOC_CRGPERIPH_PLL_EN_VOTE_CTRL0_ppll1_en_vote_START (0)
#define SOC_CRGPERIPH_PLL_EN_VOTE_CTRL0_ppll1_en_vote_END (4)
#define SOC_CRGPERIPH_PLL_EN_VOTE_CTRL0_ppll2_en_vote_START (5)
#define SOC_CRGPERIPH_PLL_EN_VOTE_CTRL0_ppll2_en_vote_END (9)
#define SOC_CRGPERIPH_PLL_EN_VOTE_CTRL0_ppll3_en_vote_START (10)
#define SOC_CRGPERIPH_PLL_EN_VOTE_CTRL0_ppll3_en_vote_END (14)
#define SOC_CRGPERIPH_PLL_EN_VOTE_CTRL0_bitmasken_START (16)
#define SOC_CRGPERIPH_PLL_EN_VOTE_CTRL0_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ppll1_gt_vote : 5;
        unsigned int ppll2_gt_vote : 5;
        unsigned int ppll3_gt_vote : 5;
        unsigned int reserved : 1;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_PLL_GT_VOTE_CTRL0_UNION;
#endif
#define SOC_CRGPERIPH_PLL_GT_VOTE_CTRL0_ppll1_gt_vote_START (0)
#define SOC_CRGPERIPH_PLL_GT_VOTE_CTRL0_ppll1_gt_vote_END (4)
#define SOC_CRGPERIPH_PLL_GT_VOTE_CTRL0_ppll2_gt_vote_START (5)
#define SOC_CRGPERIPH_PLL_GT_VOTE_CTRL0_ppll2_gt_vote_END (9)
#define SOC_CRGPERIPH_PLL_GT_VOTE_CTRL0_ppll3_gt_vote_START (10)
#define SOC_CRGPERIPH_PLL_GT_VOTE_CTRL0_ppll3_gt_vote_END (14)
#define SOC_CRGPERIPH_PLL_GT_VOTE_CTRL0_bitmasken_START (16)
#define SOC_CRGPERIPH_PLL_GT_VOTE_CTRL0_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ppll1_bypass_vote : 5;
        unsigned int ppll2_bypass_vote : 5;
        unsigned int ppll3_bypass_vote : 5;
        unsigned int reserved : 1;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_PLL_BYPASS_VOTE_CTRL0_UNION;
#endif
#define SOC_CRGPERIPH_PLL_BYPASS_VOTE_CTRL0_ppll1_bypass_vote_START (0)
#define SOC_CRGPERIPH_PLL_BYPASS_VOTE_CTRL0_ppll1_bypass_vote_END (4)
#define SOC_CRGPERIPH_PLL_BYPASS_VOTE_CTRL0_ppll2_bypass_vote_START (5)
#define SOC_CRGPERIPH_PLL_BYPASS_VOTE_CTRL0_ppll2_bypass_vote_END (9)
#define SOC_CRGPERIPH_PLL_BYPASS_VOTE_CTRL0_ppll3_bypass_vote_START (10)
#define SOC_CRGPERIPH_PLL_BYPASS_VOTE_CTRL0_ppll3_bypass_vote_END (14)
#define SOC_CRGPERIPH_PLL_BYPASS_VOTE_CTRL0_bitmasken_START (16)
#define SOC_CRGPERIPH_PLL_BYPASS_VOTE_CTRL0_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ppll4_en_vote : 5;
        unsigned int ppll6_en_vote : 5;
        unsigned int ppll7_en_vote : 5;
        unsigned int reserved : 1;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_PLL_EN_VOTE_CTRL1_UNION;
#endif
#define SOC_CRGPERIPH_PLL_EN_VOTE_CTRL1_ppll4_en_vote_START (0)
#define SOC_CRGPERIPH_PLL_EN_VOTE_CTRL1_ppll4_en_vote_END (4)
#define SOC_CRGPERIPH_PLL_EN_VOTE_CTRL1_ppll6_en_vote_START (5)
#define SOC_CRGPERIPH_PLL_EN_VOTE_CTRL1_ppll6_en_vote_END (9)
#define SOC_CRGPERIPH_PLL_EN_VOTE_CTRL1_ppll7_en_vote_START (10)
#define SOC_CRGPERIPH_PLL_EN_VOTE_CTRL1_ppll7_en_vote_END (14)
#define SOC_CRGPERIPH_PLL_EN_VOTE_CTRL1_bitmasken_START (16)
#define SOC_CRGPERIPH_PLL_EN_VOTE_CTRL1_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ppll4_gt_vote : 5;
        unsigned int ppll6_gt_vote : 5;
        unsigned int ppll7_gt_vote : 5;
        unsigned int reserved : 1;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_PLL_GT_VOTE_CTRL1_UNION;
#endif
#define SOC_CRGPERIPH_PLL_GT_VOTE_CTRL1_ppll4_gt_vote_START (0)
#define SOC_CRGPERIPH_PLL_GT_VOTE_CTRL1_ppll4_gt_vote_END (4)
#define SOC_CRGPERIPH_PLL_GT_VOTE_CTRL1_ppll6_gt_vote_START (5)
#define SOC_CRGPERIPH_PLL_GT_VOTE_CTRL1_ppll6_gt_vote_END (9)
#define SOC_CRGPERIPH_PLL_GT_VOTE_CTRL1_ppll7_gt_vote_START (10)
#define SOC_CRGPERIPH_PLL_GT_VOTE_CTRL1_ppll7_gt_vote_END (14)
#define SOC_CRGPERIPH_PLL_GT_VOTE_CTRL1_bitmasken_START (16)
#define SOC_CRGPERIPH_PLL_GT_VOTE_CTRL1_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ppll4_bypass_vote : 5;
        unsigned int ppll6_bypass_vote : 5;
        unsigned int ppll7_bypass_vote : 5;
        unsigned int reserved : 1;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_PLL_BYPASS_VOTE_CTRL1_UNION;
#endif
#define SOC_CRGPERIPH_PLL_BYPASS_VOTE_CTRL1_ppll4_bypass_vote_START (0)
#define SOC_CRGPERIPH_PLL_BYPASS_VOTE_CTRL1_ppll4_bypass_vote_END (4)
#define SOC_CRGPERIPH_PLL_BYPASS_VOTE_CTRL1_ppll6_bypass_vote_START (5)
#define SOC_CRGPERIPH_PLL_BYPASS_VOTE_CTRL1_ppll6_bypass_vote_END (9)
#define SOC_CRGPERIPH_PLL_BYPASS_VOTE_CTRL1_ppll7_bypass_vote_START (10)
#define SOC_CRGPERIPH_PLL_BYPASS_VOTE_CTRL1_ppll7_bypass_vote_END (14)
#define SOC_CRGPERIPH_PLL_BYPASS_VOTE_CTRL1_bitmasken_START (16)
#define SOC_CRGPERIPH_PLL_BYPASS_VOTE_CTRL1_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dvm_en_s0 : 1;
        unsigned int snoop_en_s0 : 1;
        unsigned int dvm_en_s1 : 1;
        unsigned int snoop_en_s1 : 1;
        unsigned int dvm_en_s2s3 : 1;
        unsigned int snoop_en_s2 : 1;
        unsigned int snoop_en_s3 : 1;
        unsigned int reserved : 25;
    } reg;
} SOC_CRGPERIPH_CCI400_CTRL3_UNION;
#endif
#define SOC_CRGPERIPH_CCI400_CTRL3_dvm_en_s0_START (0)
#define SOC_CRGPERIPH_CCI400_CTRL3_dvm_en_s0_END (0)
#define SOC_CRGPERIPH_CCI400_CTRL3_snoop_en_s0_START (1)
#define SOC_CRGPERIPH_CCI400_CTRL3_snoop_en_s0_END (1)
#define SOC_CRGPERIPH_CCI400_CTRL3_dvm_en_s1_START (2)
#define SOC_CRGPERIPH_CCI400_CTRL3_dvm_en_s1_END (2)
#define SOC_CRGPERIPH_CCI400_CTRL3_snoop_en_s1_START (3)
#define SOC_CRGPERIPH_CCI400_CTRL3_snoop_en_s1_END (3)
#define SOC_CRGPERIPH_CCI400_CTRL3_dvm_en_s2s3_START (4)
#define SOC_CRGPERIPH_CCI400_CTRL3_dvm_en_s2s3_END (4)
#define SOC_CRGPERIPH_CCI400_CTRL3_snoop_en_s2_START (5)
#define SOC_CRGPERIPH_CCI400_CTRL3_snoop_en_s2_END (5)
#define SOC_CRGPERIPH_CCI400_CTRL3_snoop_en_s3_START (6)
#define SOC_CRGPERIPH_CCI400_CTRL3_snoop_en_s3_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ip_rst_hisee : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_CRGPERIPH_RSTEN_HISEE_SEC_UNION;
#endif
#define SOC_CRGPERIPH_RSTEN_HISEE_SEC_ip_rst_hisee_START (0)
#define SOC_CRGPERIPH_RSTEN_HISEE_SEC_ip_rst_hisee_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ip_rst_hisee : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_CRGPERIPH_RSTDIS_HISEE_SEC_UNION;
#endif
#define SOC_CRGPERIPH_RSTDIS_HISEE_SEC_ip_rst_hisee_START (0)
#define SOC_CRGPERIPH_RSTDIS_HISEE_SEC_ip_rst_hisee_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ip_rst_hisee : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_CRGPERIPH_RSTSTAT_HISEE_SEC_UNION;
#endif
#define SOC_CRGPERIPH_RSTSTAT_HISEE_SEC_ip_rst_hisee_START (0)
#define SOC_CRGPERIPH_RSTSTAT_HISEE_SEC_ip_rst_hisee_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_clk_hisee_pll : 1;
        unsigned int gt_clk_hisee_sys : 1;
        unsigned int reserved_0 : 1;
        unsigned int gt_clk_hisee_ref : 1;
        unsigned int reserved_1 : 28;
    } reg;
} SOC_CRGPERIPH_PEREN_HISEE_SEC_UNION;
#endif
#define SOC_CRGPERIPH_PEREN_HISEE_SEC_gt_clk_hisee_pll_START (0)
#define SOC_CRGPERIPH_PEREN_HISEE_SEC_gt_clk_hisee_pll_END (0)
#define SOC_CRGPERIPH_PEREN_HISEE_SEC_gt_clk_hisee_sys_START (1)
#define SOC_CRGPERIPH_PEREN_HISEE_SEC_gt_clk_hisee_sys_END (1)
#define SOC_CRGPERIPH_PEREN_HISEE_SEC_gt_clk_hisee_ref_START (3)
#define SOC_CRGPERIPH_PEREN_HISEE_SEC_gt_clk_hisee_ref_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_clk_hisee_pll : 1;
        unsigned int gt_clk_hisee_sys : 1;
        unsigned int reserved_0 : 1;
        unsigned int gt_clk_hisee_ref : 1;
        unsigned int reserved_1 : 28;
    } reg;
} SOC_CRGPERIPH_PERDIS_HISEE_SEC_UNION;
#endif
#define SOC_CRGPERIPH_PERDIS_HISEE_SEC_gt_clk_hisee_pll_START (0)
#define SOC_CRGPERIPH_PERDIS_HISEE_SEC_gt_clk_hisee_pll_END (0)
#define SOC_CRGPERIPH_PERDIS_HISEE_SEC_gt_clk_hisee_sys_START (1)
#define SOC_CRGPERIPH_PERDIS_HISEE_SEC_gt_clk_hisee_sys_END (1)
#define SOC_CRGPERIPH_PERDIS_HISEE_SEC_gt_clk_hisee_ref_START (3)
#define SOC_CRGPERIPH_PERDIS_HISEE_SEC_gt_clk_hisee_ref_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_clk_hisee_pll : 1;
        unsigned int gt_clk_hisee_sys : 1;
        unsigned int reserved_0 : 1;
        unsigned int gt_clk_hisee_ref : 1;
        unsigned int reserved_1 : 28;
    } reg;
} SOC_CRGPERIPH_PERCLKEN_HISEE_SEC_UNION;
#endif
#define SOC_CRGPERIPH_PERCLKEN_HISEE_SEC_gt_clk_hisee_pll_START (0)
#define SOC_CRGPERIPH_PERCLKEN_HISEE_SEC_gt_clk_hisee_pll_END (0)
#define SOC_CRGPERIPH_PERCLKEN_HISEE_SEC_gt_clk_hisee_sys_START (1)
#define SOC_CRGPERIPH_PERCLKEN_HISEE_SEC_gt_clk_hisee_sys_END (1)
#define SOC_CRGPERIPH_PERCLKEN_HISEE_SEC_gt_clk_hisee_ref_START (3)
#define SOC_CRGPERIPH_PERCLKEN_HISEE_SEC_gt_clk_hisee_ref_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int st_clk_hisee_pll : 1;
        unsigned int st_clk_hisee_sys : 1;
        unsigned int reserved_0 : 1;
        unsigned int st_clk_hisee_ref : 1;
        unsigned int reserved_1 : 28;
    } reg;
} SOC_CRGPERIPH_PERSTAT_HISEE_SEC_UNION;
#endif
#define SOC_CRGPERIPH_PERSTAT_HISEE_SEC_st_clk_hisee_pll_START (0)
#define SOC_CRGPERIPH_PERSTAT_HISEE_SEC_st_clk_hisee_pll_END (0)
#define SOC_CRGPERIPH_PERSTAT_HISEE_SEC_st_clk_hisee_sys_START (1)
#define SOC_CRGPERIPH_PERSTAT_HISEE_SEC_st_clk_hisee_sys_END (1)
#define SOC_CRGPERIPH_PERSTAT_HISEE_SEC_st_clk_hisee_ref_START (3)
#define SOC_CRGPERIPH_PERSTAT_HISEE_SEC_st_clk_hisee_ref_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hisee_clkrst_bypass : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_CRGPERIPH_IPCLKRST_BYPASS_HISEE_SEC_UNION;
#endif
#define SOC_CRGPERIPH_IPCLKRST_BYPASS_HISEE_SEC_hisee_clkrst_bypass_START (0)
#define SOC_CRGPERIPH_IPCLKRST_BYPASS_HISEE_SEC_hisee_clkrst_bypass_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int div_hisee_pll : 4;
        unsigned int sc_gt_clk_hisee_pll : 1;
        unsigned int sel_hisee_pll : 1;
        unsigned int reserved : 10;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_CLKDIV_HISEE_SEC_UNION;
#endif
#define SOC_CRGPERIPH_CLKDIV_HISEE_SEC_div_hisee_pll_START (0)
#define SOC_CRGPERIPH_CLKDIV_HISEE_SEC_div_hisee_pll_END (3)
#define SOC_CRGPERIPH_CLKDIV_HISEE_SEC_sc_gt_clk_hisee_pll_START (4)
#define SOC_CRGPERIPH_CLKDIV_HISEE_SEC_sc_gt_clk_hisee_pll_END (4)
#define SOC_CRGPERIPH_CLKDIV_HISEE_SEC_sel_hisee_pll_START (5)
#define SOC_CRGPERIPH_CLKDIV_HISEE_SEC_sel_hisee_pll_END (5)
#define SOC_CRGPERIPH_CLKDIV_HISEE_SEC_bitmasken_START (16)
#define SOC_CRGPERIPH_CLKDIV_HISEE_SEC_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ip_rst_modem : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_CRGPERIPH_MDM_SEC_RSTEN_UNION;
#endif
#define SOC_CRGPERIPH_MDM_SEC_RSTEN_ip_rst_modem_START (0)
#define SOC_CRGPERIPH_MDM_SEC_RSTEN_ip_rst_modem_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ip_rst_modem : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_CRGPERIPH_MDM_SEC_RSTDIS_UNION;
#endif
#define SOC_CRGPERIPH_MDM_SEC_RSTDIS_ip_rst_modem_START (0)
#define SOC_CRGPERIPH_MDM_SEC_RSTDIS_ip_rst_modem_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ip_rst_modem : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_CRGPERIPH_MDM_SEC_RSTSTAT_UNION;
#endif
#define SOC_CRGPERIPH_MDM_SEC_RSTSTAT_ip_rst_modem_START (0)
#define SOC_CRGPERIPH_MDM_SEC_RSTSTAT_ip_rst_modem_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int ip_prst_ipc_mdm_sec : 1;
        unsigned int ip_prst_gpio0_se : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 28;
    } reg;
} SOC_CRGPERIPH_GENERAL_SEC_RSTEN_UNION;
#endif
#define SOC_CRGPERIPH_GENERAL_SEC_RSTEN_ip_prst_ipc_mdm_sec_START (1)
#define SOC_CRGPERIPH_GENERAL_SEC_RSTEN_ip_prst_ipc_mdm_sec_END (1)
#define SOC_CRGPERIPH_GENERAL_SEC_RSTEN_ip_prst_gpio0_se_START (2)
#define SOC_CRGPERIPH_GENERAL_SEC_RSTEN_ip_prst_gpio0_se_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int ip_prst_ipc_mdm_sec : 1;
        unsigned int ip_prst_gpio0_se : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 28;
    } reg;
} SOC_CRGPERIPH_GENERAL_SEC_RSTDIS_UNION;
#endif
#define SOC_CRGPERIPH_GENERAL_SEC_RSTDIS_ip_prst_ipc_mdm_sec_START (1)
#define SOC_CRGPERIPH_GENERAL_SEC_RSTDIS_ip_prst_ipc_mdm_sec_END (1)
#define SOC_CRGPERIPH_GENERAL_SEC_RSTDIS_ip_prst_gpio0_se_START (2)
#define SOC_CRGPERIPH_GENERAL_SEC_RSTDIS_ip_prst_gpio0_se_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int ip_prst_ipc_mdm_sec : 1;
        unsigned int ip_prst_gpio0_se : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 28;
    } reg;
} SOC_CRGPERIPH_GENERAL_SEC_RSTSTAT_UNION;
#endif
#define SOC_CRGPERIPH_GENERAL_SEC_RSTSTAT_ip_prst_ipc_mdm_sec_START (1)
#define SOC_CRGPERIPH_GENERAL_SEC_RSTSTAT_ip_prst_ipc_mdm_sec_END (1)
#define SOC_CRGPERIPH_GENERAL_SEC_RSTSTAT_ip_prst_gpio0_se_START (2)
#define SOC_CRGPERIPH_GENERAL_SEC_RSTSTAT_ip_prst_gpio0_se_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_pclk_ipc_mdm_sec : 1;
        unsigned int gt_pclk_gpio0_se : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 27;
    } reg;
} SOC_CRGPERIPH_GENERAL_SEC_PEREN_UNION;
#endif
#define SOC_CRGPERIPH_GENERAL_SEC_PEREN_gt_pclk_ipc_mdm_sec_START (0)
#define SOC_CRGPERIPH_GENERAL_SEC_PEREN_gt_pclk_ipc_mdm_sec_END (0)
#define SOC_CRGPERIPH_GENERAL_SEC_PEREN_gt_pclk_gpio0_se_START (1)
#define SOC_CRGPERIPH_GENERAL_SEC_PEREN_gt_pclk_gpio0_se_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_pclk_ipc_mdm_sec : 1;
        unsigned int gt_pclk_gpio0_se : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 27;
    } reg;
} SOC_CRGPERIPH_GENERAL_SEC_PERDIS_UNION;
#endif
#define SOC_CRGPERIPH_GENERAL_SEC_PERDIS_gt_pclk_ipc_mdm_sec_START (0)
#define SOC_CRGPERIPH_GENERAL_SEC_PERDIS_gt_pclk_ipc_mdm_sec_END (0)
#define SOC_CRGPERIPH_GENERAL_SEC_PERDIS_gt_pclk_gpio0_se_START (1)
#define SOC_CRGPERIPH_GENERAL_SEC_PERDIS_gt_pclk_gpio0_se_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_pclk_ipc_mdm_sec : 1;
        unsigned int gt_pclk_gpio0_se : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 27;
    } reg;
} SOC_CRGPERIPH_GENERAL_SEC_PERCLKEN_UNION;
#endif
#define SOC_CRGPERIPH_GENERAL_SEC_PERCLKEN_gt_pclk_ipc_mdm_sec_START (0)
#define SOC_CRGPERIPH_GENERAL_SEC_PERCLKEN_gt_pclk_ipc_mdm_sec_END (0)
#define SOC_CRGPERIPH_GENERAL_SEC_PERCLKEN_gt_pclk_gpio0_se_START (1)
#define SOC_CRGPERIPH_GENERAL_SEC_PERCLKEN_gt_pclk_gpio0_se_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int st_pclk_ipc_mdm_sec : 1;
        unsigned int st_pclk_gpio0_se : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 27;
    } reg;
} SOC_CRGPERIPH_GENERAL_SEC_PERSTAT_UNION;
#endif
#define SOC_CRGPERIPH_GENERAL_SEC_PERSTAT_st_pclk_ipc_mdm_sec_START (0)
#define SOC_CRGPERIPH_GENERAL_SEC_PERSTAT_st_pclk_ipc_mdm_sec_END (0)
#define SOC_CRGPERIPH_GENERAL_SEC_PERSTAT_st_pclk_gpio0_se_START (1)
#define SOC_CRGPERIPH_GENERAL_SEC_PERSTAT_st_pclk_gpio0_se_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ipc_mdm_sec_clkrst_bypass : 1;
        unsigned int gpio0_se_clkrst_bypass : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 29;
    } reg;
} SOC_CRGPERIPH_SEC_IPCLKRST_BYPASS_UNION;
#endif
#define SOC_CRGPERIPH_SEC_IPCLKRST_BYPASS_ipc_mdm_sec_clkrst_bypass_START (0)
#define SOC_CRGPERIPH_SEC_IPCLKRST_BYPASS_ipc_mdm_sec_clkrst_bypass_END (0)
#define SOC_CRGPERIPH_SEC_IPCLKRST_BYPASS_gpio0_se_clkrst_bypass_START (1)
#define SOC_CRGPERIPH_SEC_IPCLKRST_BYPASS_gpio0_se_clkrst_bypass_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 16;
        unsigned int bitmasken : 16;
    } reg;
} SOC_CRGPERIPH_GENERAL_SEC_CLKDIV0_UNION;
#endif
#define SOC_CRGPERIPH_GENERAL_SEC_CLKDIV0_bitmasken_START (16)
#define SOC_CRGPERIPH_GENERAL_SEC_CLKDIV0_bitmasken_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int nsaidws0 : 4;
        unsigned int nsaidrs0 : 4;
        unsigned int nsaidcrs0 : 4;
        unsigned int nsaid_enabled_s0 : 1;
        unsigned int nsaidws1 : 4;
        unsigned int nsaidrs1 : 4;
        unsigned int nsaidcrs1 : 4;
        unsigned int nsaid_enabled_s1 : 1;
        unsigned int nsaid_enable_s2 : 1;
        unsigned int nsaid_enable_s3 : 1;
        unsigned int sd_low : 1;
        unsigned int sf_ram_icg_bypass : 1;
        unsigned int nsaid_mpu_redefine_bypass : 1;
        unsigned int sd_bypass : 1;
    } reg;
} SOC_CRGPERIPH_CCI400_CTRL2_UNION;
#endif
#define SOC_CRGPERIPH_CCI400_CTRL2_nsaidws0_START (0)
#define SOC_CRGPERIPH_CCI400_CTRL2_nsaidws0_END (3)
#define SOC_CRGPERIPH_CCI400_CTRL2_nsaidrs0_START (4)
#define SOC_CRGPERIPH_CCI400_CTRL2_nsaidrs0_END (7)
#define SOC_CRGPERIPH_CCI400_CTRL2_nsaidcrs0_START (8)
#define SOC_CRGPERIPH_CCI400_CTRL2_nsaidcrs0_END (11)
#define SOC_CRGPERIPH_CCI400_CTRL2_nsaid_enabled_s0_START (12)
#define SOC_CRGPERIPH_CCI400_CTRL2_nsaid_enabled_s0_END (12)
#define SOC_CRGPERIPH_CCI400_CTRL2_nsaidws1_START (13)
#define SOC_CRGPERIPH_CCI400_CTRL2_nsaidws1_END (16)
#define SOC_CRGPERIPH_CCI400_CTRL2_nsaidrs1_START (17)
#define SOC_CRGPERIPH_CCI400_CTRL2_nsaidrs1_END (20)
#define SOC_CRGPERIPH_CCI400_CTRL2_nsaidcrs1_START (21)
#define SOC_CRGPERIPH_CCI400_CTRL2_nsaidcrs1_END (24)
#define SOC_CRGPERIPH_CCI400_CTRL2_nsaid_enabled_s1_START (25)
#define SOC_CRGPERIPH_CCI400_CTRL2_nsaid_enabled_s1_END (25)
#define SOC_CRGPERIPH_CCI400_CTRL2_nsaid_enable_s2_START (26)
#define SOC_CRGPERIPH_CCI400_CTRL2_nsaid_enable_s2_END (26)
#define SOC_CRGPERIPH_CCI400_CTRL2_nsaid_enable_s3_START (27)
#define SOC_CRGPERIPH_CCI400_CTRL2_nsaid_enable_s3_END (27)
#define SOC_CRGPERIPH_CCI400_CTRL2_sd_low_START (28)
#define SOC_CRGPERIPH_CCI400_CTRL2_sd_low_END (28)
#define SOC_CRGPERIPH_CCI400_CTRL2_sf_ram_icg_bypass_START (29)
#define SOC_CRGPERIPH_CCI400_CTRL2_sf_ram_icg_bypass_END (29)
#define SOC_CRGPERIPH_CCI400_CTRL2_nsaid_mpu_redefine_bypass_START (30)
#define SOC_CRGPERIPH_CCI400_CTRL2_nsaid_mpu_redefine_bypass_END (30)
#define SOC_CRGPERIPH_CCI400_CTRL2_sd_bypass_START (31)
#define SOC_CRGPERIPH_CCI400_CTRL2_sd_bypass_END (31)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
