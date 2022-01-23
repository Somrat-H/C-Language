#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char name[20];
    int age;
} Student;

typedef struct _Node
{
    Student s;
    struct _Node *n;
} Node;

Node* new_node(Student s)
{
    Node* l = malloc(sizeof(Node));
    strcpy(l->s.name, s.name);
    l->s.age = s.age;
    l->n = NULL;
    return l;
}

void del_node(Node* l)
{
    Node* node = l;
    while(node != NULL)
    {
        Node* tmp = node;
        node = node->n;
        free(tmp);
    }
}

void Add(int fd);
void View_All(int fd);
void search(int fd);


int main()
{
     int fd = open("file.txt", O_RDWR);




    while (1)
    {   
        printf("1. ADD\n2. View All Information\n3. Search\n4. Exit\n\n");
        int choice;
        scanf("%d", &choice);
        if(choice==1)
        {
            Add(fd);

        }
        else if(choice == 2)
        {
            View_All(fd);
        }
        else if(choice == 3)
        {
           search(fd);
        }
         else if(choice == 4)
        {
            break;
        }
    }
    

    close(fd);

    return 0;
}

void Add(int fd)
{   
    Student s;
   
     lseek(fd, 0, SEEK_END);

     printf("enter your name: ");
     scanf("%s", &s.name);
     printf("enter your age:");
     scanf("%d", &s.age);
     write(fd, &s, sizeof(Student));

}
void View_All(int fd)
{   
    Student s;
    lseek(fd, 0, SEEK_SET);
    
    int size = read(fd, &s, sizeof(Student));

    while(size != 0)
    {
        printf("name:%s , age:%d\n", s.name, s.age);
        size = read(fd, &s, sizeof(Student));
    }
}

void search(int fd)
{
    Node* list = NULL;
    Node* last = NULL;

    Student s;
    lseek(fd, 0, SEEK_SET);

    int size = read(fd, &s, sizeof(Student));

    while(size != 0)
    {
        Node* n = new_node(s);
        if (list == NULL)
        {
            list = n;
            last = n;
        }
        else 
        {
            last->n = n;
            last = n;
        }
        size = read(fd, &s, sizeof(Student));
    }

    printf("Enter name: ");
    scanf("%s", s.name);

    int found = 0;

    Node* n = list;
    while (n != NULL)
    {
        if (strcmp(n->s.name, s.name) == 0)
        {
            printf("Name: %s Age: %d\n", n->s.name, n->s.age);
            n = NULL;
            found = 1;
            break;
        }
        n = n->n;
    }

    if (found == 0)
    {
        printf("Not found\n");
    }

    del_node(list);
}