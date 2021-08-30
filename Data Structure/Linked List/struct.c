#include<stdio.h>
struct Point{

  int x,y;
};
typedef struct Point som;


int main(){
   som p;
   som *a = NULL;
   a=&p;

   printf("%d\n",a);
   printf("%d\n%d\n",&a->x,&a->y);
   scanf("%d %d",&p.x,&p.y);
   printf("%d %d\n",p.x,p.y);
   //printf("%d %d",p->x,p->y);



return 0;
}
