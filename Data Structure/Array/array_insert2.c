
#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10
void arrey_print(int *p,int size);
void insert_at(int *p , int *size, int index, int key);
int main()
{
int *p,*q;
int size = 0;
p  = (int*) calloc( MAX_SIZE, sizeof(int) );
q=p;
insert_at(p, &size, 0,30);
insert_at(p, &size, 1, 20);
insert_at(p, &size, 2, 10);
insert_at(p, &size, 3, 5);
arrey_print(p, size);

return 0;
}


void arrey_print(int *p, int size){
int i;
 if(size ==0){
    printf("Empty arrey\n");
    return;
}
    for(i=0 ; i<size ; i++){
        printf("%d\t",*(p+i));
    }
    printf("\n");
    }


    void insert_at(int *p , int *size, int index, int key){
    int i;
    if(*size == MAX_SIZE){
        printf("arrey overflow\n");
        return;
    }
    else if(index < 0 || index > *size){
        printf("invalid index\n");
    return;
    }
    for(i= *size ; i>index ; i--){
        *(p+i)= *(p+i-1);
    }
    *(p+index) = key;
    (*size)++;
    }
