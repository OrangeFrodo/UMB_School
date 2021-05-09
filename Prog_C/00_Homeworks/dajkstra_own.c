#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>
#include<math.h>

#define IN 99
#define MAX 20

int main(int argc, char const *argv[])
{   
    int value[MAX][MAX], weight;    // Position of node 
 
    int n;
    scanf("%d", &n);

    int i, j;

    int final, start;   // Path
    int x, y;           // Axis

    for(i=1; i<=n; i++) {
        for(j=1; j<=n; j++) {
            value[i][j] = IN;   // Fix value for now
        }
    }

    for(x=1; x<=n; x++) {
        for(y=x+1; y<=n; y++) {
            scanf("%d", &weight);
            value[x][y] = value[y][x] = weight;
        }
        printf("\n");
    }

    //Start node
    printf("Start node \n");
    scanf("%d", &start);

    dijk(value, n, start);

    //Final node
    printf("Final node \n");
    scanf("%d", &final);


    return 0;
}

void dijk(int G[MAX][MAX], int n, int start) 
{
    int cost[MAX]
}


