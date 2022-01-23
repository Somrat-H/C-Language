#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>
#include <sys/wait.h>
#include <sys/unistd.h>

int main()
{
    int id = fork();
    //fork() make two process child and parent
    int n = 1;

    //child process
    if(id == 0)
    {
        n = 4;
    }
    //parent process
    else
    {
        n = 6;
    }
    //wait for child process
    if(id != 0)
    {
    wait(NULL);
    }

    for(int i = n; i < n+6; i++)
    {
        printf("%d ", i);
       // fflush(stdout);
    }

    printf("\n");

    return 0;
}