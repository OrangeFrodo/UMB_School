#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, *b;
    //pomocou klasickej premennej a
    printf("Zadaj cislo: ");
    scanf("%d", &a);
    printf("%d\n", a);
    //pomocou pointera b
    b = &a;
    printf("Zadaj cislo: ");
    scanf("%d", b);
    printf("b %d\n", *b);
    printf("a %d\n", a);

    return 0;
}