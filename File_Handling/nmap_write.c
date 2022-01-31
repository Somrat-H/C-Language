#include <stdio.h>
#include <stdlib.h>
#include <sys/fcntl.h>
#include <sys/mman.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/shm.h>
#include <unistd.h>

int main()
{   

    int fd = open("ass.txt", O_RDWR);
    char a[64]="";

    scanf("%s", &a);

    struct stat s;
    fstat(fd, &s);

    int size = s.st_size;

    char* b = mmap(0, size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    close(fd);
    int i = 0;
    
    while (a[i] != '\0')
    {
        b[i] = a[i++];
    }
    
    printf("%s", b);

    return 0;
}