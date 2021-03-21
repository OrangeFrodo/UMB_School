#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    float a;
    
    printf("Zadaj stranu kocky: ");
    scanf("%f", &a);

    printf("\n Velkost uhlopriecky = %f\n", a*sqrt(3));
    return 0;
}