#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <time.h>

// chef = thread
// stove = data + mutex
// multiple thread and share memory then use trylock

pthread_mutex_t stoveMutex[4];

int sotveFuel[4] = {100, 100, 100, 100};
void* cooking(){

    for(int i = 0; i < 4; i++){
        if(pthread_mutex_trylock(&stoveMutex[i]) == 0){

            int fuelNeed = rand() % 20;

            if(sotveFuel[i] - fuelNeed < 0){
                printf("No fuel.... going home\n");

            }
            else{
                sotveFuel[i] -= fuelNeed;
                usleep(300000);

                printf("fuel left %d....\n", sotveFuel[i]);
            }
            pthread_mutex_unlock(&stoveMutex[i]);
            break;
        }
        else{
            if(i == 3){
                printf("No stove available yet......\n");
                usleep(300000);
                i = 0;
            }
        }
    }
}

int main(){

    srand(time(NULL));

    pthread_t chef[10];
    
    for(int i = 0; i < 4; i++){
    pthread_mutex_init(&stoveMutex[i], NULL);
    }

    for(int i = 0; i < 10; i++){
        pthread_create(&chef[i], NULL, &cooking, NULL);
    }

    for(int i = 0; i < 10; i++){
        pthread_join(chef[i], NULL);
    }

    for(int i = 0; i < 4; i++){
    pthread_mutex_destroy(&stoveMutex[i]);
    }

    



    return 0;
}