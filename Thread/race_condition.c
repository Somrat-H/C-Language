#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>


int mails = 0;
pthread_mutex_t mutex;

void* routine(){
   // pthread_mutex_lock(&mutex);
    for(int i = 0; i < 100000000; i++){
        pthread_mutex_lock(&mutex);
        mails++;
        pthread_mutex_unlock(&mutex);
    }
    //pthread_mutex_unlock(&mutex);
}

int main(){

    pthread_t t1, t2;

    pthread_mutex_init(&mutex, NULL);

    pthread_create(&t1, NULL, &routine, NULL);
    pthread_create(&t2, NULL, &routine, NULL);

    pthread_join(t2, NULL);
    pthread_join(t2, NULL);

    pthread_mutex_destroy(&mutex);

    printf("Number of the mails %d\n", mails);
    return 0;
}