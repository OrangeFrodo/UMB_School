#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    printf("Zadaj riadky: ");
    scanf("%d",&m);
    printf("Zadaj stlpce: ");
    scanf("%d",&n);

    int i,j;
    float A[m][n], B[m][n];

    for(i=0; i<m; i++){
        for(j = 0; j<n; j++){
            printf("Zadaj realne cislo: ");
            scanf("%f",&A[i][j]);
        }
    }

    for(i=0; i<m; i++){
        for(j = 0; j<n; j++){
           B[i][n-j-1] = A[i][j];
        }
    }

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%f ",B[i][j]);}
        printf("\n");
    }

    return 0;
}