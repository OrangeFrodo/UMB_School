#include <stdio.h>
#include <stdlib.h>

int main()
{   
    for(int i=0;i<1000 ? i : i--; i++)printf("%d\n",i>>=1);

    return(0);
}