#include "LRUCache.h"
#include "cli_debug.h"
#include "cli_server.h"
#include <iostream>

int main()
{
    LRUCache cache{ 4 };

    startDebugCLI(cache);

    return 0;
}