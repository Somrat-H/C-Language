#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#define MAX 300
#define THREAD 5

void *array(void *arg);

int a[MAX];
int p = 1;
int i = 0;
int w = 0;
int main(){

    pthread_t t[THREAD];

    for (int i = 0; i < MAX; i++)
    {
        a[i] = 0;
    }
    int h[THREAD];
    for(int i=0; i<THREAD; i++)
    {   
        h[i]=i;
       
        pthread_create(&t[i], NULL, array,  (void*)&h[i]);
    }
    for(int i=0; i<THREAD; i++)
    {
        pthread_join(t[i], NULL);
    }

    
    for (int i = 0; i < MAX; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");



    return 0;
}

void *array(void *arg)
 {
     int h = *(int*)arg;
    
     while(p){
         if(w==h){
             if(w==THREAD){
                 p=0;
                 break;
             }
             else{
                 
             }
         }




     }

 }