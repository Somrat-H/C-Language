#include<stdio.h>
#include<limits.h>
//#include <conio.h>
int w;
float x;
double y;
char z;
int main(){
    int a;
    float b;
    double c;
    char d;

    printf("Size of Integer : %d byte\n",sizeof(a));
   printf("Size of float : %d byte\n",sizeof(b));
   printf("Size of Double : %d byte\n",sizeof(c));
   printf("Size of Char : %d byte\n\n",sizeof(d));

    printf("Address for Global variable\n\n");
   printf("Address of integer : %d\n",&w);
   printf("Address of float : %d\n",&x);
   printf("Address of double : %d\n",&y);
   printf("Address of char : %d\n\n",&z);

    printf("Address for Local  variable\n\n");
    printf("Address of integer : %d\n",&a);
   printf("Address of float : %d\n",&b);
   printf("Address of double : %d\n",&c);
   printf("Address of char : %d\n\n",&d);

    printf("Maximum Limit\n\n");
printf("Maximum Integer : %d byte\n", INT_MAX);
printf("Maximum float : %d byte\n", LONG_MAX);
printf("Maximum double : %d byte\n", LLONG_MAX);
printf("Maximum char : %d byte\n\n", CHAR_MAX);

printf("Minimum Limit\n\n");
printf("Minimum Integer : %d byte\n", INT_MIN);
printf("Minimum float : %d byte\n", LONG_MIN);
printf("Minimum double : %d byte\n", LLONG_MIN);
printf("Minimum char : %d byte\n\n", CHAR_MIN);


printf("char value: \n");
scanf("%c",&d);
printf("Integer Value: \n");
scanf("%d",&a);
printf("Float Value: \n");
scanf("%f",&b);
printf("Double Value: \n");




//scanf("%d %f %lf %c\n", &a, &b,  &c, &d);


printf("\n%d\n",a);
printf("%f\n",b);
printf("%lf\n",c);
printf("%c\n",d);












  return 0;
}


