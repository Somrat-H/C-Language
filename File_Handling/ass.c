#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>


int main()
{   
    char a;
    int count = 0;

    int fd = open("/home/somrat/Documents/C_Code/file_handling/ass.txt", O_RDWR);

    read(fd, &a, 1);

    while(a != '\0')
    {
        printf("%c",a);
        a = '\0';
        count++;
        read(fd, &a, 1);
    }

    printf("\nThe totall number of word and character of the file : %d\n", count);

}
// /home/somrat/Documents/C_Code/file_handling/ass.txt