#include <stdio.h>
#include <stdlib.h>

int load_input(int *p_n, int *p_d, int **p_h);

int main(int argc, char const *argv[])
{
    int n, d;
    int *h, *s, *p;

    load_input(&n, &d, &h);

    s = (int*) malloc(sizeof(int) * (n+1));

    return 0;
}

int load_input(int *p_n, int *p_d, int **p_h) 
{
    int pom_n, pom_d, *pom_h;       // 
    scanf("%d %d", &pom_n, &pom_d); // scanf p_n [p_n, ___]; p_n = 3
    pom_h = (int*) malloc(sizeof(int) * (pom_n+1)); // malloc [[__; ]*f] == [[__; __; __;]]

    int i;
    for (i=1; i<pom_n; i++) {
        scanf("%d", &pom_h[i]);
    }

    *p_n = pom_n;
    *p_h = pom_h;
    *p_d = pom_d;

    for (i=0; i<pom_n; i++) {
        printf("%d", pom_h[i]);
    }

    return(0);
}
