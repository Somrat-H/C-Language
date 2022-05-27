#include <stdio.h>
#include <pthread.h>

int val = 50;
int buffer = 50;
pthread_mutex_t mutex;

void* producer(){

  //  pthread_mutex_lock(&mutex);
    if(buffer <= 50)
    {   
        while (val){
            printf("Produce %d\n", val);
            val--;
            buffer--;
        }
    }
   // pthread_mutex_unlock(&mutex);
    
}

void* consumer(){
   // pthread_mutex_lock(&mutex);
    if(buffer > 0){
        while (1)
        {
            printf("Consume %d\n", val);
        }
        
    }
  //  pthread_mutex_unlock(&mutex);
}


int main(){

    pthread_t t1, t2;

    pthread_create(&t1, NULL, producer(), NULL);
    pthread_create(&t2, NULL, consumer(), NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    return 0;
}

