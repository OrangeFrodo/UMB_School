#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    printf("%s\n%s%s\n%s%s\n\n", "According to isdigit: ",
        isdigit('8') ? "8 is a " : "8 is not a ", "digit",
        isdigit('#') ? "# is a " : "# is not a ", "digit");

    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
        "According to isalpha:",
        isalpha('A') ? "A is a " : "A is not a ", "letter",
        isalpha('b') ? "b is a " : "b is not a ", "letter",
        isalpha('&') ? "& is a " : "& is not a ", "letter",
        isalpha('4') ? "4 is a " : "4 is not a ", "letter");

    // STRING-CONVERSION FUNCTIONS
    //STRTOD()
    const char *string = "51.2% are admitted";
    char *stringPtr;

    double d = strtod(string, &stringPtr);

    printf("The string \"%s\" is conveted to the \n", string);
    printf("double value %.2f and the string \"%s\"\n", d, stringPtr);

    //STRTOL
    const char *string2 = "-123456789abc";
    char *remainderPtr;

    long x = strtol(string2, &remainderPtr, 0);

    printf("\n%s\"%s\"\n%s%ld\n%s\"%s\"\n%s%ld\n",
        "The original string is ", string2,
        "The converted value is ", x,
        "The remainder of the original string is ",
        remainderPtr,
        "The converted value plus 567 is ", x + 567);

    //STRTOUL
    const char *string3 = "123456789abc";
    char *remainderPtr2;

    unsigned long int y = strtoul(string3, &remainderPtr2, 0);
    
    printf("\n%s\"%s\"\n%s%ld\n%s\"%s\"\n%s%ld\n",
        "The original string is ", string3,
        "The converted value is ", y,
        "The remainder of the original string is ",
        remainderPtr,
        "The converted value plus 567 is ", y - 567);

    return 0;
}
