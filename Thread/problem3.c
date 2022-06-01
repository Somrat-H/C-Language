#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

pthread_mutex_t mutex;

void* myfunc(void *arg){

    int a = *(int*) arg;

    pthread_mutex_lock(&mutex);
    a++;
    pthread_mutex_unlock(&mutex);

    printf("%d\n", a);
}


int main(){

    pthread_t t1, t2;

    int x = 2;
    int y = 4;

    pthread_mutex_init(&mutex, NULL);

    pthread_create(&t1, NULL, &myfunc, &x);
    pthread_create(&t2, NULL, &myfunc, &y);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    
    pthread_mutex_destroy(&mutex);


    return 0;
}