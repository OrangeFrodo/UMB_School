#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
	int a = fork();

	if(a < 0) {
		printf("Chyba !!!\n");
	} else if (a == 0) {
		printf("Detský proces: PID: %d --- PPID: %d\n", getpid(), getppid());
	} else {
		printf("Rodičovský proces PID: %d --- PPID: %d\n", getpid(), getppid());
	}
}
