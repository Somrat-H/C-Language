#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#define THREAD 3
#define MAX 100

char a[MAX];

void *string1(void *arg){
    scanf("%[^\n]s",a);
    printf("%s\n",a);
}
void *string2(void *arg){
    scanf("%[^\n]s",a);
    printf("%s\n",a);
}
void *string3(void *arg){
    scanf("%[^\n]s",a);
    printf("%s\n",a);
}

int main(){


    pthread_t t[THREAD];
    while(1){
    for(int i=0; i<THREAD; i++){
    printf("wait for input %d number thread\n",i);
    pthread_create(&t[i], NULL, string1, NULL);
  //  pthread_join(t[i], NULL);
    printf("recive data from %d number thread\n",i);
    if(a=="finish" || a=="exit")
        return 1;

     pthread_join(t[i], NULL);
    }
    }

    return 0;
}
