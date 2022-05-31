#include <stdlib.h>
#include <stdio.h>

#define MATRIX 11
#define DEBUG

int recursionFuction(char matrix[MATRIX][MATRIX], int *x, int *y, int n)
{
    if (matrix[*x - 1][*y + 1] == 'B' || matrix[*x - 1][*y + 1] == 'B' || matrix[*x - 1][*y + 1] == 'B' || matrix[*x - 1][*y + 1] == 'B')
    {
        for (int i = 0; i < 4; i++)
        {
            
            recursionFuction();
        }
    }

    else if (matrix[*x - 1][*y + 1] == '#' || matrix[*x - 1][*y + 1] == '#' || matrix[*x - 1][*y + 1] == '#' || matrix[*x - 1][*y + 1] == '#')
    {
        return n;
    }
}

int loadMatrixFunction(char matrix[MATRIX][MATRIX], int *x, int *y)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            scanf("%c", &matrix[i][j]);

            if (matrix[i][j] == 'W')
            {
                *x = i;
                *y = j;
            }
        }
    }
    printf("\n");

#ifdef DEBUG
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j <= 10; ++j)
        {
            printf("%c", matrix[i][j]);
        }
    }
    printf("\n");
#endif
}

int main(int argc, char const *argv[])
{
    // Matrix + num of boards
    int numOfBoards = 0;
    char matrixOfBoard[MATRIX][MATRIX];
    scanf("%d", &numOfBoards);
    printf("\n");

    // Answer
    int answer = 0;

    // Pom x + y
    int startX = 0;
    int startY = 0;

    while (numOfBoards != 0)
    {
        loadMatrixFunction(matrixOfBoard, &startX, &startY);
        answer = recursionFuction(matrixOfBoard, &startX, &startY, answer);
        numOfBoards--;
    }

    return 0;
}
