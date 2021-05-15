#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52
#define POKER 6


//Prototypes
void shuffle(unsigned int wDeck[][FACES], const size_t size);
void deal(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[]);


int main(int argc, char const *argv[])
{
    unsigned int deck[SUITS][FACES] = {0};

    puts("");

    srand(time(NULL));
    shuffle(deck, POKER);

    const char *suit[SUITS] =
        {"Hearts", "Diamonds", "Clubs", "Spades"};

    const char *face[FACES] =
        {"Ace", "Deuce", "Three", "Four",
         "Five", "Six", "Seven", "Eight",
         "Nine", "Ten", "Jack", "Queen", "King"};
        
    deal(deck, face, suit);

    return 0;
}

void shuffle(unsigned int wDeck[][FACES], const size_t size)
{
    for (size_t card = 1; card < size; ++card) {
        size_t row;     //row Num
        size_t colum;   //colum Num
        do {
            row = rand() % SUITS;
            colum = rand() % FACES;
        } while (wDeck[row][colum] != 0);

        wDeck[row][colum] = card;
    }
}

void deal(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[])
{   
    // deal each of the cards
    for (size_t card = 1; card < CARDS; ++card) {
        // loop through rows of wDeck
        for (size_t row = 0; row < SUITS; ++row) {
            // loop through columns of wDeck for current row
            for (size_t column = 0; column < FACES; ++column) {
                // if slot contains current card, display card
                if (wDeck[row][column] == card) {
                    printf("%5s of %-8s%c", wFace[column], wSuit[row], card % 5 == 0 ? '\n' : '\t');
                }
            }   
        }
    }
    puts("\n");
}