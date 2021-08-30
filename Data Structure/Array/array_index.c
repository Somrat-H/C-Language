#include <stdio.h>
#define MAX_SIZE 100
void insert(int a[],int *size);
void printa(int a[],int size);
int insert_value(int a[],int size, int index, int key);

int main()
{
    int a[MAX_SIZE],size_a=0;
    int index,key;

    insert(a,&size_a);
    printa(a,size_a);

    printf("enter your index\n");
    scanf("%d", &index);
    printf("enter your key\n");
    scanf("%d", &key);

    size_a=insert_value(a, size_a,index,key);
    printa(a,size_a);

    return 0;
}
void insert(int a[],int *size){
    int x,sa;
    scanf("%d", &sa);

    for(x=0; x<sa; x++){

        scanf("%d",&a[x]);
     (*size)++;
    }
}

void printa(int a[],int size){
    int x;

    for(x=0; x<size; x++){
        printf("%d ",a[x]);
    }
    printf("\n");
}
int insert_value(int a[],int size, int index, int key){
   int i;
   if(size>MAX_SIZE){
    printf("array overflow!");
    return size;
   }
   else if(index<0 || index>size){
    printf("invaild!!");
    return size;
   }
   for(i=size; i>index; i--){
    a[i]=a[i-1];
   }
   a[index]=key;
   size++;
   return size;
}

