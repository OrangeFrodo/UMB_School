#include <stdio.h>
#include <stdlib.h>

#define SIZE 100
#define SIZE_LENGT 99999

int main(int argc, char const *argv[])
{
    unsigned int row, colum, words;
    size_t f = 0;

    scanf("%d %d %d", &row, &colum, &words);

    char *arr[row][colum];
    char longArr[SIZE_LENGT];

    char *list_words[words];

    for (size_t i = 0; i <= row; ++i) {
        for (size_t j = 0; j < colum; ++j) {
            scanf("%c", &arr[i][j]);
        }
    }

    for (size_t i = 0; i < words; i++) {
        scanf("%s", list_words[i]);
    }
    

    return 0;
}
