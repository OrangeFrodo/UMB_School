#include <stdio.h>
#include <stdlib.h>


int hodnotou(int x);
int pointerom(int *x);

int hodnotou(int x){

    int cislo_a;

    printf("zadajte cislo ktore bude volane pomocou return: ");
    
    scanf("%d", &cislo_a);
    printf("%d\n", cislo_a);

    return(cislo_a);
}

int pointerom(int *x){
    int cislo_a;

    printf("zadajte cislo ktore bude volane odkazom: ");
    
    scanf("%d", &cislo_a);
    *x = cislo_a;
    printf("%d", *x);
}

int main()
{
    int cislo_a;
    hodnotou(cislo_a);
    pointerom(&cislo_a);
}

