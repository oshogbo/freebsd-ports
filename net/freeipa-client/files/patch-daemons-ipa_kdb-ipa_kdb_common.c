--- daemons/ipa-kdb/ipa_kdb_common.c        2023-08-21 14:29:00.041643152 +0000
+++ daemons/ipa-kdb/ipa_kdb_common.c    2024-06-14 10:27:18.130650000 +0000
@@ -20,6 +20,10 @@
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
  */
 
+#include <sys/time.h>
+#include <time.h>
+char *strptime(const char * __restrict, const char * __restrict,
+    struct tm * __restrict);
 #include "ipa_kdb.h"
 #include <unicase.h>
