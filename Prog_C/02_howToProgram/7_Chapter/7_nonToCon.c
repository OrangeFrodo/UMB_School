// Converting a string to uppercase using 
// non-constant pointer to constant data.

#include <stdio.h>

void printCharacters(const char *sPtr);

int main(int argc, char const *argv[])
{
    char string[] = "print chars of string";

    puts("Before function");
    printCharacters(string);
    puts("");

    return 0;
}

void printCharacters(const char *sPtr)
{
    for(; *sPtr != '\0'; ++sPtr) {
        printf("%c", *sPtr);
    }
}
