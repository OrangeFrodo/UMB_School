#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int a, b, c;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    a = a + b;
    
    printf("a = %d", a);
    return 0;
}