#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;
    float D;
    float x1, x2;

    printf("a = ");
    scanf("%f", &a);

    printf("b = ");
    scanf("%f", &b);

    printf("c = ");
    scanf("%f", &c);
    D = b*b -4*a*c;
    if(D > 0){
        x1 = (-b + sqrt(D) )/2 * a;
        x2 = (-b + sqrt(D) )/2 * a;
        printf("Rovnica ma dva korene v R x1 = %f\nx2 = %f.\n", x1, x2);
    } 
    else if(D > 0) {
        printf("Rovnica nemá riešenie");
    }
    

    return 0;
}