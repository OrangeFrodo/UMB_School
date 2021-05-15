#include <stdio.h>

//Prototypes
void function1(int a);
void function2(int b);
void function3(int c);

int main(int argc, char const *argv[])
{
    void (*f[3])(int) = {function1, function2, function3};

    printf("%s", "Enter a number between 0 and 2, 3 to end: ");
    size_t choice;
    scanf("%u", &choice);

    while (choice >= 0 && choice < 3) {
        (*f[choice])(choice);

        printf("%s", "Enter a number between 0 and 2, 3 to end: ");
        scanf("%u", &choice);
    }
    
    puts("");

    return 0;
}

void function1(int a)
{
    printf("You entered %d so function1 was called\n\n", a);
}

void function2(int b)
{
    printf("You entered %d so function1 was called\n\n", b);
}

void function3(int c)
{
    printf("You entered %d so function1 was called\n\n", c);
}