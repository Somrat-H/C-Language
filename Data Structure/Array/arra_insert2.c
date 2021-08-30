#include<stdio.h>
void array_print(int a[], int size);

int main(){
      int a[10], max_size = 10, size_a = 0;
      int i , n;
      while(scanf("%d ", &n) != -1){
       if(i<max_size-1){
        printf("array overflow!!\n");
        break;
       }
       a[i]=n;
       i++;
       size_a++;
      }
      array_print(a,size_a);

return 0;
}
void array_print(int a[], int size){

   for(int i = 0; i<size; i++){
    printf("%d ", a[i]);

   }
   printf("\n");
}
