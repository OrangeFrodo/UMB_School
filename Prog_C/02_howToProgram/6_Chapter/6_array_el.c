#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(int argc, char const *argv[])
{
    int arr[SIZE] = {19, 3, 15, 7, 11};

    printf("%s%13s%17s\n", "ELEMENT", "VALUE", "HISTOGRAM");

    for(size_t i = 0; i < SIZE; ++i) {
        printf("%7u%13d     ", i, arr[i]);

        for (int j = 1; j <= arr[i]; ++j) {
            printf("%c", '*');
        }

        puts("");
    }

    return 0;
}
