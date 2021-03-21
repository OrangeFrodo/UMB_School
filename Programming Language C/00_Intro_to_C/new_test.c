#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    int i = 1;
    long long int fakt = 1;
    if (n != 0 || n != 1)
        for(i = 1; i<=n ; i++)
            fakt = fakt * i;
    printf("%d! = %lld\n", n, fakt);
    return 0;
}