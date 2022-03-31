#include <stdio.h>
#include <unistd.h>

int main(){
	printf("Ahoj svet \n");
	printf("ID procesu je: %d\n", getpid());
}
