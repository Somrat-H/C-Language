#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#define MAX 100
#define THREAD 5

void* array(void *arg);

int a[MAX];


int main(){
    
    pthread_t t[THREAD];
    int h[THREAD];

    for(int i =0; i < MAX; i++)
    {
        a[i]=0;
    }

    for(int i=0; i<THREAD; i++)
    {
        h[i]=i;
        pthread_create(&t[i], NULL, array, (void*)&h[i]);
    }
    for(int i = 0; i < THREAD; i++)
    {
        pthread_join(t[i], NULL);
    }
   
    printf("\n");


    return 0;
}
void* array(void *arg)
{
    int h = *(int*)arg;
    int num = MAX/THREAD;
    int x = h*num; 
    int y = x+num;

        for(int i=x; i<y; i++)
        {
            a[i]=rand()%100;
        }
        for(int i = x; i < y; i++)
        {
            printf("%d ",a[i]);
        }
}
