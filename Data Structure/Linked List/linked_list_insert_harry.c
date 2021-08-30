
#include<stdio.h>
#include<stdlib.h>

struct Node{

   int data;
   struct Node *next;

};
void linked_list_display(struct Node *head){

  while(head!=NULL){
    printf("%d ", head->data);
    head=head->next;

   }

}
struct Node *insertatfrist(struct Node *head, int data){
     struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
     ptr->next = head;
     ptr->data = data;
     //head = ptr;
     //head = ptr;
     return ptr;
};
int main(){
   struct Node *head,*a,*b,*c;

   head = (struct Node*)malloc(sizeof(struct Node));
   b = (struct Node*)malloc(sizeof(struct Node));
   c = (struct Node*)malloc(sizeof(struct Node));

   head->data = 5;
   head->next = b;

   b->data = 6;
   b->next= c;

   c->data = 7;
   c->next = NULL;

   linked_list_display(head);
   head= insertatfrist(head,4);
   linked_list_display(head);

return 0;
}
