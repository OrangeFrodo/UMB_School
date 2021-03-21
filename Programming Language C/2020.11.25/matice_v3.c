#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    printf("Zadaj rozmer matice: ");
    scanf("%d", &n);

    int A[n][n], B[n][n], i, j;

    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("Zadaj cele cislo: ");
            scanf("%d", &A[i][j]);
        }
    }

    for (i=0; i<n; i++) {       // Riadky
        for (j=0; j<n; j++) {   // Stlpce
            B[j][n-i-1] = A[i][j];
        }
    }

    
    for (i=0; i<n; i++) {       // Riadky
        for (j=0; j<n; j++) {   // Stlpce
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}