/* Programovanie v C - Jakub Daxner */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char* argv[])
{
    char s[40] = "";
    int dlzka, i;
    if(argc > 1) { //bol zadany argument
        strcpy(s, argv[1]);
        for (i=2; i<argc; i++) {
            // strcat(s, " ");
            // strcat(s, argv[1]);
            sprintf(s, "%s %s", s, argv[i]);       // pridava na koniec
        }
    } else { //nebol zadany argument
        printf("Zadaj text: ");
        // scanf("%[\n]s", s);
        gets(s);
    }
    dlzka = strlen(s);

    //prvy riadok
    for(i=0; i<dlzka+2; i++) {
        putchar('*');
    }
    putchar('\n');

    //prostredny riadok
    printf("*%s*\n", s);

    //posledny riadok
    for(i=0; i<dlzka+2; i++) {
        putchar('*');
    }

    putchar('\n');
    return 0;
}