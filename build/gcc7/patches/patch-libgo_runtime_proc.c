$NetBSD: patch-libgo_runtime_proc.c,v 1.1 2013/04/02 09:57:52 jperkin Exp $

SunOS libelf does not support largefile.

diff -prwuN '--exclude=*.orig' gcc-7.3.0~/libgo/runtime/proc.c gcc-7.3.0/libgo/runtime/proc.c
--- gcc-7.3.0~/libgo/runtime/proc.c	2017-01-26 19:05:16.829028000 +0000
+++ gcc-7.3.0/libgo/runtime/proc.c	2018-05-08 14:43:28.848574359 +0000
@@ -12,6 +12,10 @@
 #include "config.h"
 
 #ifdef HAVE_DL_ITERATE_PHDR
+#ifdef __sun
+#undef _FILE_OFFSET_BITS
+#define _FILE_OFFSET_BITS 32
+#endif
 #include <link.h>
 #endif
 
