#include "main.h"

int main(int argc, char const *argv[])
{ 
    scanf("%d %d", &Rows, &Cols);
    ReadMatrix(Rows, Cols);

    if (FindWall()) {
        #ifdef DebugPrints  // Print path
            printf(" Wall found! [i,j]=[%d,%d]\n", i, j);
        #endif
        if (FindGateOrSquare()) {
            GateFound=true;
            #ifdef DebugPrints  // Print path
                printf(" Gate found! [i,j]=[%d,%d] [di,dj]=[%d,%d]\n", i, j, di, dj);
            #endif
            if (FindGateOrSquare()) {
                SquareFound=true;
                printf("ANO\n");
                #ifdef DebugPrints  // Print path
                        printf(" Square found! [i,j]=[%d,%d] [di,dj]=[%d,%d]\n", i, j, di, dj);
                #endif
            } else {
                #ifdef DebugPrints
                        printf(" Square NOT found!\n");
                #endif
                }
            } else {
            #ifdef DebugPrints
                printf(" Gate NOT found! [i,j]=[%d,%d] [di,dj]=[%d,%d]\n", i, j, di, dj);
            #endif
            }
        } else {
        #ifdef DebugPrints
            printf(" Wall NOT found!\n");
        #endif
        }

        #ifdef DebugPrints
            PrintMatrix( Rows, Cols );
        #endif

    return 0;
}

void ReadMatrix( int Rows, int Cols) {
    size_t i, j;
    for (i=0 ; i<Rows; i++)
        for (j=0; j<Cols; j++)
            scanf(" %c", &M[i][j]);
}

void PrintMatrix( int Rows, int Cols) {
    size_t i, j;
    printf("\n");
    for (i=0; i<Rows; i++) {
        for (j=0; j<Cols; j++)
            printf("%c", M[i][j]);
        printf("\n");
    }
}


bool FindWall(void) {
    bool RetVal=false;
    while ((NextInMatrixEdges) && (!RetVal)) {
        M[i][j]=UsedChar;
        #ifdef DebugPrints
            printf(" FindWall: RetVal=%d; [i,j]=[%d,%d]; [di,dj]=[%d,%d]\n", (int)RetVal, i, j, di, dj );
        #endif
        if (M[i+di][j+dj]==WallChar)
            RetVal=true;
        else {
            i+=di;
            j+=dj;
        }
    }
  return RetVal;
}

bool FindGateOrSquare(void) {
    bool RetVal=false;
    int k=0;            // this is insurance only
    if (!GateFound) {   // Gate not found, go down
        di=1; dj=0;
    }
    #ifdef DebugPrints
        printf( " Left  is '%c'\n", WhatIsLeft() );
        printf( " Right is '%c'\n", WhatIsRight() );
    #endif
    while (!RetVal && k<300 ) {
        #ifdef DebugPrints
            printf( " Actual possition [i,j]=[%d,%d],  direction [di,dj]=[%d,%d]\n", i, j, di, dj );
        #endif
        M[i][j]=UsedChar;
        
        if (!GateFound && (WhatIsLeft() == WallChar) && (WhatIsRight() == WallChar) ) // this is the gate test
            RetVal=true;

        else if (GateFound && IsThisSquare()) {                                       // this is the square test
            RetVal=true;

        } else {
        k += 1;
        if (WhatIsLeft() == PlateChar) { // set direction to the left and do step that way
            if (di==0) {
                di = -dj; dj = 0;
            } else {
                dj = di;  di = 0;
            }
            if (NextInMatrixEdges) {
                i += di; j += dj;
            }
        } else {
                if (NextInMatrixEdges) {
                    if (M[i+di][j+dj] == PlateChar) { // go forward actual direction
                        i += di; j += dj;
                    } else {
                        if (WhatIsRight() == PlateChar) { // set direction to the right and do step that way
                            if (di==0) {
                                di = dj;  dj = 0;
                            } else {
                                dj = -di; di = 0;
                            }
                            if (NextInMatrixEdges)
                                i += di; j += dj;
                        }
                    }
                }
            }
        }
    }
    return RetVal;
}

char WhatIsLeft(void) {

    unsigned int li, lj;

    /*
    pohyb vodorovne vpravo [0,1]  ->  smer vlavo = hore    [-1,0]   => di==0 ? li=-dj lj=0
    pohyb vodorovne vlavo  [0,-1] ->  smer vlavo = dole    [1,0]    
    pohyb zvisle nadol     [1,0]  ->  smer vlavo = doprava [0,1]    => di<>0 ? li=0   lj=di
    pohyb zvisle nahor     [-1,0] ->  smer vlavo = dolava  [0,-1]
    */

    if (di==0) {
        li = -dj; lj = 0;
    } else {
        li = 0;   lj = di;
    }
    if (LeftInMatrixEdges) {
        #ifdef DebugPrints
            printf( " Actual direction: [di,dj]=[%d,%d];  Left to actual [li,lj]=[%d,%d] is '%c'\n", di, dj, li, lj, M[i+li][j+lj] );
        #endif
    return M[i+li][j+lj];
    } else
        return OutOfEdges;
}

char WhatIsRight(void) {
    unsigned int ri, rj;
    /*
    pohyb vodorovne vpravo [0,1]  ->  smer vpravo = dole    [1,0]   => di==0 ? ri=dj  rj=0
    pohyb vodorovne vlavo  [0,-1] ->  smer vpravo = hore    [-1,0]    
    pohyb zvisle nadol     [1,0]  ->  smer vpravo = dolava  [0,-1]  => di<>0 ? ri=0   rj=-di
    pohyb zvisle nahor     [-1,0] ->  smer vpravo = doprava [0,1]
    */
    if (di==0) {
        ri = dj; rj = 0;
    } else {
        ri = 0;  rj = -di;
    }
    if (RightInMatrixEdges) {
    #ifdef DebugPrints
        printf( " Actual direction: [di,dj]=[%d,%d];  Right to actual [ri,rj]=[%d,%d] is '%c'\n", di, dj, ri, rj, M[i+ri][j+rj] );
    #endif
    return M[i+ri][j+rj];
    } else
        return OutOfEdges;
}

bool IsThisSquare(void) {
    unsigned int li, lj, ri, rj;
    // no edge tests now...
    if (di==0) {
        li = -dj; lj = 0;
    } else {
        li = 0;   lj = di;
    }
    if (di==0) {
        ri = dj; rj = 0;
    } else {
        ri = 0;  rj = -di;
    }
    #ifdef DebugPrints
        printf( " Square test: [i,j]=[%d,%d]; [di,dj]=[%d,%d];\n   [li,lj]=[%dm%d]; [ri,rj]=[%d,%d];\n", i, j, di, dj, li, lj, ri, rj);
        printf( "   FORWARD: '%c%c';  LEFT: '%c%c';  RIGHT: '%c%c'\n",
        M[i][j],       M[i+di][j+dj],
        M[i+li][j+lj], M[i+di+li][j+dj+lj],
        M[i+ri][j+rj], M[i+di+li][j+dj+rj] );
    #endif

  if ((M[i][j] == UsedChar) && (M[i+di][j+dj] == PlateChar) &&                   // actual and forward plate
        (( M[i+li][j+lj] == PlateChar && M[i+di+li][j+dj+lj] == PlateChar ) ||   // plates left to actual direction
        (  M[i+ri][j+rj] == PlateChar && M[i+di+li][j+dj+rj] == PlateChar )))    // plates right to actual direction
        return true;
  else
        return false;
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