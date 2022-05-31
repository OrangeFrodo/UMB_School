#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int Array[5]; 

    for (size_t i = 1; i <= 5; i++)
    {
        Array[i] = i;
    }

    for (size_t i = 0; i <= 8; i++)
    {
        printf("%d ", Array[i]);
    }
    
    

    return 0;
}
