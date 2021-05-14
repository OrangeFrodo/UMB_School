#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n[5];

    for (size_t x = 0; x < 5; x++) {
        n[x] = 0;
    }

    for (size_t i = 0; i < 5; i++) {
        printf("%7u%13d\n", i, n[i]);
    }

    return 0;
}
