#include<stdio.h>
#include<stdlib.h>

int main()
{

    int *p = NULL;
    int *q = NULL;
    int *r = NULL;

    p = (int*) malloc( sizeof(int));
    q = (int*) malloc( sizeof(int));
    r = (int*) malloc( sizeof(int));

    *p = 50;
    *q = 10;

    printf("Address using Pointer\n");
    printf("%d\n",p);
    printf("%d",q);

    printf("Arthimetic Operation\n");

    *r = *p + *q;
    printf("%d + %d = %d\n", *p,*q,*r);

    *r = *p - *q;
    printf("%d - %d = %d\n", *p,*q,*r);

    *r = *p / *q;
    printf("%d / %d = %d\n", *p,*q,*r);

    free(p);
    free(q);

    /*
    type casting
    int x =(int)4.5;
    double y =(double)4;
    printf("%d\n%.2f",x,y);
    */
    return 0;
}
