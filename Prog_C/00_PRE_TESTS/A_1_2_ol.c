#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int bills[15] =  {1,2,5,10,20,50,100,200,500,1000,2000,5000,10000,20000,50000};
    int newBill, times, pom_del, moznost;
    int *newQuestions;

    scanf("%d", &newBill);
    scanf("%d", &times);

    newQuestions = (int*) malloc(sizeof(int) * (times));
    int i;
    for (i=0; i<times; i++) {
        scanf("%d", &newQuestions[i]);
    }

    for (i=0; pom_del==0; i++) {
        while (pom_del % bills[i] ) {
            if(pom_del % bills[i] != 0) {
                moznost += pom_del % bills[i];
            }
            if (pom_del % bills[i] != 0) {
                break;
            }
        }
    }

    return 0;
}
