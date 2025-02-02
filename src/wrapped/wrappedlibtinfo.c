#define _GNU_SOURCE         /* See feature_test_macros(7) */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>

#include "wrappedlibs.h"

#include "debug.h"
#include "wrapper.h"
#include "bridge.h"
#include "librarian/library_private.h"
#include "x86emu.h"
#include "emu/x86emu_private.h"
#include "callback.h"
#include "librarian.h"
#include "box86context.h"
#include "emu/x86emu_private.h"
#include "myalign.h"

const char* libtinfoName = "libtinfo.so.5";
#define LIBNAME libtinfo

#define ADDED_FUNCTIONS()           \

#include "generated/wrappedlibtinfotypes.h"

#include "wrappercallback.h"

// utility functions
#define SUPER() \
GO(0)   \
GO(1)   \
GO(2)   \
GO(3)   \
GO(4)

// putc
#define GO(A)   \
static uintptr_t my_putc_fct_##A = 0;                           \
static int my_putc_##A(char c)                                  \
{                                                               \
    return (int)RunFunction(my_context, my_putc_fct_##A, 1, c); \
}
SUPER()
#undef GO
static void* find_putc_Fct(void* fct)
{
    if(!fct) return NULL;
    void* p;
    if((p = GetNativeFnc((uintptr_t)fct))) return p;
    #define GO(A) if(my_putc_fct_##A == (uintptr_t)fct) return my_putc_##A;
    SUPER()
    #undef GO
    #define GO(A) if(my_putc_fct_##A == 0) {my_putc_fct_##A = (uintptr_t)fct; return my_putc_##A; }
    SUPER()
    #undef GO
    printf_log(LOG_NONE, "Warning, no more slot for libSSL putc callback\n");
    return NULL;
}

#undef SUPER

EXPORT int my_tputs(x86emu_t* emu, void* str, int affcnt, void* f)
{
    (void)emu;
    return my->tputs(str, affcnt, find_putc_Fct(f));
}

#define CUSTOM_INIT \
    getMy(lib);

#define CUSTOM_FINI \
    freeMy();

#include "wrappedlib_init.h"
