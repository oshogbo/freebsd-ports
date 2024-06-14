--- daemons/ipa-kdb/ipa_kdb_mspac.c	2024-06-14 10:51:59.355528000 +0000
+++ daemons/ipa-kdb/ipa_kdb_mspac.c	2023-08-21 14:29:00.041643152 +0000
@@ -20,6 +20,8 @@
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
  */
+#include <string.h>
+char *strcasestr(const char *big, const char *little);
 #include "config.h"
 
 #include "ipa_hostname.h"

@@ -2030,6 +2028,7 @@
 
     /* According to MS-KILE, ResourceGroups must be zero, so check
      * that it is the case here */
+#define HAVE_STRUCT_PAC_DOMAIN_GROUP_MEMBERSHIP
 #ifdef HAVE_STRUCT_PAC_DOMAIN_GROUP_MEMBERSHIP
     if (info->info->resource_groups.domain_sid != NULL &&
         info->info->resource_groups.groups.count != 0) {
