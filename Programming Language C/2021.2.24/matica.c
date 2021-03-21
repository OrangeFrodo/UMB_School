#include <stdio.h>
#include <stdlib.h>

#define MAX 3

//funkcny prototyp
int nacitaj(float matica[MAX][MAX], char *nazov);

//funkcia main
int main()
{
    float mat[MAX][MAX];
    char nazov_suboru[20];

    printf("Zadaj nazov suboru pre nacitanie matice: ");
    scanf("%s", nazov_suboru);

    //zavolanie funkcie
    nacitaj(mat, nazov_suboru);

    //vypis matice
    int i, j;
    for(i=0; i<MAX; i++) {
        for(j=0; j<MAX; j++) {
            printf("%.3f ",  mat[i][j]);
        }
        putchar('\n');
    }
    return 0;
}

//funkcia nacitaj - nacita maticu zo suboru
int nacitaj(float matica[MAX][MAX], char *nazov)
{
    //otvorenie suboru
    FILE *f;
    if((f = fopen(nazov, "r")) == NULL) {
        fprintf(stderr, "Subor sa nepodarilo otvorit!\n");
        exit(1);
    }
    //nacitanie matice
    int i, j;
    for(i=0; i<MAX; i++) {
        for(j=0; j<MAX; j++) {
            fscanf(f, "%f", &matica[i][j]);
        }
    }
    //zatvorenie suboru
    fclose(f);
    return(0);
}