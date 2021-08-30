#include<stdio.h>
int mul(int *a, int *b);
int main()
{
    int x, y;
    x = 2,y = 6;

    printf("%d\n", mul(&x,&y));
    printf("x=%d\n y=%d\n", x,y);





    return 0;
}
int mul(int *a, int *b){
    *a = 9,*b = 7;
   int c = (*a )* (*b);
   return c;


}
//make function with pointer and pass by reference or address.
