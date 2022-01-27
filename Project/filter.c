#include <string.h>
#include <stdlib.h>

#include "filter.h"

char* filter(char* str) {
    char* newStr = malloc(strlen(str)+1);
    char* str1 = str;
    char* str2 = newStr;
    while(*str1 != '\0') {
        if ((*str1 >= 'a' && *str1 <= 'z') || (*str1 >= 'A' && *str1 <= 'Z')) {
            *str2 = *str1;
            str2++;
        }
        str1++;
    }
    *str2 = '\0';
    strcpy(str, newStr);
    free(newStr);
    return str;
}
