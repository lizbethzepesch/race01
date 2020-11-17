#include "../inc/header.h"

char *mx_strcat(char *s1, const char *s2){
    for(int i = 0; i < mx_strlen(s2); i++)
        s1[i + mx_strlen(s1)] = s2[i];
    s1[mx_strlen(s1) + mx_strlen(s2)] = '\0';
    return s1;
}
