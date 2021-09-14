#include <stdio.h>
#include <stdlib.h>

// Socket libs
#include <sys/types.h>
#include <sys/socket.h>

#include <netinet/in.h>

int main(int argc, char const *argv[])
{
    // Socket creation
    int netWorkSocket;
    netWorkSocket = socket(AF_INET, SOCK_STREAM, 0);

    // An adress for the socket
    struct sockaddr_in server_address;

    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(9002);
    server_address.sin_addr.s_addr = INADDR_ANY;

    int connectionStatus = connect(netWorkSocket, (struct sockaddr *) &server_address, sizeof(server_address));

    if (connectionStatus == -1) {
        printf("There was a socket error \n\n");
    } else {
        printf("Functional socket \n\n");
    }

    // Data from server
    char serverResponse[256];
    recv(netWorkSocket, &serverResponse, sizeof(serverResponse), 0);

    // Print data from server
    printf("The server sent the data: %s \n", serverResponse);

    // Close
    close(netWorkSocket);

    return 0;
}
