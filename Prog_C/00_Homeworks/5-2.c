#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 10


int main()
{
    int hodnotaX;
    int a[MAX];
    int x, j;
    float mocA, mocB, fakt;

    printf("Zadaj hodnotu X : ");
    scanf("%d", &x);

    int vzorec;
    int i = 1;

    double y = x;
    fakt = x;

    while (i < MAX+1) {
        a[i] = i;
        vzorec = 2*a[i]+1;
        fakt = vzorec;

        mocA = pow(-1, a[i]);
        mocB = pow(x, vzorec);

        for (int j = 1; j<vzorec; j++)
            fakt *= j;

        y += mocA*mocB/fakt;
        printf("y = %f \n", y);
        printf("\n");

        i = i + 1;
    }

    return 0;
}