#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <time.h>

int child_process();
int parent_process();

int fd[2];

int main()
{

    // int fd[2];
    pipe(fd);

    int id = fork();

    if (id == 0)
    {
        child_process();
    }
    else
    {
        parent_process();
    }

    close(fd[0]);
    close(fd[1]);

    return 0;
}


int child_process()
{
    int x;

    read(fd[0], &x, sizeof(int));
    printf("Receive %d\n", x);

    x *= 4;

    write(fd[1], &x, sizeof(int));
    printf("Wrote %d\n", x);
}

int parent_process()
{

    int y = rand() % 10;
    write(fd[1], &y, sizeof(int));
    printf("Wrote %d\n", y);

    read(fd[0], &y, sizeof(int));
    printf("Result : %d\n", y);
}