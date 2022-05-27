#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>


int mails = 0;
pthread_mutex_t mutex;

void* routine(){
   // pthread_mutex_lock(&mutex);
    for(int i = 0; i < 10000000; i++){
        pthread_mutex_lock(&mutex);
        mails++;
        pthread_mutex_unlock(&mutex);
    }
    //pthread_mutex_unlock(&mutex);
}

int main(){

    pthread_t t[4];

    pthread_mutex_init(&mutex, NULL);

    for(int i = 0; i < 4; i++){
         pthread_create(&t[i], NULL, &routine, NULL);
    }

    for(int i = 0; i < 4; i++){
        pthread_join(t[i], NULL);
    }

    pthread_mutex_destroy(&mutex);

    printf("Number of the mails %d\n", mails);
    return 0;
}