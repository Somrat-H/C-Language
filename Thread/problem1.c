/* 
create 10 threads, each thread taking unique prime number
from the array and print on the screen.
*/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int prime[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

void* myfunc(void *arg){
    int index = *(int*)arg;

    printf("%d ", prime[index]);
    free(arg);
}


int main(){

    pthread_t t[10];

    // int i;
    for(int i = 0; i < 10; i++){
        int *a = malloc(sizeof(int));
        *a = i;

        if(pthread_create(&t[i], NULL, &myfunc, a) != 0){
            perror("Failed created thread!!");
        }
    }
    for(int i = 0; i < 10; (i++)){
        if(pthread_join(t[i], NULL) != 0){
            perror("Failed to join threads!!\n");
        }
    }

    printf("\n");
    return 0;
}