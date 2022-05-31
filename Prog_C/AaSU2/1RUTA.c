#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ML (ATOM*) malloc(sizeof(ATOM))

// Struktura Atom
typedef struct{
    char m[20];
    int v;
} CLOVEK;

// Structura atom
// Vnorenie struktúry do atomu
typedef struct atom
{
    CLOVEK h;            
    struct atom *nasl;  // Deklarácia štruktúry
} ATOM;


int main(int argc, char const *argv[])
{
    // Staticky
    ATOM a;

    // Dynamicky
    ATOM *p_a;


    // Statická čast
    // a.h = (CLOVEK*) malloc(sizeof(CLOVEK));
    a.h.v = 77;
    // String copy
    strcpy(a.h.m, "Alexa");
    printf("%s %d\n", a.h.m, a.h.v);

    // Free
    // free((void*)a.h);
    // a.h = NULL;

    // Alokovanie v halde pomocou malloc
    p_a = ML;
    // p_a -> h = (CLOVEK*) malloc(sizeof(CLOVEK));
    p_a -> h.v = 45;
    strcpy(p_a -> h.m, "Andrej");

    // Print
    printf("%s %d\n", p_a -> h.m, p_a -> h.v);
    free((void*) p_a -> h);
    free((void*) p_a);
    p_a = NULL;

    return 0;
}
