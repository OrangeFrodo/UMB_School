// Fig. 5.14: fig05_14.c
// Simulating the game of craps.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status{CONTINUE, WON, LOST};

int rollDice(int value);

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    int myPoints;
    int points = 1;
    int casinoPoints;
    enum Status gameStatus;

    int sum = rollDice(points);

    switch (sum) 
    {
        case 1:
        case 7:
            points++;
            gameStatus = WON;
            break;

        case 2:
        case 3:
        case 12:
            points++;
            gameStatus = LOST;
            break;

    default:
        gameStatus = CONTINUE;
        points++;
        myPoints = sum;
        printf("My points are %d\n", myPoints);
        break;
    }

    while (CONTINUE == gameStatus)
    {
        sum = rollDice(points);
        points++;

        if(sum == myPoints) {
            gameStatus = WON;
        }

        else if (7 == sum) {
            gameStatus = LOST;
        }
    }
    
    if (WON == gameStatus) {
        puts("Player wins");
    }

    else if (LOST == gameStatus) {
        puts("Casino wins");
    }

    return 0;
}

int rollDice(int value) 
{
    int diceOne = 1 + rand() % 6;
    int diceTwo = 1 + rand() % 6;

    printf("On %d, Player rolled %d + %d what equals = %d \n", value, diceOne, diceTwo, diceOne + diceTwo);
    return diceOne + diceTwo;
}
