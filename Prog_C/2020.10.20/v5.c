#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   
    int r;
    float S;

    printf("Zadaj polomer kruhu: ");
    scanf("%d", &r);

    S = 3.14 * r * r;

    printf("Obsah je %f", S);
    return 0;
}