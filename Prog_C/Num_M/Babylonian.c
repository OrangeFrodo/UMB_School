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
    float x0 = 1.0;

    // 3.
    float error_size = 0.001;

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

    scanf("%f", &S);

    // 1.
    if (S <= 0)
    {
        printf("Error, entered incorrect value \n");
        return 0;
    }

    ans = babylonian_fun(S);
    printf("%f \n", ans);

    return 0;
}
