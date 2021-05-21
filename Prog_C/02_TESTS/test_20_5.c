#include "main.h"

int main(int argc, char const *argv[])
{
    unsigned int row, colums;
    scanf("%d %d", &row, &colums);

    char matrix[row][colums];

    char array[MAX_SIZE];

    size_t k = 0;

    for (size_t i = 0; i < row; i++) {
        for (size_t j = 0; j < colums; j++) {
            scanf(" %c", &matrix[i][j]);
            array[k] = matrix[i][j];
            k++;
        }
    }

    array[k] = 0x00;

    findStart(row, colums, &array);
    findPath(row, colums, &array);

// Print maze
/*     for (size_t i = 0; i < row; i++) {
        for (size_t j = 0; j < colums; j++) {
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    } */
    


    return 0;
}

void findStart(int row, int colums, char array[row][colums])
{
    unsigned int x = 0, y = 0;

    do {    
        x++;
        y++;
    } while (array[x][y] != '#'); // STENA
    


    printf("%d %d\n", x, y);
}

void findPath(int row, int culums, char arrayOf[row][culums])
{   
    unsigned int x = 0, y = 0;  // 

    unsigned int posI = 0, posJ = 0;
    int change = 0;

    // ENTER 
    // if ((arrayOf[posI-1][posJ-1] == '#') && (arrayOf[posI-1][posJ] == '.')  && (arrayOf[posI-1][posJ+1] = '#')) {
    //    printf("cesta");
    // }
    

    for (size_t i = 0; i < row; i++) {
        posI = i;
        for (size_t j = 0; j < culums; j++) {
            posJ = j;
            if ((arrayOf[posI-1][posJ-1] == '.') && (arrayOf[posI-1][posJ] == '#')  && (arrayOf[posI-1][posJ+1] = '#')) {
                int hold = posJ;
                posJ = posI;
                posI = posJ;
                ++change;
            }

        }
    }

    printf("%d \n", change);
}