#include<stdio.h>
int factorial(int number);
int main()
{

   int num;
   printf("enter your number\n");
   scanf("%d",&num);
   printf("the number %d factorial is %d",num,factorial(num));




    return 0;

}
int factorial(int number)
{

    if(number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number -1));
    }

}
