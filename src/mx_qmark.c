#include "../inc/header.h"

int mx_qmark(char *c){
    for (int i = 0; i < mx_strlen(c); i++)
        if(mx_isqmark(c[i]))
            return i;
    
    return -1;
}
