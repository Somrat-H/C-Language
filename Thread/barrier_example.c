#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <time.h>

#define THREADS_NUM 10

pthread_barrier_t barrier;
pthread_barrier_t barrier2;

int result[THREADS_NUM];
int status[THREADS_NUM] = {0};

void* playing_dice(void *arg){
    int index = *(int*)arg;

    result[index] = rand() % 6 + 1;

    pthread_barrier_wait(&barrier);
    pthread_barrier_wait(&barrier2);
    if(status[index] == 1){
        printf("(%d threads playing result %d)... I won!!!!!\n", index, result[index]);
    }
    else{
        printf("(%d threads playing result %d)... I lost!!!!!\n", index, result[index]);
    }
    
    free(arg);
}
// syncronize the thread at the running time with main thread

int main(){

    srand(time(NULL));

    pthread_t t[THREADS_NUM];

    pthread_barrier_init(&barrier, NULL, THREADS_NUM + 1);

    pthread_barrier_init(&barrier2, NULL, THREADS_NUM + 1);
    for(int i = 0; i < THREADS_NUM; i++){
        int *a = malloc(sizeof(int));
        *a = i;
        pthread_create(&t[i], NULL, &playing_dice, (void**)a);
    }
    int max = 0;
    pthread_barrier_wait(&barrier);
    

    for(int i = 0; i < THREADS_NUM; i++){
        if(result[i] == 6){
           status[i] = 1;
        }else{
            status[i] = 0;
        }
    }
    pthread_barrier_wait(&barrier2);
    
    for(int i = 0; i < THREADS_NUM; i++){
        pthread_join(t[i], NULL);
    }
   
    pthread_barrier_destroy(&barrier);
     pthread_barrier_destroy(&barrier2);


    return 0;
}