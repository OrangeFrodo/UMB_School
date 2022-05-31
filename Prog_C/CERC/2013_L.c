#include <stdio.h>
#include <stdlib.h>

// Recursive function
int functionCalculator(int f)
{
    if (f>=1) {
        return functionCalculator(f-1) / 2 + functionCalculator(f-1) / 2 + (2 * functionCalculator(f-2));
    } else {
        return 1;
    }
}

int main(int argc, char const *argv[])
{
    // Num of Stops
    int numOfTests = 0;
    int numOfTestsPom = 0;
    scanf("%d", &numOfTests);

    // Array
    long int array[9999] = {0};

    // Stops
    int f = 0;

    // Pass..
    int passenger = 0;

    while (numOfTestsPom != numOfTests)
    {
        scanf("%d", &f);

        // Error handling
        if (f < 1 || f > 30)
        {
            return 0;
        }

        // Function handler
        passenger = functionCalculator(f) - 1;
        array[numOfTestsPom] = passenger;
        numOfTestsPom++;
    }

    for (size_t i = 0; i < numOfTests; i++)
    {
        printf("%ld \n", array[i]);
    }
    

    return 0;
}
