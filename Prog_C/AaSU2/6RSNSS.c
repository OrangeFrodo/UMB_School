#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ML (ATOM *) malloc(sizeof(ATOM))

typedef struct atom
{
    int h;
    struct atom *nasl;
} ATOM;

// Struct defining rad
typedef struct{
    struct atom *zac, *kon;
} RAD;

// r = smernik
void ini(RAD *r){
    r -> kon = ML;
    r -> zac = r -> kon;
    r -> kon -> nasl = NULL;
}

// Sme na nárazníku
int test(RAD r) {
    return r.zac -> nasl == NULL;
}

// Nepotrebujeme pomocný smerník
int vloz(RAD *r, int x){
    r -> kon -> h = x;
    r -> kon -> nasl = ML;
    r -> kon = r -> kon -> nasl;
    r -> kon -> nasl = NULL;
}

// Zisťovanie hodnoty
void hodnota(RAD r, int *x) {
    if(!test(r)){
        *x = r.zac -> h;
    }
}

// Odober
void odober(RAD *r){
    if(!test(*r)) {
        ATOM *pom = r -> zac;
        r -> zac = r -> zac -> nasl;
        free((void*) pom);
    }
}

void odstran(RAD *r) {
    while (!test(*r))
    {
        odober(r);
    }
    free((void*)r);
    r = NULL;   
}

int main(int argc, char const *argv[])
{
    // Obsahuje smernik na začiatok a na koniec
    RAD rad_b;
    char s[] = "ahoj";
    int i;

    ini(&rad_b);
    for (size_t i = 0; i < strlen(s); i++)
    {
        vloz(&rad_b, s[i]);
    }

    int c;
    while (!test(rad_b))
    {
        hodnota(rad_b, &c);
        printf("%c \n", c);
        odober(&rad_b);
    }

    return 0;
}
