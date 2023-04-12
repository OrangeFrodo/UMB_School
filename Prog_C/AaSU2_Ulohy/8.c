#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define ML (ATOM *)malloc(sizeof(ATOM))

typedef struct clovek
{
    char m[20];
    char p[20];
    int v;
} CLOVEK;

typedef struct atom
{
    CLOVEK x;
    struct atom *nasl;
} ATOM;

typedef struct
{
    ATOM *zac, *kon;
} RAD;

void init(RAD *r)
{
    r->kon = r->zac = NULL;
}

int test(RAD r)
{
    return r.zac == NULL;
}

void put(RAD *r, CLOVEK x)
{
    if (!test(*r))
    {
        r->kon = ML;
        r->zac = r->kon;
        strcpy(r->kon->x.m, x.m);
        strcpy(r->kon->x.p, x.p);
        r->kon->x.v = x.v;
        r->kon->nasl = NULL;
    }
    else
    {
        r->kon = ML;
        r->kon = r->kon->nasl;
        r->kon->nasl = NULL;
        strcpy(r->kon->x.m, x.m);
        strcpy(r->kon->x.p, x.p);
        r->kon->x.v = x.v;
    }
}

void value(RAD r, CLOVEK *x)
{
    if (!test(r))
    {
        *x = r.zac->x;
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
    init(&rad);
    FILE *f;
    CLOVEK c;
    f = fopen("1.txt", "r");
    while (!feof(f))
    {
        fscanf(f, "%s %s %d\n", c.m, c.p, &c.v);
        // fprintf(stderr, "%s %s %d\n", c.m, c.p, c.v);
        put(&rad, c);
    }
    fclose(f);

    while (!test(rad))
    {
        value(rad, &c);
        printf("%s %s %d\n", c.m, c.p, c.v);
        pop(&rad);
    }

    delete (&rad);
    return 0;
}
