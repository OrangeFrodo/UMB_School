// Survey data analysis with arrays:
// computing the mean, median and mode of the data.

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define SIZE 50

int main(int argc, char const *argv[])
{
    unsigned int frequency[10] = {0};
    unsigned int response[SIZE] = {0};

    srand(time(NULL));

    for(size_t i = 0; i<SIZE; i++) {
        response[i] = 1 + rand() % 9;
    }

    for(size_t i = 1; i<SIZE; i++) {
        printf("%10d", response[i]);

        if (i % 5 == 0) {
            puts("");
        }
    }

    //process responses
    return 0;
}

void mean(const unsigned int answer[])
{
    printf("%s\n%s\n%s\n", "********");
}
