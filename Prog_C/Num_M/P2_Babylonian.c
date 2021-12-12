// 2021.09.30
// Babylonian method
// Jakub Daxner

// Conditions
// 1. Positive num. "S"
// 2. X0 > 0
// 3. E > 0

#include <stdlib.h>
#include <stdio.h>

float babylonian_fun(float entered_value)
{
    // 2.
    float x1 = entered_value;
    float x0 = 0; // 0 = Becouse now there is 100% certanty on 22. line

    // 3.
    // Enter error_size
    float error_size;
    printf("Enter error_size \n");
    scanf("%f", &error_size);

    //  For 1. iteration Entered_value - x0 = is alway greater than error_size
    while (x1 - x0 >= error_size)
    {
        x1 = (float)(x1 + x0) / (float)2;
        x0 = (float)entered_value / (float)x1;
    }

    return x0;
}

int main(int argc, char const *argv[])
{
    float S;
    float ans;

    // 1.
    do
    {
        printf("Enter possitive value S \n");
        scanf("%f", &S);
    } while (S <= 0);

    ans = babylonian_fun(S);
    printf("Answer = %f \n", ans);

    return 0;
}
