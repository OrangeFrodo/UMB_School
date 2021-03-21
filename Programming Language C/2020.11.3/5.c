// Prvocislo + možne delitele

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   
    int x;

    do {
        printf("Zadaj cele kladne cislo: "); // 1 2 3 4 5
        scanf("%d", &x);
    } while ( x<=0 ); // opakuj ak bude zly vstup x<=0

    int i, maDelitela;
    
    maDelitela = 0;

    for (i = 2; i <= x/2; i++) {
        if (x%i == 0) {
            printf("Delitel %d\n", i);
            maDelitela = 1;
        }
    }
    
    if (maDelitela == 0) {
        printf("Cislo je prvocislo");
    }


    return 0;
}