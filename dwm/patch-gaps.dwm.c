--- dwm.c.orig	2023-12-10 23:00:13.940589000 +0300
+++ dwm.c	2023-12-10 23:03:07.958737000 +0300
@@ -1669,7 +1669,7 @@
 void
 tile(Monitor *m)
 {
-	unsigned int i, n, h, mw, my, ty;
+	unsigned int i, n, h, r, g = 0, mw, my, ty;	
 	Client *c;
 
 	for (n = 0, c = nexttiled(m->clients); c; c = nexttiled(c->next), n++);
@@ -1677,20 +1677,22 @@
 		return;
 
 	if (n > m->nmaster)
-		mw = m->nmaster ? m->ww * m->mfact : 0;
+		mw = m->nmaster ? (m->ww - (g = gappx)) * m->mfact : 0;		
 	else
 		mw = m->ww;
 	for (i = my = ty = 0, c = nexttiled(m->clients); c; c = nexttiled(c->next), i++)
 		if (i < m->nmaster) {
-			h = (m->wh - my) / (MIN(n, m->nmaster) - i);
+			r = MIN(n, m->nmaster) - i;
+			h = (m->wh - my - gappx * (r - 1)) / r;
 			resize(c, m->wx, m->wy + my, mw - (2*c->bw), h - (2*c->bw), 0);
 			if (my + HEIGHT(c) < m->wh)
-				my += HEIGHT(c);
+				my += HEIGHT(c) + gappx;
 		} else {
-			h = (m->wh - ty) / (n - i);
-			resize(c, m->wx + mw, m->wy + ty, m->ww - mw - (2*c->bw), h - (2*c->bw), 0);
+			r = n - i;
+			h = (m->wh - ty - gappx * (r - 1)) / r;
+			resize(c, m->wx + mw + g, m->wy + ty, m->ww - mw - g - (2*c->bw), h - (2*c->bw), False);
 			if (ty + HEIGHT(c) < m->wh)
-				ty += HEIGHT(c);
+				ty += HEIGHT(c) + gappx;
 		}
 }
 
