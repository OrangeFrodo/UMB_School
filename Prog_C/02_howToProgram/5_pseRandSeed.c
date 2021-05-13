#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned int seed;

    printf("%s", "Enter the seed: ");
    scanf("%u", &seed);

    srand(seed);

    for (unsigned int i = 1; i <= 10; i++) {
        printf("%10d", 1 + (rand() % 6));

        if (i % 5 == 0) {
            puts("");
        }
    }

    //  Otázka
    //  Random refered as : n = a + rand() % b;

    return 0;
}
