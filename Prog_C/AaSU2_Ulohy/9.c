#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define ML (ATOM *)malloc(sizeof(ATOM))

typedef struct
{
    char m[20];
    char p[20];
    int v;
} CLOVEK;

typedef struct atom
{
    CLOVEK x;
    struct atom *nasl
} ATOM;

typedef struct
{
    ATOM *zac, *kon;
} RAD;

void init(RAD **r)
{
    *r = ML;
    (*r)->kon = NULL;
}

int test(RAD *r)
{
    return r->kon->nasl == NULL;
}

void put(RAD *r, CLOVEK x)
{
    RAD *pomoc_r = r;
    while (pomoc_r -> kon -> nasl != NULL)
    {
        pomoc_r = pomoc_r;
    }
    strcpy(pomoc_r->kon->x.m, x.m);
    strcpy(pomoc_r->kon->x.p, x.p);
    pomoc_r->kon->x.v = x.v;
    pomoc_r->kon->nasl = ML;
    pomoc_r->kon = pomoc_r->kon->nasl;
    pomoc_r->kon->nasl = NULL;
}

void value(RAD *r, CLOVEK *x)
{
    if (!test(r))
    {
        *x = r->kon->x;
    }
}

void pop(RAD **r)
{
    if (!test(*r))
    {
        RAD *pom = *r;
        *r = (*r)->kon->nasl;
        free((void *)pom);
    }
}

void delete (RAD **r)
{
    while (!test(*r))
    {
        pop(r);
    }
    free((void *)*r);
    *r = NULL;
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

    while (!test(&rad))
    {
        value(&rad, &c);
        printf("%s %s %d\n", c.m, c.p, c.v);
        pop(&rad);
    }

    delete (&rad);
    return 0;
}
