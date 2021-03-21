#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i, i2, c;

    printf("Zadaj cisla : \n");
    c = getchar();

    if ((c >= 'A' && c <= 'Z') || (c >= 1 && c <= 9))
        printf("%#x\n", c);
    

    return 0;
}