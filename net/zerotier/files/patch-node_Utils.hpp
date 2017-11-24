--- node/Utils.hpp.orig	2017-04-24 18:41:23 UTC
+++ node/Utils.hpp
@@ -30,6 +30,10 @@
 #include <vector>
 #include <map>
 
+#if defined(__FreeBSD__)
+#include <sys/endian.h>
+#endif
+
 #include "Constants.hpp"
 
 namespace ZeroTier {
@@ -293,8 +297,12 @@ class Utils (public)
 		throw()
 	{
 #if __BYTE_ORDER == __LITTLE_ENDIAN
-#if defined(__GNUC__) && (!defined(__OpenBSD__))
+#if defined(__GNUC__)
+#if defined(__FreeBSD__)
+		return bswap64(n);
+#elif (!defined(__OpenBSD__))
 		return __builtin_bswap64(n);
+#endif
 #else
 		return (
 			((n & 0x00000000000000FFULL) << 56) | 
@@ -323,8 +331,12 @@ class Utils (public)
 		throw()
 	{
 #if __BYTE_ORDER == __LITTLE_ENDIAN
-#if defined(__GNUC__) && !defined(__OpenBSD__)
+#if defined(__GNUC__)
+#if defined(__FreeBSD__)
+		return bswap64(n);
+#elif (!defined(__OpenBSD__))
 		return __builtin_bswap64(n);
+#endif
 #else
 		return (
 			((n & 0x00000000000000FFULL) << 56) | 
