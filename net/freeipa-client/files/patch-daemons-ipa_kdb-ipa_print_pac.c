--- daemons/ipa-kdb/ipa-print-pac.c      2023-10-03 12:38:45.782700145 +0000
+++ daemons/ipa-kdb/ipa-print-pac.c  2024-06-14 10:26:41.283846000 +0000
@@ -1,6 +1,9 @@
 /*
  * Copyright (C) 2020  FreeIPA Contributors see COPYING for license
  */
+#include <sys/time.h>
+#include <unistd.h>
+#include <time.h>
 #include <gen_ndr/ndr_krb5pac.h>
 #include <gssapi/gssapi_ext.h>
 #include <gssapi/gssapi_krb5.h>
