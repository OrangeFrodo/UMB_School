#include <stdio.h>
#include <stdlib.h>

//#define DEBUG
#define MAX 100

// 0 = <  1 = V  2 = >
int pocet = 0;
int b = 1;

int rekurzia(int mesto, int m[], int n);
char premena(int a);

int main()
{
    int n;
    printf("Zadajte n: ");
    scanf("%d", &n);
    int m[n];
    //int pocet = 0;

    rekurzia(0, m, n);

    printf("\n%d\n", pocet);

    return 0;
}

int rekurzia(int mesto, int m[], int n)
{
    int ii;
    if(mesto == n)
    {
        #ifdef DEBUG
        printf("\n");
        printf("%3d\t", b++);
        for(ii=0; ii<n; ii++){
            printf("%c ",premena(m[ii]));
        }
        printf("\t");
        #endif // DEBUG
        int ok = 1;
        if(m[0] == 0 || m[n-1] == 2)
        {
            ok = 0;
            #ifdef DEBUG
            printf("a");
            #endif // DEBUG
            return(0);
        }
//        for(ii=1; ii<n-1; ii++)
//        {
//            if(m[ii-1] == 2 && m[ii+1] == 0)
//            {
//                ok = 0;
//                #ifdef DEBUG
//                printf("b");
//                #endif // DEBUG
//                return(0);
//            }
//        }
        for(ii=0; ii<n-1; ii++)
        {
            if(m[ii] == 2 && m[ii+1] == 0)
            {
                ok = 0;
                #ifdef DEBUG
                printf("c");
                #endif // DEBUG
                return(0);
            }
        }
        if(ok)
        {
            #ifdef DEBUG
            printf(" ok");
            #endif // DEBUG
            pocet++;
        }
        return(0);
    }
    m[mesto] = 0;
    rekurzia(mesto+1, m, n);
    m[mesto] = 1;
    rekurzia(mesto+1, m, n);
    m[mesto] = 2;
    rekurzia(mesto+1, m, n);
    return(0);
}

char premena(int a)
{
    if(a == 0) return '<';
    if(a == 1) return 'V';
    if(a == 2) return '>';
}
