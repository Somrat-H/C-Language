#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <fcntl.h>

int main()
{   
    int fd;
    char *myfifo = "file.txt";

    mkfifo(myfifo, 0666);

    fd = open(myfifo, O_RDWR);
    char x[256];

    write(fd, x, sizeof(x));

    return 0;
}