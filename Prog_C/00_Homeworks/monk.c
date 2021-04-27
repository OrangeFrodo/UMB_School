#include <stdio.h>
#include <stdlib.h>

long int recursionN(int n) {
    if (n>2)
        return 2*recursionN(n-1);
    else
        return 2;
}

int main(int argc, char const *argv[])
{   
    // Input Settup
    int i, stepSize, numStep;
    int *arr;

    scanf("%d %d", &numStep, &stepSize);

    int pomSize = numStep;

    // Allok
    arr = (int*)malloc(stepSize * sizeof(int));
    for(i = 0; i<numStep; i++){
        scanf("%d", &arr[i]);
    }

    // Loop; Limit
    i = 1;
    int sum = 0, final_c = 0;

    while (pomSize != 0) {
        sum += arr[i-1];
        if (sum > stepSize) {
            final_c += recursionN(i-1);
            i = 0;
            sum = 0;
        }
        else if (sum == stepSize) {
            final_c += recursionN(i);
            i = 0;
            sum = 0;
        }
        i++;
        pomSize--;
    }
    if (i != 0) {
        final_c += recursionN(i-1);
    }

    printf("%d", final_c);

    return 0;
}
