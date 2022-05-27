#include <stdio.h>
#include <string.h>
#define MAX 20

int main(){


    char str1[MAX] = "01636232088";
    char str2[MAX] = "01636232077";
    
    //here this strspn function in two string how many char are matched.
    // return int number char match number in the two string.
    int i = strspn(str1, str2);

    printf("%d\n", i);



    return 0;
}