#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ML (ATOM*) malloc(sizeof(ATOM))
#define MLC (CLOVEK*) malloc(sizeof(CLOVEK))

typedef struct CLOVEK
{
    char m[20];
    char p[20];
    int v;
} CLOVEK;

// Struct atom
typedef struct atom
{
    CLOVEK h;
    struct atom *nasl;
} ATOM;

void ini(ATOM **z);     // funkcia inicializácie = ATOM* init(ATOM** zoz);
int test(ATOM *z);     // ak je zásobník prázdny
void vloz(ATOM **z, CLOVEK x);    // vloz na vrch zasobnika
void odober(ATOM **z);  // odober
void hodnota(ATOM *z, CLOVEK *x); // ziskaj hodnotu
void odstran(ATOM **z); // odstran cely

// ATOM* init(ATOM *z);
// ATOM* vloz(ATOM *z, CLOVEK x);
// ATOM* odober(ATOM **z); 
// CLOVEK hodnota(ATOM *z);
// ATOM* odstran(ATOM **z);

int main(int argc, char const *argv[])
{
    // Zas = zásobník
    ATOM *zas;
    CLOVEK c;
    ini(&zas);

    // Nacitame zo suboru
    FILE *f;
    f = fopen("vstup.txt", "r");
    while (!feof(f))
    {
        fscanf(f, "%s %s %d \n", c.m, c.p, &c.v);
        // fprintf(stderr, "%s %s %d \n", c.m, c.p, c.v);
        vloz(&zas, c);
    }
    fclose(f);

    while (!test(zas))
    {
        hodnota(zas, &c);
        fprintf(stdout, "%s %s %d \n", c.m, c.p, c.v);
        odober(&zas);
    }
    
    odstran(&zas);
    return 0;
}

void ini(ATOM **z) {
    *z = ML;
    // z -> h.v = 0;
    // strcpy(z -> h.m, "Nikto");

    (*z) -> nasl = NULL;
}

int test(ATOM *z) {
    return z -> nasl == NULL;
}

// Vloz do zasobnika za pomocneho pointera
void vloz(ATOM **z, CLOVEK x) {
    ATOM *p;
    p = ML;

    p -> h.v = x.v;
    strcpy(p -> h.m, x.m);
    strcpy(p -> h.p, x.p);

    p -> nasl = *z;
    *z = p;
}


void odober(ATOM **z) {
    if(!test(*z)) {
        ATOM *p;
        p = *z;
        *z = (*z) -> nasl;
        free((void *) p);
        // p = NULL
    }
}

void hodnota(ATOM *z, CLOVEK *x)
{
    if (!test(z))
    {
        x -> v = z -> h.v;
        strcpy(x -> m, z -> h.m);
        strcpy(x -> p, z -> h.p);
    }
    
}

// Odstran
void odstran(ATOM **z)
{
    while (!test(*z))
    {
        fprintf(stdout, "%s %s %d \n", (*z) -> h.m, (*z) -> h.p, (*z) -> h.v);
        odober(z);
    }
    free((void*) *z);
    *z = NULL;
}