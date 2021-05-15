#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 7;
    int *aPtr = &a;

    printf("\nAdres of a is %p, with value %d\n\n", &a, a);
    printf("Adres of aPtr is %p, with value %d \n\n", &aPtr, aPtr);

    printf("Adres of a is %p, with value %p\n\n", &*aPtr, *&aPtr);

    return 0;
}
