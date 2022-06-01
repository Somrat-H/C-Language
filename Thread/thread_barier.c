#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

pthread_barrier_t barrier;

void*  myfunc(){
    printf("Waiting the barrier....\n");

    pthread_barrier_wait(&barrier);
    sleep(1);

    printf("Finish the barrier...\n");
}
int main(){

    pthread_t t[4];

    pthread_barrier_init(&barrier, NULL, 4);
    
    for(int i = 0; i < 4; i++){
        pthread_create(&t[i], NULL, &myfunc, NULL);
    }

    for(int i = 0; i < 4; i++){
        pthread_join(t[i], NULL);
    }

    pthread_barrier_destroy(&barrier);

    return 0;
}