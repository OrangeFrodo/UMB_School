#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    int c;
    f = fopen("vstup.txt", "r");
    while((c = getc(f)) != EOF) {
        putchar(c);
    }
    fclose(f);
    return 0;
}