#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#define MAX 10

int a[MAX]={3, 5, 7, 11, 13, 17, 19, 23, 27, 29};
int is = 0;

void *primes(void *arg){
    int value = *(int*)arg;
    printf("%d ", a[value]);
    free(arg);
}

int main(){
    pthread_t t[MAX];
    int i;
    for(i = 0; i< MAX ; i++){
        int *h = malloc(sizeof(int));
        *h = i;
        pthread_create(&t[i], NULL, primes, h);
    }
    for(int i = 0; i< MAX ; i++){
        pthread_join(t[i], NULL);
    }

    return 0;
}

