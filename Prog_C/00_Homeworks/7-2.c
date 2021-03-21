#include <stdio.h>

int main()
{
    int n, i;
    printf("Zadaj n: ");
    scanf("%d", &n);

    int p[n];
    for(i = 0; i < n; i++){
        printf("Zadaj %d. člen: ", i);
        scanf("%d", &p[i]);
    }
    int j, temp;
    
    for(i = 0; i < n-1; i++)

    for(j = 0; j < n-i-1; j++) {
        if(p[j] < p[j+1]) {        
            temp = p[j];
            p[j] = p[j+1];
            p[j+1] = temp;
        }
    }
    for(i = 0; i < n; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
    return 0;
}