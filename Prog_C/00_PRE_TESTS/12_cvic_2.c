#include <stdio.h>
#include <stdlib.h>

int main()
{   
    long int sume = 0;
    FILE *fr;
    int kolik;
    char akcia[2];

    fr = fopen("pen.txt", "r");

    while (fscanf(fr, "%ls", akcia) != EOF) {
        fscanf(fr, " $%d", &kolik);
        sume += (akcia[0] == '+') ? kolik : (-1 * kolik);
    }

    printf("Celko je $%ld \n", sume);
    fclose(fr);

    return 0;
}