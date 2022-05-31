#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ML (ATOM *)malloc(sizeof(ATOM))

// Struct atom
typedef struct atom
{
    int h;
    struct atom *nasl;
} ATOM;

void init(ATOM **z)
{
    *z = NULL;
}
int test(ATOM *z)
{
    return z == NULL;
}
void vloz(ATOM **z, int x)
{
    /*
    if (test(*z))
    {
        *z = ML;
        (*z) -> h = x;
        (*z) -> nasl = NULL;
    }

    else
    */

    ATOM *p;
    p = ML;
    p->h = x;
    p->nasl = *z;
    *z = p;
}

void odober(ATOM **z) {
    if(!test(*z)) {
        ATOM *p;
        p = *z;
        *z = (*z) -> nasl;
        free((void*) p);
    }
}

void hodnota(ATOM *z, int *x)
{
    if(!test(z)){
        *x = z -> h;
    }
}

void odstran(ATOM **z){
    while (!test(*z))
    {
        odober(z);
    }
    
}

int main(int argc, char const *argv[])
{
    ATOM *zas;
    char s[] = "\n pokusny_retazec";
    init(&zas);
    int i;
    for (i = 0; i < strlen(s); i++)
    {
        vloz(&zas, s[i]);
    }
    while (!test(zas))
    {
        hodnota(zas, &i);
        fprintf(stdout, "%c\n", i);
        odober(&zas);
    }
    
    odstran(&zas);
    return 0;
}
