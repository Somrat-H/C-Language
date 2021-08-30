#include<stdio.h>
int main(){
  int a[100],i,size,position,value;

  printf("enter your size  number of array\n");
  scanf("%d",&size);

  for(i=0; i<size; i++){

    scanf("%d",&a[i]);
  }
  for(i=0; i<size; i++){

    printf("%d ",a[i]);
  }
  printf("\n");

  printf("enter your position number to insert value an array\n");
  scanf("%d",&position);
  printf("enter your insert value for array\n");
  scanf("%d",&value);

  for(i=size; i<position; i++){
    a[i]=a[i+1];
  }
  a[position]=value;
  size++;
  for(i=0; i<size; i++){
    printf("%d ",a[i]);
  }
  printf("\n");

 return 0;
}
