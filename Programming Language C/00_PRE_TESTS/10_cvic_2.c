#include <stdio.h>
#include <stdlib.h>


void vymena(int *cislo_a, int *cislo_b) 
{  
    int p = 0;

    p = *cislo_a;
    *cislo_a = *cislo_b;
    *cislo_b = p;
}

int main()
{
    int cislo_a, cislo_b;

    printf("Zadaj cislo A a B: \n");
    scanf("%d %d", &cislo_a, &cislo_b);

    printf("To pred vym %d ... %d \n", cislo_a, cislo_b);
    vymena(&cislo_a, &cislo_b);
    printf("To po vym %d ... %d", cislo_a, cislo_b);

    return 0;
}