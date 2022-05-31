#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%s\n", n);

    char matrix[n][n] = {0};
    
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        
    }
    

    return 0;
}
