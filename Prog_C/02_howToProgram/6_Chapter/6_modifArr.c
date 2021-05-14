#include <stdio.h>
#define SIZE 5


void modifyArray(int b[], size_t size);
void modifyElement(int e);

int main(int argc, char const *argv[])
{
    int a[SIZE] = {0, 1, 2, 3, 4};
    size_t i;

    for (i = 0; i < SIZE; ++i) {
        printf("%3d", a[i]);
    }

    puts("");

    modifyArray(a, SIZE);
    puts("The value of the modified array are: ");

    for (i = 0; i < SIZE; ++i) {
        printf("%3d", a[i]);
    }

    printf("\n\n\nEffects of passing array element "
        "by value: \n\nThe value of a[3] is %d\n", a[3]);

    modifyElement(a[3]);

    printf("\n\n\nEffects of passing array element "
        "by value: \n\nThe value of a[3] is %d\n", a[3]);


    return 0;
}

void modifyArray(int b[], size_t size)
{
    for(size_t j = 0; j < SIZE; ++j) {
        b[j] *= 2;
    }
}

void modifyElement(int e) 
{
    printf("Modifing value is %d", e*2);
}