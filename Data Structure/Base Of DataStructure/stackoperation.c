#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size ;
    int top;
    int * arr;
};
int push(struct stack* ptr, int val)
{
    ptr->top++;
    ptr->arr[ptr->top] = val;
    printf("%d ",val);
    printf("\n");

}
int pop(struct stack* ptr)
{
    int val = ptr->arr[ptr->top];
    ptr->top--;
    return val;
}
int main()
{
    struct stack *sp = (struct stack *) malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *) malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully\n");

    push(sp, 1);
    push(sp, 4);

    printf("Popped %d from the stack\n", pop(sp));

    return 0;
}
