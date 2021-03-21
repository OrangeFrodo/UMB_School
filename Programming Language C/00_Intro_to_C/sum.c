#include <stdio.h>
#include <stdlib.h>


// 2*3 = 6 
// 2+2+2 = 6
int main()
{
    int a,b; 
    printf("a = "); scanf("%d", &a);
    printf("b = "); scanf("%d", &b);

    if (b > a) {
        int c;
        c = a;
        a = b;
        b = c;
        printf("Vymenil som a, b.\n");
    }

    // int i = 1;
    int sum = 0; // neutralny prvok pre scitanie
    while (b > 0) 
    {
        sum = sum + a;
        b--;
        // printf("%d");
    }
    // printf("Trvalo to %d\n", i);
    printf("%d * %d = %d\n", a,b,sum);
    return 0;
}