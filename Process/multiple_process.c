#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main()
{
    int id1 = fork();
    int id2 = fork();

    if(id1 == 0)
    {
        if(id2 == 0)
        {
            printf("child process of id2\n");
        }
        else
        {
            printf("parent process of id2\n");
        }
    }
    else
    {
        if(id2==0)
        {
            printf("child process of id1 parent\n");
        }
        else
        {
            printf("parent process of id1 child process\n");
        }
    }

    wait(NULL);

    return 0;
}