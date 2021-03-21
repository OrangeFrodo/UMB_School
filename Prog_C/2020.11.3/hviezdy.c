#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   
    int x,y;
    printf("Zadaj pocet riadkov: ");
    scanf("%d", &x);

    int c;
    c = 0;

    for (int i = 1; i<=x; i++) {
        if (c < i) {
        for (int j = c; j<i; j++) {
                printf("*");
            }
        }
            printf("\n");
        }


    return 0;
} 