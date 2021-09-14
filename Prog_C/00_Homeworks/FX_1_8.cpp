#include <stdio.h>
#include <stdlib.h>


int TotalPaths = 0;
int RealPaths  = 0;

int Towns = 2;
int Directions[100];
char Symbols[] = "V><";


void CreateInitialDirections(void) {
int i;
  for (i=0;i<Towns;i++) {
    Directions[i] = 0;
  }
}


void PrintActualDirections(void) {
int i;
  printf( " " );
  for (i=0;i<Towns;i++)
    printf( "%d", Directions[i] );
  printf( " " );
  for (i=0;i<Towns;i++)
    printf( "%c", Symbols[Directions[i]] );
}


bool NextDirections(void) {
int i, j;
bool RetVal = false;
  i = 0;
  while ((i<Towns)and(!RetVal))
  {
    if (Directions[i]<2) {
      Directions[i]++;
      RetVal = true;
    } else {
      Directions[i] = 0;
      i++;
    }
  }
  return RetVal;
}


bool ValidateDirection(void){
bool RetVal=true;
int i=0;
  // egdes
  printf( "  ..[%d,%d]..", Directions[0], Directions[Towns-1] );
  if ((Directions[0]==2)||(Directions[Towns-1]==1))
    RetVal=false;
  if (RetVal) {
  }
  // bad redirections
  while ((RetVal)and(i<Towns)) {
    if ((Directions[i]==1)&&(Directions[i+1]==2))
      RetVal=false;
    i++;
  }
  return RetVal;
}


int main( void ) {
  int InputArray[100];
  int OutputArray[100];

  printf( "\nBegin\n Towns=%d\n", Towns );
  
  CreateInitialDirections();
  do {
    printf( "%5d. ", ++TotalPaths );
    PrintActualDirections();
    if (ValidateDirection()) {
      RealPaths++;
      printf("  OK\n");
    } else {
      printf("  bad\n");
    }
  } while( NextDirections() );

  printf( "\n TotalPaths=%d\n RealPaths=%d\nEnd.\n", TotalPaths, RealPaths );
