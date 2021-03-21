// Minumum a maximum

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   
    int n;

    printf("Zadaj pocet cisel: ");
    scanf("%d", &n);

    int c, min, poradie, i, minpor;

    poradie = 0;
    minpor = 0;

    for (i=0; i<n; i++) {
        printf("Zadaj cislo: ");
        scanf("%d", &c);
        if(i == 0) {     // iba pri prvej iterácii 
            poradie = 1;
            min = c;
        } else {
            if(c < min) {min = c; minpor = poradie;};  
        }
        poradie++;
    }

    printf("Min je %d \nPoradie min cisla je %d, poradie, min", min ,minpor);

    return 0;
}