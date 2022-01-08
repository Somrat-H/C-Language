#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

void shouldnotchange(int(*operation)(int , int));
int sum(int a, int b);
int pro(int a, int b);


int main(){

    shouldnotchange(&pro);

    return 0;
}

int sum(int a, int b){
    return a+b;
}

int pro(int a, int b){
    return a*b;
}

void shouldnotchange(int(*operation)(int , int)){
   int a = 100;
   int b = 100;
   int p = sum(a,b);
   printf("%d and %d = %d\n",a, b ,p);
}
