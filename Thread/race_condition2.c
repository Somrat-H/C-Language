#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

#define MAX 10

int mails = 0;
int is = 0;
void *routine(void *arg);

int main(){

    pthread_t t1[MAX];
    
    for(int i = 0; i < MAX; i++){
        int *h = malloc(4);
        *h = i;
        pthread_create(&t1[i], NULL, routine, (void*)h);
    }
    for(int i = 0; i < MAX; i++){
        pthread_join(t1[i], NULL);
    };


    printf(" the mails %d\n", mails);

    return 0;
}

void *routine(void *arg){
    int in = *((int*)arg);
    printf("Thread: %d\n", in);
    for(int i=0; i<10; i++){
        if(is == in ){
            mails++;
            if (is == MAX-1) is = 0;
            else is++;
        } else {
            i--;
        }
    }
    free(arg);
}
