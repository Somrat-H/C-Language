#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    int fd[2];

    pipe(fd);

    int id = fork();

    if( id == 0)
    {   
        int x;

        printf("enter your number:");
        scanf("%d", &x);

        write(fd[1], &x, sizeof(int));

        close(fd[0]);
        close(fd[1]);
    }
    else
    {
        int y;

        read(fd[0], &y, sizeof(int));
        y*=5;
        printf("Get from child %d\n", y);
        
        close(fd[0]);
        close(fd[1]);
    }




    return 0;
}