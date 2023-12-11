--- st.h.orig	2022-10-04 20:41:26.000000000 +0300
+++ st.h	2023-12-10 21:42:11.960234000 +0300
@@ -81,6 +81,8 @@
 void redraw(void);
 void draw(void);
 
+void kscrolldown(const Arg *);
+void kscrollup(const Arg *);
 void printscreen(const Arg *);
 void printsel(const Arg *);
 void sendbreak(const Arg *);
