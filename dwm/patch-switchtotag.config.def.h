--- config.def.h.orig	2022-10-04 20:38:18.000000000 +0300
+++ config.def.h	2023-12-11 15:10:37.877765000 +0300
@@ -26,9 +26,9 @@
 	 *	WM_CLASS(STRING) = instance, class
 	 *	WM_NAME(STRING) = title
 	 */
-	/* class      instance    title       tags mask     isfloating   monitor */
-	{ "Gimp",     NULL,       NULL,       0,            1,           -1 },
-	{ "Firefox",  NULL,       NULL,       1 << 8,       0,           -1 },
+	/* class      instance    title       tags mask     switchtotag    isfloating   monitor */
+	{ "st-256color",     NULL,       NULL,       2 << 0,            1,             0,           -1 },
+	{ "firefox",  NULL,       NULL,       1 << 0,       1,             0,           -1 },
 };
 
 /* layout(s) */
