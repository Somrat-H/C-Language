
#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
struct Node {
    int value;
    node *next;
};
node* Create(node *head, int data);
int search(node *temp, int key);

int main()
{
    int key;
    scanf("%d", &key);
    node *head = NULL;
    head = Create(head, 1);
    head = Create(head, 3);
    head = Create(head, 5);
    head = Create(head, 7);

    if (search(head, key) == -1) {
        printf("Not Found\n");
    }
    else
        printf("Found\n");

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

int search(node *temp, int key)
{
    int position = 1;
    while(temp) {
        if (temp->value == key) {
            return position;
        }
        position++;
        temp = temp->next;
    }
    return -1;
}
