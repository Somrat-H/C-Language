#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "term.h"



char *term_to_string(const term_t *term)
{
    char str[10];
    char *s;

    if(term->coefficient == 0)
    {
        strcpy(str, "0");
    }
    else if(term->coefficient == 1)
    {
        if(term->exponent == 0)
        {
            sprintf(str, "%d", term->coefficient);
        }
    }


    return t;
}

int main()
{   




    return 0;
}