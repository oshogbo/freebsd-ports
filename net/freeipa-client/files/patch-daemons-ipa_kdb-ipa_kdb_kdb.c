--- daemons/ipa-kdb/ipa_kdb.c    2023-08-21 14:29:11.264700960 +0000
+++ daemons/ipa-kdb/ipa_kdb.c        2024-06-14 10:29:21.726567000 +0000
@@ -20,8 +20,10 @@
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
  */
 
+#include <sys/time.h>
 #include <talloc.h>
 #include <sys/utsname.h>
+#include <time.h>
 
 #include "ipa_kdb.h"
 #include "ipa_krb5.h"
