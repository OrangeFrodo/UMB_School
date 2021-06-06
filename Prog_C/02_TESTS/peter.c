#include <stdio.h>
#include <stdlib.h>

int funk(int n, char c[]);

int main()
{
    int n, nc;
    scanf("%d %d", &n, &nc);

    char c[101];
    scanf("%s", c);
    printf("%d", funk(n, c));
    
    return 0;
}

int funk(int n, char c[]){

    int i, j, p=0;
    int r = strlen(c);
    char pom_c1[n], pom_c2[n];

    for(i=0; i<=n; i++){
       pom_c1[i]=0;
       pom_c2[i]=0;
    }

    for(i=0; i<=r-n; i++){
        int pom_p=0;
        strncpy (pom_c1, &c[i], n);

        for(j=i+1; j<=r-n; j++){
            strncpy (pom_c2, &c[j], n);
            if(strcmp(pom_c1, pom_c2)==0){
                pom_p = 1;
            }
            if(pom_p==1){
                p++;
                pom_p=0;
            }
        }
    }
    return p;
}