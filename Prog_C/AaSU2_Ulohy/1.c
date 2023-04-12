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

// Inicializace
void init(ATOM **z);
// Test
int test(ATOM *z);
// Put
void put(ATOM **z, CLOVEK h);
// Pop
void pop(ATOM **z);
// Value
void value(ATOM *z, CLOVEK *h);
// Delete
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
    fclose(f);

    while (!test(zas))
    {
        value(zas, &c);
        printf("%s %s %d\n", c.m, c.p, c.v);
        pop(&zas);
    }

    delete (&zas);
    return 0;
}

void init(ATOM **z)
{
    *z = ML;
    (*z)->nasl = NULL; // Zasobnik musí obsahovať NULL
}

int test(ATOM *z)
{
    return z->nasl == NULL;
}

// Pomocný atom
void put(ATOM **z, CLOVEK x)
{
    ATOM *pom;
    pom = ML;
    pom->h.v = x.v;
    strcpy(pom->h.m, x.m);
    strcpy(pom->h.p, x.p);
    pom->nasl = *z;
    *z = pom;
}

// Pop
void pop(ATOM **z)
{
    if (!test(*z))
    {
        ATOM *pom;
        pom = *z;
        *z = (*z)->nasl;
        free((void *)pom);
    }
}

// Value
void value(ATOM *z, CLOVEK *h)
{
    if (!test(z))
    {
        h->v = z->h.v;
        strcpy(h->m, z->h.m);
        strcpy(h->p, z->h.p);
    }
}

// Delete
void delete (ATOM **z)
{
    while (!test(*z))
    {
        pop(z);
    }

    free((void *)*z);
    *z = NULL;
}