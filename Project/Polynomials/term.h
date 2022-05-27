#ifndef TERM_H
#define TERM_H

typedef struct term_t
{
    int coefficient;
    char var;
    int exponent;
}term_t;

char *term_to_string(const term_t *term);
#endif