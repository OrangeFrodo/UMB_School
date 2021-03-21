#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    int x, y;

    printf("Zadaj dve cele cisla (rozne) : ");
    scanf("%d %d", &x, &y);

    if (x%y == 0) {
        printf("Cislo %d je delitelne %d", x,y);
    } else {
        printf("Cislo %d nie je delitelne %d", x,y);
    }

    return 0;
}