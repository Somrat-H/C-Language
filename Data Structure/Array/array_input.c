#include<stdio.h>

int main(){

   int a[5],max_size = 5,size_a=0;
   int n,i;

   while(scanf("%d",&n)!=EOF){
      if(n>max_size){
        printf("array overflow!!");
      }
      else if(n<=0){
      printf("invalid number");
      }
      else{
            size_a=0;
        for(i=size_a; i<n; i++){
            scanf("%d",&a[i]);
            size_a++;
        }
           printa( a,size_a);

      }
   }


 return 0;
}
void printa(int a[],int size){
    int x;

    for(x=0; x<size; x++){
        printf("%d ",a[x]);
    }
    printf("\n");

}
