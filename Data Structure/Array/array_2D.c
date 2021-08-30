
#include<stdio.h>
int main()
{
    int mat[3][2] = {{1,2,6,7},{4,5,8,3}};
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j <3; j++)
        {

            printf("%d ",mat[i][j]);
        }
        printf("\n");

    }

    return 0;
}
