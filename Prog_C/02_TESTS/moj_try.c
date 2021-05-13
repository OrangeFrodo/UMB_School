#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int n, nc, p;
    scanf("%d %d", &n, &nc);

    char c[100];
    scanf("%s", c);

    p = funk(n, c);

    printf("%d", p);

    return 0;
}

int funk(int n, char c[]) 
{
    int i, j, p=0;
    int d=7;
    char pom_c1[n+1], pom_c2[n+1];


    for(i=1; i<d-n; i++) {
        int pom_p = 0;
        strncpy(pom_c1, &c[i], n);
        for (j=i+1; j<d-n; j++) {
            strncpy(pom_c2, &c[j], n);
            if(strcmp(pom_c1, pom_c2) == 0) {
                pom_p = 1;
            }
        }

        if (pom_p==0){
            p++;
        }
    }

    return p;
}