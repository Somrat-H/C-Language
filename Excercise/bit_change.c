#include <stdio.h>

int main()
{
    char a[10] = {1,0,1,1,1,0,0,1,0,1}

    for(int i = 0; i < 10; i++)
    {
        if(a[i] == 0){
            a[i] = 1;
        }
    }

    for(int i = 0; i < 10; i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");
}