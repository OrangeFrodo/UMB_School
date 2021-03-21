#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 10

int main()
{
    // Pocet prvkov
    int n, i;
    printf("Zadaj pocet prvkov pola: ");
    scanf("%d", &n);

    int p[n]; // az ked viem kolko je n

    // Nacitanie
    for (i = 0; i < n; i++) {
        printf("Zadaj %d prvok : ", i);
        scanf("%d", &p[i]);
    }

    int pom;
    pom = p[0];

    for (i=1; i<n; i++) {
        p[i-1] = p[i];
    }
    p[n-1] = pom;

    for (i = 0; i < n; i++) {
        printf("%d ", p[i]);
    } 

    return 0;
}
