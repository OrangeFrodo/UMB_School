// NOT FINAL

#include <stdlib.h>
#include <stdio.h>

void tower(int number, int fPilar, int sPilar, int tPilar);

int main(int argc, char const *argv[])
{
    int numOfDisks;
    scanf("%d", &numOfDisks);

    int x = 1, y = 2, z = 3;

    tower(numOfDisks, x, z, y);

    return 0;
}

void tower(int number, int fromPilar, int toPilar, int helpPilar)
{
    if (number > 0) {
        tower(number-1, fromPilar, helpPilar, toPilar);
        printf("%d -> %d\n", fromPilar, toPilar);
        tower(number-1, helpPilar, toPilar, fromPilar);
    }
}

