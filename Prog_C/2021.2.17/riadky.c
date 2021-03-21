#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int riadok = 1, slova = 0;
    char c = '\n', cpred;

    //do {
    ////    cpred = c;
    ////    c = getchar();
    ////    if  ((c == ' ' && cpred != ' ' && cpred != '\n') || 
    ////        (c == '\n' && cpred != '\n' && cpred != ' ')) {
    ////        slova++;
    ////    }
    ////    if (c == '\n') {
    ////        printf("%d. riadok\tslov: %d\n", riadok, slova);
    ////        riadok++;
    ////        slova = 0;
    ////    }
    //} while (c != '*');

    do {
        switch(getchar()) {
            case ' ' :  slova++; 
                        break;
            case '\n':  slova++;
                        printf("%d. riadok \tslov: %d\n", riadok, slova);
                        riadok++;
                        slova=0;
                        break;
            case '*' : return (0);
        }
    } while (c != '0');

    return 0;
}