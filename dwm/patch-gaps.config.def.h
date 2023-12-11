--- config.def.h.orig	2023-12-10 23:00:07.748513000 +0300
+++ config.def.h	2023-12-10 23:00:28.723789000 +0300
@@ -2,6 +2,7 @@
 
 /* appearance */
 static const unsigned int borderpx  = 1;        /* border pixel of windows */
+static const unsigned int gappx     = 10;        /* gap pixel between windows */
 static const unsigned int snap      = 32;       /* snap pixel */
 static const int showbar            = 1;        /* 0 means no bar */
 static const int topbar             = 1;        /* 0 means bottom bar */
