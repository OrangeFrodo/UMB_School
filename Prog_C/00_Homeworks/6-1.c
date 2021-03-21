#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i, j, d;
    printf("n = ");
    scanf("%d", &n);


    for(i = 0; i < n; i++){
        for(j = i; j < n; j++){
            d = i;
            while (d > 0) {
                 putchar(' ');
                 d--;
                 j++;
            }
            putchar('*');
        }
        printf("\n");
    }
    return 0;
}
