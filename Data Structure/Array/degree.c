#include<stdio.h>

struct edge{
    int s;
    int e;

} ;
void print(int g[10][10], int v, int e);
void input(int g[10][10], int e);

int main(){

  int g[10][10];
  int i,j;
  int v=6,e=10;
  int r,c;
  struct edge a[100];

   for(i=0; i<v; i++){
    for(j=0; j<v; j++){
            g[i][j]=0;

    }

   }
    print(g,v,e);
    input(g, e);
    print(g,v,e);


 return 0;
}
void print(int g[10][10], int v,int e){
  int i,j;
  for(i=0; i<v; i++){
    for(j=0; j<v; j++){
            printf("%d ",g[i][j]);

    }
    printf("\n");
}
}
void input(int g[10][10], int e){
  int i,c,r,w;
   for(i=0; i<e; i++){
    scanf("%d %d %d",&r,&c,&w);
    g[r][c]=w;
    g[c][r]=w;
  }

}



