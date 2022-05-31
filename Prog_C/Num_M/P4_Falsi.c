// 2021.10.22
// Falsi
// Jakub Daxner

// Conditions
// 1. Function f
// 2. Interval a0, b0
// 3. E > 0
// 4. For validation end condition X0 = a0

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// Debug
#define DEBUG


// Function returning value of function
float returnFunValue(float x)
{
    float answ = 0;

    // 1.
    // Set function which want to be callculated
    answ = pow(x, 2) - (3 * x) + 1;

    return answ;
}

int main(int argc, char const *argv[])
{
    float a0, b0; // Interval variables
    float x;      // Current X
    float x0;     // Xk+1,

    float numerator = 0;
    float denominator = 0;

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
        // Numerator + Denominator
        numerator = b0 - a0;
        denominator = returnFunValue(b0) - returnFunValue(a0);

        // Previous X
        x0 = a0 - (numerator / denominator) * returnFunValue(a0);

        if ((returnFunValue(a0) * returnFunValue(x0)) < 0)
        {
            b0 = x0;
        }

        else
        {
            a0 = x0;
        }

        // Numerator + Denominator
        // Same as a bisection, instead there's another formula
        numerator = b0 - a0;
        denominator = returnFunValue(b0) - returnFunValue(a0);

        // Current X
        x = a0 - (numerator / denominator) * returnFunValue(a0);
    }

    // Answer
    printf("Root of function is around = %f +- %f\n", x0, error_size);
}