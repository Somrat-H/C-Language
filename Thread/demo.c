#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<time.h>
#define THREAD 5

char str[100];
int alive = 1;
int active;
int sender_thread;

void *ss(void *arg){
  int a = *(int*)arg;

   while(alive){
       if(active == a){  
          if(strcmp(str, "") != 0)
          {  
            printf("thread %d : data recive from thread %d : %s\n",a, sender_thread, str);
          }

            printf("thread %d enter message : ", a);
            fgets(str, 100, stdin);


         if(strcmp(str,"exit\n") == 0)
           {
                printf("exiting\n");
                 alive = 0;
            }

         else{
                int random = rand()%THREAD;
                 printf("thread %d is sending a message to thread: %d\n", a, random);
                 active=random;
                 sender_thread = a;
            }
        }
    }
   pthread_exit(NULL);
}
int main(){
   
   pthread_t t[THREAD];
   int a[THREAD];
   for(int i = 0; i < THREAD; i++){
       a[i]=i;
       pthread_create(&t[i], NULL, ss, (void*)&a[i]);
   }

    for(int i = 0; i < THREAD; i++){
       pthread_join(t[i], NULL);
   }

    pthread_exit(NULL);
}
