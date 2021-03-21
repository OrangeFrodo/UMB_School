#include <stdio.h>
#include <stdlib.h>

#define PI 3.14
#define na_druhu(x) ((x)*(x))

int main()
{
    printf("Zadaj polomer: ");
    float r, S;
    scanf("%f", &r);
    //toto je priklad pouzitia makier
    S = PI * na_druhu(r);
    printf("S = %f\n", S);
    return 0;
}