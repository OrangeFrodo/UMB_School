#include <stdio.h>
#include <stdlib.h>

// definicia noveho typu - struktura
typedef struct {
    int telefonne_cislo;
    int pocet_volani;
} ZOZNAM;


int main (void) {
    int n, i;

    printf("Zadaj cele kladne cislo n: ");
    scanf("%d", &n);
    ZOZNAM pole[n];

    for (i=0; i<n; i++) {
        printf("Zadaj telefone cislo: ");
        scanf("%d", &pole[i].telefonne_cislo);
        printf("Zadaj pocet volani: ");
        scanf("%d", &pole[i].pocet_volani);
    }

    int indexmaxima;
    indexmaxima = 0;
    
    for (i=0; i<n; i++) {
        if (pole[i].pocet_volani > pole[indexmaxima].pocet_volani) {
            indexmaxima = i;
        }
    }

    printf("Najcviac volane cislo je %d", pole[indexmaxima].telefonne_cislo);

    return 0;
}