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

    float pole[n]; // az ked viem kolko je n

    // Nacitanie
    for (i = 0; i < n; i++) {
        printf("Zadaj %d prvok : ", i);
        scanf("%f", &pole[i]);
    }

    // Vypocet ARP
    float suma = 0.0, priemer;
    for (i = 0; i<n; i++) {
        suma = suma + pole[i];
    }
    priemer = suma / n;
    printf("Priemer je %f\n", priemer);

    float hodnota = pole[0];
    float rozdiel = fabs(pole[0] - priemer);
    for (i=0; i<n; i++) {
        if (fabs(pole[i]-priemer) <= rozdiel) {
            hodnota = pole[i];
            rozdiel = fabs(pole[i]-priemer);
        }
    }

    printf("Hodnota je %f\n", hodnota);

    return 0;
}