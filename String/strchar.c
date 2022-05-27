#include <stdio.h>
#include <string.h>
#define M 20

int main(){

    char name[M] = "Somrat Hossain";
    char p = 'o';
    char *a;
    //Search the character in the first occurance in the string
    // It also search the char left to right 
    a = strchr(name, p);

    printf("%s", a);


    return 0;
}