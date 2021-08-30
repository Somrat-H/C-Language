#include<stdio.h>
#include<limits.h>

int main()
{
    //declaration of data types
    unsigned short b = -4;
    short a = 32769;
    char ch = 'A';
    char c = 259;
    char x;

    printf("enter your one char:");
    scanf("%c",&x);

    printf("ASCII value is %d\n",x);
    printf("%d\n",c);
    printf("%c\n",c);
    printf("%c\n",ch);
    printf("%d\n",ch);
    printf("%u\n",b);
    printf("%d\n",a);
    //size of datatypes
    int i;
    char cr;
    short s;
    float f;

    printf("size of char : %d byte\n",sizeof(cr));
    printf("size of integer : %d byte\n",sizeof(i));
    printf("size of short : %d byte\n",sizeof(s));
    printf("size of short : %d byte\n\n",sizeof(f));

    //limits of datatypes
    printf("Short max limit %d\n",SHRT_MAX);
    printf("Short min limit %d\n",SHRT_MIN);
    printf("Unsigned Short max limit %d\n",USHRT_MAX);

    printf("Integer max limit %d\n",INT_MAX);
    printf("Integer min limit %d\n",INT_MIN);
    printf("Unsigned Integer max limit %d\n",UINT_MAX);



    return 0;
}
