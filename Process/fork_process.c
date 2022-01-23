#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
     int id = fork();

    if(id == 0)
    {
        printf("Hello from child process %d\n", id);
        exit(0);
    }
    else
    {
        printf("Hello from parent process %d\n", id);
        exit(0);
    }


    if(id != 0)
    {
        fork();
    }
  
    printf("Process %d -- %d\n", getpid(), id);
    
    return 0;

}