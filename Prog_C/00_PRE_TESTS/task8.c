#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


long long int TotalPaths = 0;
long long int RealPaths  = 0;

long long int Towns = 10;
long long int Directions[100];
char Symbols[] = "V><";


void CreateInitialDirections(void) {
long long int i;
  for (i=0;i<Towns;i++) {
    Directions[i] = 0;
  }
}


void PrintActualDirections(void) {
int i;
  printf( " " );
  for (i=0;i<Towns;i++)
  //  printf( "%d", Directions[i] );
  printf( " " );
  for (i=0;i<Towns;i++)
    printf( "%c", Symbols[Directions[i]] );
}

bool NextDirections(void) {
long long int i, j;
bool RetVal = false;
  i = 0;
  while ((i<Towns)&&(!RetVal))
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
  long long int i=0;
    // egdes
    printf( "  ..[%d,%d]..", Directions[0], Directions[Towns-1] );
    if ((Directions[0]==2)||(Directions[Towns-1]==1))
      RetVal=false;
    if (RetVal) {
    }
    // bad redirections
    while ((RetVal)&&(i<Towns)) {
      if ((Directions[i]==1)&&(Directions[i+1]==2))
        RetVal=false;
      i++;
    }
    // BAD num of fills
    if (RetVal) {
      // printf("%d", i);
      for (i = 0; i <= Towns-2; i++) {
        // printf("%d %d %d", Directions[i], Directions[i+1], Directions[i+2]);
        if ((Directions[i] == 1) && (Directions[i+1] == 0) && (Directions[i+2] == 2)) {
          RetVal=false;
        }
      }
    }
    
    return RetVal;
}


int main( void ) {
  long long int InputArray[100];
  long long int OutputArray[100];

  printf( "\nBegin\n Towns=%lld\n", Towns );
  
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

  printf( "\n TotalPaths=%lld\n RealPaths=%lld\nEnd.\n", TotalPaths, RealPaths );
}
