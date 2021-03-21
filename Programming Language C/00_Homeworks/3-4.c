#include <stdio.h>
#include <math.h>

int main()
{
    int forbase, mod, tenbase;
    printf("Zadaj 4-Base cislo: ");
    scanf("%d", &forbase);

    for (int i = 0; forbase > 0; i++) {
    mod = forbase % 10;
    if (mod < 4) {
        tenbase = (mod * pow(4, i)) + tenbase;
        forbase = forbase / 10;
    } else  {
    printf("Nie 4-Base cislo. \n");
    return 0;
    }
   }
   printf("Vase 4-Base v 10-Base je: %d\n", tenbase);
   return 0;
}
    
    
   
    