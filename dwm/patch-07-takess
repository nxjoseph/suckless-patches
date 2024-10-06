--- config.def.h.orig	2023-12-11 15:43:34.789348000 +0300
+++ config.def.h	2023-12-11 15:44:22.421403000 +0300
@@ -62,6 +62,7 @@
 static const char *incrvol[] = { "mixer", "vol.volume=+0.10", NULL };
 static const char *decrvol[] = { "mixer", "vol.volume=-0.10", NULL };
 static const char *mutevol[] = { "mixer", "vol.mute=^", NULL };
+static const char *takess[]  = { "scrot", NULL };
 
 #define XK_XF86AudioLowerVolume 0x1008ff11
 #define XK_XF86AudioMute	0x1008ff12
@@ -105,6 +106,7 @@
 	{ 0x0,				XK_XF86AudioRaiseVolume,	spawn,	{.v = incrvol } },
 	{ 0x0,				XK_XF86AudioLowerVolume,	spawn,	{.v = decrvol } },
 	{ 0x0,				XK_XF86AudioMute,		spawn,	{.v = mutevol } },
+	{ 0x0,				XK_Print,			spawn,	{.v = takess  } },
 };
 
 /* button definitions */
