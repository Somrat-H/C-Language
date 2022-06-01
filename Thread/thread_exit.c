#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>

void* dice_roll(){
    int *value = malloc(sizeof(int));
    *value = (rand() % 6 ) + 1;
    // int* result = malloc(sizeof(int));
    // *result = value;
    //printf("%d\n", value);
    printf("Thread value %d\n", *value);
    pthread_exit((void*)value);
    
}

int main(){

    int* res; 

    srand(time(NULL));
    pthread_t t;

    if(pthread_create(&t, NULL, &dice_roll, NULL) != 0){
        perror("Thread not created!!\n");
        return 1;
    }

    pthread_exit(0);

    // pthread_exit don't kill process just exit the process.


    if(pthread_join(t, (void**) &res) != 0){
        perror("Thread not join!!\n");
    }
    printf("%d\n", *res);

    free(res);

    pthread_exit(0);

    return 0;
}