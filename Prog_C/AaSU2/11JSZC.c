#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define ML (ATOM *)malloc(sizeof(ATOM))

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

void value(ATOM *z, int *x)
{
    if (!test(z))
    {
        *x = z->h;
    }
}

void put(ATOM **z, int x)
{
    if (!test(*z))
    {
        *z = ML;
        (*z)->h = x;
        (*z)->nasl = (*z);
    }
    else
    {
        ATOM *pom = ML;
        pom->h = x;
        //
        pom->nasl = (*z)->nasl;
        //
        (*z)->nasl = pom;
        *z = pom;
        // a -> a -> a
    }
}

void pop(ATOM **z)
{
    if (!test(*z))
    {
        if ((*z)->nasl == *z)
        {
            free((void *)*z);
            *z = NULL;
        }
        else
        {
            ATOM *pom;
            pom = *z;
            while (pom->nasl != *z)
            {
                pom = pom->nasl;
            }
            pom->nasl = (*z)->nasl;
            free((void *)*z);
            *z = pom->nasl;
        }
    }
}

void remove(ATOM **z)
{
    while (!test(*z))
    {
        pop(z);
    }
}

// posun v smere smernikov
void vSmere(ATOM **z)
{
    if (!test(*z))
    {
        *z = (*z)->nasl;
    }
}

// posun v protismere smernikov
void protiSmere(ATOM **z)
{
    if (!test(*z))
    {
        ATOM *pom = *z;
        while (pom->nasl != *z)
        {
            pom = pom->nasl;
        }
        *z = pom;
    }
}

int main(int argc, char const *argv[])
{
    ATOM *zoz;
    init(&zoz);
    int c;
    char s[] = "Streda";
    int i;
    for (size_t i = 0; i < strlen(s); i++)
    {
        put(&zoz, s[i]);
    }
    for (i = 0; i < 10; i++)
    {
        value(zoz, &c);
        printf("%c \n", c);
        vSmere(&zoz);
    }

    return 0;
}