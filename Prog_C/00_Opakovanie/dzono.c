// Druha mocnina
// 1.4 Uloha
// osetrenie pre pripad visual studia, nakolko scanf povazuje za unsafe funkciu
#define _CRT_SECURE_NO_WARNINGS
// osetrenie pre pripad visual studia, nakolko scanf povazuje za unsafe funkciu

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int n, p;
    do
        scanf("%d %d", &n, &p);
    while ((1 >= n >= 8) && (1 >= p >= 4));

    int temp = p * n;
    int tempP = 0;
    int tempW = 0;

    int cislo = 0;
    for (int i = 0; i < p * n; i++)
    {
        if (!tempW)
            tempP = 0;
        {
            if (cislo < temp / 2)
            {
                printf("*");
                tempP++;
            }
            else
            {
                printf("-");
                tempP++;
            }

            cislo++;
            if (cislo > (p * n) - 1)
                cislo = 0;
            if (tempP == p)
            {
                tempW = 1;
            }
        }
        if (tempW)
            tempP = 0;
        {
            if (cislo > temp / 2)
            {
                printf("*");
                tempP++;
            }
            else
            {
                printf("-");
                tempP++;
            }

            cislo++;
            if (cislo > (p * n) - 1)
                cislo = 0;
            if (tempP == p)
            {
                tempW = 0;
            }
        }

        printf("\n");
    }
    return 0;
}