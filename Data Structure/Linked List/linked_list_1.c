#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node som;
void print_list_value(som *temp);
int main(){


    som *temp=NULL;
    int noe = 0;
    som *head = NULL;


    temp =(som*)malloc(sizeof(som));
    temp->data=1;
    temp->next = NULL;
    head = temp;



    temp->next=(som*)malloc(sizeof(som));
    temp = temp->next;
    temp->data=3;
    temp->next = NULL;


    temp->next=(som*)malloc(sizeof(som));
    temp = temp->next;
    temp-> data=2;
    temp->next = NULL;

    print_list_value(head);


    while(temp!=NULL){
    noe++;
    temp = temp->next;
}
    printf("size %d\n",noe);

    if(temp==NULL){
        printf("list is empty\n");
    }else{
    printf("1");
    }
    while(temp!=NULL){
        temp=temp->next;
    }
    printf("back %d",temp);




    return 0;
}
void print_list_value(som *temp)
{

    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");

}
