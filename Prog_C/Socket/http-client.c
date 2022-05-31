#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/socket.h>

#include <netinet/in.h>
#include <arpa/inet.h>

int main(int argc, char *argv[])
{
    char *address;
    address = argv[1];

    int clientSocket;
    clientSocket = socket(AF_INET, SOCK_STREAM, 0);

    // Connect to an adres
    struct sockaddr_in remote_address;
    remote_address.sin_family = AF_INET;
    remote_address.sin_port = htons(80);
    inet_aton(address, &remote_address.sin_addr.s_addr);

    connect(clientSocket, (struct sockaddr *) &remote_address, sizeof(remote_address));

    char request[] = "GET / HTTP/1.1/\r\n\r\n";
    char response[4096];

    // Send request
    send(clientSocket, request, sizeof(request), 0);

    // Recieve response
    recv(clientSocket, &response, sizeof(response), 0);

    printf("response from the server is %s", response);
    close(clientSocket);

    return 0;
}