#include <stdio.h>
#include <stdlib.h>
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
    CLOVEK h;
    struct atom *nasl;
} ATOM;

typedef struct
{
    ATOM *zac, *kon;
} RAD;

void init(RAD *r)
{
    (r)->kon = ML;
    r->kon->nasl = NULL;
    r->zac = r->kon;
}

int test(RAD r)
{
    return r.zac->nasl == NULL;
}

void put(RAD *r, CLOVEK x)
{
    r->kon->nasl = ML;
    strcpy(r->kon->h.m, x.m);
    strcpy(r->kon->h.p, x.p);
    r->kon->h.v = x.v;
    r->kon = r->kon->nasl;
    r->kon->nasl = NULL;
}

void pop(RAD *r)
{
    if (!test(*r))
    {
        ATOM *p;
        p = r->zac;
        r->zac = r->zac->nasl;
        free((void *)p);
    }
}

void value(RAD r, CLOVEK *x)
{
    if (!test(r))
    {
        *x = r.zac ->h;
    }
}

void delete(RAD *r)
{
    while (!test(*r))
    {
        pop(r);
    }
    free((void *) r->zac);
    r ->zac = r ->kon = NULL;
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
