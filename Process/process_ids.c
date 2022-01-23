#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>

//Every process have own and also have main process id.

int main()
{
    int id = fork();

    //Children process
    if( id == 0){
        sleep(1); // wait for utill parent execution
        // printf("Child Proces id : %d Parent id : %d\n", getpid, getppid());
    }
    // else
    // {
    // // printf("Parent Process id : %d Parent id : %d\n", getpid(), getppid());
    // }
    
    //getppid is Main process id and getpid is child or parent process id
    printf("current id : %d Parent id : %d\n", getpid(), getppid());

    int res = wait(NULL);

    //check wait() to Main process and also no child process alive
    if( res == -1){
        printf("no children process wait for\n");
    }
    else{
        printf("Main process execution\n");
    }


    return 0;
}