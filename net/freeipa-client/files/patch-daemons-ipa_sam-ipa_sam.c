--- daemons/ipa-sam/ipa_sam.c	2024-06-14 12:05:18.029171000 +0000
+++ daemons/ipa-sam/ipa_sam.c	2022-04-21 10:05:44.640628905 +0000
@@ -12,6 +12,11 @@
 #include <ldap.h>
 #include <krb5/krb5.h>
 
+#define HAVE_SMBLDAP_SET_BIND_CALLBACK
+#define HAVE_SMBLDAP_GET_LDAP
+char *strcasestr(const char *big, const char *little);
+
+
 #include <talloc.h>
 
 #include <param.h>
