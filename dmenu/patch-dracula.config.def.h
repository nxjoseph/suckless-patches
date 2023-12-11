--- config.def.h.orig	2022-02-11 14:26:35.000000000 +0300
+++ config.def.h	2023-12-11 13:03:52.818667000 +0300
@@ -9,8 +9,8 @@
 static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
 static const char *colors[SchemeLast][2] = {
 	/*     fg         bg       */
-	[SchemeNorm] = { "#bbbbbb", "#222222" },
-	[SchemeSel] = { "#eeeeee", "#005577" },
+	[SchemeNorm] = { "#f8f8f2", "#282a36" },
+	[SchemeSel] = { "#f8f8f2", "#6272a4" },
 	[SchemeOut] = { "#000000", "#00ffff" },
 };
 /* -l option; if nonzero, dmenu uses vertical list with given number of lines */
