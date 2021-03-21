#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, *p_c;

    printf("Zadaj cisla: \n");

    scanf("%d %d", &i, &j);
    p_c = (i>j) ? &i : &j;
    printf("Vacsie je %d", *p_c);

    return 0;
}