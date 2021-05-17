#include <stdio.h>
#include <stdlib.h>

#define SIZE 80

void mystery1(char *s1, const char *s2);

int main(int argc, char const *argv[])
{
    char string1[SIZE];   
    char string2[SIZE];
    
    scanf("%79s%79s", string1, string2);

    mystery1(string1, string2);

    printf("%s", string1);

    return 0;
}

void mystery1(char *s1, const char *s2)
{
    while (*s1 != '\0') {
        ++s1;
    }

    for (; *s1 = *s2; ++s1, ++s2)
    {
        ;
    }

}