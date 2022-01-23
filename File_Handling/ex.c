#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
typedef struct
{
    char name[30];
    int age;
    int id;
}student;

int main()
{   
    student s;
    int fd = open("file.txt", O_RDWR);
    s.age = 20;
    s.id = 1935202542;
    read(fd, &s, 1);
    strcpy(s.name, "Jonny is the most");

    write(fd, &s, sizeof(student));
    printf("the name is %s, age %d and id is %d\n",s.name, s.age, s.id);

    // while (c != '\0')
    // {
    //     printf("%c",c);
    //     c = '\0';
    //     read(fd, &c, 1);
    // }

    
    close(fd);

    return 0;

}