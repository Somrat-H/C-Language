#include <stdio.h>

struct Node {
    int value;
    struct Node *next;
};

int main()
{
    struct Node head;
    struct Node a;
    struct Node b;
    struct Node c;

    a.value = 34;
    a.next  = &b;
    head    = a;

    b.value = 245;
    b.next  = &c;

    c.value = 67;
    c.next  = NULL;

    printf("Variable Address - Value - Next Variable Address\n");
    printf("%d       %d      %d\n", &a, a.value, a.next);
    printf("%d       %d      %d\n", &b, b.value, b.next);
    printf("%d       %d      %d\n", &c, c.value, c.next);

    return 0;
}
