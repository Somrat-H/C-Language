#include <stdio.h>
#include <pthread.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

#define THREAD_NUMBER 2

void* producer();
void* consumer();

int buffer[10];
int count = 0;

pthread_mutex_t mutex;

int main(){

    srand(time(NULL));

    pthread_t th[THREAD_NUMBER];

    int i;

    pthread_mutex_init(&mutex, NULL);

    for(i = 0; i < THREAD_NUMBER; i++){
        if(i % 2 == 0){
            if(pthread_create(&th[i], NULL, &producer, NULL) != 0){
                printf("Failed to create!!!");
            }
        }
        else{
            if(pthread_create(&th[i], NULL, &consumer, NULL) != 0){
                printf("Failed to create!!!");
            }
        }
    }

    for(i = 0; i < THREAD_NUMBER; i++){
        if(pthread_join(th[i], NULL) != 0){
            perror("Failed to join thread!!!");
        }
    }

    pthread_mutex_destroy(&mutex);




    return 0;
}

void* producer(){
    //Produce
    while (1){
        
        pthread_mutex_lock(&mutex);
        int x = rand() % 100;

        //Store in the buffer
        buffer[count] = x;
        count++;
        pthread_mutex_unlock(&mutex);
    }
}

void* consumer(){

    //cousume from the buffer
    while (1){
        pthread_mutex_lock(&mutex);
        int y = buffer[count - 1];
        count--;

        printf("Got %d\n", y);
        pthread_mutex_unlock(&mutex);
    }
}
