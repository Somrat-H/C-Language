#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <fcntl.h>
//this array to send a process to write for send to another process
int main()
{   
    int fd;

    int a[5];
    //random generate the value the array
    for(int i=0; i<6; i++)
    {
        a[i]=rand() % 10;
    }
    //open the fifo file for write only
    fd = open("sum", O_WRONLY);
    if(fd == -1)
    {
        return 1;
    }
    //write the value for send to other process and print the value
    for(int i = 0; i < 6; i++)
    {
       if(write(fd, &a[i], sizeof(int)) == -1)
       {
           return 2;
       }
       printf("Wrotten %d\n", a[i]);
    }
    //every time after using file discriptor to close it
    close(fd);

    return 0;
}