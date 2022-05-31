#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROWSIZE 20
#define ROWCOLUME 20

void printOutput(int f) {
    printf("pocet opakujucich sa podretazcov je %d \n", f);
}


int main()
{
    int n, nc, num = 0, i = 0, j, e = 0, f = 0; //nacitanie
    char matrix[ROWSIZE][ROWCOLUME];
    scanf("%d %d", &n, &nc);

    char s[100] = "", tmp[100] = ""; //vytvorenie pola
    scanf("%s", &s);

    int len = strlen(s) - (n - 1); //nacitanie stringu dlzky retazca -1
                                   //ide od 0 a po strlen n-1 lebo by presiahlo retazec

    while (i < len)
    {
        strncpy(tmp, s + i, n); //kontroluje pismena
        for (j = i + 1; j < len; j++)
        {
            if (strncmp(tmp, s + j, n) == 0)
            { //porovnava retazec v tmp s dalsimi

                strcpy(matrix[e], tmp);
                for (int k = 0; k < len; k++)
                {
                    if (matrix[k - j] == matrix[e])
                    {
                        f++;
                    }
                }

                printf("%s\n", matrix[e]);
                e++;
                break; //ukoncenie slucky
            }
        }

        i++;
    }

    printOutput(f);

    return 0;
}