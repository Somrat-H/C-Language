#include<stdio.h>
#define SWAP(A,B) A ^= B ^= A ^= B
#define PRINT_VALUE(X) printf("Value %d at the address %d\n", X, &X)
#define SUM(X,Y) printf("SUM of number %d\n", X+Y);
#define SUB(X,Y) printf("SUB of number %d\n", X-Y);
#define DIV(X,Y) printf("DIV of number %d\n", X/Y);
#define MUL(X,Y) printf("MUL of number %d\n", X*Y);
int main(){

    int a, b;

    printf("enter your two for sum, sub, mul, div and swap");
    scanf("%d %d", &a, &b);
    printf("%d %d\n", a, b);

    SWAP(a,b);
    printf("%d %d\n", a, b);

    PRINT_VALUE(a);
    PRINT_VALUE(b);

    SUM(a,b);
    SUB(a,b);
    DIV(a,b);
    MUL(a,b);



    return 0;
}
