#include<stdio.h>
int linear_search(int a[],int key,int size);
int main(){

    int a[10]={44,23,54,67,88,60,45,97},size_a=7;
    int key = 54;
    
    int hold=linear_search(a,key,size_a);
    if(hold==1){
        printf("present");
    }
    else{
        printf("not present");
    }

    return 0;
}

int linear_search(int a[],int key,int size){
    
    int i;

    for(i=0; i<size; i++){
        if(a[i] == key){
            return 1;
        }
     return 0;
    }

}