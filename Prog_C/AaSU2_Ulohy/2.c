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

void init(ATOM **z);
int test(ATOM *z);
void put(ATOM **z, CLOVEK h);
void pop(ATOM **z);
void value(ATOM *z, CLOVEK *h);
void delete (ATOM **z);

int main(int argc, char const *argv[])
{
    ATOM *zas;
    init(&zas);
    FILE *f;
    CLOVEK c;
    f = fopen("1.txt", "r");
    while (!feof(f))
    {
        fscanf(f, "%s %s %d\n", c.m, c.p, &c.v);
        // fprintf(stderr, "%s %s %d\n", c.m, c.p, c.v);
        put(&zas, c);
    }

    while (!test(zas))
    {
        value(zas, &c);
        printf("%s %s %d\n", c.m, c.p, c.v);
        pop(&zas);
    }
    delete(&zas);
    fclose(f);

    return 0;
}

void init(ATOM **z)
{
    *z = NULL;
}

int test(ATOM *z)
{
    return z == NULL;
}

void put(ATOM **z, CLOVEK h)
{
    // if (!test(*z))
    // {
    //     *z = ML;
    //     (*z)->h = h;
    //     (*z)->nasl = NULL;
    // }
    // else
    // {
        ATOM *pom;
        pom = ML;
        pom->h = h;
        pom->nasl = *z;
        *z = pom;
    // }
}

void pop(ATOM **z)
{
    if(!test(*z))
    {
        ATOM *pom;
        pom = *z;
        *z = (*z)->nasl;
        free((void*) pom);
    }
}

void value(ATOM *zas, CLOVEK *h)
{
    if(!test(zas))
    {
        *h = zas -> h;
    }
}

void delete(ATOM **zas)
{
    while (!test(*zas))
    {
        pop(zas);
    }
    
}