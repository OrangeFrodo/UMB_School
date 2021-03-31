// BITS
#include <stdio.h>
#include <stdlib.h>

void dodvojkovej (unsigned x);

int main()
{   
    unsigned x, n, i;
    printf("Zadaj cele kladne cislo: ");
    scanf("%u", &x);

    printf("Zadaj posun: ");
    scanf("%u", &n);


    unsigned maska;
    maska = ~0;
    maska >>= 1;
    maska =  ~maska;    // 100000000000000000000000

    for (i=0; i<n; i++){
        int bola1 = x & 1;
        x >>= 1;
        if (bola1) {
            x |= maska;
        }
        printf("%u\t%i\n", i+1, x);
        dodvojkovej(x);
    }

    return(0);
}

void dodvojkovej (unsigned x) 
{
    unsigned maska;
    maska = ~0;
    maska >>= 1;
    maska =  ~maska;

    while (maska) {
        putchar(x & maska ? '1' : '0');
        maska >>= 1;
    }
    putchar('\n');
}