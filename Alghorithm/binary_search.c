// Project Name   - binary_search.c
// Author Name    - Md. Somrat Hossain
// Author E-mail  - somrat945hossain@gmail.com
// Created On     - 09/13/21, 11:27:51 PM
#include<stdio.h>

void print_array(int a[], int size);
void binary_search(int a[], int size, int key);

int main()
{
    int a[100], size, i, key;

    printf("enter your size\n");
    scanf("%d",&size);

    printf("enter your element\n");

    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter your key \n");
    scanf("%d", &key);

    print_array(a, size);
    binary_search(a, size, key);


    return 0;
}

void print_array(int a[], int size)
{

    int i;
    for(i=0; i<size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

}

void binary_search(int a[], int size, int key)
{
    int lb=0, up = size-1;

    for(int i=lb; i<=up; i++){
       int mid = (lb+up)/2;
       if(key == a[mid]){
           printf("Found %d and index number %d\n", a[mid], mid);
           break;
    }
      else if(key<a[mid]){
          printf("Found %d and index number %d\n", a[mid-1], mid-1);
          break;
    }
    else if(key > a[mid]){
        printf("Found %d and index number %d\n", a[mid+1], mid+1);
        break;
    }
    else{
        printf("not found\n");
    }
    }

}


