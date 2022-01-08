#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<time.h>

#define THREAD 8

void *dice_number();

// int dice;

int main(){
    int *res;
    pthread_t t;
    srand(time(NULL));

    pthread_create(&t, NULL, dice_number, NULL);
    pthread_join(t, (void*) &res);

    printf("%d\n", *res);
    free(res);
    return 0;

}

void *dice_number(){
    int dice = (rand()%6)+1;
    int *a = malloc(sizeof(int));
    *a = dice;

    return (void*) a;
}

