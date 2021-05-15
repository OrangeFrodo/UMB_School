#include <stdio.h>
#define SIZE 10

void bubble(int work[], size_t size, int(*compare)(int a, int b));
int ascending(int a, int b);
int descending(int a, int b);

int main(int argc, char const *argv[])
{
    int a[SIZE] = {2, 4, 8, 88, 5, 2, 78, 65, 22, 55};

    printf("%s", "Enter 1 to sort in ascending order, \n"
            "Enter 2 sort in descending order: ");

    int order;
    scanf("%d", &order);

    puts("\n Data items in original order");

    for (size_t counter = 0; counter < SIZE; ++counter) {
        printf("%5d", a[counter]);
    }

    if (order == 1) {
        bubble(a, SIZE, ascending);
        puts("\n Data items in ascending order");
    } else {
        bubble(a, SIZE, descending);
        puts("\n Data items in descending order");
    }

    for (size_t counter = 0; counter < SIZE; ++counter) {
        printf("%5d", a[counter]);
    }

    puts("\n");

    return 0;
}

void bubble(int work[], size_t size, int(*compare)(int a, int b))
{
    void swap(int *element1Ptr, int *element2Ptr);

    for (unsigned int pass = 0; pass < size; ++pass) {
        for (size_t j = 0; j < size-1; ++j) {
            if ((*compare)(work[j], work[j + 1])) {
                swap(&work[j], &work[j+1]);
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

int ascending(int a, int b)
{
    return b < a;
}

int descending(int a, int b)
{
    return b > a;
}