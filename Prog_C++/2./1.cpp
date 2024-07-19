// Errors and Warnings
/*
    1. Compile Time Errors
    2. Runtime Errors
    3. Warnings
*/
#include <iostream>

int main()
{
    // Compile Time Errors
    std::cout << "Hello World" << std::endl // Missing ";"
    return 0;

    // Runtime Errors
    int x = 10;
    int y = 0;
    std::cout << x / y << std::endl; // Division by zero
    std::cout << 7 / 0 << std::endl; // Division by zero
}
