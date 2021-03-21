#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    int a, b, c;

    printf("Zadaj tri cele cisla troj. : ");
    scanf("%d %d", &a, &b, &c);

    if (a*a + b*b == c*c) {
        printf ("je pravouhly");
    } else
    {
        printf("nieje pravo.");
    }
    
    return 0;
}