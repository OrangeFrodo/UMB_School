#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define ML (ATOM *)malloc(sizeof(ATOM))

typedef struct atom
{
    int h;
    struct atom *nasl;
} ATOM;

typedef struct
{
    ATOM *zac, *kon, *ind;
} ZOZNAM;

void init(ZOZNAM *z)
{
    z->zac = z->kon = z->ind = NULL;
}

int test(ZOZNAM z)
{
    return z.ind == NULL;
}

int test_zac(ZOZNAM z)
{
    return z.ind == z.zac;
}

int test_kon(ZOZNAM z)
{
    return z.ind == z.kon;
}

void skokZac(ZOZNAM *z)
{
    z->ind = z->zac;
}

void skokKon(ZOZNAM *z)
{
    z->ind = z->kon;
}

void value(ZOZNAM z, int *x)
{
    if (!test(z))
    {
        *x = z.ind->h;
    }
}

void put(ZOZNAM *z, int x)
{
    if (!test(*z))
    {
        z->kon = ML;
        z->kon->h = x;
        z->kon->nasl = NULL;
        z->ind = z->zac = z->kon;
    }
    else
    {
        if (test_kon(*z))
        {
            z->kon->nasl = ML;
            z->kon = z->kon->nasl;
            z->kon->nasl = NULL;
            z->kon->h = x;
            z->ind = z->kon;
        }
        else
        {
            if (test_zac(*z))
            {
                ATOM *pom;
                pom = ML;
                pom->h = x;
                pom->nasl = z->ind->nasl;
                z->ind->nasl = pom;
                z->ind = pom;
            }
        }
    }
}

void smerKon(ZOZNAM *z)
{
    if (!test(*z))
    {
        if (!test_kon(*z))
        {
            z->ind = z->ind->nasl;
        }
    }
}

void smerZac(ZOZNAM *z)
{
    if (!test(*z))
    {
        if (!test_zac(*z))
        {
            ATOM *pom = z->zac;
            while (pom->nasl != z->ind)
            {
                pom = pom->nasl;
            }
            z->ind = pom;
        }
    }
}

void odober(ZOZNAM *z)
{
    if (!test(*z))
    {
        if (z->zac == z->kon)
        {
            free((void *)z->ind);
            z->ind = z->kon = z->zac = NULL;
        }
        else
        {
            if (test_kon(*z))
            {
                ATOM *pom = z->zac;
                while (pom->nasl != z->kon)
                {
                    pom = pom->nasl;
                }
                free((void *)z->kon);
                z->kon = z->ind = pom;
            }
            else
            {
                if (test_zac(*z))
                {
                    z->ind = z->ind->nasl;
                    free((void *)z->zac);
                    z->zac = z->ind;
                }
                else
                {
                    ATOM *pom = z->zac;
                    while (pom->nasl != z->ind)
                    {
                        pom = pom->nasl;
                    }
                    pom->nasl = z->ind->nasl;
                    free((void *)z->ind);
                    z->ind = pom->nasl;
                }
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int c;
    char s[] = "streda";
    int i;
    ZOZNAM zoz_s;
    init(&zoz_s);

    for (i = 0; i < strlen(s); i++)
    {
        skokZac(&zoz_s);
        put(&zoz_s, s[i]);
    }

    skokZac(&zoz_s);
    while (!test_kon(zoz_s))
    {
        value(zoz_s, &c);
        smerKon(&zoz_s);
        printf("%c\n", c);
    }

    return 0;
}