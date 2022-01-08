#include<stdio.h>
#include<stdlib.h>

int *array(int *a, int *n);
void print_array(int *a, int *n);
int *bubblesort(int *a, int *n);
void swap(int *x, int *y);

int main(){

    int *n = malloc(sizeof(int));

    printf("enter your array size:  ");
    scanf("%d", n);

    int *a = malloc(*n * sizeof(int));

    array(a, n);
    print_array(a, n);

    bubblesort(a, n);
    print_array(a, n);

    return 0;
}

int *array(int *a, int *n){
    int *i = malloc(sizeof(int));

    for(*i=0; *i< *n; *i+=1){
        scanf("%d", a + *i);
    }

    return 0;
}

void print_array(int *a, int *n){
    int *i = malloc(sizeof(int));

    for(*i=0; *i< *n; *i+=1){
        printf("%d ", *(a + *i));
    }
    printf("\n");
}

int *bubblesort(int *a, int *n){
    int *i = malloc(sizeof(int));
    int *j = malloc(sizeof(int));

    for(*i=0; *i<*n-1; *i+=1){
        for(*j=0; *j<*n - *i - 1; *j+=1){
            if( *(a+*j) < *((a+*j)+1) ){
                swap((a+*j), (a+*j)+1);
            }
        }
    }

    return a;


}

void swap(int *x, int *y){
    int *temp = malloc(sizeof(int));
    *temp = *x;
    *x = *y;
    *y = *temp;
}
