#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    for(unsigned int i=1; i <= 20; i++) {
        printf("%10d", 1 + (rand() % 6));

        if (i % 5 == 0) {
            puts("");
        }
    }

    return 0;
}