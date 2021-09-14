#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{   
    int i, n, f=1;

    if (argc > 1) {
        n = atoi(argv[1]);
    } else {
        fprintf(stderr, "Pouzi: soft.exe n\n");
        return 1;
    }

    for(i=1; i<=n; i++){
        f *= i;
    }

    printf("%d\n", f);

    return 0;
}