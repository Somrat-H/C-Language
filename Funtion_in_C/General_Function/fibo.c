#include<stdio.h>
int fibo(int n);

int main(){

    int n;
    printf("enter your value of fibo number want : ");
    scanf("%d", &n);

    int hold = fibo(n);

    printf("Fibo of %d is %d\n", n, hold);

    return 0;
}

int fibo(int n){
    int i, n1 = 0, n2 = 1;
    if(n == 1){
        return n1;
    }
    else if(n == 2){
        return n2;
    }
    else
    for(i=0; i<n-2; i++){
       int temp = n2;
        n2 = n1+n2;
        n1 = temp;
    }
    return n2;
}
