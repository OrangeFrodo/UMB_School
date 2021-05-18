#include <stdlib.h>
#include <stdio.h>

#define INFINITY 9999
#define MAX 10

void Dijkstra(int Graph[MAX][MAX], int n, int start);

void Dijkstra(int Graph[MAX][MAX], int n, int start) {
  int cost[MAX][MAX], distance[MAX], pred[MAX];
  int visited[MAX], count, mindistance, nextnode, i, j;

  // Creating cost matrix
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      if (Graph[i][j] == 0)
        cost[i][j] = INFINITY;
      else
        cost[i][j] = Graph[i][j];

  for (i = 0; i < n; i++) {
    distance[i] = cost[start][i];
    pred[i] = start;
    visited[i] = 0;
  }

  distance[start] = 0;
  visited[start] = 1;
  count = 1;

  while (count < n - 1) {
    mindistance = INFINITY;

    for (i = 0; i < n; i++)
      if (distance[i] < mindistance && !visited[i]) {
        mindistance = distance[i];
        nextnode = i;
      }

    visited[nextnode] = 1;
    for (i = 0; i < n; i++)
      if (!visited[i])
        if (mindistance + cost[nextnode][i] < distance[i]) {
          distance[i] = mindistance + cost[nextnode][i];
          pred[i] = nextnode;
        }
    count++;
  }

  // Printing the distance
  for (i = 0; i < n; i++)
    if (i != start) {
      printf("\nDistance from source to %d: %d", i, distance[i]);
    }
}


int main(int argc, char const *argv[])
{
    size_t i, j; //For-loop Vars
    int numOfVect, startPoint;

    printf("Num of vectors: ");
    scanf("%d", &numOfVect);

    int num=numOfVect-1, Array[numOfVect][numOfVect];

    // Array fill (Matrix)
    puts("\nDistance of vectors");
    for (i = 0; i < numOfVect; i++) {
        puts("\n");
        for (j = 0; j < numOfVect; j++) {
            scanf(" %d", &Array[i][j]);
        }
    }

    // Array print (Matrix)
    puts("\nMatrix form: ");
    for (i = 0; i < numOfVect; i++) {
        puts("\n");
        for (j = 0; j < numOfVect; j++) {
            printf(" %d", Array[i][j]);
        }
    }
    
    // Start poin selection
    printf("\n");
    printf("\nStart point: ");
    scanf("%d", &startPoint);

    // DijksFunction
    // dijkstrFunction(numOfVect, startPoint, &Array);
    Dijkstra(Array, numOfVect, startPoint);

    return 0;
}

/*
int dijkstrFunction(int vectorNumbers, int start, int *valueArray)
{
    size_t i, j; //For-loop Values
    int k, min, ind, sv;
    int num=vectorNumbers-1;

    int minPathSource[3][num];
    int listingMinPathSource[num][2], path[vectorNumbers-1][vectorNumbers];

    for (i = 0; i < vectorNumbers-1; i++) {
        for (j = 0; i < vectorNumbers; j++) {
            path[i][j] = 0;
        }
    }

    for (i = 0; i < vectorNumbers-1; i++) {
        if (i == 0) {
            for (j = 0; j < num; j++) {
                if (j>=start-1) {
                    minPathSource[0][j] = j+1;
                }
                else
                    minPathSource[0][j] = j;
                path[j][0] = start;
                minPathSource[2][j] = start - 1;
            }
            for (j = 0; j < num; j++) {
                minPathSource[1][j] = *(valueArray+(start-1)*vectorNumbers+minPathSource[0][j]);
            }

            min = minPathSource[1][0];
            ind = minPathSource[0][0];
            sv = minPathSource[2][0];

            for (j = 0; j < num; j++) {
                if (minPathSource[1][j]<=min) {
                    min = minPathSource[1][j];
                    ind = minPathSource[0][j];
                    sv = minPathSource[2][j];
                }
            }

            puts("\n\n");
            for (j = 0; j < num; j++) {
                printf(" %d", minPathSource[0][j]);
            }

            puts("\n");
            for (j = 0; j < num; j++) {
                printf(" %d", minPathSource[1][j]);
            }

            puts("\n");
            for (j = 0; j < num; j++) {
                printf(" %d", minPathSource[2][j]);
            }

            listingMinPathSource[i][0] = ind;
            listingMinPathSource[i][1] = min;
            

        }
    }
    

}
*/