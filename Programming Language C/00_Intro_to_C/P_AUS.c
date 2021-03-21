#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int c;
    c = a;
    a = b;
    b = c;
    a = 1-a; // nieje nutné dávať if //
    printf("%d, %d\n", a,b);
    return 0;
}