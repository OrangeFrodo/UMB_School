#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){

    int colum, row, words;

    scanf("%d %d %d", &colum, &row, &words);

    char array[1][1] = {0};

    char * pole = malloc(row * colum * sizeof(char));
    
    for (size_t i = 0; i < row; i++) {
        int temp;
        while (isspace(temp = getc(stdin)));
        {
            ;
        }
        ungetc(temp, stdin);
        fread(pole + i * colum, sizeof(char), colum, stdin);
    }

    printf("%s", pole);

}

/* 
    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            printf("%c",matica[i][j]);
        }
        printf("\n");
    }

    int count = 0;
    for(int i = 0; i < W; i++){
        scanf("%s",buffer);
        printf("slovo: %s\n",buffer);
        c = buffer[count];
        while(c != '\0'){
            for(int a = 0; a < L; a++){
                for(int j = 0; j < C; j++){
                    if(matica[a][j] == c){
                        printf("pismeno %c je na pozicii %d %d\n",c,a, j);
                    }
                }
            }
            count++;
            c = buffer[count];
        }
        count = 0;
    }
} */
