#include <stdio.h>
#include <stdlib.h>

int obsad(char[], int, int, int, int);

int main() 
{
    int s, p, m; // pocet stoliciek, maciek, psov

    printf("Pocet stoliciek: ");
    scanf("%d", &s);
    printf("Pocet psov: ");
    scanf("%d", &p);
    printf("Pocet maciek: ");
    scanf("%d", &m);

    char c[s]; // cakaren 

    obsad(c, s, p, m, 0);

    return 0;
}

int obsad(char c[], int s, int p, int m, int miesto)
{
    if(miesto < s) {
        if(p>0 && (miesto == 0 || c[miesto-1]!='M')) {
            c[miesto] = 'P';
            obsad(c, s, p-1, m, miesto+1);
        }
        if(m>0 && (miesto == 0 || c[miesto-1]!='P')) {
            c[miesto] = 'M';
            obsad(c, s, p, m-1, miesto+1);
        }
        c[miesto] = '.';
        obsad(c, s, p, m, miesto+1);
    } else {
        if(p==0 && m==0) {
            int i;
            for (i=0; i<s; i++) {
                putchar(c[i]);
            }
            putchar('\n');
        }
    }
    return(0);
}