#include<stdio.h>
void print_test();//function prototype
int main()
{
    printf("Main Function and Also library function\n");

    print_test();
    printf("User define function address = %d\n",&print_test);
    printf("Size of user function = %dbytes\n",sizeof(print_test));




    return 0;
}
void print_test(){
  printf("User define function!!!\n");

}
