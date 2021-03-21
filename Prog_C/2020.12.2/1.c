#include <stdio.h>
#include <stdlib.h>

// definicia noveho typu - struktura
typedef struct {
    char meno[20];
    int rok_narodenia;
} CLOVEK;


int main (void) {
    int n;

    do {
        printf("Zadaj pocet prvkov pola: ");
        scanf("%d", &n);
    } while (n<=0); // opaku ak nieje kladne

    CLOVEK p[n];
    int i;

    for(i=0; i<n; i++) {
        printf("Zadaj meno %d cloveka: ", i+1);
        scanf("%s", p[i].meno); // string nieje nutne mať &

        printf("Zadaj rok narodenia %d cloveka: ", i+1);
        scanf("%d", &p[i].rok_narodenia);
    }

    for(i=0; i<n; i++) {
        if (p[i].rok_narodenia > 2000) {
            printf("%s \n", p[i].meno);
        }
    }

    return 0;
}