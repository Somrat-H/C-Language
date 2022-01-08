//Here generate in double value random in interval like 0-5.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
double random_number();
double interval_number(int a, int b);

int main(){

    for(int i=0; i<50; i++){5
      printf("%.3lf ",interval_number(0,5));
    }


    return 0;
}

double random_number(){

    return ((double)rand()) / ((double)RAND_MAX);
}

double interval_number(int a, int b){

    return random_number() * (b-a) + a;
}
