#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a0, d, n;

    printf("Zadaj a0, d, n\n");
    scanf("%d %d %d", &a0, &d, &n);
    printf("a0=%d d=%d n=%d\n", a0, d, n);
    int an=a0, i;
    for(i=1; i<=n; i++) {
        an += d;
        printf("a%d = %d\n", i, an);
    }
    return 0;
}