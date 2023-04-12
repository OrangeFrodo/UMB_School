// First in first out
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int queue[256];
int count = 0;

void insertIntoQueue(int x){
    queue[count] = x;
    count++;
}

int removeFromQueue(int x){
    int res = queue[x];
    return res;
}

int main(int argc, char const *argv[])
{
    insertIntoQueue(1);
    insertIntoQueue(2);
    insertIntoQueue(3);
    insertIntoQueue(5);

    for (size_t i = 0; i < count; i++)
    {
        printf("%d \n", removeFromQueue(i));
    }
    
    return 0;
}
