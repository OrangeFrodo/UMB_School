#include <stdio.h>
#include <stdlib.h>

// Insert Sort

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

    int kluc, j;

    for (i=1; i<n; i++) {
        kluc = A[i];
        j = i - 1;
        while(j>=0 && A[j]<kluc) { // Od max po min, od Min po max "A[j]>kluc"
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = kluc;
    }

    for(i=0; i<n; i++) {
        printf("%d", A[i]);
    }

    return 0;
}