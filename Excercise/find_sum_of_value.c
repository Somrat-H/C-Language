#include <stdio.h>

#define MAX 5

int main()
{
    int a[MAX];
    int key;

    printf("Enter your five element of a array : ");
    
    for(int i = 0; i < MAX; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter your key value of sum : ");
    scanf("%d", &key);

    for(int i = 0; i < MAX; i++)
    {
        for(int j = 0; j < MAX; j++)
        {
            for (int k = 0; k < MAX; k++)
            {
                if(a[i] + a[j] + a[k] == key)
                {
                    printf("%d %d %d = %d\n", a[i], a[j], a[k], key);
                }
            }
            
        }
    }


    return 0;
}