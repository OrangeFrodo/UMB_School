#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ML (ATOM *)malloc(sizeof(ATOM))

typedef struct atom
{
    int h;
    struct atom *nasl;
} ATOM;

typedef struct
{
    ATOM *zac, *kon;
} RAD;

void ini(RAD *);
int test(RAD);
void vloz(RAD *, int);
void odober(RAD *);
void hodnota(RAD, int *);
void odstran(RAD *);

int main()
{
    RAD rad;
    char s[] = "Pokusny rad";
    char c;
    int i;
    ini(&rad);
    for (i = 0; i < strlen(s); i++)
        vloz(&rad, s[i]);
    while (!test(rad))
    {
        hodnota(rad, &c);
        printf("%c\n", c);
        odober(&rad);
    }
    odstran(&rad);
    return 0;
}

void ini(RAD *r)
{
    r->kon = ML;
    // r->kon->h = '#';
    r->kon->nasl = NULL;
    r->zac = r->kon;
}

int test(RAD r)
{
    return r.zac->nasl == NULL;
}

void vloz(RAD *r, int x)
{
    r->kon->nasl = ML;
    r->kon->h = x;
    r->kon = r->kon->nasl;
    r->kon->nasl = NULL;
    // r->kon->h = '#';
}

void odober(RAD *r)
{
    if (!test(*r))
    {
        ATOM *p;
        p = r->zac;
        r->zac = r->zac->nasl;
        free((void *)p);
    }
}

void hodnota(RAD r, int *x)
{
    if (!test(r))
        *x = r.zac->h;
}

void odstran(RAD *r)
{
    while (!test(*r))
        odober(r);
    free((void *)r->zac);
    r->zac = r->kon = NULL;
}