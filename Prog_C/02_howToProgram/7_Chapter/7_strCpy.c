#include <stdio.h>
#define SIZE 10

void copy2(char *s3, const char *s4);
void copy1(char * const s1, const char * const s2);

int main(int argc, char const *argv[])
{
    char string1[SIZE];
    char *string2 = "Hello";

    copy1(string1, string2);
    printf("string 1 = %s\n", string1);

    char string3[SIZE];
    char string4[] = "Bye";

    copy2(string3, string4);
    printf("string 3 = %s\n", string3);

    return 0;
}

void copy1(char * const s1, const char * const s2) 
{
    for (size_t i = 0; (s1[i] = s2[i]) != '\0'; i++)
    {
        ;
    }
}

void copy2(char *s3, const char *s4)
{
    for (; (*s3 = *s4) != '\0'; ++s3, ++s4)
    {
        ;
    }
}