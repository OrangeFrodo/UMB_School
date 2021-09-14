#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Socket headers
#include <sys/types.h>
#include <sys/socket.h>

#include <netinet/in.h>

int main(int argc, char const *argv[])
{
    // Open file to serve 
    FILE *html_data;
    html_data = fopen("index.html", "r");

    char responseData[1024];
    fgets(responseData, 1024, html_data);

    char httpHeader[2048] = "HTTP/1.1 200 OK\r\n\n";
    strcat(httpHeader, responseData);

    // Create socket
    int neworkSocket;
    neworkSocket = socket(AF_INET, SOCK_STREAM, 0);

    // Define address
    struct sockaddr_in server_address;

    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(8001);
    server_address.sin_addr.s_addr = INADDR_ANY;

    bind(neworkSocket, (struct sockaddr *) &server_address, sizeof(server_address));
    listen(neworkSocket, 5);

    int clientSocket;
    while (1) {
        clientSocket = accept(neworkSocket, NULL, NULL);
        send(clientSocket, httpHeader, sizeof(httpHeader), 0);
        close(clientSocket);
    }
    

    return 0;
}
