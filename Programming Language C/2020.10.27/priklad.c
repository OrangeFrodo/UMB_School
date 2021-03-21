#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    int x, y, c;

    printf("Zadaj interval ", x,y);
    scanf("%d %d", x, y);
    printf("Zadaj cislo ktore chces zistit: ", c);
    scanf("%d", c);

    if (x > y) {
        // int kladny
        if (x < c) {
            printf("C nepatri do intervalu");
        }

        else if (x > c) {
            printf("C patri do intervalu");
        }
    }

    else {
        if (y < c) {
            printf("C nepatri do intervalu");
        }

        else if (y >= c) {
            printf("C patri do intervalu");
        }
    }

    return 0;
}