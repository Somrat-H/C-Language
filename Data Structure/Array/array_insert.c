#include<stdio.h>
void array_print(int a[], int size);
int main(){

    int a[10], max_size = 10, size_a = 0;
    int i,n;

    while(scanf("%d", &n)!= -1){
        if(n>max_size){
        printf("array overflow!!\n");
        }
        else if(n<=0){
        printf("invalid elements of array\n");
        }
        else{
        for(i = size_a; i<n; i++){
        scanf("%d", &a[i]);
        size_a++;
        }
        array_print(a, size_a);
        }
    }

    //array_print(a,size_a);

    return 0;
}


void array_print(int a[], int size){

   for(int i = 0; i<size; i++){
    printf("%d ",a[i]);
   }
   printf("\n");
    }

