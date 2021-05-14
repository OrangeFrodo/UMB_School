#include <stdio.h>

int cube(int y);                    //The function prototype for cube. // The identifier y in the function prototype for cube.

int main(void)                      //The function main
{
    for (int x = 1; x <= 10; ++x)   //The variable x in main
    printf("%u\n", cube(x));
}

int cube(int y)                     //The function cube. //The variable y in cube 
{
    return y * y * y;
}