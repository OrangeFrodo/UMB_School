#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a >= b){
        // a > b
        if (c >= a) {
            // c > a > b
            printf ("C = %d > A = %d > B = %d\n", c,a,b);
        }
        else {
            // a > c > b
            if (c >= b) {
                printf("A = %d > C = %d > B = %d\n", a,c,b);
            }
            // a > b > c
            else {
                printf("A = %d > B = %d > C = %d\n", a,b,c);
            }
        }
    }
    else {
        // a < b
        if (c >= a) {
            // c > a < b
            if (c >= b) {
                // c > b > a
                printf("C = %d > B = %d > A = %d\n", c,b,a);
            }
            else {
                // b > c > a
                printf("B = %d > C = %d > A = %d\n", b,c,a);
            }
        }
        else {
            // b > a > c
            printf("B = %d > A = %d > C = %d\n", b,a,c);
        }  
    }
    return 0;
}