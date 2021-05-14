#include <stdio.h>
#include <stdlib.h>

int square_int(int);

int main(int argc, char const *argv[])
{
    int a = 5;

    printf("%d This value is = %d when squared", a, square_int(a));
    return 0;
}

int square_int(int y) 
{   
    return y * y;
}
