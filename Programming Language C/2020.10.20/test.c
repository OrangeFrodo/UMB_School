#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   
    float a,b,O,S;

    printf("Zadaj cele cislo a: ");
    scanf("%f", &a);
    printf("Zadaj cele cislo b: ");
    scanf("%f", &b);

    O = 2*a + 2*b;
    S = a*b;


    printf("Osah je %f, Obvod je %f", S,O);
    return 0;
}