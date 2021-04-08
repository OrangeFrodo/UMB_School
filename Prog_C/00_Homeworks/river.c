#include <stdio.h>
#include <stdlib.h>

int main() 
{   
    FILE *fr;

    int i=0; 
    int pocet_kam = 0;
    int *arr;

    fr = fopen("C:/Users/daxoj/Dev/devSchool/Prog_C/00_Homeworks/data.txt", "r");
    fscanf(fr, "%d", &pocet_kam);
    
    // Alokovanie
    arr = (int*)malloc(pocet_kam * sizeof(int));
    for(i = 0; i<=pocet_kam; i++){
        fscanf(fr, "%d ", &arr[i]);
    }

    // Porovnávanie "intervalovy_strom"
    int days = 0, min = 0, sum = 0, pom;

    for(i = 0; i < pocet_kam-1; i++) {
        if(i == 0) min = arr[i] + arr[i+1];
        sum = arr[i] + arr[i+1];
        if(sum < min) {
            min = sum;
            pom = i;
        }
        if(sum == min) {
            pom = (arr[pom]<arr[i] ? i : pom);
        }
    }

    days = (arr[pom] > arr[pom+1]) ? arr[pom] : arr[pom+1];
    printf("%d", days);

    fclose(fr);

    return 0;
}