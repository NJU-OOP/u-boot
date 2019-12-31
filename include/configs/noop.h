/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * (C) Copyright 2003
 * Wolfgang Denk, DENX Software Engineering, wd@denx.de.
 */

/*
 * This file contains the configuration parameters for qemu-mips target.
 */

#ifndef __MIPS32_NJUOOP_CONFIG_H
#define __MIPS32_NJUOOP_CONFIG_H

// #define DEBUG // enable debug output

#define CONFIG_TIMESTAMP /* Print image info with timestamp */

#define CONFIG_EXTRA_ENV_SETTINGS \
  "console=ttyUL0,${baudrate} "   \
  "panic=1\0"                     \
  ""

#ifdef CONFIG_SYS_BIG_ENDIAN
#  error "not big endian"
#endif

/*
 * Miscellaneous configurable options
 */

#define CONFIG_SYS_MALLOC_LEN (256 << 10)

#define CONFIG_SYS_MHZ 50

#define CONFIG_SYS_MIPS_TIMER_FREQ (CONFIG_SYS_MHZ * 1000000)

/* default load address */
#define CONFIG_SYS_LOAD_ADDR 0x80000000

/*-----------------------------------------------------------------------
 * FLASH and environment organization
 */
/* The following #defines are needed to get flash environment right */
#define CONFIG_SYS_MONITOR_BASE CONFIG_SYS_TEXT_BASE

#define CONFIG_SYS_INIT_SP_OFFSET 0x400000

/* We boot from this flash, selected with dip switch */
#define CONFIG_SYS_FLASH_BASE 0xbfc00000
#define CONFIG_SYS_MAX_FLASH_BANKS 1
#define CONFIG_SYS_MAX_FLASH_SECT 128
#define CONFIG_SYS_FLASH_CFI
#define CONFIG_FLASH_CFI_DRIVER
#define CONFIG_SYS_FLASH_USE_BUFFER_WRITE

/* lowlevel init is not needed */
#define CONFIG_SKIP_LOWLEVEL_INIT

#endif /* __CONFIG_H */
