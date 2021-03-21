#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    float vk, up;
    
    printf("Zadaj vklad:  ");
    scanf("%f", &vk);
    printf("Urokova sadzba v percentach:  ");
    scanf("%f", &up);

    vk = vk + (vk*up/100);

    printf("\n Po roku je na ucte = %f\n", vk);
    return 0;
}