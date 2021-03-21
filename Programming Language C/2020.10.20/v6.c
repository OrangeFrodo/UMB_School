#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   
    int x,y;

    printf("Zadaj cele cislo: ");
    scanf("%d", &x);
    printf("Zadaj cele cislo: ");
    scanf("%d", &y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("Hodnoty %d, %d", x,y);
    return 0;
}