#include<stdio.h>
#define MAX 100

int input(int a[], int size);
void bubblesort(int a[], int size);
void print(int a[], int size);

int main(){

  int a[MAX], size;

  printf("enter your array size : ");
  scanf("%d",&size);

  input(a, size);
  bubblesort(a, size);
  print(a, size);

  return 0;
 }

int input(int a[], int size){
   int i;

  for(i=0; i<size; i++){
     scanf("%d", &a[i]);
 }

 }
void print(int a[], int size){
     int i;

      for(int i=0; i<size; i++){
         printf("%d ",a[i]);
    }

    printf("\n");
}

void bubblesort(int a[], int size){

    int i, j,temp;

    for(i=0; i<size; i++){
            for(j=0; j<size-1; j++){
        if(a[j]>a[j+1]){
            temp = a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
          }
        }
    }
  }

