#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

size_t linearSearch(const int array[], int key, size_t size);

int main(int argc, char const *argv[])
{
    int arr[SIZE];

    for (size_t i = 0; i < SIZE; ++i) {
        arr[i] = 2*i;
    }

    printf("%s", "Enter integer search key: ");

    int searchKey;
    scanf("%d", &searchKey);

    size_t index = linearSearch(arr, searchKey, SIZE);

    if (index != -1) {
        printf("Found index value %d", index);
    } else {
        printf("Index not found");
    }

    return 0;
}

size_t linearSearch(const int array[], int key, size_t size) 
{
    for (size_t n = 0; n < size; ++n) {

        if (array[n] == key) {
            return n;
        }
    }

    return -1;
}
