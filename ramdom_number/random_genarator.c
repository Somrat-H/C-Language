#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
   // time_t value = time(NULL);
    srand(time(NULL));
    int a = rand() % 100;
    int d = rand() % 100;
    int c = rand() % 100;
    int b = rand() % 100;

    printf("%d\n", a);
    printf("%d\n", d);
    printf("%d\n", c);
    printf("%d\n", b);


    return 0;
}
