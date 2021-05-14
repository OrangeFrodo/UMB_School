#include <stdio.h>
#include <stdlib.h>

unsigned long long int factorial(unsigned int number);
unsigned long long int fibonaci(unsigned int number);

int main(int argc, char const *argv[])
{
    unsigned int x = 0;
    /* for(unsigned int x = 0; x<=21; x++) 
    {
        printf("%u! = %llu\n", x, factorial(x));
    } */

    scanf("%u", &x);

    unsigned long long int result = fibonaci(x);
    printf("%llu", result);

    return 0;
}

unsigned long long int factorial(unsigned int number) 
{
    if (number <= 1) {
        return 1;
    } else {
        return (number * factorial(number-1));
    }

}

unsigned long long int fibonaci(unsigned int number)
{
    if (0 == number || 1 == number) {
        return number;
    } else {
        return fibonaci(number -1) + fibonaci(number - 2);
    }
}