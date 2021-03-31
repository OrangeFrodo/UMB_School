#include <stdio.h>
#include <stdlib.h>

int main()
{  
    unsigned x, n, i;
    printf("Zadaj cele kladne cislo: ");
    scanf("%u", &x);

    printf("Zadaj posun: ");
    scanf("%u", &n);

    for (i=0; i<n; i++) {
        //x = x >> 1;
        x >>= 1;
        printf("%u\t%u\n", i, x);
    }

    /*
    10100110
    >> 1
    01010011
    >> 1
    00101001
    */

    return(0);
}
