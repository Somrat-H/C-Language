#include<stdio.h>
#include<stdlib.h>

typedef union example{
    long long num;
    char bytes[8];
    float floats [4];
}example;

int  main(){

    example e;
    e.num = 56;

    printf("%lld\n", e.num);

    for(int i = 0; i < 8; i++){
        printf("%02hhx", e.floats[i]);
    }
    printf("\n");

    for(int i = 0; i < 4; i++ ){
        printf("%02hhx", e.floats[i]);
    }
    printf("")


    return 0;

}
