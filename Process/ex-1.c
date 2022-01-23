#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main()
{   
    

    int fd[2];
    pipe(fd);

    int id = fork();

    if(id == 0)
    {
        char a[] = "hello this from child\n";
        write(fd[1], a, sizeof(a)); 
        char b[256];
        read(fd[0], b, sizeof(b));  
        fflush(stdout);
        printf("receive from parent =>> %s", b);
        close(fd[0]);
        close(fd[1]);
        exit(0);
    }
    else
    {
        char b[256];
        read(fd[0], b, sizeof(b));
        printf("receive from child =>> %s", b);
        char a[] = "hello this is from parent\n";
        write(fd[1], a, sizeof(a));
        close(fd[0]);
        close(fd[1]);
        exit(0);
     
    }
    
   wait(NULL);



    return 0;
}