#include<stdio.h>
void printa(int *p,int size);
void insert(int *p,int *size);
int main(){

  int a[10],size=0;
  int *p=&a;

  insert(p,&size);
  printa(p,size);


return 0;
}
void printa(int *p,int size){
    int x;

    for(x=0; x<size; x++){
        printf("%d ",*(p+x));
    }
    printf("\n");

}
void insert(int *p,int *size){
    int x,sa;
    scanf("%d", &sa);

    for(x=0; x<sa; x++){

        scanf("%d", &(*(p+x)));
        *(size)++;
    }
}
