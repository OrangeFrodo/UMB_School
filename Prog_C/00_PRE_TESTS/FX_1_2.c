#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define SIZE 10

int main(int argc, char const *argv[])
{
    unsigned int n, nc;
    scanf("%d %d", &n, &nc);

    char strPtr[SIZE];
    scanf("%s", strPtr);
    
    int d = strlen(strPtr);

    for (size_t i = 0; i < d; ++i) {
        for (size_t j = i + 1; i < d - 1; ++j) {
            char f = strncpy(strPtr[i], strPtr[j], n);
            printf("%d", f);
        }
    }
    

    return 0;
}
