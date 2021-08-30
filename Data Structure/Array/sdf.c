#include<stdio.h>
#define MAX_I 100

int insert(int a[],int size);
void printa(int a[],int size);
int deletea(int a[],int size, int index);
int main(){
   int a[MAX_I],size_a=0;
   int n_size,index,key;
   size_a=insert(a,size_a);
   printa(a,size_a);
   printf("enter your index to delete\n");
   scanf("%d",&index);
   size_a=deletea(a,size_a,index);
   printa(a,size_a);



 return 0;
}

int insert(int a[],int size){
    int x,sa;
    scanf("%d", &sa);

    for(x=0; x<sa; x++){

        scanf("%d",&a[x]);
        size++;
    }
    return size;
}

void printa(int a[],int size){
    int x;

    for(x=0; x<size; x++){
        printf("%d ",a[x]);
    }
    printf("\n");

}
int deletea(int a[],int size, int index){
   int x;

    for(x=index; x<size; x++){
        a[x]=a[x+1];
    }

     size--;
     return size;
}

