#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>

int smallest(int a[], int size);
int sum(int a[], int size);
void swap();
void rotate();
int *sort(int a[], int size);
int *cube_prime();
int *double_amrstrongs(int a[], int size);
void negate_happy();
void checkhappy(int sum,int index,int ix, int num);
void happy(int num,int index,int ix);

int *a = NULL;
size_t size;
int arry[100];


int main()
{   

   
    printf("enter your array size:\n");
    scanf("%d", &size);

    a = malloc(sizeof(int) * size);

    for(int i = 0; i < size; i++)
    {
        a[i] = ( rand() % size) + 1;
    } 
    

    negate_happy();

    printf("\n");

    free(a);

    return 0;
}

int smallest(int a[], int size)
{
    int small = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (a[i] < small)
        {
            small = a[i];
        }
    }

    return small;
}

int sum(int a[], int size)
{
    int hold = 0;

    int i = 0;

    while (i < size)
    {
        hold = hold + a[i];
        i++;
    }

    return hold;
}

void swap()
{
    int *a = malloc(sizeof(int));
    int *b = malloc(sizeof(int));
    int *temp = malloc(sizeof(int));

    printf("Enter two value of integer\n");
    scanf("%d %d", a, b);

    *temp = *a;
    *a = *b;
    *b = *temp;

    printf("After swap: %d %d\n", *a, *b);

    free(a);
    free(b);
    free(temp);
}

void rotate()
{

    int *a = malloc(sizeof(int));
    int *b = malloc(sizeof(int));
    int *c = malloc(sizeof(int));

    int *temp = malloc(sizeof(int));

    printf("Enter three integer value:\n");
    scanf("%d %d %d", a, b, c);


    *temp = *c;
    *c = *b;
    *b = *a;
    *a = *temp;

    printf("After rotate three value: %d %d %d\n", *a, *b, *c);

    free(temp);
    free(a);
    free(b);
    free(c);
}

int *sort(int a[], int size)
{

    for (int i = 0; i < size - 1; i += 1)
    {
        for (int j = 0; j < size - i - 1; j += 1)
        {
            if ( (a[j]) < (a[j+1]) )
            {
                int temp = (a[j]);
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    return a;
}

int *cube_prime(int a[], int size)
{   

    for(int i = 0; i < size; i++)
    {   
        int flag = 0;

        if(a[i] > 0)
        {
        for(int j = 2; j < a[i] ; j++)
        {
            if(a[i] % j == 0)
            {
                flag = 1;
            }
        }

        if(flag == 0)
        {
            a[i] = a[i] * a[i] * a[i]; 
        }
        }
       
    }
    return a;

}

int *double_amrstrongs(int a[], int size)
{
    for(int i = 0; i < size; i++)
    {   
        int rem; 
        int result = 0;
        int temp;

        temp = a[i];
        
        while ( temp > 0 )
        {
            rem = temp % 10;
            result = result + (rem*rem*rem);
            temp = temp /10;
        }
        if(result == a[i])
        {
            a[i] = a[i] + a[i];
        }
        

    }
    return a;
}

void negate_happy(){

    int i,num;


    for(i=0;i<size;i++)
    {
      num=a[i];
      happy(num,i,0);
    }
    
}


void happy(int num,int index,int ix)
{
    int rem, sum = 0;//81


    while (num != 0 )
    {
        rem = num % 10; //2
        sum = sum + (rem*rem);//0+81=81
        num = num/10;//12

    }


    checkhappy(sum,index,ix, num);

}

void checkhappy(int sum,int index,int ix, int num)
{
    

   // arry = malloc(sizeof(int) * 100);

    int j,flag=0;

    arry[ix] = sum;
    ++ix;

    if(sum == 1)
    {

        flag=1;
        a[index] = a[index] * (-1);
    }
    else
    {

        for(j=0; j<ix-1; j++)
        {
            if(arry[j]==sum)
            {
                flag=1;
                break;
            }
        }


    }

    if(flag==0)
    {
        happy(sum,index,ix);
    }

   
}
