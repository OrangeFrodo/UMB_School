#include <stdio.h>
#include <stdlib.h>

// Bublle Sort

int main()
{
    int n;
    printf("Zadaj pocet prvkov pola: ");
    scanf("%d", &n);    

    int A[n], i;
    for (i = 0; i<n; i++) {
        printf("Zadaj %d prvok pola: ", i);
        scanf("%d", &A[i]);
    }

    int j, bola_vymena;    // Logicka premena 1=True, 0=False

    do {
        bola_vymena = 0;
        for(i=0; i<n-1; i++) {
            if (A[i] > A[i+1]) {    // Od min po max
                int pom;            // Vymena
                pom = A[i];
                A[i] = A[i+1];
                A[i+1] = pom;
                bola_vymena = 1;
            }
        }
    } while(bola_vymena == 1);

    for(i=0; i<n; i++) {
        printf("%d", A[i]);
    }
    printf("\n");

    return 0;
}