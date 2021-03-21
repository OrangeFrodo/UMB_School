#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    float x;
    
    printf("Zadajte kladne cislo posledneho clena n postupnosti: ");
    scanf("%d",&n);
    
    while(n<0){
        printf("Bolo zadane zle cislo, Skus to este raz: ");
        scanf("%d",&n);
    }

    x = 0;

    for(int i=1;i<=n;i++)
        x=x+1/pow(i,2);

    printf("Vysledok je: %f\n",x);
    return 0;
}