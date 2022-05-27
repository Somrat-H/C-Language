#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>


int main()
{   
    char a;
    int count = 0;
    char x[100] = " ";
    
    int fd2 = open("/home/somrat/Documents/C_Code/File_Handling/top.txt", O_WRONLY);

    printf("Enter your sentence: ");
    scanf("%s", &x);

    write(fd2, &x, 100);
    
    close(fd2);

    int fd = open("/home/somrat/Documents/C_Code/File_Handling/top.txt", O_RDONLY);

    read(fd, &a, 1);

    while(a != '\0')
    {
        printf("%c",a);
        a = '\0';
        count++;
        read(fd, &a, 1);
    }

   // printf("\nThe totall number of word and character of the file : %d\n", count);

    close(fd);

}
// /home/somrat/Documents/C_Code/file_handling/ass.txt