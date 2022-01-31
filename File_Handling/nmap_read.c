#include <stdio.h>
#include <stdlib.h>
#include <sys/fcntl.h>
#include <sys/mman.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/shm.h>

int main()
{

    int shm_fd= open("ass.txt", O_RDWR);

    struct stat s;
    fstat(shm_fd, &s);

    int size = s.st_size;

    char *a = mmap(0, size, PROT_READ, MAP_PRIVATE, shm_fd, 0);
    
    int i=0;
    while (i < size)
    {
        printf("%c", a[i]);
        i++;
    }
    printf("\n");

    return 0;
}