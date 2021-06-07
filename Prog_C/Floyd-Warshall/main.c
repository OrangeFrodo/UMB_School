#include "main.h"

void floydWarsh(int size, int Matrix[size][size])
{
    size_t i, j, k;     // For loops VARS

	for (k = 0; k < size; k++) {
		for(i = 0; i < size; i++) {
			for(j = 0; j < size; j++) {
				if(Matrix[i][j] > Matrix[i][k] + Matrix[k][j]) {        // Compare 
					Matrix[i][j] = Matrix[i][k] + Matrix[k][j];
				}
		    }
	    }
	}
}

void priMatrix(int size, int ptrMatrix[size][size])
{   
    size_t i, j;        // For loops VARS

    puts("Final matrix");
    for (i = 0; i < size; i++) {
        printf("\n");
        for (j = 0; j < size; j++) {
            printf("%d ", ptrMatrix[i][j]);
        }
    }
}

int main(int argc, char const *argv[])
{
    size_t i, j;    // For loops VARS

    int matrixSize;
    scanf("%d", &matrixSize);

	int Matrix[matrixSize][matrixSize]; 

    for (i = 0; i < matrixSize; i++) {
        printf("\n");
        for (j = 0; j < matrixSize; j++) {
            scanf("%d", &Matrix[i][j]);
        }
    }
    
    floydWarsh(matrixSize, Matrix);
	priMatrix(matrixSize, Matrix);
}