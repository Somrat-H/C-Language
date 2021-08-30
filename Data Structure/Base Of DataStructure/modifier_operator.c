#include<stdio.h>
int main()
{

    int x=10, y=20, z;
    //modify operator is another name unray opearator
    //first pre increment or decrement
    //second substitution
    //third evaluation
    //fourth assignment
    //last post increment or decrement
    printf("%d %d %d \n",x,y,z);
    z= x++ * --y;
    printf("%d %d %d ",x,y,z);







    return 0;
}
