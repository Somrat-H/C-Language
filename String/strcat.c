#include <stdio.h>
#include <string.h>
#define M 20

int main()
{
    char first_name[M] = "Somrat";
    char last_name[M] = "Hossain";
    
    // one string another string join
    //note: just two string need not more than
    strcat(last_name, first_name);

    printf("%s\n", last_name);

    return 0;
}