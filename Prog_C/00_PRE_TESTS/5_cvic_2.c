 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, i2;

    printf("Zadaj cisla : \n");
    scanf("%d %d", &i, &i2);

    printf("Cislo mansie je : %d \n", i < i2 ? i : i2);
    printf("Cislo vacsie je : %d", i > i2 ? i : i2);

    return 0;
}