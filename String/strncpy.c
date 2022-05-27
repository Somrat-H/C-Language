#include <stdio.h>
#include <string.h>

#define M 20

int main(){

    char name[M] = "Somrat Hossain";
    char cut[M];

    strncpy(cut, name, 6);

    printf("%s", cut);




    return 0;
}