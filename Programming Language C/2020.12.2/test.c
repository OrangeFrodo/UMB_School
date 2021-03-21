#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    char znacka[5];
    int spotreba;
} AUTO;

int main (void) {

    int n;

    do {
        printf("Zadaj pocet prvkov pola: ");
        scanf("%d", &n);
    } while (n<=0);

    AUTO p[n], pom;
    int i;

    for(i=0; i<n; i++) {
        printf("Zadaj znacku %d auta (max 5 znakov): ", i+1);
        scanf("%s", p[i].znacka); 

        printf("Zadaj spotrebu %d auta: ", i+1);
        scanf("%d", &p[i].spotreba);
    }

    int najSpotr = 0;

    for(i=0; i<n; i++) {
        if (p[najSpotr].spotreba < p[i].spotreba) {
            najSpotr = i;
        }
    }

    pom.spotreba = p[najSpotr].spotreba;
    strcpy(pom.znacka, p[0].znacka);

    p[najSpotr].spotreba = p[0].spotreba;
    strcpy(p[0].znacka, p[najSpotr].znacka);

    p[0].spotreba = pom.spotreba;
    strcpy(p[najSpotr].znacka, pom.znacka);

    //vypis pola
    for (int i = 0; i < n; i++) {
        printf("%s\t%d\n", p[i].znacka, p[i].spotreba);
    }

    return 0;
}