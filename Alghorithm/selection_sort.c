#include<stdio.h>

int input(int a[], int size);
void print(int a[], int size);
void selection_sort(int a[], int size);

int main(){

  int a[100], size;

  printf("enter your size: ");
  scanf("%d",&size);

  printf("enter your element\n");
  input(a, size);

  selection_sort(a, size);

  printf("after selection sorting: ");
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

void selection_sort(int a[], int size){
    int i,j,temp,min;

    for(i=0; i<size; i++){
        min = i;

        for(j=i+1; j<size; j++){
            if(a[j]<a[min]){
                min = j;
            }
        }

        temp = a[i];
        a[i]= a[min];
        a[min]=temp;
        printf("step %d : ", i);
        print(a, size);

    }


}
