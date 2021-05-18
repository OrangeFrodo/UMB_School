#include <string.h>
#include <stdio.h>
#include <math.h>

#define SIZE 100

unsigned long long int riverCalculator(unsigned int number);

int main(int argc, char const *argv[])
{
    unsigned int myInt;
    unsigned int helpVar;

    int i = 0;

    int s = 0;
    int rieky_pocet = 0;

    do
    {
        scanf("%d", &myInt);
        unsigned long long int result = riverCalculator(myInt);
        printf("%llu \n", result);
    } while (myInt != 0);
    

    return 0;
}

unsigned long long int riverCalculator(unsigned int number)
{   
    size_t i = number;
    unsigned int f = 0;

    while (0 < i)
    {   
        if (0 == f) {
            
        }
        f += riverCalculator(number-1) + riverCalculator(number-2);
        i--;
    }
    return 

}

/*     if(0 == number) {
        unsigned int zSt = 0;
        unsigned int fSt = 1;
        
        unsigned int f = zSt + fSt;
        return f;

    } else if (1 == number) {
        unsigned int ffSt = 1;
        unsigned int sfSt = 1;
        
        unsigned int ff = sfSt + ffSt;
        return ff;
    } else {
        final += riverCalculator(number-1) + riverCalculator(number-2);
        return final;
    } */
