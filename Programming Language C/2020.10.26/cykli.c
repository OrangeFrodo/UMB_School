#include <stdio.h>
#include <stdlib.h>

int main()
{   

    int i = 1;
    int n = 100;
    int fakt = 1; // faktorial 1 je neutrálny prvok

    /* while (i <= n) {
        //príkaz v cykle
        fakt = fakt * i;
        printf("i = %dna fakt = %d\n ", i,fakt);

        //inkremetnácia počítadla
        i++;
    } 
    */

    /* do {
        printf("i = %d\n" ,i);
        i++;
    } while (i >= n);
    */


    for (int i=0; i<n; i++) {
        printf("i = %d\n" ,i);
    }


    return 0;
}