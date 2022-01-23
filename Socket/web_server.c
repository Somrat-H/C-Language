#include <stdio.h>
#include <fcntl.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/ioctl.h>
#include <netdb.h>
#include <sys/time.h>

#define SERVER_PORT 8000
#define MAX 4096
#define SA struct sockaddr



int main()
{

    int listenfd, connfd, len;
    struct sockaddr_in servaddr;
    char recvline[MAX];

    listenfd = socket(AF_INET, SOCK_STREAM, 0);
    
    bzero(&servaddr, sizeof(servaddr));

    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servaddr.sin_port = htons(SERVER_PORT);

    bind(listenfd, (SA*)&servaddr, sizeof(servaddr));
    listen(listenfd, 10);

    // while(1)
    // {
      

        // printf("Waiting for a connection on port %d\n", SERVER_PORT);
        connfd = accept(listenfd, (SA *) NULL, NULL);

        char readBuff[512] = "";
        read(connfd, readBuff, sizeof(readBuff));
        printf("%s", readBuff);
        // read(connfd, readBuff, sizeof(readBuff));
        // printf("%s", readBuff);

        char buff[MAX] = "HTTP/1.0 200 OK\r\n\r\n<h1>Hello, Amit i make a web server!</h1>";

        write(connfd, buff, strlen(buff));
        close(connfd);

    // }

    close(listenfd);

    return 0;
}