#include <stdio.h>
#include <string.h>
#define MAX 20
int main()
{

    char name[MAX] = "Somrat Hossain";
    char str[MAX] = "rat";

    char *p = strstr(name, str);

    printf("%s\n", p);


    return 0;
}