#!/bin/bash
<<<<<<< HEAD
./mkbootimg --kernel kernel --base 0x0 --cmdline "loglevel=4 initcall_debug=n page_tracker=on ssbd=kernel printktimer=0xfff0a000,0x534,0x538 androidboot.selinux=enforcing unmovable_isolate1=2:192M,3:224M,4:256M buildvariant=user" --tags_offset 0x07A00000 --kernel_offset 0x00080000 --ramdisk_offset 0x07c00000 --header_version 1 --os_version 9 --os_patch_level 2019-03-01  --output kernel.img
=======
./mkbootimg --kernel kernel --base 0x0 --cmdline "loglevel=4 initcall_debug=n page_tracker=on ssbd=kernel ssbd=kernel printktimer=0xfff0a000,0x534,0x538 androidboot.selinux=enforcing unmovable_isolate1=2:192M,3:224M,4:256M buildvariant=user" --tags_offset 0x07A00000 --kernel_offset 0x00080000 --ramdisk_offset 0x07c00000 --header_version 1 --os_version 9 --os_patch_level 2018-11-01  --output kernel.img
>>>>>>> parent of a33e705ac... PCT-AL10-TL10-L29
