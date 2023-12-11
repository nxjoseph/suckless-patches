--- config.def.h.orig	2023-12-11 14:50:51.840838000 +0300
+++ config.def.h	2023-12-11 14:52:36.562120000 +0300
@@ -34,7 +34,7 @@
 /* layout(s) */
 static const float mfact     = 0.55; /* factor of master area size [0.05..0.95] */
 static const int nmaster     = 1;    /* number of clients in master area */
-static const int resizehints = 1;    /* 1 means respect size hints in tiled resizals */
+static const int resizehints = 0;    /* 1 means respect size hints in tiled resizals */
 static const int lockfullscreen = 1; /* 1 will force focus on the fullscreen window */
 
 static const Layout layouts[] = {
