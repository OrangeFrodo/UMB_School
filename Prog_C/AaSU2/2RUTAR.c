#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MLA (ATOM*) malloc(sizeof(ATOM*))
#define MLC (CLOVEK*) malloc(sizeof(CLOVEK*))

typedef struct CLOVEK
{
    char m[20];
    int v;
} CLOVEK;


// Struct atom
typedef struct atom
{
    CLOVEK h;
    struct atom *nasl;
} ATOM;


int main(int argc, char const *argv[])
{
    ATOM *a;
    a = MLA;

    // Inicializacia 
    a -> h.v = 14;
    strcpy(a -> h.m, "Adam");

    // Nasl
    a -> nasl = MLA;
    a -> nasl -> h.v = 13;
    strcpy(a -> nasl -> h.m, "Anton");

    // Print
    fprintf(stdout, "%s, %d \n", a-> h.m, a-> h.v);
    fprintf(stdout, "%s, %d \n", a-> nasl -> h.m, a -> nasl -> h.v);

    ATOM *p;
    p = a;
    while (p -> nasl != NULL)
    {
        p = p -> nasl;
    }
    p -> nasl = MLA;
    p = p -> nasl;
    p -> h.v = 7;
    strcpy(p-> h.m, "Zuzka");
    p -> nasl = NULL;

    p = a;
    while (p -> nasl != NULL)
    {
        p = p -> nasl;
    }
    fprintf(stdout, "%s, %d \n", p-> h.m, p-> h.v);


    return 0;
}
