#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void* routine(){
    printf("Testing from threads\n");
    sleep(3);
    printf("Ending from thread.\n");
}


int main(){

    pthread_t t1, t2;

    if(pthread_create(&t1, NULL, &routine, NULL) != 0){
        return 1;
    }
    if(pthread_create(&t2, NULL, &routine, NULL) != 0){
        return 2;
    }
    if(pthread_join(t2, NULL) != 0){
        return 3;
    }
    if(pthread_join(t2, NULL) != 0){
        return 4;
    }



    return 0;
}