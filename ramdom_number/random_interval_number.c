//Here generate interval number like 100 number between 5-25.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int interval(int a, int b);

int main(){
    int count = 0;
    for(int i = 0; i < 20; i++){
    count++;
    printf("%d ",interval(5,25));
    }
    printf("\ncount number %d\n", count);
    return 0;
}

int interval(int a, int b){

    return rand() % b;

}

