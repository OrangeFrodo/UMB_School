#include <stdlib.h>
#include <stdio.h>

// Figures
int kA[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };
int kB[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };

int bA[4] = { 1, 1, -1, -1};
int bB[4] = { -1, 1, 1, -1};

int nA[4] = { -2, -2, -1, 1};
int nB[4] = { -1, 1, 2, 2};

int rA[4] = {1, 0, -1, 0};
int rB[4] = {0, -1, 0, 1};

int qA[4] = { 1, 1, 0, -1, -1, -1, 0, 1 };
int qB[4] = { 0, 1, 1, 1, 0, -1, -1, -1 };

int main(int argc, char const *argv[])
{
    int rowCols = 0;
    char typeOfMachine = {0};
    int i, j, x, y, col, row;

    scanf("%d", &rowCols);
    scanf(" %c", &typeOfMachine);
    
    char matrix[rowCols][rowCols];

    for (size_t i = 0; i < rowCols; i++)
    {
        for (size_t j = 0; j < rowCols; j++)
        {
            scanf("%c", &matrix[i][j]);
        }
    }



    for (size_t i = 0; i < rowCols; i++)
    {
        for (size_t j = 0; j < rowCols; j++)
        {
            printf("%c", matrix[i][j]);
        }
    }

    return 0;
}
