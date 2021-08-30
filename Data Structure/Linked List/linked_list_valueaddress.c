#include<stdio.h>
typedef struct Node node;
struct Node{
   int data;
   struct Node *next;

};
void linked_list_display(node *temp){
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }

}

int main(){
    node a,b,c,d;
    node *head;

    head=&a;

    a.data=2;
    a.next = &b;

    b.data=3;
    b.next= &c;

    c.data=3;
    c.next= &d;

    d.data= 4;
    d.next=NULL;

    linked_list_display(head);

return 0;

}
