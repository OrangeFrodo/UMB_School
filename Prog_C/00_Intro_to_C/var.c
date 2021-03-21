#include <stdio.h>
#include <stdlib.h>

int main()
{
    char characterName[] = "John";
    int characterAge = 55;

    printf("   /|%s\n", characterName);
    printf("  / |%d\n", characterAge);

    characterAge = 30;
    printf(" /  |\n");
    printf("/___|%d\n", characterAge);

    return 0;
}