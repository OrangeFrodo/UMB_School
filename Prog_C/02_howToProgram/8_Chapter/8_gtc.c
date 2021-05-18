#include <stdio.h> 
#include <stdlib.h> 
#define SIZE 80

int main(int argc, char const *argv[])
{
    unsigned int c;
    char sentence[SIZE];

    size_t i = 0;

    puts("Enter a line: ");

    while ((i < SIZE - 1) && (c = getchar()) != '\n') {
        sentence[i++] = c;
    }

    sentence[i] = '\0';

    printf("Sentence \n");
    puts(sentence);

    return 0;
}