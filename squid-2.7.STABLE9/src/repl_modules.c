/* automatically generated by ./repl_modules.sh lru heap
 * do not edit
 */
#include "squid.h"

extern REMOVALPOLICYCREATE createRemovalPolicy_lru;
extern REMOVALPOLICYCREATE createRemovalPolicy_heap;
void storeReplSetup(void)
{
	storeReplAdd("lru", createRemovalPolicy_lru);
	storeReplAdd("heap", createRemovalPolicy_heap);
}