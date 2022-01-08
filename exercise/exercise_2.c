#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;
struct Node{
  int value;
  node *next;
};

node* create_linkedlist();
void print_linkedlist(node *head);
node* sort(node *head);
int main(){

    node *head = malloc(sizeof(node));

    head=create_linkedlist();

    print_linkedlist(head);

    head = sort(head);

    print_linkedlist(head);






    return 0;
}

node* create_linkedlist(){
    node *temp = malloc(sizeof(node));
    node *head = malloc(sizeof(node));

    head = temp;
    printf("enter your value: ");
    scanf("%d", &temp->value);

    while(temp->value != -1){
        node *newnode = malloc(sizeof(node));
        scanf("%d", &newnode->value);
        newnode->next = NULL;

        temp->next = newnode;
        temp = temp->next;
    }

    return head;
}

void print_linkedlist(node *head){
    node *temp = head;
    while(temp->next != NULL){
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

node* sort(node *head){
    node *cur = head;
    node *temp = NULL;
    int hold;

    while(cur->next != NULL){
        temp = cur->next;
        while(temp->next != NULL){
        if(cur->value < temp->value){
            hold = temp->value;
            temp->value = cur->value;
            cur->value = hold;
        }
        temp = temp->next;
       }
        cur = cur->next;
    }
    return head;
}
