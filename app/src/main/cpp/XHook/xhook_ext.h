//
// Created by MacBookPro on 2021/11/9.
//

#ifndef XHOOKDEMO_XHOOK_EXT_H
#define XHOOKDEMO_XHOOK_EXT_H



#include <stddef.h>
#include "xhook.h"

#ifdef __cplusplus
extern "C" {
#endif

extern void* xhook_elf_open(const char *path) XHOOK_EXPORT;

extern int xhook_got_hook_symbol(void* h_lib, const char* symbol, void* new_func, void** old_func) XHOOK_EXPORT;

extern void xhook_elf_close(void *h_lib) XHOOK_EXPORT;


#ifdef __cplusplus
}
#endif


#endif //XHOOKDEMO_XHOOK_EXT_H
