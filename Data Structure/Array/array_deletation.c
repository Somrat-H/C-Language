#include<stdio.h>

int main(){
    int a[100], max_size=100, size_a=0;
    int size,i,index;
    printf("enter your array size\n");
    scanf("%d5",&size);
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
    printf("enter your position number to delete a element: ");
    scanf("%d", &index);
    for(i=index; i<size; i++){
        a[i]=a[i+1];
    }
    size--;
    printf("the array is: ");
    for(i=0; i<size; i++){
        printf("%d ",a[i]);
    }
    }
 return 0;
}

