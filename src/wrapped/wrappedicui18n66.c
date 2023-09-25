#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _GNU_SOURCE         /* See feature_test_macros(7) */
#include <dlfcn.h>

#include "wrappedlibs.h"

#include "debug.h"
#include "wrapper.h"
#include "bridge.h"
#include "librarian/library_private.h"
#include "x64emu.h"
#include "emu/x64emu_private.h"
#include "callback.h"
#include "librarian.h"
#include "box64context.h"
#include "emu/x64emu_private.h"
#include "myalign.h"

const char* icui18n66Name = "libicui18n.so.66";
#define LIBNAME icui18n66

#define CUSTOM_INIT \
    SETALT(my66_);                          \
    setNeededLibs(lib, 1, "libicuuc.so.66");

#include "wrappedlib_init.h"

