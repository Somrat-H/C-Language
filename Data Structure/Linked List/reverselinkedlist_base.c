#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
struct Node {
    int value;
    node *next;
};

void display(node *temp);
void display_reverse(node *temp);

int main()
{
    node *head = NULL;

    node *temp      = (node *) malloc(sizeof(node));
    temp -> value   = 22;
    temp -> next    = NULL;
    head = temp;

    temp -> next    = (node *) malloc(sizeof(node));
    temp = temp -> next;
    temp -> value   = 44;
    temp -> next    = NULL;

    temp -> next    = (node *) malloc(sizeof(node));
    temp = temp -> next;
    temp -> value   = 77;
    temp -> next    = NULL;

    display(head);

    printf("Reversed List: ");
    display_reverse(head);
    printf("\n");

    return 0;
}


void display(node *temp)
{
    printf("Linked List: ");
    if (temp == NULL)
        printf("Linked List is Empty!\n");
    while (temp)
    {
        printf("%d ", temp -> value);
        temp = temp -> next;
    }
    printf("\n");
}

void display_reverse(node *temp)
{
    if (temp != NULL) {
        display_reverse(temp ->next);
        printf("%d ", temp->value);
    }
}
