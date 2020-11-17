#include "../inc/header.h"

char*mx_strtrim(const char*str){
    if(!str)
        return NULL;

    while(mx_isspace(*str) && *str)
        str++;
    int end = mx_strlen(str) - 1;

    while (mx_isspace(str[end])) 
        end--;
    
    char *temp = mx_strnew(end + 1);
    char *res = mx_strncpy(temp, str, end + 1);
    mx_strdel(&temp);

    return res;
}
