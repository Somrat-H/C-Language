#include <stdio.h>
#include "term.h"

int main()
{
    const term_t *s;

    char *t = term_to_string(s);

    printf("%s", *t);

}