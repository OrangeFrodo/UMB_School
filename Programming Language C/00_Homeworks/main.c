#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int main()
{
    int i,j;
    int a[MAX], _a = 5;
    //priprava pola
    for(i = 0; i < _a; i++)
        a[i] = i+1;
    for(i = _a; i < MAX; i++)
        a[i] = 0;
        
    //vypis pola
    for(i = 0; i < MAX; i++)
        printf("%d ", a[i]);
    printf("\n");

    //vkladanie na lubovolne miesto
    if(_a < MAX){
        scanf("%d",&i);
        if(i <= _a){
            j = _a;
            while(j > i){
                a[j] = a[j-1];
                j--;
            }
            _a++;
            scanf("%d",&a[i]);
        }
    }

    //vypis pola
    for(i = 0; i < MAX; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
