#include <stdio.h>
#include <stdlib.h>

// Select Sort

int main()
{
    int n;
    printf("Zadaj pocet prvkov pola: ");
    scanf("%d", &n);    

    int A[n], i, j;
    for (i = 0; i<n; i++) {
        printf("Zadaj %d prvok pola: ", i);
        scanf("%d", &A[i]);
    }

    for(i=0; i<n-1; i++) {
        int imin = i;
        for(j=i; j<n; j++) {
            if (A[imin] > A[j]) { // Od max po min, "A[imin] < A[j]"
                imin = j;
            }
        }
        int pom; 
        pom = A[i];
        A[i] = A[imin];
        A[imin] = pom;
    }

    for(i=0; i<n; i++) {
        printf("%d", A[i]);
    }

    return 0;
}