#include <stdio.h>
#include <string.h>
#define MAX 40

int main(){

    char str1[MAX] = "This is 66 house number";
    char str2[MAX] = "66";


    /*
    This strpbrk compare two string where match char then its left to right 
    print the full string from the match char.
    */

    char *p = strpbrk(str1, str2);

    printf("%s\n", p);


    return 0;
}