#include<stdio.h>
int main(){
//int a = 5;
//int a = 5;
int b = 80;
int c;

printf("short : %d bytes\n",sizeof(b));
printf("short : %d bytes\n",sizeof(short int));
printf("long  : %d bytes\n",sizeof(long int) );
printf("long long : %d bytes\n",sizeof(long long int));
printf("singed : %d bytes\n",sizeof(signed int));
printf("unsinged : %d bytes\n",sizeof(unsigned int));
//printf("short : %d\n",sizeof(long int a);


return 0;

}
