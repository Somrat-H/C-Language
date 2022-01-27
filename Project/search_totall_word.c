#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "filter.h"

//struct for linked list
struct node
{
    char* data;
    int count;
    struct node *next;
};

// add new node to the linked list
void add_to_list(struct node **head, char* data)
{
    if (*head == NULL)
    {
        *head = (struct node*)malloc(sizeof(struct node));
        (*head)->data = malloc(strlen(data) + 1);
        strcpy((*head)->data, data);
        (*head)->count = 1;
        (*head)->next = NULL;
    }
    else
    {
        struct node *temp = *head;
        while (temp->next != NULL)
        {
            if (strcmp(temp->data, data) == 0)
            {
                temp->count++;
                return;
            }
            temp = temp->next;
        }
        if (strcmp(temp->data, data) == 0)
        {
            temp->count++;
            return;
        }
        temp->next = (struct node*)malloc(sizeof(struct node));
        temp = temp->next;
        temp->data = malloc(strlen(data) + 1);
        strcpy(temp->data, data);
        temp->count = 1;
        temp->next = NULL;
    }
}

void delete_list(struct node **head)
{
    struct node *temp = *head;
    while (temp != NULL)
    {
        *head = temp->next;
        free(temp->data);
        free(temp);
        temp = *head;
    }
}

void print_list(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%s:%d\n", temp->data, temp->count);
        temp = temp->next;
    }
}

int main() {
    struct node *head = NULL;

    FILE* fp = fopen("500-Days-of-Summer_s.txt", "r");
    char* word = malloc(64);

    bzero(word, 64);

    while (fscanf(fp, "%s", word) != EOF)
    {   
        word = filter(word);
        // printf("[%s]\n", word);
        add_to_list(&head, word);
        bzero(word, 64);
    }
    free(word);

    fclose(fp);

    print_list(head);

    delete_list(&head);

    return 0;
}