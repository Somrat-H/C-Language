#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

int mails = 0;
int is = 0;

void *routine0(void *arg);
void *routine1(void *arg);

int main(){

    pthread_t t1, t2;

    pthread_create(&t1, NULL, routine0, NULL);
    pthread_create(&t2, NULL, routine1, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);


    printf(" the mails %d\n", mails);

    return 0;
}

void *routine0(void *arg){
    for(int i=0; i<10000; i++){
        if(is == 0){
            mails++;
            is++;
        } else {
            i--;
        }
    }
}

void *routine1(void *arg){
    for(int i=0; i<10000; i++){
        if(is == 1){
            mails++;
            is--;
        } else {
            i--;
        }
    }
}
