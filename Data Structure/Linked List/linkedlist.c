#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
struct Node {
    int value;
    node *next;
};
node* Create(node *head, int data);
void print(node *temp);

int main()
{
    node *head = NULL;

    head = Create(head, 1);
    head = Create(head, 3);
    head = Create(head, 5);
    head = Create(head, 7);

    print(head);

    return 0;
}

node* Create(node* head, int data)
{
    node *temp  = (node *) malloc(sizeof(node));
    temp->value = data;
    temp->next   = NULL;

    if (head == NULL) {
        head = temp;
    }
    else {
        node *newnode   = head;
            while (newnode->next) {
                newnode     = newnode->next;
            }
            newnode->next   = temp;
    }

    return head;
}


void print(node *temp)
{
    while(temp) {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}
