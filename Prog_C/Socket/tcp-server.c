#include <stdlib.h>
#include <stdio.h>

#include <sys/types.h>
#include <sys/socket.h>

#include <netinet/in.h>

int main(int argc, char const *argv[])
{
    char serverMessg[256] = "You have reacherd the server JOOOOJ!";

    // Server sock
    int socketServ;
    socketServ = socket(AF_INET, SOCK_STREAM, 0);

    // Define serv add
    struct sockaddr_in server_address;

    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(9002);
    server_address.sin_addr.s_addr = INADDR_ANY;

    // Bind the socket to our specific IP and port
    bind(socketServ, (struct sockaddr *) &server_address, sizeof(server_address));

    listen(socketServ, 5);

    int clientSock;
    clientSock = accept(socketServ, NULL, NULL);

    // Send msg
    send(clientSock, serverMessg, sizeof(serverMessg), 0);

    // Close socket
    close(socketServ);

    return 0;
}