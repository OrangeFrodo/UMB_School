#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ML (ATOM *)malloc(sizeof(ATOM))

typedef struct atom
{
    int h;
    struct atom *nasl;
} ATOM;

// Struct defining rad
typedef struct
{
    struct atom *zac, *kon;
} RAD;

void init(RAD *r)
{
    r->kon = NULL;
    r->zac = NULL;
}

int test(RAD r)
{
    return r.zac == NULL;
}

void put(RAD *r, int x)
{
    if (!test(*r))
    {
        r->kon = ML;
        r->zac = r->kon;
        r->kon->h = x;
        r->kon->nasl = NULL;
    }
    else
    {
        r->kon->nasl = ML;
        r->kon = r->kon->nasl;
        r->kon->nasl = NULL;
        r->kon->h = x;
    }
}

void value(RAD r, int *x)
{
    if (!test(r))
    {
        *x = r.zac->h;
    }
}

void pop(RAD *r)
{
    if (!test(*r))
    {
        if (r->zac->nasl == NULL)
        {
            free((void *)r->zac);
            r->zac = NULL;
            r->kon = NULL;
        }
        else
        {
            ATOM *pom = r->zac;
            r->zac = r->zac->nasl;
            free((void *)pom);
        }
    }
}

void delete (RAD *r)
{
    while (!test(*r))
    {
        pop(r);
    }
}

int main(int argc, char const *argv[])
{
    RAD rad;
    char s[] = "Pokusny rad";
    int c;
    int i;
    init(&rad);
    for (i = 0; i < strlen(s); i++)
        put(&rad, s[i]);
    while (!test(rad))
    {
        value(rad, &c);
        printf("%c\n", c);
        pop(&rad);
    }
    delete(&rad);
    return 0;
}