#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#define THREAD 2
int mails = 0;
int is = 0;
pthread_mutex_t mutex;

void *routine(void *arg);

int main(){

    pthread_t t[THREAD];

    pthread_mutex_init(&mutex, NULL);

    for(int i =0; i < THREAD; i++){
    printf("start the %d of thread is excution\n", i);
    pthread_create(&t[i], NULL, routine, NULL);

    pthread_join(t[i], NULL);
    printf("finished the %d of the thread is excution\n", i);

    }

    pthread_mutex_destroy(&mutex);


    printf(" the mails %d\n", mails);

    return 0;
}

void *routine(void *arg){
    for(int i=0; i<10000; i++){
    pthread_mutex_lock(&mutex);
    mails++;
    pthread_mutex_unlock(&mutex);

    }
}

