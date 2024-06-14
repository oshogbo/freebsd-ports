--- daemons/ipa-kdb/ipa_kdb_mspac_v6.c	2023-07-27 10:31:08.776120553 +0000
+++ daemons/ipa-kdb/ipa_kdb_mspac_v6.c	2024-06-14 11:26:01.435596000 +0000
@@ -31,6 +31,9 @@
 
 #include "ipa_kdb_mspac_private.h"
 
+#define KRB5_KDB_FLAG_CLIENT_REFERRALS_ONLY KRB5_KDB_FLAG_CLIENT
+#define KRB5_KDB_FLAG_INCLUDE_PAC KRB5_KDB_FLAG_CLIENT
+
 static
 krb5_error_code ipadb_verify_pac(krb5_context context,
                                  unsigned int flags,
