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

    float p[n]; // az ked viem kolko je n

    // Nacitanie
    for (i = 0; i < n; i++) {
        printf("Zadaj %d prvok : ", i);
        scanf("%f", &p[i]);
    }

    // Hladanie minima
    float hmin;
    int imin; // hodnota, index
    hmin = p[0];
    imin = 0;

    for (i=1; i<n; i++) {
        if (p[i] < p[imin]) {
            hmin = p[i];
            imin = i;
        }
    }

    printf("Najmensi prvok %f je na pozicii %d \n", hmin, imin);

    // Výmena
    p[imin] = p[n-1];
    p[n-1] = hmin;

    // výpis pole
    for (i=0; i<n; i++) {
        printf("%0.2f, ", p[i]);
    }

    return 0;
}
