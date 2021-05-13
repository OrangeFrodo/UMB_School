#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);

int x = 1;  // Global Var

int main(int argc, char const *argv[])
{
    int x = 5;   // Local Var

    printf("local x in outer scope of main is %d \n", x);

    {
        int x = 8;

        printf("local x in inner scope of main is %d \n", x);
    }

    printf("local x in outer scope of main is %d \n", x);

    // 1. Run
    useLocal();
    useStaticLocal();
    useGlobal();

    // 2. Run
    useLocal();
    useStaticLocal();
    useGlobal();

    printf("\n local x in main is %d \n", x);

    return 0;
}

void useLocal(void)
{
    int x = 25;

    printf("\n local x in useLocal is %d after entering its function", x);
    x++;
    printf("\n local x in useLocal is %d before exiting its function\n", x);
}

void useStaticLocal(void)
{
    static int x = 50;

    printf("\n local static x is %d on entering useStaticLoca", x);
    ++x;
    printf("\n local static x is %d on entering useStaticLoca\n", x);
}

void useGlobal(void)
{
    printf("\n global x is %d on entering useGlobal", x);
    x *= 10;
    printf("\n global x is %d on exitin useGlobal\n", x);
}