#include "../inc/header.h"
int mx_strncmp(const char*s1, const char*s2, int n){
    for(int i = 0; i < n ; i++)
        if(s1[i] != s2[i]){
            if(s1[i] > s2[i])
                return 1;
            if(s1[i] < s2[i])
                return -1;
        }
    return 0;
}
