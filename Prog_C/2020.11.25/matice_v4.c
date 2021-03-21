#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    printf("Zadaj rozmer matice: ");
    scanf("%d", &n);

    int A[n][n], B[n][n], C[n][n], i, j, k;

    // Nacitanie matice A
    printf("Matica A");
    printf("\n");
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("Zadaj cele cislo: ");
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n");

    // Nacitanie matice B
    printf("Matica B");
    printf("\n");
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("Zadaj cele cislo: ");
            scanf("%d", &B[i][j]);
        }
    }

    // Násobenie
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            C[i][j] = 0;
            for(k=0; k<n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }


    for (i=0; i<n; i++) {       // Riadky
        for (j=0; j<n; j++) {   // Stlpce
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}