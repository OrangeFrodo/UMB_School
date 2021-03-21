#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main()
{   
    int n, i;
    printf("Zadaj pocet prvkov pola: ");
    scanf("%d", &n);

    int pole[n]; // az ked viem kolko je n

    // Priradovanie
    for (i = 0; i < n; i++) {
        printf("Zadaj %d prvok : ", i);
        scanf("%d", &pole[i]);
    }

    // Priradovanie na koniec pola
    for (i = n-1; i>=0; i--) {
        printf("%d", pole[i]);
    }

    return 0;
}