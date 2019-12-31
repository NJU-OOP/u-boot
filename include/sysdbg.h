#ifndef NEMU_MIPS32_SYSDBG
#define NEMU_MIPS32_SYSDBG

#define sysdbg(...)                                                  \
  do {                                                               \
    int i = 0;                                                       \
    static char buf[128];                                            \
    int n = snprintf(buf, sizeof(buf) - 1, __VA_ARGS__);             \
    for (; i < n; i++) asm volatile("mtc0 %0, $7, 1" ::"r"(buf[i])); \
  } while (0)

#endif
