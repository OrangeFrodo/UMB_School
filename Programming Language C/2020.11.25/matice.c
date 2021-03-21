#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int pole[3][5];

  int i, j;
  //nacitanie matice
  for (i=0; i<3; i++) { //prechadza riadky
    for (j=0; j<5; j++) { //prechadza stlpce
      printf("Zadaj cele cislo: ");
      scanf("%d", &pole[i][j]);
    }
  }
  
  int min, max;
  min = pole[0][0];
  max = pole[0][0];

  for (i=0; i<3; i++) { //prechadza riadky
    for (j=0; j<5; j++) { //prechadza stlpce
      //hladanie minima
      if(pole[i][j] < min){
        min = pole [i][j];
      }
      //hladanie maxima
      if(pole[i][j] > max){
        max = pole[i][j];
      }
    }
  }
  //vypis min a max
  printf("Min cislo je %d\n Max cislo je %d\n", min, max);

  return 0;
}