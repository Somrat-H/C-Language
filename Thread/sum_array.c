#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#define MAX 10
#define THREAD 2

int a[MAX] = {2, 4, 3, 1, 6, 5, 8, 9, 10, 7};
int sum = 0;

void *sum_array(void *arg);

int main(){


    pthread_t t[THREAD];
    int arg[THREAD];
    for(int i = 0; i < THREAD; i++){
        arg[i] = i;
        pthread_create(&t[i], NULL, sum_array, (void*)&arg[i]);
    }
     for(int i = 0; i < THREAD; i++){
         pthread_join(t[i], NULL);
    }

    printf("Sum = %d\n", sum);

    return 0;
}

void *sum_array(void *arg){
    int h = *(int*)arg;
    int num = MAX/THREAD;
    int x = h*num;
    int y = x+num;
   
    for(int j = x; j < y; j++){
            sum += a[j];
        }    

}


