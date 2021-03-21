/*
 * Nazov: operatory
 * Autor: Miroslav Melichercik
 * Rok:   2020/2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{      
    int8_t i; // -
    int16_t ii;
    int32_t iii;
    int64_t iiii;


    uint32_t iii; // +
    uint64_t iiii;



    printf("int\t%lu B\n", sizeof(int));
    printf("short\t%lu B\n", sizeof(short));
    printf("long\t%lu B\n", sizeof(long));
    printf("long long int\t%lu B\n", sizeof(long long int));
    printf("signed short\t%lu B\n", sizeof(signed short));
    printf("unsigned short\t%lu B\n", sizeof(unsigned short));
    printf("char\t%lu B\n", sizeof(char));
    printf("float\t%lu B\n", sizeof(float));
    printf("double\t%lu B\n", sizeof(double));
    return 0;
}
