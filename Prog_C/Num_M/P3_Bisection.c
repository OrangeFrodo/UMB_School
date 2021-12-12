// 2021.10.22
// Bisection method
// Jakub Daxner

// Conditions
// 1. Function f
// 2. Interval a0, b0
// 3. E > 0

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// Debug
// #define DEBUG

// Function returning value of function
float returnFunValue(float x)
{
    float answ = 0;

    // 1.
    // Set function which want to be callculated
    answ = pow(x, 3) - (12 * x) + 8;

    return answ;
}

int main(int argc, char const *argv[])
{
    float a0, b0; // Interval variables
    float x;      // Current X
    float x0;     // Xk+1,

    float error_size;
    int num_of_iteration = 0;

    do
    {
        // 2.
        printf("Enter interval from a0 to b0\n");
        scanf("%f %f", &a0, &b0);

    } while (returnFunValue(a0) * returnFunValue(b0) > 0);

    // Enter error_size
    printf("Enter error_size \n");
    scanf("%f", &error_size);

    // Need to be float abs
    while (fabs(a0 - b0) > error_size)
    {

// Debug feature
#ifdef DEBUG
        num_of_iteration++;
        printf("%d \n", num_of_iteration);
#endif

        // Previous X
        x0 = (a0 + b0) / 2;

        if ((returnFunValue(a0) * returnFunValue(x0)) < 0)
        {
            b0 = x0;
        }

        else
        {
            a0 = x0;
        }

        // Current X
        x = (a0 + b0) / 2;
    }

    // Answer
    printf("Root of function is around = %f +- %f\n", x0, error_size);
}