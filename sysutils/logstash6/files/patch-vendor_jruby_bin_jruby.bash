--- vendor/jruby/bin/jruby.bash.orig	2018-02-16 20:50:22 UTC
+++ vendor/jruby/bin/jruby.bash
@@ -244,7 +244,7 @@ do
      # Match -Xa.b.c=d to translate to -Da.b.c=d as a java option
      -X*)
         val=${1:2}
-        if expr "$val" : '.*[.]' > /dev/null; then
+        if expr -- "$val" : '.*[.]' > /dev/null; then
           java_args=("${java_args[@]}" "-Djruby.${val}")
         else
           ruby_args=("${ruby_args[@]}" "-X${val}")
