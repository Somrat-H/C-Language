#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
struct Node {
    int value;
    node *next;
};
node* Create(node *head, int data);
void print(node *temp);
void display_n(node *temp, int n);
int empty(node *temp);
int size(node *temp);
int front(node *temp);
int back(node *temp);

int main()
{
    int n;
    scanf("%d", &n);
    node *head = NULL;
    head = Create(head, 1);
    head = Create(head, 3);
    head = Create(head, 5);
    head = Create(head, 7);

    print(head);

    /* empty(head) ? printf("Linked List is Empty!\n") : printf("Linked List is not Empty!\n"); */

    /* printf("Size : %d\n", size(head)); */

    /* printf("Front: %d\n", front(head)); */

    /* printf("Back: %d\n", back(head)); */

    display_n(head, n);

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

int empty(node *temp)
{
    if (temp == NULL) {
        return 1;
    }
    return 0;
}

int size(node *temp)
{
    int count = 0;
    while(temp) {
        count++;
        temp  = temp->next;
    }
    return count;
}


int front(node *temp)
{
    return temp->value;
}

int back(node *temp)
{
    while(temp) {
        if(temp->next == NULL) {
            return temp->value;
        }
        temp = temp->next;
    }
}

void display_n(node *temp, int n)
{
    int flag = 1;
    while(temp) {
        if (flag == n) {
            printf("%d ", temp->value);
        }
        flag++;
        temp = temp->next;
    }
    printf("\n");
}
