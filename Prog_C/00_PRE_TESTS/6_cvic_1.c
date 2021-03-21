#include <stdio.h>
#include <stdlib.h>

int main()
{                                     
    FILE *fw;          
    int i;             

    fw = fopen("POKUS.TXT", "w");

    for (i = 1; i <= 10; i++){
        fprintf(fw, "%d \n", i); 
    }
    
    fclose(fw);
}