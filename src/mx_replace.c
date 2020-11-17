#include "../inc/header.h"


char *mx_replace(char *str, char aim, int counter) {
    char *res = mx_strdup(str);

    for (int j = mx_strlen(str) - 1; j >= 0; j--) {
        if (res[j] == aim) {
            if (counter >= 10) {
                res[j] = (counter % 10) + 48;
                counter -= (counter % 10);
                counter /= 10;
            } 
            else {
                res[j] = counter + 48;
                break;
            }

         }
    }

    for (int i = 0; i < mx_strlen(str); i++) {
        if (res[i] == aim) {
            res[i] = '0';
        }
    }
    return res;
}
