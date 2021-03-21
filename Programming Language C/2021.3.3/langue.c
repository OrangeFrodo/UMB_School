#include <stdio.h>
#include <stdlib.h>

int main()
{
#ifdef SK
    printf("Ahoj svet!\n");
#elif defined DE
    printf("Hallo Welt\n");
#else
    printf("Hello world!\n");
#endif
    return 0;
}
