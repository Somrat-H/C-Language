#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

int main()
{
    int fd[2];
    pipe(fd);

    printf("%d %d\n", fd[0], fd[1]);

    int id = fork();

    if (id == 0)
    {
        char x[256] = "";
        char y[256] = "";

        while (1)
        {   
            printf("Child ::");
            scanf("%s", &x);
            // strcat(x, "\n");
            // printf("C B Write\n");
            write(fd[1], x, strlen(x)+1);
            // printf("C A Write\n");
            if (!strncmp("exit", x, 4))
            {
                break;
            }
            sleep(1);
            // printf("C B Read\n");
            read(fd[0], y, sizeof(y));
            // printf("C A Read\n");
            printf("Child from parent -> %s\n", y);
            if (!strncmp("exit", y, 4))
            {
                break;
            }
            
        }

        
       exit(0);
    }
    else
    {

        char x[256] = "";
        char y[256] = "";

        while (1)
        {
            // printf("P B Read\n");
            read(fd[0], x, sizeof(x));
    
            // printf("P A Read\n");
            printf("Parent from child -> %s\n", x);
              if(!strncmp("exit", x, 4))
            {
                break;
            }

            printf("Parent ::");
            scanf("%s", &y);

            // strcat(y, "\n");
            // printf("P B write\n");
            write(fd[1], y, strlen(y)+1);
            sleep(1);
            // printf("P A Write\n");
            if(!strncmp("exit", y, 4))
            {
                break;
            }           
        }
    }
    wait(NULL);

    close(fd[0]);
    close(fd[1]);
  
    return 0;
}