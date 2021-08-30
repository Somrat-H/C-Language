#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node som;
int main()
{
    int noe;
    som *a,*b,*c,*d,*e;
    som *head = NULL;


    a =(som*)malloc(sizeof(som));
    a->data=1;
    a->next = NULL;
    head = a;

    b=(som*)malloc(sizeof(som));
    b->data=2;
    b->next = NULL;
    a->next = b;

    c=(som*)malloc(sizeof(som));
    c->data=3;
    c->next = NULL;
    b->next = c;

    d=(som*)malloc(sizeof(som));
    d->data = 4;
    d->next = NULL;
    c->next = d;


    e=(som*)malloc(sizeof(som));
    e->data = 5;
    e->next = NULL;
    //d->next=e; insert at end
    //inset at location
    a->next=e;
    e->next=b;





    print_list_value(head);
    if(head==NULL){
        printf("list is empty\n");
    }else{
    printf("1\n");
    }
    while(head!=NULL){
    noe++;
    head = head->next;
}
    printf("size %d\n",noe);

    while(head!=NULL){
        head=head->next;
    }
    printf("back %d",head);

    return 0;
}
void print_list_value(som *temp)
{

    while(temp != 0){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");


}
