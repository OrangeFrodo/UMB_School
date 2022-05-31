#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int arrayOfPrisoners[n];
    int finnalArray[n];

    int temp = 0;
    int coach = 0;

    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &arrayOfPrisoners[i]);
        finnalArray[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        temp = 0;
        coach = 0;
        for (int j = i; j < n; j++)
        {
            temp += arrayOfPrisoners[j];
            if (temp == 0)
            {
                finnalArray[i] = 1;
                break;
            }

            if (temp % 10 != 0)
            {
                coach++;
                finnalArray[i] = -1;
            }
            if (temp % 10 == 0)
            {
                coach++;
                finnalArray[i] = coach;
                break;
            }
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", finnalArray[i]);
    }

    return 0;
}
