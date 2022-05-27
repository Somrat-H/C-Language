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
    return (void*)value;
}

int main(){

    int* res; 

    srand(time(NULL));
    pthread_t t[8];
    for(int i = 0; i < 8; i++){
    if(pthread_create(&t[i], NULL, &dice_roll, NULL) != 0){
        perror("Thread not created!!\n");
        return 1;
    }
    }

    for(int i = 0; i < 8; i++){
    if(pthread_join(t[i], (void**) &res) != 0){
        perror("Thread not join!!\n");
    }
    else
     printf("%d\n", *res);
    }
    // printf("%d\n", *res);

    free(res);

    return 0;
}