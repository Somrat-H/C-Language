#include<stdio.h>

void print(int g[10][10], int v);
void add_edge(int g[10][10], int r, int c);

 int main(){

   int g[10][10];
   int i,j;
   int v=8,e=11;
   int c,r;

  for(i=0; i<v; i++){
    for(j=0; j<v; j++){
        g[i][j]=0;
    }
  }

  add_edge(g,1,4);

  print(g,v);


  return 0;
}

void add_edge(int g[10][10], int s, int e){

    g[s][e]=1;
    g[e][s]=1;
   }

void print(int g[10][10], int v){
  int i,j;
  for(i=0; i<v; i++){
    for(j=0; j<v; j++){
      printf("%d ",g[i][j]);

    }
    printf("\n");
}
}


