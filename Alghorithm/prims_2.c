#include<stdio.h>
#include<limits.h>
#define MAX 100
int add_edge(int g[][MAX], int size);
void matrix(int g[][MAX], int size);
int sm(int wt[MAX], int setMst[MAX], int min, int size);
void prims(int g[][MAX], int wt[MAX], int setMst[MAX], int parent[MAX], int min, int size);
int main(){

   int g[MAX][MAX], size, min=INT_MAX;
   int wt[MAX], setMst[MAX], parent[MAX];

   printf("enter of your vertex:");
   scanf("%d", &size);

   add_edge(g, size);
   matrix(g, size);
   prims(g, wt, setMst, parent, min, size);

    return 0;
}
int add_edge(int g[][MAX], int size){
    int i, j;
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            scanf("%d", &g[i][j]);
        }
    }

}
void prims(int g[][MAX], int wt[MAX], int setMst[MAX], int parent[MAX], int min, int size){
    int i, j, u,v;
    for(i=0; i<size; i++){
    wt[i]=min;
    setMst[i]=0; parent[i]=0;
    }
    wt[0]=0;
   // parent[0]=0;
    for(i=0; i<size-1; i++){
       //  u=sm(wt, setMst,  min, size);

         setMst[i]=1;

        for(j=0; j<size; j++){
            if(g[i][j]!=0 && setMst[j]==0 && g[i][j]<wt[i]){
                v=j;
                wt[i]=g[i][j];
                //parent[i+1]=i;
            }
        }
         parent[i]=i;
         printf("%d -> %d = %d\n", parent[i], v, g[parent[i]][v]);
    }
/*
    for(i=1; i<size; i++){
        u=parent[i];
        printf("%d -> %d = %d\n", parent[i], i, g[u][i]);
    }
    printf("\n");*/

}
void matrix(int g[][MAX], int size){
    int i, j;
    for(i=0; i<size-1; i++){
        for(j=0; j<size; j++){
            printf("%d\t", g[i][j]);
        }
        printf("\n");
    }
}

int sm(int wt[MAX], int setMst[MAX], int min, int size){
    int i, v;
      for(i=0; i<size; i++){
        if(setMst[i]==0 && wt[i]<min){
         v = i;
         min=wt[i];
        }
    }
    return v;
}
