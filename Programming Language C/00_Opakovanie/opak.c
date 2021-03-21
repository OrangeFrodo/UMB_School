#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;

    printf("Velkost pola: ");
    scanf("%d", &n);

    int pole[n], i, j, kluc;

    for (i = 0; i<n; i++) {
        printf("Hodnota %d clena radu: ", i+1);
        scanf("%d", &pole[i]);
    }


    // INSERT SORT
    for(i=1; i<n; i++) {
        kluc = pole[i];
        j = i - 1;
        while (j>=0 && pole[j]<kluc) {
            pole[j+1] = pole[j];
            j--;
        }
        pole[j+1] = kluc;
    }


    printf("Vysledok: ");
    for(i = 0; i<n; i++) {
        printf("%d", pole[i]);
    }

    return 0;
}