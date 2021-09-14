#include <stdio.h>
#include <stdlib.h>

#define MATRIX 11

int loadMatrixFunction(char matrix[MATRIX][MATRIX], int *x, int *y) {

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            scanf("%c", &matrix[i][j]);

            if (matrix[i][j] == 'W') {
                *x = i + 1;
                *y = j;
            }
        }
    }
    printf("\n");
    

    /*     
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j <= 10; ++j)
        {
            printf("%c", matrix[i][j]);
        }
    }
    printf("\n");
    */
}

int recursionBoard(char matrix[11][11], int *x, int *y, int answer) {

    char matrixRecursion[11][11] = {0};

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            matrixRecursion[i][j] = matrix[i][j];
        }
    }
    
    if (matrix[*x-1][*y+1] == '#' || matrix[*x-1][*y+1] == '#' || matrix[*x-1][*y+1] == '#' || matrix[*x-1][*y+1] == '#')
    {
        answer++;
        return answer;
    } else {
        answer++;

        if (matrix[*x-1][*y+1] == 'B') {
            matrix[*x-1][*y+1] = '#';
            *x-2;
            *y+2;
            recursionBoard(matrixRecursion,x, y, answer);
        } 
        else if (matrix[*x-1][*y-1] == 'B') {
            matrix[*x-1][*y-1] = '#';
            *x-2;
            *y-2;
            recursionBoard(matrixRecursion,x, y, answer);
        } 
        else if (matrix[*x+1][*y-1] == 'B') {
            matrix[*x+1][*y-1] = '#';
            *x+2;
            *y-2;
            recursionBoard(matrixRecursion,x, y, answer);
        } 
        else if (matrix[*x+1][*y-1] == 'B') {
            matrix[*x+1][*y-1] = '#';
            *x+2;
            *y-2;
            recursionBoard(matrixRecursion,x, y, answer);
        }
    }
}

int main(int argc, char const *argv[])
{
    int numOfBoards = 0;
    char matrixOfBoard[11][11];

    // Answer
    int answer = 0;

    // Pom x + y
    int startX = 0;
    int startY = 0;

    scanf("%d", &numOfBoards);

    while (numOfBoards != 0)
    {
        loadMatrixFunction(matrixOfBoard, &startX, &startY);
        answer = recursionBoard(matrixOfBoard, &startX, &startY, answer);
        printf("%d", answer);
        numOfBoards--;
    }

    printf("%d", startX);

    return 0;
}
