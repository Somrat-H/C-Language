#include<stdio.h>
void print_array(int a[], int size);
void delete(int a[], int size, int value);
int main(){
   int a[100]={1,2,3,4,5,6,7,8,9,10}, max_size=100, size_a=10;
   int value;

   print_array(a, size_a);
   printf("enter your value to delete in array");
   scanf("%d", &value);
   delete(a,size_a,value);
   print_array(a, size_a);

 return 0;
}
void print_array(int a[], int size){
   int i;
   for(i=0; i<size; i++){
    printf("%d ",a[i]);
   }
   printf("\n");
}
void delete(int a[], int size, int value){
   int i,flag=-1;

   for(i=0; i<size-1; i++){
          if(a[i]==value){
          value=flag;
          break;
   }

}
for(i=0; i<size-1; i++){
          if(a[i]==value){
          a[i]=a[i+1];
          break;
   }

}
}
