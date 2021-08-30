#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node
{
    int value;
    node *next;

};
node *insert();
void print(node *temp);
node *insert_before(node *temp, int pos, int key);
int size(node *);
node *insert_first(node *temp, int node_value);
int main()
{
    node *head=NULL;

    head=insert();
    print(head);
    head=insert_before(head,1,69);
    print(head);

    return 0;
}
node *insert()
{
    node *head= NULL;
    node *temp= NULL;

    temp =(node*)malloc(sizeof(node));
    temp->value=1;
    temp->next=NULL;
    head = temp;


    temp->next=(node*)malloc(sizeof(node));
    temp=temp->next;
    temp->value=2;
    temp->next=NULL;

    temp->next =(node*)malloc(sizeof(node));
    temp=temp->next;
    temp->value=3;
    temp->next=NULL;

    temp->next =(node*)malloc(sizeof(node));
    temp=temp->next;
    temp->value=4;
    temp->next=NULL;

    return head;

}
void print(node *temp)
{

    while(temp)
    {
        printf("%d ",temp->value);
        temp=temp->next;
    }
    printf("\n");

}
node *insert_before(node *temp, int pos, int key)
{
    node *keep=temp;

    int count=1;
    node *hold=NULL;

    node *new_node=(node *)malloc(sizeof(node));

    new_node->value=key;
    new_node->next=NULL;

    if(temp==NULL)
    {

        printf("empty!\n");
        return temp;

    }
    if(pos==1){
        return insert_first(temp,69);
    }

    while(keep)
    {

        count++;

        if(count == pos)
        {

            hold=keep->next;
            keep->next= new_node;
            new_node->next=hold;

        }
        keep=keep->next;

    }

    return temp;

}

int size(node *temp)
{
    int count=0;
    while(temp)
    {
        count++;
        temp=temp->next;

    }
    return count;

}
node *insert_first(node *temp, int node_value){

    node *new_node=(node *)malloc(sizeof(node));


    new_node->value=node_value;
    new_node->next=NULL;
    new_node->next=temp;

    temp=new_node;

     return new_node;

}
