// Sum till 0

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   
    int c, sum, min, poradie;

    sum = 0;

    int n = 0;
    int minpor;

    do {
        printf("Zadaj cislo: ");
        scanf("%d", &c);
        sum = sum + c;
        n++;
        if (n == 0) {     // iba pri prvej iterácii 
            minpor = 1;
            min = c;
        } else {
            if(c < min) {min = c; minpor = poradie;};  
        }
    } while (c != 0);  
    n--;

    printf("Min je %d \nPoradie min cisla je %d\", poradie, min", min, minpor);

    return 0;
}