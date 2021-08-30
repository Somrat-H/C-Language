#include<stdio.h>
#define MAX 100

int input(int a[], int size);
void print(int a[], int size);
void insertation_sort(int a[], int size);
int main(){
   int a[MAX], size;

   printf("Enter your arra size\n");
   scanf("%d", &size);

   printf("Enter your aray element\n");

   input(a, size);
   //print(a, size);
   insertation_sort(a, size);
 //  print(a, size);




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
    for(i=0; i<size; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void insertation_sort(int a[], int size){
    int i, j, temp=0;

    for(i=1; i<size; i++){
        temp=a[i];
       /* j=i-1;
       while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }*/
       for(j=i-1; j>=0; j--){
           if(a[j]>temp){
            a[j+1]=a[j];
           }
    }

         a[j+1]=temp;
    }


    for(i=0; i<size; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    }


