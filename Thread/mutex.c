#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

int mails = 0;
int is = 0;
pthread_mutex_t mutex;

void *routine(void *arg);

int main(){

    pthread_t t1, t2;

    pthread_mutex_init(&mutex, NULL);

    pthread_create(&t1, NULL, routine, NULL);
    pthread_create(&t2, NULL, routine, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

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

