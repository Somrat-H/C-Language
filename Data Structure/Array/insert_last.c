#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node{
   int value;
   node *next;

};
node *insert();
void print(node *temp);
node *insert_last(node *temp, int node_value);
int main(){
   node *head=NULL;

   head=insert();
   print(head);
   head= insert_last(head,5);
   print(head);

 return 0;
}
node *insert(){
    node *head= NULL;
    node *temp= NULL;

    temp =(node*)malloc(sizeof(node));
    temp->value=1;  temp->next=NULL;
    head = temp;

    temp->next=(node*)malloc(sizeof(node));
    temp=temp->next;
    temp->value=2;  temp->next=NULL;

    temp->next =(node*)malloc(sizeof(node));
    temp=temp->next;
    temp->value=3;  temp->next=NULL;

    return head;

}
void print(node *temp){

   while(temp){
    printf("%d ",temp->value);
    temp=temp->next;
   }
   printf("\n");

}
node *insert_last(node *temp, int node_value){
     node *new_head=temp;
     node *new_node=(node *)malloc(sizeof(node));
     node *last=NULL;

    new_node->value=node_value;
    new_node->next=NULL;

    while(temp){

    last = temp;
    temp= temp->next;

    }

    last->next=new_node;

     return new_head;

}

