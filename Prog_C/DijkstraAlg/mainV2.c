#include "main.h"

int printOutput(int* path, int* LMPS, int n, int a){

    int i,j,k;

    printf("\nOdpovede:");
    for(i=0; i<n; i++){
        for(j=0; j<n-1; j++) {
            if(i!=a-1 && *(LMPS+2*j)==i){
                printf("\n\n\tWeight of vertex no.%d is %d", *(LMPS+2*j)+1, *(LMPS+2*j+1));
                printf(".\n\tand corresponding path direction is:  %d", a);
                for(k=1; k<n; k++) {
                    if(*(path+j*n+k)!=0) {
                        printf(" --> %d", *(path+j*n+k));
                    }
                }      
            }
        }
    }
            
    printf("\n\nCesta k bodom:");
    for(i=0; i<n-1; i++){
        printf("\n\n");
        for(j=0; j<n; j++)
            printf("\t%d", *(path+i*n+j));
    }
}

int main(int argc, char const *argv[])
{
    size_t i, j; // For loop VARS
    unsigned int numOfNodes, startNode;

    unsigned int numOfPaths=numOfNodes-1;   // Num of paths
    int Matrix[numOfNodes][numOfNodes];     // Node Matrix

    puts("\nDistance of Vectors:\n");
    for (i = 0; i < numOfNodes; i++) {
        puts("/n");
        for (j = 0; j < numOfNodes; j++) {
            scanf(" %d", &Matrix[i][j]);
        }
    }

    puts("\nMatrix representation: \n");
    for (i = 0; i < numOfNodes; i++) {
        for (j = 0; j < numOfNodes; j++) {
            printf(" %d", Matrix[i][j]);
        }
    }
    
    puts("\n Your start node \n");
    scanf(" %d", &startNode);
    
    dijkstraAlgo(numOfNodes, startNode, &Matrix);

    return 0;
}

int dijkstraAlgo(unsigned int nodeNumber, unsigned int start, int *ptrMatrix)
{
    size_t i, j, k;    // For/If Vars

    unsigned int num = nodeNumber - 1;      // Num weights

    unsigned int minimumWeights, index, source;

    unsigned int MinimalPathSource[3][num];          // Matrix for CURRENT WEIGHT source
    unsigned int ListingMinimalPathSource[num][2];   // Save for every node
    unsigned int path[nodeNumber-1][nodeNumber];     // Path to every node

    for (i = 0; i < num; i++) {
        for (j = 0; i < nodeNumber; i++) {
            path[i][j] = 0;
        }
    }

    for (i = 0; i < num; i++) {
        if (i == 0) {
            for (j = 0; j < num; j++) {
                if (j >= start - 1) {
                    MinimalPathSource[0][j] = j + 1; // Exmpl. Start = 1 // Source = 0 2 3 4 5 6..
                } else {
                    MinimalPathSource[0][j] = j;
                }
                path[j][0] = start;
                MinimalPathSource[2][j] = start - 1;
            }

            // Direct weight for matrix
            for (j = 0; j < num; j++) {
                MinimalPathSource[1][j] = *(ptrMatrix + (start - 1) *nodeNumber + MinimalPathSource[0][j]);
            }
            
        }
    }

    // Detecting minimum weights
    index = MinimalPathSource[0][0];
    minimumWeights = MinimalPathSource[1][0];
    source = MinimalPathSource[2][0];
    for (j = 0; j < num; j++) {
        if (MinimalPathSource[1][j] <= minimumWeights) {
            index = MinimalPathSource[0][j];
            minimumWeights = MinimalPathSource[1][j];
            source = MinimalPathSource[2][j];
        }
    }

    ListingMinimalPathSource[i][0] = index;
    ListingMinimalPathSource[i][1] = minimumWeights;    

    num--;
    for (j = 0; j < num; j++) {
        if (MinimalPathSource[1][j] > (minimumWeights + *(ptrMatrix + nodeNumber * index + MinimalPathSource[0][j]))) {
            MinimalPathSource[1][j] = (minimumWeights + *(ptrMatrix + nodeNumber * index + MinimalPathSource[0][j]));
            MinimalPathSource[2][j] = index;
        }
    }

    path[i][nodeNumber-1] = index + 1;
    if (i != 0) {
        if(start != source + 1) {
            path[i][nodeNumber - 1] = source + 1;
        }
        for (j = 0; j < i; j++) {
            if (path[j][nodeNumber - 1] == source + 1) {
                for (k = 2; k < num; k++) {
                    path[i][k-1] = path[j][k];
                }
            }
        }
    }
    printOutput(path, ListingMinimalPathSource, nodeNumber, start);
}

