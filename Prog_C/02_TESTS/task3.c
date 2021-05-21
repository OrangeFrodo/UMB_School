#include <stdlib.h>
#include <stdio.h>

#define ONE_ONE 1

void funWall(int row, int colums, char matrix[row][colums], int *x_axis, int *y_axis);
void findGate(int row, int colums, char matrix[row][colums], int *x_axis, int *y_axis);

int main(int argc, char const *argv[])
{ 
    unsigned int row, colums;   // Row, Colum
    unsigned int x, y;          // X Axis, Y Axis;

    scanf("%d %d", &row, &colums);

    char matrix[row][colums];

    for (size_t i = 0; i < row; i++) {
        for (size_t j = 0; j < colums; j++) {
            scanf(" %c", &matrix[i][j]);
        }
    }

    printf("\n");

/*     for (size_t i = 0; i < row; i++) {
        for (size_t j = 0; j < colums; j++) {
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    } */
    
    funWall(row, colums, matrix, &x, &y);
    findGate(row, colums, matrix, &x, &y);

    return 0;
}

void funWall(int row, int colums, char matrix[row][colums], int *x_axis, int *y_axis)
{
    unsigned int x=0, y=0;
    unsigned int f=0;

    do {
        x++;
        y++;
    } while (matrix[x][y] != '#');
    
    *x_axis = x;
    *y_axis = y-1;
}

void findGate(int row, int colums, char matrix[row][colums], int *x_axis, int *y_axis)
{
    unsigned int fun_x = *x_axis;
    unsigned int fun_y = *y_axis;
    
    do {
        if ((matrix[fun_x-1][fun_y+1] != '#') && (matrix[fun_x][fun_y+1] == '#') && (matrix[fun_x+1][fun_y+1] == '#')) {
            fun_x++;
        } else if ((matrix[fun_x-1][fun_y+1] == '#') && (matrix[fun_x][fun_y+1] == '.') && (matrix[fun_x+1][fun_y+1] == '.')) {
            fun_y++;
            printf(">\n");
        } else if ((matrix[fun_x-1][fun_y+1] == '#') && (matrix[fun_x][fun_y+1] == '#') && (matrix[fun_x+1][fun_y+1] == '#') && (matrix[fun_x+1][fun_y] == '#')
                || (matrix[fun_x+1][fun_y-1] == '#' || '.') && (matrix[fun_x+1][fun_y] == '#') && (matrix[fun_x+1][fun_y+1] == '#')
            ){
            fun_y--;
            printf("<\n");
        } else if ((matrix[fun_x+1][fun_y+1] == '#' || '.') && (matrix[fun_x+1][fun_y] == '.') && (matrix[fun_x+1][fun_y-1] == '#')) {
            fun_x++;
            printf("d\n");
        } else if ((matrix[fun_x+1][fun_y+1] == '.') && (matrix[fun_x+1][fun_y] == '.') && (matrix[fun_x+1][fun_y-1] == '.')) {
            fun_x--;
            printf("h\n");
        }
    } while (!(matrix[fun_x+1][fun_y-1] == '#') && (matrix[fun_x+1][fun_y] == '.') && (matrix[fun_x+1][fun_y+1] == '#'));

    printf("%d %d", fun_x, fun_y);
}

/*
30
50
..................................................
..................................................
..................................................
.....##############..............############.....
.....#.........#..#..............#..........#.....
.....#.#######.#.##..............#.########.#.....
.....#.#.....#....#..............#.#......#.#.....
.....#.#.#####.####..............#.#.####.#.#.....
.....#.#.....#...#################.#.##.#...#.....
.....#.#####.###........................#.#.#.....
.....#.........#.###############.#.##########.....
.....#########.#.#.#...........#.#..#.............
.............#.#.#.#...........###.##.............
.............#.#.#.#...........#....#.............
.............#.#...#...........#.##.#.............
.............#######...........#.##.#.............
.............#.................#.#..#.............
.............#.#################.####.............
.....#########...#.................##########.....
.....#.........###.#.#.##########.#######.#.#.....
.....#.#########.....#.#..........#.....#.#.#.....
.....#.#.........#####.##########.#.###.#.#.#.....
.....#.######.#####...........#.#.#.#.#.#.#.#.....
.....#......#.....#...........#.....#.#.#.#.#.....
.....#.##########.#...........#####.#.#.#.#.#.....
.....#............#...........#...........#.#.....
.....##############...........###############.....
..................................................
..................................................
..................................................
*/