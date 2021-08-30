
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
    int count=0;

    while(temp)
    {
        count++;
        if(count == pos)
        {
            temp->value=key;
            return temp;
        }
        temp=temp->next;
    }


}

