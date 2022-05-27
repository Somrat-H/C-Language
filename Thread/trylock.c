#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

pthread_mutex_t mutex;
void* myfunc(){
    if(pthread_mutex_trylock(&mutex) == 0){
        printf("Got lock!!!\n");
        sleep(2);
        pthread_mutex_unlock(&mutex);

    }
    else
        printf("Didn't lock!!!\n");

}
int main(){

    pthread_t t[4];

    for(int i = 0; i < 4; i++){
        pthread_create(&t[i], NULL, &myfunc, NULL);
    }

    for(int i = 0; i < 4; i++){
        pthread_join(t[i], NULL);
    }



    return 0;
}