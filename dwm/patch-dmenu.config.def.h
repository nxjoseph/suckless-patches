--- config.def.h.orig	2023-12-11 13:13:37.376459000 +0300
+++ config.def.h	2023-12-11 13:13:54.784382000 +0300
@@ -56,7 +56,7 @@
 #define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }
 
 /* commands */
-static const char *dmenucmd[] = { "dmenu_run", "-fn", dmenufont, "-nb", col_gray1, "-nf", col_gray3, "-sb", col_cyan, "-sf", col_gray4, NULL };
+static const char *dmenucmd[] = { "dmenu_run", "-fn", dmenufont, "-c", NULL };
 static const char *termcmd[]  = { "st", NULL };
 
 static const Key keys[] = {
