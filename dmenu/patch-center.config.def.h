--- config.def.h.orig	2022-02-11 14:26:35.000000000 +0300
+++ config.def.h	2023-12-11 13:10:03.676155000 +0300
@@ -2,6 +2,8 @@
 /* Default settings; can be overriden by command line. */
 
 static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
+static int centered = 0;                    /* -c option; centers dmenu on screen */
+static int min_width = 500;                    /* minimum width when centered */
 /* -fn option overrides fonts[0]; default X11 font or font set */
 static const char *fonts[] = {
 	"monospace:size=10"
