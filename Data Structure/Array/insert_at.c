#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node{
   int value;
   node *next;

};
node *insert();
void print(node *temp);
node *insert_at(node *temp,int pos, int node_value);
int main(){
   node *head=NULL;

   head=insert();
   print(head);
   head= insert_last(head,2,34);
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
node *insert_at(node *temp, int pos, int node_value){
     node *new_head=temp;
     node *new_node=(node *)malloc(sizeof(node));

    node *hold;
    new_node->value=node_value;
    new_node->next=NULL;
    int count=0;
    while(temp->next == count){

     hold = temp;
    temp= temp->next;
    count ++;
    }

    hold->next=new_node;

     return new_head;

}


