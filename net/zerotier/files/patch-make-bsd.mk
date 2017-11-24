--- make-bsd.mk.orig	2017-04-24 18:41:23 UTC
+++ make-bsd.mk
@@ -142,7 +142,7 @@ clean:
 	rm -rf *.o node/*.o controller/*.o osdep/*.o service/*.o ext/http-parser/*.o build-* zerotier-one zerotier-idtool zerotier-selftest zerotier-cli ZeroTierOneInstaller-* $(OBJS)
 
 debug:	FORCE
-	make -j 4 ZT_DEBUG=1
+	$(MAKE) -j 4 ZT_DEBUG=1
 
 install:	one
 	rm -f /usr/local/sbin/zerotier-one
