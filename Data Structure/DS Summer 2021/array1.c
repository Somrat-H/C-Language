#include<stdio.h>
#include<limits.h>


void print_array(int a[], int size);
void min_max(int a[], int size);
void search(int a[], int size, int key);


int main(){
   int a[10], size=10, i, key;

   printf("enter your element\n");

   for(i=0; i<size; i++){
    scanf("%d", &a[i]);
   }
   printf("enter your key \n");
   scanf("%d", &key);
   print_array(a, size);
   search(a, size, key);
   min_max(a, size);


 return 0;
}
void print_array(int a[], int size){

   int i;
   for(i=0; i<size; i++){
    printf("%d ", a[i]);
   }
   printf("\n");

}

void search(int a[], int size, int key){
   int i, flag=0, hold;
   for(i=0; i<size; i++){
        if(a[i]==key){
           flag=1;
           hold = i;
          }

   }
   if(flag == 1){
    printf("Found and Index %d\n", hold);
   }
   else{
    printf("not found\n");
   }
}

void min_max(int a[], int size){
   int i, min=INT_MAX, max=INT_MIN;
      for(i=0; i<size; i++){
        if(a[i]<min){
                min = a[i];
        }
      }
        printf("Minimun Number %d\n",min);

   for(i=0; i<size; i++){
        if(a[i]>max){
                max = a[i];
        }
   }
        printf("Maximum Number %d\n",max);

}
