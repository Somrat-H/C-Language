#include<stdio.h>
int main(){

 int i,*p1;
 int n,*p2;
 int x;
 p1=&i;
 p2=&n;

 printf("enter you number for multiplication table : \n ");
 scanf("%d",p2);
 for(*p1=1;(*p1)<11;(*p1)++){

    printf("%d * %d = %d\n",*p2,*p1,x);
 x=((*p1) * (*p2));
 }

return 0;
}
