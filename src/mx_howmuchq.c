#include "../inc/header.h"

int mx_howmuchq(char* str){
    int index = 0;
    for (int i = 0; str[i] != '\0'; i++)
        if(str[i] == '?')    
            index++;
    return index;
}
