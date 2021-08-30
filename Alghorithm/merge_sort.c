#include<stdio.h>
#define MAX 100

int input(int a[], int size);
void print(int a[], int size);
void merge_sort(int a[], int lb, int ub);
void merge(int a[], int lb, int ub,int mid);

int main(){
   int a[MAX], size, lb=0, ub;

   printf("Enter your arra size\n");
   scanf("%d", &size);

   ub = size-1;

   input(a, size);

   merge_sort(a, lb, ub);
   printf("After merge sort\n");
   print(a, size);

 return 0;
}

int input(int a[], int size){
    int i;
       printf("Enter your array element\n");

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
void merge_sort(int a[], int lb, int ub){
    int mid;

    if(lb<ub){
        mid=(lb+ub) / 2;
       // printf("%d", mid);
        merge_sort(a, lb, mid);
        merge_sort(a, mid+1, ub);
        merge(a, lb, ub, mid);
    }
}
void merge(int a[], int lb, int ub,int mid){

    int i=lb, j = mid+1, k;
    int b[MAX];
    while(i<=mid && j<=ub){

        if(a[i]<=a[j]){

            b[k]=a[i];
            i++;
            k++;
        }
        else{
            b[k]=a[j];
            j++;
            k++;
        }

    }
        while(i<=mid){
        b[k]=a[i];
        i++;
        k++;
        }
        while(j<=ub){
        b[k]=a[j];
        j++;
        k++;
    }
    for(k=lb; k<=ub; k++){

        a[k]=b[k];
    }
}


