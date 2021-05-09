#include<stdio.h>
#include<stdlib.h>
#include "main.h"

int main(int argc, char const *argv[])
{
    int n, d;
    int *h, *s, *p;

    load_input(&n, &d, &h);

    s = (int*) malloc(sizeof(int) * (n+1));
    p = (int*) malloc(sizeof(int) * (n+1));

    prefix(h, s, n);

    int v;
    v = num_of_poss(p, s, n, d);
    printf("%d\n", v);
    del_allok(h, s, p);

    return 0;
}

int load_input(int *p_n, int *p_d, int **p_h) 
{
    int pom_n, pom_d, *pom_h;
    scanf("%d %d", &pom_n, &pom_d);

    pom_h = (int*) malloc(sizeof(int) * (pom_n+1));
    int i;
    for (i=1; i<pom_n; i++) {
        scanf("%d", &pom_h[i]);
    }

    *p_n = pom_n;
    *p_h = pom_h;
    *p_d = pom_d;

    return(0);
}

void prefix(int *h, int *s, int *n) {
    s[0] = 0;
    int i;
    for (i=1; i<n; i++) {
        s[i] = h[i] + s[i-1];
    }
}

int num_of_poss(int *p, int *s, int n, int d) 
{
    p[0] = 1;
    int i, j;
    for (i=1; i<=n; i++) { //postupne schody dole
        p[i] = 0;
        j = i-1;            // before step
        while ((j>=0) && (s[i]-s[j] <= d)) {      // continue down
            p[i] += p[j];
            j--;

        }
    }
    return(p[n]);
}

void del_allok(int *h, int *s, int *p) 
{
    free((void *) h);
    free((void *) s);
    free((void *) p);
}