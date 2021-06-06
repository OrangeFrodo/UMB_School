#include "main.h"

int Dijkstra(int numOfNodes, int* A, int a){

    size_t i,j; // For loop /If VARS

    int k,min,ind,sv;
    int num=numOfNodes-1;

    unsigned int MinimalPathSource[3][num];          // Matrix for CURRENT WEIGHT source
    unsigned int ListingMinimalPathSource[num][2];   // Save for every node
    unsigned int path[numOfNodes-1][numOfNodes];     // Path to every node

    // Set Null Matrix (path)
    for(i=0; i<numOfNodes-1; i++)  {
        for(j=0; j<numOfNodes; j++) {
            path[i][j]=0;
        }
    }
            
    for(i=0;i<numOfNodes-1;i++){
        //First path vertex:
        if(i==0){
            for(j=0;j<num;j++){
                if(j>=a-1)
                    MinimalPathSource[0][j]=j+1;
                else
                    MinimalPathSource[0][j]=j;
                path[j][0]=a;
                MinimalPathSource[2][j]=a-1;
            }
            for(j=0;j<num;j++)
                MinimalPathSource[1][j]=*(A+(a-1)*numOfNodes+MinimalPathSource[0][j]);
        }

        //Minimu vertex callculation:
        min=MinimalPathSource[1][0];
        ind=MinimalPathSource[0][0];
        sv=MinimalPathSource[2][0];

        for(j=1;j<num;j++){
            if(MinimalPathSource[1][j]<=min){
                min=MinimalPathSource[1][j];
                ind=MinimalPathSource[0][j];
                sv=MinimalPathSource[2][j];
            }
        }

        //New iteration
        printf("\n\n");
        for(j=0;j<num;j++)
            printf(" %d", MinimalPathSource[0][j]);

        printf("\n");
        for(j=0;j<num;j++)
            printf(" %d", MinimalPathSource[1][j]);

        printf("\n");
        for(j=0;j<num;j++)
            printf(" %d", MinimalPathSource[2][j]);
        
        ListingMinimalPathSource[i][0]=ind;
        ListingMinimalPathSource[i][1]=min;

        //Detecting vertex having minimum weight and reducing the array size:
        for(j=0; j<num-1; j++){
            if(MinimalPathSource[0][j] >= ind){
                MinimalPathSource[0][j] = MinimalPathSource[0][j+1];
                MinimalPathSource[1][j] = MinimalPathSource[1][j+1];
                MinimalPathSource[2][j] = MinimalPathSource[2][j+1];
            }
        }

        num--;
        for(j=0; j<num; j++){
            if(MinimalPathSource[1][j] > (min+*(A+numOfNodes*ind+MinimalPathSource[0][j]))){
                MinimalPathSource[1][j] = (min+*(A+numOfNodes*ind+MinimalPathSource[0][j]));
                MinimalPathSource[2][j] = ind;
            }
        }

        /*Preparing the path direction matrix*/
        path[i][numOfNodes-1]=ind+1;
        if(i!=0){
            if(a!=sv+1) {
                path[i][numOfNodes-2] = sv+1;
            }
            for(j=0; j<i; j++){
                if(path[j][numOfNodes-1]==sv+1) {
                    for(k=2;k<numOfNodes-1;k++) {
                        path[i][k-1]=path[j][k];
                    }
                }
            }
        }
    }
    Display(path,ListingMinimalPathSource,numOfNodes,a);
}

int Display(int* path, int* LMPS, int n, int a){

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

int main(){
    int n, a;
    size_t i, j; // For Loop VARS

    puts("Num of Vectors:");
    scanf("%d", &n);

    int num=n-1, Arr[n][n]; // Num of roads/ Matrix

    printf("\nDistance of Vectors:\n");
    
    for(i=0; i<n; i++){
        printf("\n");
        for(j=0; j<n; j++){
            scanf(" %d", &Arr[i][j]);
        }
    }

    printf("\nMatrix representation:\n");
    for(i=0; i<n; i++){
        printf("\n");
        for(j=0; j<n; j++){
            printf("  %d", Arr[i][j]);
        }
    }

    printf("\n");
    puts("\nStart node:");
    scanf("%d", &a);

    Dijkstra(n, &Arr, a);
}