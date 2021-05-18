#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

void testAlpha(int c);

int main(int argc, char const *argv[])
{   
    char array[SIZE];
    unsigned int c;

    int i = 0;

    while ((i < SIZE - 1) && (c = getchar()) != '*') {
        array[i++] = c;
        testAlpha(c);
    }

    array[i] = '\0';
    puts(array);

    return 0;
}

void testAlpha(int c)
{
    printf("%s", isdigit(c) ? "%s is a " : "%s is not a ", "digit", c);
}