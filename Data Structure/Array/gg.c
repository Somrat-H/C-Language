#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
struct Node {
    int value;
    node *next;
};

int size(node *);
void print(node *);
int empty(node *);
node* create();

node* begin(node *, int);
node* end(node *, int);
node* at(node *, int, int);

int main()
{
    int key = 69;
    int pos = 4;
    node *head = NULL;
    head = create();

    /* empty(head) ? printf("Empty!\n") : printf("Not Empty!\n"); */
    print(head);
    /* printf("Size: %d\n", size(head)); */

    /* head = begin(head, key); */
    /* print(head); */
    /* head = end(head, key); */
    /* print(head); */
    head = at(head, pos, key);
    print(head);

    return 0;
}

void print(node *temp)
{
    if(temp == NULL) {
        printf("Empty!\n");
        return;
    }
    printf("List: ");
    while (temp) {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

int size(node *temp)
{
    int size = 0;
    while (temp) {
        size++;
        temp = temp->next;
    }
    return size;
}

int empty(node *temp)
{
    while (temp) {
        return 0;
    }
    return 1;
}


node* begin(node *temp, int key)
{
    node *newhead = (node *) malloc(sizeof(node));
    newhead->value = key;
    newhead->next  = temp;
    return newhead;
}

node* end(node *temp, int key)
{
    if (temp == NULL) {
        return begin(temp, key);
    }

    node *newnode= (node *) malloc(sizeof(node));
    newnode->value = key;
    newnode->next  = NULL;

    node *newhead = temp;
    while (newhead->next) {
        newhead = newhead->next;
    }
    newhead->next = newnode;

    return temp;
}


node* create()
{
    node *head = NULL;

    node *temp  = (node *) malloc(sizeof(node));
    temp->value = 1;
    temp->next  = NULL;
    head        = temp;

    temp->next  = (node *) malloc(sizeof(node));
    temp        = temp->next;
    temp->value = 7 ;
    temp->next  = NULL;

    temp->next  = (node *) malloc(sizeof(node));
    temp        = temp->next;
    temp->value = 4 ;
    temp->next  = NULL;
    temp->next  = (node *) malloc(sizeof(node));
    temp        = temp->next;
    temp->value = 6 ;
    temp->next  = NULL;
    temp->next  = (node *) malloc(sizeof(node));
    temp        = temp->next;
    temp->value = 4 ;
    temp->next  = NULL;
    temp->next  = (node *) malloc(sizeof(node));
    temp        = temp->next;
    temp->value = 5 ;
    temp->next  = NULL;

    return head;
}

node* at(node *temp, int pos, int key)
{
    /* if(pos == 1 || pos == size(temp)+1) { */
    /*     return end(temp, key); */
    /* } */

    if(pos == 1) {
        return begin(temp, key);
    }

    if(pos <= 0 || pos > size(temp)+1) {
        printf("Invalid position!\n");
        return temp;
    }

    int flag = 1;
    node *temphead  = temp;
    node *prev = NULL;
    node *newnode   = (node *) malloc(sizeof(node));
    newnode->value  = key;
    newnode->next  = NULL;

    while (temphead) {
        flag++;
        if (flag == pos) {
            prev = temphead->next;
            temphead->next = newnode;
            newnode->next = prev;
        }
        temphead = temphead->next;
    }
    return temp;
}
