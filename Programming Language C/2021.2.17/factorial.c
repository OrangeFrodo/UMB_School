#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, f, i;
    printf("Zadaj cele cislo: ");
    scanf("%d", &n);
    f = 1;
    i = 1
    for(i=1; i<=n; i++) {
        f *= i;
        i ++;
    }
    printf("%d! = %d\n", n, f);
    return 0;
}