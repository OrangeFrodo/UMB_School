#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int a, b, c;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    c = (a+b-abs(a+b)) / 2;
    
    printf("c = %d", c);
    return 0;
}