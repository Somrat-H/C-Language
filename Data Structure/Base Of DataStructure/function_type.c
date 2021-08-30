#include<stdio.h>



/*
1.no value and no argument
2.no value and argument
3.value and no argument
4.value and argument
*/

int get_print(int a,int b);


int main()
{


    printf("%d\n",get_print(3,5));
    printf("%d\n%d\n",&get_print);
    printf("%d\n",get_print(4,6));
    printf("%d\n%d\n",&get_print);
    return 0;


}
int get_print(int a,int b){


    return a+b;
}
