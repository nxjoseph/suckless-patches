--- dmenu.c.orig	2022-02-11 14:26:35.000000000 +0300
+++ dmenu.c	2023-12-11 13:10:03.676951000 +0300
@@ -89,6 +89,15 @@
 			break;
 }
 
+static int
+max_textw(void)
+{
+	int len = 0;
+	for (struct item *item = items; item && item->text; item++)
+		len = MAX(TEXTW(item->text), len);
+	return len;
+}
+
 static void
 cleanup(void)
 {
@@ -629,6 +638,7 @@
 	bh = drw->fonts->h + 2;
 	lines = MAX(lines, 0);
 	mh = (lines + 1) * bh;
+	promptw = (prompt && *prompt) ? TEXTW(prompt) - lrpad / 4 : 0;
 #ifdef XINERAMA
 	i = 0;
 	if (parentwin == root && (info = XineramaQueryScreens(dpy, &n))) {
@@ -655,9 +665,16 @@
 				if (INTERSECT(x, y, 1, 1, info[i]))
 					break;
 
-		x = info[i].x_org;
-		y = info[i].y_org + (topbar ? 0 : info[i].height - mh);
-		mw = info[i].width;
+		if (centered) {
+			mw = MIN(MAX(max_textw() + promptw, min_width), info[i].width);
+			x = info[i].x_org + ((info[i].width  - mw) / 2);
+			y = info[i].y_org + ((info[i].height - mh) / 2);
+		} else {
+			x = info[i].x_org;
+			y = info[i].y_org + (topbar ? 0 : info[i].height - mh);
+			mw = info[i].width;
+		}
+
 		XFree(info);
 	} else
 #endif
@@ -665,9 +682,16 @@
 		if (!XGetWindowAttributes(dpy, parentwin, &wa))
 			die("could not get embedding window attributes: 0x%lx",
 			    parentwin);
-		x = 0;
-		y = topbar ? 0 : wa.height - mh;
-		mw = wa.width;
+
+		if (centered) {
+			mw = MIN(MAX(max_textw() + promptw, min_width), wa.width);
+			x = (wa.width  - mw) / 2;
+			y = (wa.height - mh) / 2;
+		} else {
+			x = 0;
+			y = topbar ? 0 : wa.height - mh;
+			mw = wa.width;
+		}
 	}
 	promptw = (prompt && *prompt) ? TEXTW(prompt) - lrpad / 4 : 0;
 	inputw = MIN(inputw, mw/3);
@@ -727,6 +751,8 @@
 			topbar = 0;
 		else if (!strcmp(argv[i], "-f"))   /* grabs keyboard before reading stdin */
 			fast = 1;
+		else if (!strcmp(argv[i], "-c"))   /* centers dmenu on screen */
+			centered = 1;
 		else if (!strcmp(argv[i], "-i")) { /* case-insensitive item matching */
 			fstrncmp = strncasecmp;
 			fstrstr = cistrstr;
