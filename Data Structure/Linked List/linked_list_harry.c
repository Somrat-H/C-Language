#include<stdio.h>
#include<stdio.h>

struct Node{

   int data;
   struct Node *next;

};

int main(){
   struct Node *head,*a,*b,*c;
   head = a;
   a = (struct Node*)malloc(sizeof(struct Node));
   b = (struct Node*)malloc(sizeof(struct Node));
   c = (struct Node*)malloc(sizeof(struct Node));

   a->data = 5;
   a->next = b;

   b->data = 6;
   b->next= c;

   c->data = 7;
   c->next = NULL;

   while(a!=NULL){
    printf("%d ", a->data);
    a=a->next;
   }

return 0;
}
