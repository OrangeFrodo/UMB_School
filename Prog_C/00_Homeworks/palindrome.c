#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

void fix_string(char *string) {
    int i = 0;
    int space = 0;

    for (i=0; i<string[i] != '\0'; i++) {
        if (string[i] == ' ') {
            space++;
            memmove(&string[i], &string[i] + 1, strlen(string) - space); 
        }
        string[i] = tolower(string[i]);
    }
}

void reverse_string(char *string, char *reverse_str) {
    char temp;
    int i, n = strlen(string);
    
    for (i=0; i<n; i++) {
        reverse_str[i] = string[n-i-1];
    }
}

bool compare(char *string, char *reverse_str) {

    int i, n = strlen(string);
    
    while(*string==*reverse_str) {
        if (*string == '\0' || *reverse_str == '\0')
            break;
        string++;
        reverse_str++;
    }

    if (*string == '\0' && *reverse_str == '\0') {
        return true;
    }
    else
        return false;
}

int main()
{   
    char string_orig[100]="";
    char final_string[1000]="";
    char string[100]="";
    char reverse_str[100]="";
    bool compare_result = false;
    bool compare_finish = false;
        // input(string);
    
    do {
        memset(string,0,sizeof(string));
        gets(string); /// PalindromPalindrom 
        strcpy(string_orig, string);

        fix_string(string);
        reverse_string(string, reverse_str);
        compare_result = compare(string, reverse_str);

        char koniec[10] = "koniec";
        compare_finish = compare(string, koniec);

        if (!compare_result && !compare_finish) {
            int length = strlen(string);
            strncat(final_string, string, length);
            char nie[14] = "\tNIE\n";
            strncat(final_string, nie, strlen(nie));
        }
        else if (compare_result && !compare_finish) {
            int length = strlen(string);
            strncat(final_string, string, length);
            char ano[14] = "\tANO\n";
            strncat(final_string, ano, strlen(ano));
        }
        else if (compare_finish) {
            continue;
        }

    } while (!compare_finish);

    printf("%s", final_string);

   return 0;
}
 
