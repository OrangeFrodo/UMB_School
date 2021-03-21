// Aritmetický priemer SUM for loop

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   
    int n;
    printf("Zadaj pocet cisel: ");
    scanf("%d", &n);

    int c, sum;

    sum = 0;

    for (int i = 1; i <= n; i++)
    {
        printf("Zadaj cislo: ");
        scanf("%d", &c);
        sum = sum + c;
    }
    
    printf("Priemer je %0.2f", (float) sum / n);

    return 0;
}