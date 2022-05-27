#include <stdio.h>
#include <string.h>

#define M 20

int main(){

    char name[M] = "Somrat Hossain";
    char name2[M];

    strcpy(name2, name);

    printf("%s\n", name2);



    return 0;
}