// PRÍKLAD 
/* V uvedenom príklade je N=3 a NC=4, reťazec je „daababac“. V reťazci sa nachádzajú nasledujúce podreťazce s
dĺžkou 3 znaky: „daa“,„aab“,„aba“,„bab“,„aba“,„bac“. Keďže podreťazec „aba“ sa vyskytuje
opakovane, počet rôznych podreťazcov s dĺžkou N, ktoré sa vyskytujú v texte je 5. 

Ukážka vstupu:
3 4
daababac
Ukážka výstupu:
5

strncpy
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"

#define ARR_LEN 100

int main(int argc, char const *argv[])
{
    int n, nc;
    int *arr;

    load_input(&n, &nc, &arr);
    find(&n, &arr);
    compare(&n, &arr);
    
    return 0;
}

int load_input(int *n, int *nc, int **arr) {

    int pom_n, pom_nc;
    int *pom_arr;

    scanf("%d %d", &pom_n, &pom_nc); 
    scanf("%s", pom_arr);

    *n = pom_n;
    *nc = pom_nc;
    *arr = pom_arr;
}

int find(int *n, char **arr) 
{
    int another_Var = *n;
    char *pom_arr[another_Var];

    int i, j;
    for(i=0; i<another_Var; i++) {
        for (j=0; i<another_Var; j++) {
            pom_arr[i] = arr[j];
        }
    }
}

int compare(int *n, int **arr) 
{
    int pom_n, another_n;
    int *pom_arr;
}