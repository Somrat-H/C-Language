#include<stdio.h>
#include<limits.h>
#define MAX 100

int input(int a[], int size);
void print(int a[], int size);
int serach(int a[], int key, int size);
int print_a(int a[],int size, int x, int key);
int mini(int a[], int size);
int main()
{

    int a[MAX], size, key,x;

    printf("enter your array size : ");
    scanf("%d",&size);

    input(a, size);
    print(a, size);

    printf("enter your key value : ");
    scanf("%d",&key);
    x=serach(a, key, size);
    //printf("%d\n", mini(a, size));

    if(!x)
    {
        printf("%d\n", mini(a, size));

    }

    else
    {
        printf("Next greater element : %d\n",print_a(a, size, x, key));
    }


    return 0;
}

int input(int a[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }

}

void print(int a[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

int serach(int a[], int key, int size)
{
    int i,hold,temp=0;
    for(i=0; i<size; i++)
    {
        if(a[i] == key)
        {
            return i;
        }
    }
    return 0;

}

// 7 8 4 6 5 2 9 1 3
//  6 5 9
int print_a(int a[],int size, int x, int key)
{
    int i, sub=0, min=INT_MAX;

    for(i=x+1; i<size; i++)
    {

        if(a[i]>key && a[i]<min)
        {

            min=a[i];

        }

    }
    return min;

}

int mini(int a[], int size)
{

    int i, min=INT_MAX;
    for(i=0; i<size; i++)
    {
        if(a[i]<min)
        {
            min = a[i];
        }
    }
    return min;
}
