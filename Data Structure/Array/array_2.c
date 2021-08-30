#include<stdio.h>
void array_print(int a[],int size);
int search(int a[], int size, int key);
int main()
{
    //searching of array
    int a[50], max_size_a = 50, size_a = 0;
   // int i,key,flag=0;
    a[size_a++]= 1;
    a[size_a++]= 2;
    a[size_a++]= 3;
    a[size_a++]= 4;
    a[size_a++]= 5;


    array_print(a,size_a);
    printf("Memory Size of array %d \n",sizeof(a));
    /*search
    key=6;

    for(i=0; i<size_a; i++){
        if(key == a[i]){
            printf("found!!\n");
            flag=1;
        }
    }
    if(flag == 0){
        printf("not found");
    }

*/

    search(a,size_a,7);
    return 0;
}

void array_print(int a[],int size){
   int i;
   for(i = 0; i<size; i++){
    printf("%d ", a[i]);
   }
   printf("\n");
}
int search(int a[], int size, int key){
  int flag = 0,i;
    for(i=0; i<size; i++){
        if(key == a[i]){
            printf("found!!\n");
            flag=1;//flag = 1 mean we fine the value of this array.
            break;
        }
    }
    if(flag == 0){
        printf("not found");
    }
}
