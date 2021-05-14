#include <stdlib.h>
#include <stdio.h>
#define SIZE 10


int main(int argc, char const *argv[])
{
    int a[SIZE] = {1, 8, 6, 77, 52, 98, 55, 4, 77, 8};

    puts("Data item in original order");

    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%4d", a[i]);
    }

    // BUBBLE SORT
    for (unsigned int pass = 1; pass < SIZE; pass++) {

        for (size_t i = 0; i < SIZE - 1; ++i) {
            if (a[i] > a[i + 1]) {
                int hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
            }
        }
        
    }
    
    puts("\nData Items in order");

    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }
    
    puts("");
    

    return 0;
}
