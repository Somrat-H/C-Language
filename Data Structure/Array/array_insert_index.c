#include<stdio.h>
int main(){

   int a[10], max_size = 10, size_a = 0;
   int i, n;
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






 return 0;
}
