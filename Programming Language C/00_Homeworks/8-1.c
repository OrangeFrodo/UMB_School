#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    float pomr;
    int i,j,k,n;

    printf("Velkost matice: ");
    scanf("%d", &n);

    float a[n][n+1], x[n];

    for(i=1; i<=n; i++) {
        for(j=1; j<=n+1; j++) {
            printf("a[%d][%d] = ", i,j);
            scanf("%f", &a[i][j]);
        }
    }

    for(i=1; i<=n-1; i++) {
        if(a[i][i] == 0.0) {
            printf("Chyba!");
            return(0);
        }
        for(j=i+1; j<=n; j++) {
            pomr = a[j][i]/a[i][i];
            for(k=1; k<=n+1; k++) {
                a[j][k] = a[j][k] - pomr*a[i][k];
            }
        }
    }

    x[n] = a[n][n+1]/a[n][n];
	
    for(i=n-1; i>=1; i--) {
        x[i] = a[i][n+1];
        for(j=i+1; j<=n; j++) {
            x[i] = x[i] - a[i][j]*x[j];
        }
        x[i] = x[i]/a[i][i];
	}

	printf("\nOdpoved: \n");
	for(i=1; i<=n; i++) {
	  	printf("x[%d] = %0.3f\n", i, x[i]);
	}
    return(0);
}