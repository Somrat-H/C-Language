#include<stdio.h>
int main()
{

    int i,number;
    printf("enter your number\n");
    scanf("%d",&number);
    for(i=number; i<1; --i)
    {
        printf("%d",i*number);
    }

    return 0;
}
