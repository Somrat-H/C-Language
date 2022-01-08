#include<stdlib.h>
#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

pthread_mutex_t mutex;
int fuel = 0;
int is = 0;
void* fuel_filling(void* arg){
   // pthread_mutex_lock(&mutex);
    for(int i = 0; i<5; i++){
            fuel +=15;
            printf("fuel filled : %d\n", fuel);
        sleep(1);
    }
   // pthread_mutex_unlock(&mutex);

}


void* car(void* arg){
   // pthread_mutex_lock(&mutex);
    if(fuel >= 40){
        fuel -=40;
        printf("gpt fuel and now fuel : %d \n", fuel);
    }
  //  pthread_mutex_unlock(&mutex);

}
int main(){

    pthread_t t[2];
   // pthread_mutex_init(&mutex, NULL);

    for(int i = 0; i < 2; i++){
        if(i == 1){
         
            pthread_create(&t[i], NULL, fuel_filling, NULL);
        }
        else{
            pthread_create(&t[i], NULL, car, NULL);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        pthread_join(t[i], NULL);
    }
   // pthread_mutex_destroy(&mutex);


    return 0;
}