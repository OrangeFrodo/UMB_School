// Converting a string to uppercase using 
// non-constant pointer to non-constant data.

#include <stdio.h>
#include <ctype.h>

void convertToUppercas(char *sPtr);

int main(int argc, char const *argv[])
{
    char string[] = "ChaRacTErS and $32.98";

    printf("The string before conversion is : %s", string);
    convertToUppercas(string);
    printf("\nThe string after conversion is : %s\n", string);

    return 0;
}

void convertToUppercas(char *sPtr) 
{
    while (*sPtr != '\0') {
        *sPtr = toupper(*sPtr);
        ++sPtr;
    }
}