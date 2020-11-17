#include "../inc/header.h"


char mx_operations(char *str) {
    char oper = '\0';
    int not_a_space = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '?'|| mx_isspace(str[i])) {
        }
        else {
            return '!';
        }
    }
    for (int i = 0; i < mx_strlen(str); i++) {
        if (!mx_isspace(str[i])) {
            not_a_space++;
        }
    }
    if (not_a_space > 1) {
        return '!';
    }
    for (int i = 0; i < mx_strlen(str); i++) {
        if (!mx_isspace(str[i])) {
            oper = str[i];
            return oper;
        }
    }
    return oper;
}
