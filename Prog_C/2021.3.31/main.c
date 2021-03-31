// BITS
#include <stdio.h>
#include <stdlib.h>

int main()
{   

    unsigned x;
    printf("Zadaj cele kladne cislo: ");
    scanf("%u", &x);
    if(x & 1) {
        printf("Cislo %u je neparne \n", x);
    } else {
        printf("Cislo %u je parne \n", x);
    }

    // {
    //     unsigned int a;
    //     a = ~0;
    //     printf("%u\n", a);
    // }

    // {
    //     unsigned short a;
    //     a = ~0;
    //     printf("ushort %u\n", a);
    // }

    // {
    //     signed int a;
    //     a = ~0;
    //     printf("signed it %d\n", a);
    // }

    return(0);
}