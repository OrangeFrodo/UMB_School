#include <stdio.h>
#include <stdlib.h>


//funkcny prototyp

float** nacitaj(char *nazov,int *rr, int *ss);

//funkcia main
int main()
{
    float **mat;
    char nazov_suboru[20];
    int r, s;

    printf("Zadaj nazov suboru pre nacitanie matice: ");
    scanf("%s", nazov_suboru);

    //zavolanie funkcie
    mat= nacitaj(nazov_suboru,&r,&s);

    //vypis matice
    int i, j;
    for(i=0; i<r; i++) {
        for(j=0; j<s; j++) {
            printf("%.3f ",  mat[i][j]);
        }
        putchar('\n');
    }
    //odlalokovanie pamate
    for(i=0;i<r;i++){
        free((void*)mat[i]);


    }
    free((void*)mat);
    return 0;
}

//funkcia nacitaj - nacita maticu zo suboru
float** nacitaj(char *nazov,int *rr, int *ss)
{
    int i,j;
    //otvorenie suboru
    FILE *f;
    if((f = fopen(nazov, "r")) == NULL) {
        fprintf(stderr, "Subor sa nepodarilo otvorit!\n");
        exit(1);
    }
    //nacitanie rozmerov matice
    int rrr ,sss;
    fscanf(f,"%d %d",&rrr,&sss);
    //alogacia dynamickej pamate
    float **pom;
    pom=(float**)malloc(sizeof(float*) *rrr);
    for(i=0;i<rrr;i++){
        pom[i]=(float*)malloc(sizeof(float)*sss);
    }

    //nacitanie matice

    for(i=0; i<rrr; i++) {
        for(j=0; j<sss; j++) {
            fscanf(f, "%f", &pom[i][j]);
        }
    }
    //zatvorenie suboru
    fclose(f);

    //vratenie hodnot
    *rr=rrr; //cez paarameter volany odkazom
    *ss=sss; //cez parameter volanny odkazom
    return(pom); //cez navratovu hodnotu
}