//
// Created by MacBookPro on 2021/11/9.
//

#include "xhook_ext.h"
#include "xh_core.h"
#include "xh_elf.h"
#include "xh_errno.h"

#include "xh_log.h"
#include "xh_util.h"

#ifdef XH_LOG_TAG
#undef XH_LOG_TAG
  #define XH_LOG_TAG "xhook_ext"
#endif


void* xhook_elf_open(const char *path)
{
    return xh_core_elf_open(path);
}


int xhook_got_hook_symbol(void* h_lib, const char* symbol, void* new_func, void** old_func)
{
    return xh_core_got_hook_symbol(h_lib, symbol, new_func, old_func);
}


void xhook_elf_close(void *h_lib)
{
    xh_core_elf_close(h_lib);
}
