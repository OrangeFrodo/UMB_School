#include <stdio.h>
#include <stdlib.h>

void staticArrayInit(void);
void automaticArrayInit(void);

int main(int argc, char const *argv[])
{
    puts("First call to each function");
    staticArrayInit();
    automaticArrayInit();

    puts("\n\nSecond call to each function");
    staticArrayInit();
    automaticArrayInit();

    return 0;
}

void staticArrayInit(void)
{
    static int array1[3];

    puts("\n Values on entering staticArrayInit: ");

    for (size_t i = 0; i <= 2; ++i) {
        printf("array1[%u] = %d ", i, array1[i]);
    }

    puts("\n Values on exiting staticArrayInit:");

    for (size_t i = 0; i <= 2; ++i) {
        printf("array1[%u] = %d ", i, array1[i] += 5);
    }

    puts("\n");
}

void automaticArrayInit(void)
{
    int array2[3] = {1, 2, 3};

    puts("\n Values on entering automaticArrayInit: ");

    for (size_t i = 0; i <= 2; ++i) {
        printf("array2[%u] = %d ", i, array2[i]);
    }

    puts("\n Values on exiting automaticArrayInit: ");

    for (size_t i = 0; i <= 2; ++i) {
        printf("array2[%u] = %d ", i, array2[i] += 5);
    }

    puts("\n");
}