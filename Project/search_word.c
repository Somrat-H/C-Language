#include <stdio.h>
#include <string.h>
#include "filter.h"

int main()
{
    char word3[64];
    char word1[64];
    int count = 0;

    printf("Enter your word to search : ");
    scanf("%s", word3);

    FILE *fp = fopen("500-Days-of-Summer_s.txt", "r");

    while (fscanf(fp, "%s", word1) != EOF)
    {
        filter(word1);

        if (strcmp(word3, word1) == 0)
        {
            count++;
        }

    }
    fclose(fp);
    printf("%s : %d\n", word3, count);

    return 0;
}
