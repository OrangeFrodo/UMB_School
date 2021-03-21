// štruktúru ľudí, priemer výšok a vypísať človeka s výškou, ktorá bola najbližšie priemernej výške

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    char meno[20];
    int vek;
    int vyska;
} CLOVEK;

int main() {
    int n, spolu_vyska, i, min_v, docas_v, index;

    printf("Pocet ludi: ");
    scanf("%d", &n);

    CLOVEK pole[n];

    spolu_vyska = 0;

    for (i=0; i<n; i++) {
        printf("Meno %d cloveka: ", i+1);
        scanf("%s", &pole[i].meno);

        printf("Vek %d cloveka: ", i+1);
        scanf("%d", &pole[i].vek);

        printf("Vyska %d cloveka: ", i+1);
        scanf("%d", &pole[i].vyska);
    
        spolu_vyska = spolu_vyska + pole[i].vyska;
    }

    spolu_vyska = spolu_vyska/n;

    min_v = abs(spolu_vyska-pole[0].vyska);
    index = 1;

    for (i=0; i<n; i++) {
        docas_v = abs(spolu_vyska-pole[i].vyska);
        if (min_v > docas_v) {
            min_v = docas_v;
            index = i;
        }
    }

    printf("Najblizsie k priemeru je clovek menom %s", pole[index].meno);

    return 0;
}