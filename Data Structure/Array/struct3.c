#include <stdio.h>

typedef struct Node node;
struct Node {
    int value;
    node *next;
};

void print(node *);
int main()
{
    node a;
    node b;
    node c;

    a.value = 22;
    a.next  = &b;

    b.value = 44;
    b.next  = &c;

    c.value = 77;
    c.next  = NULL;

    print(&a);
    print(&b);
    print(&c);
    printf("\n");

    return 0;
}

void print(node *var)
{
    printf("%d ", var -> value);
}
