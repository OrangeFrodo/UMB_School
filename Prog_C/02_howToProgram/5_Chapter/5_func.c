#include <stdlib.h>
#include <stdio.h>

int square_root(int y);
int max_find(int x, int y, int z);

// MAIN FUNCTION
int main(int argc, char const *argv[])
{

    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    for(int x=1; x<=10; x++) {
        printf("%d \n", square_root(x));
    }

    printf("%d", max_find(num1, num2, num3));
}

// SQUARE FUNCTION
int square_root(int y) 
{
    return y * y;
}

// MAX FUNCTION
int max_find(int x, int y, int z) 
{
    int max = x;

    if (y > max) {
        max = y;
    }
    if (z > max) {
        max = z;
    }

    return max;
}
