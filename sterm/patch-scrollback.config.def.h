--- config.def.h.orig	2022-10-04 20:41:26.000000000 +0300
+++ config.def.h	2023-12-10 21:42:11.958513000 +0300
@@ -201,6 +201,8 @@
 	{ TERMMOD,              XK_Y,           selpaste,       {.i =  0} },
 	{ ShiftMask,            XK_Insert,      selpaste,       {.i =  0} },
 	{ TERMMOD,              XK_Num_Lock,    numlock,        {.i =  0} },
+	{ ShiftMask,            XK_Page_Up,     kscrollup,      {.i = -1} },
+	{ ShiftMask,            XK_Page_Down,   kscrolldown,    {.i = -1} },
 };
 
 /*
