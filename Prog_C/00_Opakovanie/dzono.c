// Druha mocnina
// 1.4 Uloha
// osetrenie pre pripad visual studia, nakolko scanf povazuje za unsafe funkciu
#define _CRT_SECURE_NO_WARNINGS
// osetrenie pre pripad visual studia, nakolko scanf povazuje za unsafe funkciu

#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double x;
    scanf("%lf",&x);
    int vypocet1 = floor(x);
    int vypocet2 = round(x);
    printf("%d %d",vypocet1,vypocet2);
    return 0;
}