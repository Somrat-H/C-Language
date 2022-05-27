#include <stdio.h>
#include <string.h>
#define M 20

int main(){

    char name[M] = "Somrat Hossain";
    char a = 'a';
    char *p = NULL;

    //fine the string the given char from the last occurance.
    //it mean find the string given the char left to right
    
    p = strrchr(name, a);

    printf("%s\n", p);


    return 0;
}