#include <stdio.h>
#include <string.h>
#define MAX 20

int main(){

    char str[MAX] = "Tom1Jerrey1Dog";

    char *p = strtok(str, "1");

    while (p != NULL)
    {
        printf("%s\n", p);
        
        p = strtok(NULL, "1");
    }
    
    return 0;
};
