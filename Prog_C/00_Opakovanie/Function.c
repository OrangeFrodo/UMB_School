#include <stdlib.h>
#include <stdio.h>

int sucet(int x, int y) {
    
    return x + y;
}



int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 4;

    int r = sucet(a, b);
    printf("%d \n", r);

    a = 333;
    b = 222;

    r = sucet(a, b);
    printf("%d \n", r);

    return 0;
}
