Description: <short summary of the patch>
 TODO: Put a short summary on the line above and replace this paragraph
 with a longer explanation of this change. Complete the meta-information
 with other relevant fields (see below for details). To make it easier, the
 information below has been extracted from the changelog. Adjust it or drop
 it.
 .
 cloudcompare (2.11.3-4) unstable; urgency=medium
 .
   * Apply patch to fix FTBFS. (Closes: #996589)
     Thanks Adrian Bunk.
Author: Gürkan Myczko <tar@debian.org>
Bug-Debian: https://bugs.debian.org/996589

---
The information above should follow the Patch Tagging Guidelines, please
checkout http://dep.debian.net/deps/dep3/ to learn about the format. Here
are templates for supplementary fields that you might want to add:

Origin: <vendor|upstream|other>, <url of original patch>
Bug: <url in upstream bugtracker>
Bug-Debian: https://bugs.debian.org/<bugnumber>
Bug-Ubuntu: https://launchpad.net/bugs/<bugnumber>
Forwarded: <no|not-needed|url proving that it has been forwarded>
Reviewed-By: <name and email of someone who approved the patch>
Last-Update: 2021-11-17

--- cloudcompare-2.11.3.orig/plugins/core/Standard/qRANSAC_SD/RANSAC_SD_orig/MiscLib/AlignedAllocator.h
+++ cloudcompare-2.11.3/plugins/core/Standard/qRANSAC_SD/RANSAC_SD_orig/MiscLib/AlignedAllocator.h
@@ -3,9 +3,8 @@
 #include <memory>
 #ifndef __APPLE__
 #include <malloc.h>
-#else
-#include <stdlib.h>
 #endif
+#include <stdlib.h>
 
 #if defined(__x86_64__) || defined(__i386__) || defined(_M_IX86) || defined(_M_X64)
 #include <xmmintrin.h>
