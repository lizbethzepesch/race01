#include "../inc/header.h"

char *mx_strchr(const char *s, int c) {
    for (const char *i = s; *i; i++) {
        if(*i == c) {
            return (char*)i;
        }
    }
    return NULL;
}
