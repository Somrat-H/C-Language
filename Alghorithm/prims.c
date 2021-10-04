#include<stdio.h>
#include<limits.h>
#define MAX 100
int add_edge(int g[][MAX], int size);
void matrix(int g[][MAX], int size);
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
    int i, j, v;
    for(i=0; i<size; i++){
    wt[i]=min;
    setMst[i]=0;
    }
    parent[0]=-1;
    wt[0]=0;

    for(i=0; i<size-1; i++){

         setMst[i]=1;

        for(j=0; j<size; j++){
            if(g[i][j]!=0 && setMst[j]==0 && g[i][j]<wt[i]){
                v=j;
                wt[i]=g[i][j];
            }
        }
        printf("%d -> %d = %d\n", v, parent[i], g[parent[i]][v]);
    }


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

