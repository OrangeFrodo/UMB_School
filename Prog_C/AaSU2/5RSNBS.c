#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ML (ATOM *)malloc(sizeof(ATOM))

typedef struct atom
{
    int h;
    struct atom *nasl;
} ATOM;

// int vloz(ATOM *r, int x)
// int test(ATOM *r)
// int init(ATOM **r)
// int hodnota(ATOM *r, int *x)
// int odober(ATOM **r)

// Vkladanie
int vloz(ATOM *r, int x)
{
    ATOM *pomoc_r = r;
    while (pomoc_r->nasl != NULL)
    {
        pomoc_r = pomoc_r->nasl;
    }

    pomoc_r->h = x;
    pomoc_r->nasl = ML;
    pomoc_r = pomoc_r->nasl;

    pomoc_r->nasl = NULL;
}

// Test
int test(ATOM *r)
{
    return r->nasl == NULL;
}

// Inicializácia
void init(ATOM **r)
{
    *r = ML;
    (*r)->nasl = NULL; // Povinne
};

// Vlož hodnotu
int hodnota(ATOM *r, int *x)
{
    if (!test(r))
    {
        *x = r->h;
    }
}

// Voláme odkazon
void odober(ATOM **r)
{
    if (!test(*r))
    {
        ATOM *pom = *r;
        *r = (*r)->nasl; // *r = pom -> nasl
        free((void *)pom);
    }
}

void odstran(ATOM **r)
{
    while (!test(*r))
    {
        odober(r);
    }
    free((void *)*r);
    *r = NULL;
}

int main(int argc, char const *argv[])
{
    char s[] = "Ahoj";
    ATOM *rad_a;
    init(&rad_a);

    // Vlož do radu
    for (size_t i = 0; i < strlen(s); i++)
    {
        vloz(rad_a, s[i]);
    }

    int c;

    while (!test(rad_a))
    {
        // Prečítaj hodnotu
        hodnota(rad_a, &c);
        printf("%c\n", c);

        // Odober
        odober(&rad_a);
    }

    // Prečítaj hodnotu
    hodnota(rad_a, &c);
    printf("%c\n", c);

    odstran(&rad_a);

    // Nebude fungovať lebo sme odstranili rad
    while (!test(rad_a))
    {
        // Prečítaj hodnotu
        hodnota(rad_a, &c);
        printf("%c\n", c);

        // Odober
        odober(&rad_a);
    }
    return 0;
}
