#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main()
{   
    int pole[6];

    // Nacitanie
    for (int i=0; i<6; i++) { // Nie (int i=0; i <= 6;...)
        printf("Zadaj cislo : ");
        scanf("%d", &pole[i]);
    }

    for (int i=0; i<6; i++) {
        if(pole[i] == 0) {
            pole[i] = 1;
        }
    }

    // vypisanie
    for (int i=0; i<6; i++) { // Nie (int i=0; i <= 6;...)
        printf("%d", pole[i]);
    }

    return 0;
}