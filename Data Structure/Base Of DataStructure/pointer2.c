#include<stdio.h>
int main(){


  int a = 2, *p;
  float b =3.4, *q;
  double c =3.55 , *r;
  char d ='w' , *s;
   int *pt = NULL;

    p = &a;
    q = &b;
    r = &c;
    s = &d;

    printf("Address of a %dbytes\n value of a %d\n",p,*p);// *p=value of a and p = address of a
    printf("Address of b %dbytes\n value of b %f\n",q,*q);
    printf("Address of c %dbytes\n value of c %lf\n",r,*r);
    printf("Address of d %dbytes\n value of d %c\n",s,*s);

    printf("Address of null pointer %dbytes\n",pt);// null pointer we can declare and there is no memory allowcated











return 0;
}
