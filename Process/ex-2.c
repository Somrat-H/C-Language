#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    int fd[2];
    pipe(fd);

    int id = fork();

    if( id == 0)
    {
        char x[256] = "hello, i'm child\n"; 
        char y[256];

        write(fd[1], x, sizeof(x));
        read(fd[0], y, sizeof(y));

         printf("This is child -> %s", y);

        close(fd[0]);
        close(fd[1]);
    }
    else{
        
        char x[256];
        char y[256]= "hello, i'm from parent\n";

        write(fd[1], y, sizeof(y));
        read(fd[0], x, sizeof(x));
        printf("This is parent -> %s", x);

        close(fd[0]);
        close(fd[1]);

    }

    wait(NULL);



    return 0;
}