#include <stdlib.h>
#include <stdio.h>

int main()
{
    int S, dnz, dz, j;

    printf("Zadaj sumu, vacsiu ako 7: ");
    scanf("%d", &S);
    printf("\n");

    if (S <= 7) {
        printf("Toto cislo nieje vacsie ako 7\n");
        return 0;
    }

    dnz=S/5;
    dz=S%5;

    while (dnz >= 0) {
        if((dz%3) == 0) {
            j++;
            dnz -= 1;
        } else {
            dnz -= 1;
        }
        dz = S-(dnz*5);
    }
    printf("  Pre toto cislo mame %d moznosti\n", j);

    return 0;
}
