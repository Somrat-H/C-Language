#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <fcntl.h>
//this process read and receive from another process
int main()
{   
    int fd;

    int a[5];


    //open the fifo file for readonly
    fd = open("sum", O_RDONLY);
    if(fd == -1)
    {
        return 1;
    }
    //read the vaule from sender process and print this value
    for(int i = 0; i < 6; i++)
    {
       if(read(fd, &a[i], sizeof(int)) == -1)
       {
           return 2;
       }
       printf("Receive  %d\n", a[i]);
    }
    //every time need after use file discriptor to close it
    close(fd);
    
    return 0;
}