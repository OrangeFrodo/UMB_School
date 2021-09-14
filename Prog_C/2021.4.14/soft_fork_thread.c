#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#define MAX 2

void *vlakno(void *param);
int vysl = 1;
int n;
pthread_mutex_t mutex;

int main(int argc, char *argv[])
{   
    if (argc > 1) {
        n = atoi(argv[1]);
    } else {
        fprintf(stderr, "Pouzi: soft.exe n\n");
        return 1;
    }

    pthread_mutex_init(&mutex, NULL);

    int i;
    pthread_t id_vlakien[MAX];
    int icka[MAX];
    for(i=0; i<MAX; i++){
        icka[i] = i+1;
        pthread_create(&id_vlakien[i], NULL, vlakno, &icka[i]);
    }
    for(i=0; i<MAX; i++) {
        pthread_join(id_vlakien[i], NULL);
    }

    printf("%d\n", vysl);
    pthread_mutex_destroy(&mutex);

    return 0;
}

void *vlakno(void *param) 
{
    int i = *(int*) param;
    int f = 1;
    for ( ; i<=n; i+=MAX) {
        f *= i;
    }
    pthread_mutex_lock(&mutex);
    vysl *= f;
    pthread_mutex_unlock(&mutex);
    pthread_exit(0);
}