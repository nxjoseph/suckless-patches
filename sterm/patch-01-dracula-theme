--- config.def.h.orig	2022-10-04 20:41:26.000000000 +0300
+++ config.def.h	2023-12-10 21:45:01.114085000 +0300
@@ -95,28 +95,30 @@
 
 /* Terminal colors (16 first used in escape sequence) */
 static const char *colorname[] = {
-	/* 8 normal colors */
-	"black",
-	"red3",
-	"green3",
-	"yellow3",
-	"blue2",
-	"magenta3",
-	"cyan3",
-	"gray90",
+    /* 8 normal colors */
+    [0] = "#000000", /* black   */
+    [1] = "#ff5555", /* red     */
+    [2] = "#50fa7b", /* green   */
+    [3] = "#f1fa8c", /* yellow  */
+    [4] = "#bd93f9", /* blue    */
+    [5] = "#ff79c6", /* magenta */
+    [6] = "#8be9fd", /* cyan    */
+    [7] = "#bbbbbb", /* white   */
+                                  
+    /* 8 bright colors */
+    [8]  = "#44475a", /* black   */
+    [9]  = "#ff5555", /* red     */
+    [10] = "#50fa7b", /* green   */
+    [11] = "#f1fa8c", /* yellow  */
+    [12] = "#bd93f9", /* blue    */
+    [13] = "#ff79c6", /* magenta */
+    [14] = "#8be9fd", /* cyan    */
+    [15] = "#ffffff", /* white   */
+                                   
+    /* special colors */
+    [256] = "#282a36", /* background */
+    [257] = "#f8f8f2", /* foreground */
 
-	/* 8 bright colors */
-	"gray50",
-	"red",
-	"green",
-	"yellow",
-	"#5c5cff",
-	"magenta",
-	"cyan",
-	"white",
-
-	[255] = 0,
-
 	/* more colors can be added after 255 to use with DefaultXX */
 	"#cccccc",
 	"#555555",
@@ -127,12 +129,20 @@
 
 /*
  * Default colors (colorname index)
- * foreground, background, cursor, reverse cursor
+ * foreground, background, cursor
  */
-unsigned int defaultfg = 258;
-unsigned int defaultbg = 259;
-unsigned int defaultcs = 256;
+unsigned int defaultfg = 257;
+unsigned int defaultbg = 256;
+unsigned int defaultcs = 257;
 static unsigned int defaultrcs = 257;
+
+/*
+ * Colors used, when the specific fg == defaultfg. So in reverse mode this
+ * will reverse too. Another logic would only make the simple feature too
+ * complex.
+ */
+unsigned int defaultitalic = 7;
+unsigned int defaultunderline = 7;
 
 /*
  * Default shape of cursor
