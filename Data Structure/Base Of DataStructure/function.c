#include<stdio.h>



/*no value and no argumamet
no value and argummet
valur and no arguments
value and argument
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
