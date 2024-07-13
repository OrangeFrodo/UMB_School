#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i;
    scanf("%d", &i);
    int n;
    n = 0;
    while (n <= i)
    {
        printf("%d\n", n);
        n++;
    }
    return 0;
}
