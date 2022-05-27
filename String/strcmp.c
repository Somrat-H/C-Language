#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define M 10

int main(){

    char* name1 = malloc(sizeof(M));
    char* name2 = malloc(sizeof(M));

    printf("Enter your name: ");
    scanf("%s", name1);
    printf("Enter your name: ");
    scanf("%s", name2);

    if(strcmp(name1, name2) == 0)
    {
        printf("You are same person!!!\n");
    }
    else{
        printf("You are not same person!!!\n");
    }

    free(name1);
    free(name2);
    
    return 0;
}