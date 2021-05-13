#include <stdalign.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned int aCount = 0;
    unsigned int bCount = 0;
    unsigned int cCount = 0;
    unsigned int dCount = 0;
    unsigned int eCount = 0;

    puts("Enter the Grade");
    puts("Enter the EOF char input");

    int grade;
    while ((grade == getchar()) != EOF)
    {
        switch (grade) {
            case 'A':
            case 'a':
                ++aCount;
                break;
        
            case 'B':
            case 'b':
                ++bCount;
                break;

            case '\n':
            case '\t':
            case ' ':
                break;
        
            default:
                printf("%s", "Incorrect letter grade entered.");
                puts("Enter new grade.");
                break;
        }
    }

    puts("\n Totals for each grade letter:");
    printf("A: %u\n", aCount);
    printf("%d", bCount);

    return 0;
}
