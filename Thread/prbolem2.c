/* 
create 10 threads, each thread taking unique prime number
from the array and print on the screen.
*/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int prime[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

void* myfunc(void *arg){
    int sum = 0;
    int index = *(int*)arg;
    for(int i = 0; i < 5; i++){
        sum += prime[i];
    }
    *(int*)arg = sum;
    return arg;
}


int main(){

    pthread_t t[2];

    // int i;
    for(int i = 0; i < 2; i++){
        int *a = malloc(sizeof(int));
        *a = i * 5;

        if(pthread_create(&t[i], NULL, &myfunc, a) != 0){
            perror("Failed created thread!!");
        }
    }
    int globalSum = 0;
    for(int i = 0; i < 2; (i++)){
        int *res;
        if(pthread_join(t[i], (void**) &res) != 0){
            perror("Failed to join threads!!\n");
        }
        globalSum += *res;
        free(res);
    }

    printf("GlobalSum = %d\n", globalSum);
    return 0;
}