#include<stdio.h>
int main(){

int a, *p;
float  b, *q;
int i, *r;
p = &a;
q = &b;
r = &r;
scanf("%d\n",p);
scanf("%f",q);
printf(" Addition  %.5f\n",*p + *q);
printf(" Substruction  %.5f\n",*p - *q);
printf(" Multiplication  %.5f\n",*p * *q);
printf(" Division  %.5f\n",*p / *q);

if(*p>*q){
    printf("Highest number %d\n",*p);
}else{
  printf("Smallest number %d\n",*q);
}

for(i=*p ; i<=*q; i++){
    printf("%d",i);
    printf("\n");
}

return 0;
}
