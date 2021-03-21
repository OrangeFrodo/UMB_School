#include <stdio.h>
#include <stdlib.h>

int main() {
    char c;
    printf("Zadaj znak: ");
    while ((c = getchar()) != '*') {   
        if (c >= 'A' && c <= 'Z') {
            c += 'a' - 'A';
        }
        if (c != '\n') {
            printf("Znak %c ma ASCII hodnotu %d\n", c, c);
        } 
    } 
    return 0;
}