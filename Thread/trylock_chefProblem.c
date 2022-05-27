#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <time.h>

//chef = thread
// stove = data + mutex

int gas = 100;
pthread_mutex_t stoveMutex;

void* cooking(){

    pthread_mutex_lock(&stoveMutex);
    int need = (rand() % 30);
    

    if(gas - need < 0){
        printf("No gas, closed!!!\n");
    }
    else{
        gas -= need;
        usleep(500000);
        printf("Left gas %d.....\n", gas);
    }
    pthread_mutex_unlock(&stoveMutex);
}

int main(){

    srand(time(NULL));

    pthread_t chef[10];

    pthread_mutex_init(&stoveMutex, NULL);

    for(int i = 0; i < 10; i++){
        pthread_create(&chef[i], NULL, &cooking, NULL);
    }

    for(int i = 0; i < 10; i++){
        pthread_join(chef[i], NULL);
    }

    pthread_mutex_destroy(&stoveMutex);

    



    return 0;
}