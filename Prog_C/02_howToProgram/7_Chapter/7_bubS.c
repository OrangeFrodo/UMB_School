//Putting values into an array, sorting the values into
//ascending order and printing the resulting array.

#include <stdio.h>
#include <stdlib.h>
#define SIZE 12

void bubbleSort(int * const array, const size_t size);

int main(int argc, char const *argv[])
{
    int a[SIZE] = {2, 6, 4, 8, 55, 4, 9, 65, 75, 44, 78, 21};

    puts("Data items in original order: \n");
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }

    bubbleSort(a, SIZE);
    
    puts("\nData items in ascending order: \n");
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }

    puts("");

    return 0;
}

void bubbleSort(int * const array, const size_t size)
{
    void swap(int *element1Ptr, int *element2Ptr);

    for (unsigned int pass = 0; pass < size - 1; ++pass) {
        for (size_t j = 0; j < size-1; ++j) {
            if(array[j] > array[j+1]) {
                swap(&array[j], &array[j + 1]);
            }
        }
        
    }
    
}

void swap(int *element1Ptr, int *element2Ptr)
{
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}