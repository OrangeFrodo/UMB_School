#include <stdio.h>
#include <stdlib.h>


int citanie_riadku(int *p_medzery, int *p_male) 
{
    int c, pocet = 0;

    *p_medzery = 0; *p_male = 0;

    while ((c = getchar()) != '\n') {
        pocet++;
        if (c == ' ')
            (*p_medzery)++;                   
        else if ( c >= 'a' && c <= 'z')     // toto je na zistenie malých písmen "IF True; c == Malé píseno"
            (*p_male)++;
    }
    return ((pocet == 0) ? 0 : 1);
}

int main()
{    
    int medzery, male; 

    while (citanie_riadku(&medzery, &male) == 1) {
        printf("%d %d", medzery, male);
    }

    return 0;
}