#include <stdio.h>
#include <string.h>

#define MAX 20

int main(){

    char name[MAX] = "Somrat Hossain";
    char word[MAX] = "s";

    //here this strcspn function fine the where the word in the string at position.
    //position like array to start at index 0, so last we add 1 exect index get.
    int i = strcspn(name, word);

    printf("Match %d\n", i+1);




    return 0;
}