#include<stdio.h>
#define MAX_I 100

int insert(int a[],int size);
void printa(int a[],int size);
void search(int a[],int size, int value);
void replace(int a[], int size, int value,int key);

int main(){
   int a[MAX_I],size_a=0;
   int n_size,value,key;
   n_size=insert(a,size_a);
   printa(a,n_size);
   printf("enter search value\n");
   scanf("%d",&value);
   search(a,n_size,value);
   printf("enter your number for replace this %d number",value);
   scanf("%d",&key);
   replace(a,n_size,value,key);
   printa(a,n_size);


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
void search(int a[],int size, int value){
    int x,flag=0;

    for(x=0; x<size; x++){
      if(a[x]==value){
        flag++;
      }
    }
    if(flag!=0){
       printf("found!\n");
       }
    else
    printf("not found!");

}
void replace(int a[], int size,int value, int key){
     int x;
       for(x=0; x<size; x++){
        if(a[x]==value){
            a[x]= key;
        }
    }
}
