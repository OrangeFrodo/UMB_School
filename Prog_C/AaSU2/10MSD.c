#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ML (ATOM *)malloc(sizeof(ATOM))

typedef struct atom
{
    char h[4];
    struct atom *nasl;
} ATOM;

typedef struct
{
    ATOM *zac, *kon;
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

void put(RAD *r, char x[])
{
    if (test(*r))
    {
        r->kon = ML;
        strcpy(r->kon->h, x);
        r->kon->nasl = NULL;
        r->zac = r->kon;
    }
    else
    {
        r->kon->nasl = ML;
        r->kon = r->kon->nasl;
        strcpy(r->kon->h, x);
        r->kon->nasl = NULL;
    }
}

void value(RAD r, char x[])
{
    if (!test(r))
    {
        strcpy(x, r.zac->h);
    }
}

void pop(RAD *r)
{
    if (!test(*r))
    {
        if (r->zac->nasl == NULL)
        {
            free((void *)r->zac);
            r->zac = r->kon = NULL;
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
    int i, j;
    char s[5][4] = {"BCA", "CCD", "DDA", "ACD", "BAC"};
    RAD rad_c;
    init(&rad_c);
    char ret[4];

    for (i = 0; i < 5; i++)
    {
        put(&rad_c, s[i]);
    }

    /*
    while (!test(rad_c))
    {
        value(rad_c, ret);
        printf("%s\n", ret);
        pop(&rad_c);
    }
    */

    RAD pole_rad[4];
    for (i = 0; i < 4; i++)
    {
        init(&pole_rad[i]);
    }

    for (i = 2; i >= 0; i--)    // MSD
    //for(i = 0; i < 3; i++)    // LSD
    {
        printf("-----%d-----\n", i);
        // vkladanie do pola radov;
        while (!test(rad_c))
        {
            value(rad_c, ret);
            pop(&rad_c);
            put(&pole_rad[ret[i] - 'A'], ret);
            printf("vkladam retazec %s podla pismena %c do radu cislo %d \n", ret, ret[i], ret[i] - 'A');
        }
        for (j = 0; j < 4; j++)
        {
            while(!test(pole_rad[j]))
            {
                value(pole_rad[j], ret);
                pop(&pole_rad[j]);
                put(&rad_c, ret);
            }
        }
    }

    printf("\n");
    while (!test(rad_c))
    {
        value(rad_c, ret);
        printf("%s\n", ret);
        pop(&rad_c);
    }

    return 0;
}