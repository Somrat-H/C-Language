#include<stdio.h>

int f(int x){
   if(x<0){
       return 0;
    }
  // printf("hero alom %d\n");
   return ((x%10) + f(x/10));
}

int main(){

   int r = f(156);
   printf("%d\n",r);


    return 0;
}
