#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>


#define MAX 100
#define THREAD 4

int a[MAX];

void *array_input(void *arg){

    for(int i=0; i<MAX; i++){
        a[i]=rand()%100;
    }

    printf("\n");

}

void *printf_array(void *arg){

    for(int i=0; i<MAX; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

}
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void *sort(void* arg){
    int i = *((int*)arg);
    // 0, 1, 2, 3
    //num,x,y
    int num = MAX / THREAD;
    for(int i = 0; i < THREAD; i++){
    int x = i*num;
    int y = x+num;
    for(int i = x; i< y; i++){
        for(int j = x; j< y-1; j++){
            if( a[j] > a[j+1]){
                swap(&a[j], &a[j+1]);
            }
        }
    }

}
}

void *sort2(void *arg){
      for(int i = 0; i < MAX; i++){
        for(int j = 0; j< MAX-1; j++){
            if( a[j] > a[j+1]){
                swap(&a[j], &a[j+1]);
            }
        }
    }
}
int main(){

    pthread_t t1, t2;
    pthread_create(&t1, NULL, array_input, NULL);
    pthread_join(t1, NULL);
    pthread_create(&t2, NULL, printf_array, NULL);
    pthread_join(t2, NULL);

    pthread_t t[THREAD];
    int arg[THREAD];

    for (int i=0; i<THREAD; i++){
        arg[i]=i;
        pthread_create(&t[i], NULL, sort,(void*)&arg[i]);
    }

     for (int i=0; i<THREAD; i++){
        pthread_join(t[i], NULL);
    }
    pthread_t t3;
    pthread_create(&t3, NULL, sort2, NULL);
    pthread_join(t3, NULL);


    pthread_create(&t2, NULL, printf_array, NULL);
    pthread_join(t2, NULL);






    return 0;
}
