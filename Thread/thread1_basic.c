//Single Thread in C
#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void *runtime(void *arg);

int main(){

    pthread_t t;

    pthread_create(&t, NULL, runtime, NULL);
    pthread_join(t, NULL);

    return 0;
}

void *runtime(void *arg){
    printf("Test from successfully!!!\n");

}
