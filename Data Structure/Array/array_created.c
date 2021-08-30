#include<stdio.h>
#include<stdlib.h>

struct myarray{
   int total_size;
   int used_size;
   int *p;
};

void create_array(struct myarray  *a, int t_size, int u_size){

    a->total_size=t_size;
    a->used_size=u_size;
    a->p = (int*)malloc(t_size*sizeof(int));

}
void set_value(struct myarray *a){
   for(int i = 0; i< a->used_size; i++){
    scanf("%d",&(a->p)[i]);
   }

}
void print_value(struct myarray *a){
   for(int i = 0; i< a->used_size; i++){
    printf("%d ",(a->p)[i]);
   }

}
int main(){
    struct myarray marks;
    create_array(&marks,50,5);
    set_value(&marks);
    print_value(&marks);

 return 0;
}
