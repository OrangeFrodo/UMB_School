#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int riadok, stlpec, pocet;

    scanf("%d %d %d", &riadok, &stlpec, &pocet);
    int i,j;

    char* pole = malloc(riadok * stlpec * sizeof(char));

    for (int i = 0; i < riadok; i++)
    {
        int pom;
        while (isspace(pom = getc(stdin)));
        ungetc(pom, stdin);
        fread(pole + i * stlpec, sizeof(char), stlpec, stdin);
    }

    int pom;
    while (isspace(pom = getc(stdin)));
    ungetc(pom, stdin);

    char slovo[50];

    int a[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };
    int b[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };

    for (int i = 0; i < pocet; i++)
    {
        scanf("%s", slovo);

        for (int y = 0; y < riadok; y++)
        {
            for (int x = 0; x < stlpec; x++)
            {
                for (int smer = 0; smer < 8; smer++)
                {
                    int nasiel = 1;
                    for (int j = 0; j < strlen(slovo); j++)
                    {
                        if (slovo[j] != pole[x + j * a[smer] + stlpec * (y + j * b[smer])])
                        {
                            nasiel = 0;
                        }
                    }
                    if (nasiel)
                    {
                        printf("%u %u %c\n", y, x, 'A' + smer);
                    }
                }
            }
        }
    }
}