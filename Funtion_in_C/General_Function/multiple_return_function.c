#include<stdio.h>

int SumPro(int a, int b, int *sum, int *pro);

int main(){

   int a=5, b=6, sum, pro;

   int hold = SumPro(a, b, NULL, &pro);

   if(hold == 0){
       printf("worng\n");
   }
   else
   printf("sum %d and pro %d\n", sum, pro);

    return 0;
}


int SumPro(int a, int b, int *sum, int *pro){
     if(sum == NULL || pro == NULL){
         return 0;
    }
    else
    *sum = a+b;
    *pro = a*b;
    return 1;
}
