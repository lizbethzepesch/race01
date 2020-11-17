#include "../inc/header.h"

int mx_atoi(const char *str) {
    bool minus = false;
    bool none = false;
    int num = 0;
    int i = 0;
    if (mx_isspace(str[i]))
        for (; str[i] == ' '; i++);
    for (; str[i] != '\0'; i++) {
        if (str[i] == '-' && mx_isdigit(str[i + 1]))
            minus = true;
        else if (str[i] == '+' && mx_isdigit(str[i + 1]))
            continue;
        else if (!mx_isdigit(str[i]) || mx_isspace(str[i]))
            break;
        if (mx_isdigit(str[i]))
            num = num * 10 + (int)str[i] - 48;
    }
    if (mx_isspace(str[i])) {
        for (; mx_isspace(str[i]) || str[i] != '\0'; i++) {
            if(str[i + 1] == '\0')
                return minus ? -num : num;
            else if (mx_isspace(str[i])) {}
            else
                none = true;
        }
    }
    if (none)
        return 0;
    return minus ? -num : num;
}

bool mx_boolatoi(const char *str) {

    for(int i = 0; str[i] != '\0'; i++)
    {
        if (mx_isspace(str[i]) ||
            mx_isdigit(str[i]) ||
            str[i] == '?' ||
            str[i] == '-') {
                continue;
            }
        else {
            return false;
        }
    }

    int i = 0;
    if (mx_isspace(str[i]))
        for (; str[i] == ' '; i++);
    
    for (; str[i] != ' ' && str[i] != '\0'; i++);

    if(str[i] == '-') {
        i++;
    }

    if (str[i] == '\0') {
        return true;
    }
    if (mx_isspace(str[i])) {
        for (; str[i] == ' '; i++);
    }
    if (!mx_isspace(str[i]) && str[i] != '\0') {
        return false;
    }
    return true;
}
