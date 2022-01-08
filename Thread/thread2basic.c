//Single Thread in C
#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>

void *runtime(void *arg);

int main(){

    pthread_t t,t1;

    pthread_create(&t, NULL, runtime, NULL);
    pthread_join(t, NULL);

    pthread_create(&t1, NULL, runtime, NULL);
    pthread_join(t1, NULL);




    return 0;
}

void *runtime(void *arg){
    printf("Test from successfully!!!\n");
    sleep(2);
    printf("ending thread\n");
}
