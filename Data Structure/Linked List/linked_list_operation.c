#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
typedef struct Node node;
struct Node
{
    int     value;
    node    *next;
};

void    print_list(node *temp);
int     is_empty(node *temp);
int size(node *temp);
int first(node *temp);
int last(node *temp);
int value_at(node *temp, int pos);
int search(node *temp, int key);
int min(node *temp);
int max(node *temp);
node*  create_list();
node* begin(node *temp);
node* end(node *temp);


int main()
{
    node *head = NULL;

    head = create_list();
    print_list(head);

    if (is_empty(head)!=0)
    {
        printf("Not Empty!\n");
    }
    else
    {
        printf("Empty!\n");
    }

    printf("Size: %d\n", size(head));
    printf("First: %d\n", first(head));
    printf("Last: %d\n", last(head));
    printf("Begin: %d\n", begin(head));
    printf("End: %d\n", end(head));
    printf("Value At: %d\n",value_at(head, 3));

    int hold = search(head, 7);

    if (hold != 0)
        printf("Not Found!\n");
    else
        printf("Found!\n");

    printf("Min: %d\n", min(head));
    printf("Max: %d\n", max(head));

    return 0;
}

 node*  create_list(){
    node *head = NULL;
    node *temp;

    temp = (node *) malloc(sizeof(node));
    temp->value = 1;
    temp->next = NULL;
    head = temp;

    temp->next = (node *) malloc(sizeof(node));
    temp = temp->next;
    temp->value = 2;
    temp->next = NULL;

    temp->next = (node *) malloc(sizeof(node));
    temp = temp->next;
    temp->value = 3;
    temp->next = NULL;

    temp->next = (node *) malloc(sizeof(node));
    temp = temp->next;
    temp->value = 4;
    temp->next = NULL;

    return head;
}

void print_list(node *temp)
{
    printf("%d\n", temp);
    while (temp)
    {
        printf("MA: %d\tValue: %d\tNext: %d\n", temp, temp->value, temp->next);
        temp = temp->next;
    }
}

int is_empty(node *temp)
{
    if (temp == NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int size(node *temp)
{
    int count = 0;
    while (temp)
    {
        temp = temp->next;
        count++;
    }
    return count;
}
int first(node *temp)
{
    while (temp)
    {
        return temp->value;
    }
}
int last(node *temp)
{
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return temp->value;
}
node* begin(node *temp)
{
    while (temp)
    {
        return temp;
    }
}
node* end(node *temp)
{
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return temp;
}
int value_at(node *temp, int pos)
{
    while (--pos)
    {
        temp = temp->next;
    }
    return temp->value;
}
int search(node *temp, int key)
{
    while (temp)
    {
        if (temp->value == key)
        {
            return 0;
        }
        else
            temp = temp->next;
    }
    return -1;
}
int min(node *temp)
{
    int min = INT_MAX;
    while (temp)
    {
        if (temp->value < min)
            min = temp->value;
        else
            temp = temp->next;
    }
    return min;
}
int max(node *temp)
{
    int max = INT_MIN;
    while (temp)
    {
        if (temp->value > max)
            max = temp->value;
        else
            temp = temp->next;
    }
    return max;
}
