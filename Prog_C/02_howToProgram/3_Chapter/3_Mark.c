#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int grade;
    scanf("%d", &grade);

    if (grade >= 90) {
        puts("A");
    } else if ((grade < 90) && (grade >= 80)) {
        puts("B");
    } else if ((grade < 80) && (grade >= 70)) {
        puts("C");
    } else if ((grade < 70) && (grade >= 60)) {
       puts("D");
    }
    
    return 0;
}

