// Zoznam
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char const *argv[])
{   
    ATOM *start, *position;

    // Empty list
    start = NULL;

    start_add(&start, 123); //
    start_add(&start, 456);
    start_add(&start, 789);

    position = find(start, 456);
    start_add(&position, 258);

    // Print
    position = start;
    while (position != NULL) {
        printf("%d\n", position->num);
        position = position->next;
    }

    // Delete
    while (start->next != NULL) {
        position_popout(start);
    }
    free((void*) start);
    
    return 0;
}

// Add on start
void start_add(ATOM **start, int c) 
{
    ATOM *temp;
    temp = (ATOM*) malloc(sizeof(ATOM));

    temp->num = c;
    temp->next = *start;

    *start = temp;
}

// Add on position
void position_add(ATOM *position, int c)
{
    ATOM *temp;
    temp = (ATOM*) malloc(sizeof(ATOM));
    temp->num = c;
    temp->next = position->next;
    position->next = temp;
}

// Delete position
int position_popout(ATOM *position)
{   
    int c;
    if (position->next != NULL) {        
        ATOM *temp;
        temp = position->next;
        position->next = temp->next;

        c = temp->num;
        free((void*) temp);
    } else {
        c = -1;
    }
    return(c);
}

// Find in Database
ATOM* find(ATOM *start, int c) {
    ATOM *temp;
    temp = start;
    while (temp != NULL) {
        if(temp->num == c) {
            return(temp);
        }
        else {
            temp = temp->next;
        }
    }
    return(NULL);
}