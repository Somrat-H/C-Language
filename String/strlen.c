#include <stdio.h>
#include <string.h>
#define M 20
int main()
{
    char first_name[M] = "Somrat";

    char last_name[M] = "Hossain";

    int a, b;
    //length of string how many alphabates in string
    a = strlen(first_name);
    b = strlen(last_name);

    printf("%s = %d\n", first_name, a);
    printf("%s = %d\n", last_name, b);



    return 0;
}