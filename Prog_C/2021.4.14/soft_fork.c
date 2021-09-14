#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[])
{   
    int i, n, f=1;

    if (argc > 1) {
        n = atoi(argv[1]);
    } else {
        fprintf(stderr, "Pouzi: soft.exe n\n");
        return 1;
    }

    int rura[2];
    pipe(rura); // Comunication pipe

    if(fork()) {
        // parent
        for(i=1; i<=n; i+=2) {
            f *= i;
        }
        // Parrent add from pipe
        int pom;
        read(rura[0], &pom, sizeof(int));
        f *= pom;
    } else {
        // child
        for(i=2; i<=n; i+=2) {
            f *= i;
        }
        write(rura[1], &f, sizeof(int));
        return(0); // End child 
    }

    // for(i=1; i<=n; i++){
    //     f *= i;
    // }

    printf("%d! \n", f);

    return 0;
}