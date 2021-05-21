#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE_ARRAY 999999

void findingWords(int numOfRow, int numOfColum, int numOfwords, char m[numOfRow][numOfColum], char slovo[numOfwords][numOfRow+numOfColum], size_t size);
// void typeOfDirection_2 (int *numOfwords, char *pom[], char *slovo[], int * i);
void printDirectionFunction(int i, int colum, char *tempRow, char *slovo);

int main()
{
    unsigned int numOfRow, numOfColum, numOfwords;   
    scanf("%d %d %d",&numOfRow, &numOfColum, &numOfwords);

    char matrix[numOfRow][numOfColum];
    size_t i,j;             // For loops vars

    // Input
    getchar();
    for(i=0; i<numOfRow; i++){
        for(j=0; j<numOfColum; j++){
            scanf("%c", &matrix[i][j]);
        }
        getchar();
    }

    char word[numOfwords][numOfRow+numOfColum];

    for(i=0; i<numOfwords; i++){
        scanf("%s",word[i]);
    }

    findingWords(numOfRow, numOfColum, numOfwords, matrix, word, SIZE_ARRAY);

    return 0;
}

void findingWords(int row, int colum, int words, char m[row][colum], char slovo[words][row+colum], size_t size)
{
    size_t i, j, k, s;              //For loop vars
    char tempRow[size];             // TOTO


    for(i=0; i<row; i++) {
        for(j=0; j<colum; j++) {
            tempRow[j] = m[i][j];
        }
            tempRow[colum] = 0x00;

            // DIRECTION A
            printDirectionFunction(i, colum, tempRow, (char *) slovo);
            /* for(k=0; k<colum; k++){
                char *poz;
                if((poz = strstr(tempRow,slovo[k]))!=NULL){
                    for(s=0;s<strlen(tempRow);s++){
                        if(poz == &tempRow[s])
                            printf("%d %d A\n",i,s);
                    }
                }
            } */

            strrev(tempRow);

            // DIRECTION E
            for(k=0; k<colum; k++){
                char *poz;
                if((poz = strstr(tempRow, slovo[k]))!=NULL){
                     for(s=0;s<strlen(tempRow);s++){
                        if(poz == &tempRow[s])
                            printf("%d %d E\n", i, (int) strlen(tempRow)-s-1);
                    }
                }
            }
        }

    for(j=0;j<colum;j++){
        for(i=0;i<row;i++){
            tempRow[i] = m[i][j];
        }
        //printf("%s\n",pom);
        tempRow[colum] = 0x00;

        // DIRECTION C
        for(k=0;k<words;k++){
            char *poz;
            if((poz = strstr(tempRow,slovo[k]))!=NULL){
                    for(s=0;s<strlen(tempRow);s++){
                        if(poz == &tempRow[s])
                            printf("%d %d C\n",s,j);
                    }
                }
        }
        strrev(tempRow);

        // DIRECTION G
        for(k=0;k<words;k++){
            char *poz;
            if((poz = strstr(tempRow,slovo[k]))!=NULL){
                    for(s=0;s<strlen(tempRow);s++){
                    if(poz == &tempRow[s])
                        printf("%d %d G\n",(int)strlen(tempRow)-s-1,j);}
            }
        }
    }

    char **temp_arr = malloc((row+1 )* (colum+1 )* 2  * sizeof(char));

    // DIRECTION B v1
/*     for (size_t i = 0; i < row; i++) {
        for (size_t j = 0; j < colum; j++) {

            for (size_t k = i; k < colum; k++) {
                if (i+k < row) {
                    if (j+k < colum) {
                        printf("%d %d %d %c\n", i, j, k, m[i+k][j+k]);
                    }
                }             
            }
        }
    } */
    
    for (size_t j = 0; j < colum; j++) {
        for (size_t k = 0; k < colum; k++) {
            if (k < row) {
                if (j+k < colum) {
                    printf("%d %d %d %c\n", 0, j, k, m[k][j+k]);
                    temp_arr[j][k] = m[k][j+k];
                    temp_arr[j][k+1] = 0x00; 
                    printf("%s\n", temp_arr[j]);
                }
            }             
        }
    }


/*     // DIRECTION B v2
    for (size_t i = 0; i < row; i++) {
        for (size_t j = 0; i < colum; j++) {

            for (size_t k = i; k < colum; k++) {
                if (i+k < row) {
                    if (j+k < colum) {
                        printf("%d %d %d %c\n", i, j, k, m[i+k][j+k]);
                    }
                }
            }
        }
    } */
    
    free(temp_arr);
    exit (0);
}

void printDirectionFunction(int i, int colum, char *tempRow, char *slovo)
{
    size_t k, s;

    for(k=0; k<colum; k++){
        char *poz;
        if((poz = strstr(tempRow, &slovo[k]))!=NULL){
            for(s=0;s<strlen(tempRow);s++){
                if(poz == &tempRow[s])
                    printf("%d %d A\n",i,s);
            }
        }
    }
}