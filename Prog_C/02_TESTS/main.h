#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

// #define DebugPrints

bool IsThisSquare(void);
void ReadMatrix( int Rows, int Cols);
void PrintMatrix( int Rows, int Cols);
bool FindWall(void);
bool FindGateOrSquare(void);
char WhatIsLeft(void);
char WhatIsRight(void);
bool IsThisSquare(void);

#define MaxX 100
#define MaxY 100

#define WallChar   '#'
#define PlateChar  '.'
#define UsedChar   '@'
#define OutOfEdges '!'

#define NextInMatrixEdges  (i+di>0)&&(i+di<Rows)&&(j+dj>0)&&(j+dj<Cols)
#define LeftInMatrixEdges  (i+li>0)&&(i+li<Rows)&&(j+lj>0)&&(j+lj<Cols)
#define RightInMatrixEdges (i+ri>0)&&(i+ri<Rows)&&(j+rj>0)&&(j+rj<Cols)

char M[MaxX][MaxY];
unsigned int Rows, Cols;
unsigned int i=0, j=0, di=1, dj=1;

bool GateFound=false;
bool SquareFound=false;