#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int pocet_s, velkost_k;
    int *schody, *vyska, *velkost_schodov;

    scanf("%d %d", &pocet_s, &velkost_k);

    schody = (int*) malloc(sizeof(int) * (pocet_s+1));
    vyska = (int*) malloc(sizeof(int) * (pocet_s+1));
    velkost_schodov = (int*) malloc(sizeof(int) * (pocet_s+1));

    int i, j;

    for(i=1;i<=pocet_s;i++){
        scanf("%d", &vyska[i]);
    }

    velkost_schodov[0]=1;
    velkost_schodov[1]=velkost_schodov[0];
    schody[0]=0;


    for(i=1; i<=pocet_s; i++) {
        schody[i] = schody[i-1] + vyska[i];
        j = i - 1;
        velkost_schodov[i] = 0;
        while ((j>=0) && (schody[i] - schody[j]) <= velkost_k)
        {
            velkost_schodov[i] += velkost_schodov[j];
            j--;
        }
    }

    printf("%d \n", velkost_schodov[pocet_s]);

    free(schody);
    free(vyska);
    free(velkost_schodov);

    return 0;
}