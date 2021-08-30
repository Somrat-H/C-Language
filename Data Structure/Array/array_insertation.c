#include<stdio.h>

int main(){
    int a[100], max_size=100, size_a=0;
    int size,i,index,key;
    printf("enter your array size\n");
    scanf("%d ",&size);
    if(size>max_size){
        printf("array overflow!!!");
    }else{
    for(i=0; i<size; i++){
        scanf("%d",&a[i]);
    }
    printf("the array is: ");
    for(i=0; i<size; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("enter your index number to insert a element: ");
    scanf("%d", &index);
    printf("enter your element: \n");
    scanf("%d", &key);
    for(i=size-1; i>=index; i--){
        a[i+1]=a[i];
    }
    a[index]=key;
    size++;
    printf("the array is: ");
    for(i=0; i<size; i++){
        printf("%d ",a[i]);
    }
    }
 return 0;
}
