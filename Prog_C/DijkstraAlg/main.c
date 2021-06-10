#include "main.h"

int dijksAlgo(unsigned int nodeNumber, unsigned int start, int *ptrMatrix)
{
    size_t i, j, k; // For loop /If VARS

    int minimumWeights, index, source;
    int num=nodeNumber-1;

    unsigned int nodeNumMinus = nodeNumber - 1;

    unsigned int MinimalPathSource[3][num];          // Matrix for CURRENT WEIGHT source
    unsigned int ListingMinimalPathSource[num][2];   // Save for every node
    unsigned int path[nodeNumber-1][nodeNumber];     // Path to every node

    // Set Null Matrix (path)
    for (i = 0; i < nodeNumMinus; i++) {
        for(j = 0; j < nodeNumber; j++) {
            path[i][j] = 0;
        }
    }
            
    for (i = 0; i < nodeNumMinus; i++) {
        //First path vertex:
        if (i == 0) {
            for (j = 0; j < num; j++) {
                if(j >= start - 1) {
                    MinimalPathSource[0][j] = j + 1;
                } else {
                    MinimalPathSource[0][j] = j;
                }
                path[j][0] = start;
                MinimalPathSource[2][j] = start - 1;
            }
            for (j = 0; j < num; j++) {
                // Direct weight
                MinimalPathSource[1][j] = *(ptrMatrix+(start-1)*nodeNumber+MinimalPathSource[0][j]);
            }
        }

        //Minimu vertex callculation:
        index = MinimalPathSource[0][0];
        minimumWeights = MinimalPathSource[1][0];
        source = MinimalPathSource[2][0];

        for (j = 0; j < num; j++) {
            if(MinimalPathSource[1][j] <= minimumWeights){
                minimumWeights = MinimalPathSource[1][j];
                index = MinimalPathSource[0][j];
                source = MinimalPathSource[2][j];
            }
        }

        ListingMinimalPathSource[i][0] = index;             // Loading local minimum to Matrix
        ListingMinimalPathSource[i][1] = minimumWeights;    // Loading local minimum value to Matrix

        //Detecting vertex having minimum weight and reducing the array size:
        for (j = 0; j < num; j++) {
            if( MinimalPathSource[0][j] >= index){
                MinimalPathSource[0][j] = MinimalPathSource[0][j+1];
                MinimalPathSource[1][j] = MinimalPathSource[1][j+1];
                MinimalPathSource[2][j] = MinimalPathSource[2][j+1];
            }
        }

        num--;
        for (j = 0; j < num; j++) {
            if( MinimalPathSource[1][j] > (minimumWeights+*(ptrMatrix+nodeNumber*index+MinimalPathSource[0][j]))){
                MinimalPathSource[1][j] = (minimumWeights+*(ptrMatrix+nodeNumber*index+MinimalPathSource[0][j]));
                MinimalPathSource[2][j] = index;
            }
        }

        /*Preparing the path direction matrix*/
        path[i][nodeNumMinus] = index + 1;
        if (i != 0) {
            if (start != source + 1) {
                path[i][nodeNumber-2] = source + 1;
            }
            for (j = 0; j < i; j++){
                if (path[j][nodeNumMinus] == source + 1) {
                    for (k = 2; k < nodeNumber - 1; k++) {
                        path[i][k-1] = path[j][k];
                    }
                }
            }
        }
    }
    printPath(path, ListingMinimalPathSource, nodeNumber, start);
}

int printPath(int* path, int* LMPS, int n, int a){

    size_t i,j,k;   // For loop Vars

    puts("\nAnswers: \n");
    for (i = 0; i < n; i++){
        for (j = 0; j < n - 1; j++) {
            if (i != a - 1 && *(LMPS + 2 * j) == i){
                printf("\n\n\tWeight of vertex from source to no.%d is %d", *(LMPS+2*j) + 1, *(LMPS + 2 * j + 1));
                printf(".\n\tand corresponding path direction is:  %d", a);
                for (k = 1; k < n; k++) {
                    if(*(path + j* n + k) != 0) {
                        printf(" --> %d", *(path+j*n+k));
                    }
                }      
            }
        }
    }
            
    printf("\n\nPath to:");
    for (i = 0; i < n - 1; i++){
        printf("\n\n");
        for (j = 0; j < n; j++)
            printf("\t%d", *(path+i*n+j));
    }
}

int main(int argc, char const *argv[])
{
    size_t i, j; // For loop VARS
    int numOfNodes, startNode;

    puts("Num of Vectors:");
    scanf("%d", &numOfNodes);

    int numOfPaths = numOfNodes-1;          // Num of paths
    int Matrix[numOfNodes][numOfNodes];     // Node Matrix

    puts("\nDistance of Vectors:\n");
    for (i = 0; i < numOfNodes; i++) {
        printf("\n");
        for (j = 0; j < numOfNodes; j++) {
            scanf(" %d", &Matrix[i][j]);
        }
    }

    puts("\nMatrix representation: \n");
    for (i = 0; i < numOfNodes; i++) {
        printf("\n");
        for (j = 0; j < numOfNodes; j++) {
            printf("  %d", Matrix[i][j]);
        }
    }
    
    puts("\n Your start node \n");
    scanf(" %d", &startNode);
    
    dijksAlgo(numOfNodes, startNode, &Matrix);
}