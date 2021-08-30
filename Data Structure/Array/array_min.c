#include<stdio.h>
#include<limits.h>
int main(){

   int a[10], max_size = 10, size_a = 0;
   int i, n, min = INT_MAX;
   printf("enter your array size\n");
   scanf("%d", &n);

   if(n>max_size) {
    printf("array overflow\n");
   }
   else if(n < 0){
    printf("invalid\n");
   }
   else{
   for(i = 0; i < n; i++){
      scanf("%d", &a[i]);
   }

   for(i = 0; i<n ; i++){
      printf("%d ", a[i]);
   }
   }
    for(i=0; i<n; i++){
    if(a[i]<min){
        min = a[i];
    }
   }
    printf("Min value = %d\n", min);




 return 0;
}
